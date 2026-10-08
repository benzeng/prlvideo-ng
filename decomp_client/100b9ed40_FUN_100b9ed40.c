
int FUN_100b9ed40(void *param_1,void *param_2,int param_3)

{
  size_t sVar1;
  
  sVar1 = 0x4f;
  if (param_3 < 0x50) {
    sVar1 = (long)param_3;
  }
  _memcpy(param_1,param_2,sVar1);
  *(undefined1 *)((long)param_1 + sVar1) = 0;
  return param_3;
}

