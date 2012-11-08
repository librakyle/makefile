#include "./Compute.h"
#include "./Common.h"

#include <opencv2/opencv.hpp>

Compute::Compute()
{
    IplImage *image = cvLoadImage("logo.jpg");
    cvShowImage("test", image);
    cvWaitKey(0);
    cvReleaseImage(&image);
}

Compute::~Compute()
{
}

void Compute::ShowAdd(int a, int b)
{
    Common common;
    common.Print(a);
    common.Print(b);
    common.Print(a + b);
}

void Compute::ShowMul(int a, int b)
{
    Common common;

    common.Print(a);
    common.Print(b);
    common.Print(a + b);
}

