// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

#define FILE_NAME_1 "/home/grimm/Desktop/ImageToUnicodeBraille/TestingImageOpen/Image_1.png"
#define FILE_NAME_2 "/home/grimm/Desktop/ImageToUnicodeBraille/TestingImageOpen/Image_2.png"
#define FILE_NAME_3 "/home/grimm/Desktop/ImageToUnicodeBraille/TestingImageOpen/Image_3.png"


// Prototypes


int main() {
   // Main plan:
   //	 Take in a bunch of pngs and convert to ppm for manipulating
   //	 Make sure width is divisible by 2 and height is divisible by 3 for unicode braille mapping, if not resize
   //	 Find way to interpret and reasonably manipulate ppm file to convert and play with
   //	 Slide through each 2x3 chunk of image, each white/black pixel in relation to a unicode braille
   //	 While interpreting, clone results into corresponding .txt file for output/viewing

   return 0;
}
