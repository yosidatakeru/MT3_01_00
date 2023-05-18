#include <Novice.h>
#include <Vector3AndMatrix.h>
#include <cmath>
float Cot(float theta);
//1.透視投影行列
Matrix4x4 MakePectiveFovMatrix(float fovY, float aspectRatio, float nearclip, float farclip);
//2.正射影行列
Matrix4x4 MakeOrthographicMatrix(float left, float top, float right, float bottom, float nearclip, float farclip);
//3.ビューボート変換行列
Matrix4x4 MakeViewportMatrix(float left, float top, float width, float height, float minDepth, float maxDepth);

