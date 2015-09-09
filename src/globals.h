#ifndef CUBE_globals_h
#define CUBE_globals_h

#include <vector>
#include "vao.h"

#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>

#include <glm/gtc/type_ptr.hpp>

#define LIGHT_DISTANCE 4.0f

using namespace std;

class Shader;
class OrbitalLight;

extern GLuint textureID;
extern bool firstTime;

//Projection and View Matrix
extern glm::mat4 projMatrix, viewMatrix;                    //transformation matrix
extern glm::mat3 normalMatrix;

//Splat's radii
extern float userRadiusFactor;
extern float backupUserRadiusFactor;

//Camera
extern float cameraDistance;
extern glm::vec3 cameraEye;
extern glm::vec3 cameraUp;
extern float cameraAngleX, cameraAngleY;

//Light
extern bool orbitalLightEnabled;
extern vector<vector<OrbitalLight*> > sceneLightsList;
extern int sceneLightsArrIndex;
//extern OrbitalLight* cameraLight;
//extern vector<OrbitalLight*> orbitalLightsList;

//Mouse
extern double lastMouseX, lastMouseY; //last mouse position pressed;
extern bool leftBtnPress;

//Shaders
extern string title;
extern unsigned int actualShader;
extern unsigned int actualMultipass;
extern vector<Shader> listOfShaders;

extern Shader fxaaFilter;

//int actualShader = 0;
extern bool MultipassEnabled;

extern bool FXAA;

extern bool colorEnabled;

extern bool automaticRadiusEnabled;

//Models
extern vector<VAO> models;
extern unsigned int actualVAO;

//Pointer to the VAO to be rendered in display func
extern VAO* displayVAO;


//Cube Description
//
//    v1----v3
//   /|     /|
//  v2+---v4 |
//  | |    | |
//  | v5---+v7
//  |/     |/
//  v6----v8

extern VAO cubeMesh;

#endif
