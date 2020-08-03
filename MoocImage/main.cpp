

#include "ImageTransform.h"
#include "PNG.h"

int main() {
  uiuc::PNG png, png2, result;

  png.readFromFile("/Users/jesusponce/Downloads/OVhnUjkHEemPcBIa2xz0qA_3962c780390711e9a0ba65a630086e0a_image-transform-given-files_20190225/alma.png");
  result = grayscale(png);
  result.writeToFile("out-grayscale.png");

  result = createSpotlight(png, 450, 150);
  result.writeToFile("out-spotlight.png");

  result = illinify(png);
  result.writeToFile("out-illinify.png");

  png2.readFromFile("/Users/jesusponce/Downloads/OVhnUjkHEemPcBIa2xz0qA_3962c780390711e9a0ba65a630086e0a_image-transform-given-files_20190225/overlay.png");
  result = watermark(png, png2);
  result.writeToFile("out-watermark.png");

  return 0;
}
