//#include <opencv2/opencv.hpp>
//#include <iostream>
//using namespace cv;
//int main()
//{
//	VideoCapture cap;
//
//	cap.open(0);
//
//	if (!cap.isOpened())
//	{
//		std::cout << "不能打开视频文件" << std::endl;
//		return -1;
//
//	}
//	double fps = cap.get(CAP_PROP_FPS);
//	std::cout << "fps" << fps << std::endl;
//	while (1)
//	{
//		cv::Mat frame;
//		cv::Mat dst1;
//		cv::Mat dst2;
//
//		bool rSucess = cap.read(frame);
//		if (!rSucess)
//		{
//			std::cout << "不能从视频文件中读取数据" << std::endl;
//			break;
//
//		}
//		else
//		{
//			Sobel(frame,dst1,CV_8UC1,1,0,3,1,0,BORDER_DEFAULT);
//			Sobel(frame,dst2, CV_8UC1,0,1,3, 1, 0, BORDER_DEFAULT);
//
//			cv::imshow("frame", frame);
//			cv::imshow("dst1", dst1);
//			cv::imshow("dst2", dst2);
//
//		}
//		waitKey(30);
//	}
//}