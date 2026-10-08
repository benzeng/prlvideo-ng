
long FUN_100c3c8d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = FUN_100c26610(param_2);
  if (iVar1 + 0xeU < 0xf) {
    return 0;
  }
  iVar1 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
  lVar3 = FUN_100bf3540(iVar1,"ec_print.c",0x5f);
  if (lVar3 != 0) {
    iVar2 = FUN_100c26ff0(param_2,lVar3);
    if ((iVar2 != 0) &&
       ((lVar4 = param_3, param_3 != 0 || (lVar4 = FUN_100c368e0(param_1), lVar4 != 0)))) {
      iVar1 = FUN_100c454a0(param_1,lVar4,lVar3,(long)iVar1,param_4);
      if (iVar1 != 0) {
        FUN_100bf3910(lVar3);
        return lVar4;
      }
      if (param_3 == 0) {
        FUN_100c36410(lVar4);
      }
    }
    FUN_100bf3910(lVar3);
    return 0;
  }
  return 0;
}

