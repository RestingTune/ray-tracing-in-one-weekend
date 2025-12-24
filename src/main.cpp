#include <vec3.hpp>
#include <Image.hpp>

int main() {

    // Generate image
    Image img = Image(640, 480);
    for (int y = 0; y < img.height; y++) {
        for (int x = 0; x < img.width; x++) {
            img[x + y*img.width] = vec3(
                float(x) / float(img.width),
                float(y) / float(img.height),
                0.2f
            );
        }
    }

    // Export to PPM format
    img.save_ppm("gen/img.ppm");

    return 0;
}