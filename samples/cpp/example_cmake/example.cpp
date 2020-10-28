#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/videoio.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void drawText(Mat & image);
cv::String path="/home/tan/opencvTest2/samples/data/vtest.avi";
cv::String imgPath="/home/tan/opencvTest2/samples/data/lena.jpg"; 
int main()
{
    cout << "Built with OpenCV " << CV_VERSION << endl;
    Mat image;
    Mat in=cv::imread(imgPath);
    if(in.empty()){
	    printf("count not load image");
    }
    namedWindow( "Display Image", CV_WINDOW_AUTOSIZE );
    imshow( "Display Image", in);
    waitKey(0);
    /*
    VideoCapture capture;
    capture.open(path);
    if(capture.isOpened())
    {
        cout << "Capture is opened" << endl;
        for(;;)
        {
            capture >> image;
            if(image.empty())
                break;
            drawText(image);
            imshow("Sample", image);
            if(waitKey(10) >= 0)
                break;
        }
    }
    else
    {
        cout << "No capture" << endl;
        image = Mat::zeros(480, 640, CV_8UC1);
        drawText(image);
        imshow("Sample", image);
        waitKey(0);
    }*/
    return 0;
}

void drawText(Mat & image)
{
    putText(image, "Hello OpenCV",
            Point(20, 50),
            FONT_HERSHEY_COMPLEX, 1, // font face and scale
            Scalar(255, 255, 255), // white
            1, LINE_AA); // line thickness and type
}
