#define MEASURE_FUNCTION_TIME
#include <pcl/common/time.h> //fps calculations
#include <pcl/common/angles.h>
#include <pcl/io/openni2_grabber.h>
#include <pcl/visualization/pcl_visualizer.h>
#include <pcl/visualization/boost.h>
#include <pcl/visualization/image_viewer.h>
#include <pcl/console/print.h>
#include <pcl/console/parse.h>
#include <pcl/console/time.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
#include <sys/types.h>
#include <sys/stat.h>
#include <boost/chrono.hpp>
#include "pcl/io/openni2/openni.h"

typedef boost::chrono::high_resolution_clock HRClock;

int main()
{
   double now = pcl::getTime ();
   char *dirName=new char[20] ;    
   int status;
   sprintf(dirName,"%f",now);
   status=mkdir(dirName, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
}
