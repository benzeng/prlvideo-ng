
void ___xmlSimpleError(undefined4 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                      long param_5)

{
  if (param_2 == 2) {
    if (param_5 == 0) {
      ___xmlRaiseError(0,0,0,0,param_3,param_1,2,3,0,0,0,0,0,0,0,"Memory allocation failed\n");
    }
    else {
      ___xmlRaiseError(0,0,0,0,param_3,param_1,2,3,0,0,param_5,0,0,0,0,
                       "Memory allocation failed : %s\n",param_5);
    }
  }
  else {
    ___xmlRaiseError(0,0,0,0,param_3,param_1,param_2,2,0,0,param_5,0,0,0,0,param_4,param_5);
  }
  return;
}

