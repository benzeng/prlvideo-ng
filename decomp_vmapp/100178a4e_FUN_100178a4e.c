
int FUN_100178a4e(gzFile param_1,voidpc param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = _gzwrite(param_1,param_2,param_3);
  if (iVar1 < 0) {
    FUN_100177e16(0,"gzwrite()");
  }
  return iVar1;
}

