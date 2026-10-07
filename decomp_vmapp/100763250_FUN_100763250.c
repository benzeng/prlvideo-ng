
undefined8 FUN_100763250(undefined8 param_1,int param_2,void *param_3,int param_4)

{
  ssize_t sVar1;
  
  while( true ) {
    if (param_4 == 0) {
      return 0;
    }
    sVar1 = _send(param_2,param_3,(long)param_4,0);
    if ((int)sVar1 == -1) break;
    param_4 = param_4 - (int)sVar1;
  }
  return 0xffffffff;
}

