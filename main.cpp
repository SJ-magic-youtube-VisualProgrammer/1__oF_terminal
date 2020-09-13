#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( int argc, char** argv ){
	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	/********************
	********************/
	int param = 0;
	
	/********************
	********************/
	printf("---------------------------------\n");
	printf("> parameters\n");
	printf("\t-p:param(0)\n");
	printf("---------------------------------\n");
	fflush(stdout);
	
	for(int i = 1; i < argc; i++){
		if( strcmp(argv[i], "-p") == 0 ){
			if(i+1 < argc) param = atoi(argv[i+1]);
		}
	}
	
	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp(param));

}
