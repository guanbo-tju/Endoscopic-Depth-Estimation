
#pragma once
#ifndef _NET_ALGORITHM_
#define _NET_ALGORITHM_
#ifdef _WINDOWS 
#define NET_ALGORITHM_EXPORTS
#ifdef NET_ALGORITHM_EXPORTS
#define Net_Algorithm_API __declspec(dllexport)
#else
#define Net_Algorithm_API __declspec(dllimport)
#endif
#else
#define Net_Algorithm_API
#endif
#endif // !_V8_3DAlgorithm_

#include<stdio.h>
#include<opencv2/opencv.hpp>
//Description   ModuleConfig           
//Params1       m_3DAlgorithmCallBack1                  
//Params2       config					
//Return		int						
//				other					
extern "C" Net_Algorithm_API void* Initialize(char* model_path,int gpu_id,char*calibration_path);

//Description   
//Params		img			
//Return        int          
extern "C" Net_Algorithm_API int RunNet(void* p,cv::Mat&left_image,cv::Mat&right_image,float*pointcloud,cv::Mat&disparity);

//Description   
//Params		
//Return
extern "C" Net_Algorithm_API const char* Version(void* p);

//Description   
//Params		
//Return		int			
extern "C" Net_Algorithm_API int Release(void* p);


