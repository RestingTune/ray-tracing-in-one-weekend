#ifndef __IMAGE_HPP__
#define __IMAGE_HPP__

#include <vec3.hpp>

#include <cstdint>
#include <cstdio>
#include <string>
#include <vector>

class Image {
public:
    int width;
    int height;
    std::vector<vec3> buffer;

public:
    // Constructor
    Image() : width(0), height(0), buffer(std::vector<vec3>()) {}
    Image(int _width, int _height) :
    width(_width), height(_height),
    buffer(std::vector<vec3>(width*height)) {}

    // Member access
    vec3& operator[](int index) { return buffer[index]; }

    // Resize image
    void resize(int _width, int _height) {
        width = _width;
        height = _height;
        buffer = std::vector<vec3>(width*height);
    }

    // Export to PPM format
    bool save_ppm(std::string filepath) {
        // Open file
        FILE* f = fopen(filepath.c_str(), "w");
        if (f == NULL) {
            fprintf(stderr, "File ERROR: Unable to open file [%s]\n", filepath.c_str());
            return false;
        }

        // Write signature
        fprintf(f, "P6\n");
        fprintf(f, "%d %d\n", width, height);
        fprintf(f, "255\n");

        // Write image data
        for (int i = 0; i < buffer.size(); i++) {
            fprintf(f, "%c%c%c",
                uint8_t(buffer[i][0] * 255.0f),
                uint8_t(buffer[i][1] * 255.0f),
                uint8_t(buffer[i][2] * 255.0f)
            );
        }

        // Close file
        fclose(f);

        // Log
        printf("File INFO: Generated [%s]\n", filepath.c_str());

        return true;
    }
};

#endif