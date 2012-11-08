#include "./Common.h"
#include "./Compute.h"
#include "./Subtitle/Subtitle.h"

#include <opencv2/opencv.hpp>
#include <boost/timer.hpp>
#include <boost/regex.hpp>
using namespace std;
using namespace boost;

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

    timer t;
    cout << "max timespan: " << t.elapsed_max() / 3600 << "h" << endl;
    cout << "min timespan: " << t.elapsed_min() << "s" << endl;
    cout << "now time elapsed: " << t.elapsed() << "s" << endl;

    std::string line;
    boost::regex pat( "^Subject: (Re: |Aw: )*(.*)" );
    while (std::cin)
    {
        std::getline(std::cin, line);
        boost::smatch matches;
        if (boost::regex_match(line, matches, pat))
            std::cout << matches[2] << std::endl;
    }
    return 0;
}

