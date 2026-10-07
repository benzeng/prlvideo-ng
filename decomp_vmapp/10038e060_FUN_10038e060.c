
float * FUN_10038e060(float *param_1,byte *param_2)

{
  float fVar1;
  
  fVar1 = DAT_100b44ca0;
  *param_1 = (float)param_2[2] / DAT_100b44ca0;
  param_1[1] = (float)param_2[1] / fVar1;
  param_1[2] = (float)*param_2 / fVar1;
  param_1[3] = (float)param_2[3] / fVar1;
  return param_1;
}

