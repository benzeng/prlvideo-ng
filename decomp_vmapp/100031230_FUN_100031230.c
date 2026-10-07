
bool FUN_100031230(int *param_1,int param_2,void *param_3)

{
  if (param_2 < 0x11) {
    *param_1 = param_2;
    _memcpy(param_1 + 1,param_3,(long)param_2 << 5);
  }
  return param_2 < 0x11;
}

