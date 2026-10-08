
undefined4
FUN_100c32690(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  FUN_100c27c60(param_5);
  lVar3 = FUN_100c27e20(param_5);
  uVar2 = 0;
  if (lVar3 != 0) {
    if (param_3 != 0) {
      if (param_2 == param_3) {
        iVar1 = FUN_100c2e720(lVar3,param_3,param_5);
      }
      else {
        iVar1 = FUN_100c297a0(lVar3,param_2,param_3,param_5);
      }
      param_2 = lVar3;
      if (iVar1 == 0) goto LAB_100c32716;
    }
    uVar2 = FUN_100c32730(0,param_1,param_2,param_4,param_5);
  }
LAB_100c32716:
  FUN_100c27d40(param_5);
  return uVar2;
}

