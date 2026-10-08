
int FUN_1008ac376(gzFile param_1,voidpc param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = _gzwrite(param_1,param_2,param_3);
  if (iVar1 < 0) {
    FUN_1008ab73e(0,"gzwrite()");
  }
  return iVar1;
}

