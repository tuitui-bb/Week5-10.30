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
//		std::cout << "���ܴ���Ƶ�ļ�" << std::endl;
//		return -1;
//
//	}
//	double fps = cap.get(CAP_PROP_FPS);
//	std::cout << "fps" << fps << std::endl;
//	while (1)
//	{
//		cv::Mat frame;
//		cv::Mat dst;
//		bool rSucess = cap.read(frame);
//		if (!rSucess)
//		{
//			std::cout << "���ܴ���Ƶ�ļ��ж�ȡ����" << std::endl;
//			break;
//
//		}
//		else
//		{
//			medianBlur(frame, dst, 7);
//			cv::imshow("frame", frame);
//			cv::imshow("dst", dst);
//		}
//		waitKey(30);
//	}
//}