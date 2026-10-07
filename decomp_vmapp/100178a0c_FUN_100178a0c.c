
int FUN_100178a0c(gzFile param_1,voidp param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = _gzread(param_1,param_2,param_3);
  if (iVar1 < 0) {
    FUN_100177e16(0,"gzread()");
  }
  return iVar1;
}

