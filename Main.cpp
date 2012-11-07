#include "./Common.h"
#include "./Compute.h"
#include "./Subtitle/Subtitle.h"

#include <opencv2/opencv.hpp>

int main()
{
    Compute compute;
    compute.ShowAdd(2, 3);
    compute.ShowMul(2, 3);
    IplImage *image = cvLoadImage("logo.jpg");
    cvShowImage("test", image);
    cvWaitKey(0);
    cvReleaseImage(&image);
    Subtitle subtitle;
    subtitle.Print(12);
    return 0;
}

