
int FUN_1001782c4(int param_1,void *param_2,int param_3)

{
  ssize_t sVar1;
  
  sVar1 = _write(param_1,param_2,(long)param_3);
  if ((int)sVar1 < 0) {
    FUN_100177e16(0,"write()");
  }
  return (int)sVar1;
}

