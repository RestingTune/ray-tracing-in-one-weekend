# ray-tracing-in-one-weekend

## About

This project is a C++ implementation of the brute-force path tracer from the _Ray Tracing in One Weekend_ book. This path tracer can render scenes with multiple spheres, which can be of 3 distinct materials (lambertian, metal, dielectric). It also includes a positionable camera with anti-aliasing and defocus blur.

The bulk of the path tracer uses no external libraries. However, this would export the image to the less known PPM format. We've included the _stb_ library to export the generated image to more popular image format, namely PNG.

## Build

To build the project, please run the following commands
```
git clone --recursive https://github.com/RestingTune/ray-tracing-in-one-weekend.git
cd ray-tracing-in-one-weekend
./build.sh
```

You can run the main executable through this command
```
./run.sh
```

## External link

- _Ray Tracing in One Weekend_ book: https://raytracing.github.io/books/RayTracingInOneWeekend.html