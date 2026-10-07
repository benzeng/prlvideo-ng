
undefined4
FUN_100857490(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  FUN_10084ca60(param_5);
  lVar3 = FUN_10084cc20(param_5);
  uVar2 = 0;
  if (lVar3 != 0) {
    if (param_3 != 0) {
      if (param_2 == param_3) {
        iVar1 = FUN_100853520(lVar3,param_3,param_5);
      }
      else {
        iVar1 = FUN_10084e5a0(lVar3,param_2,param_3,param_5);
      }
      param_2 = lVar3;
      if (iVar1 == 0) goto LAB_100857516;
    }
    uVar2 = FUN_100857530(0,param_1,param_2,param_4,param_5);
  }
LAB_100857516:
  FUN_10084cb40(param_5);
  return uVar2;
}

