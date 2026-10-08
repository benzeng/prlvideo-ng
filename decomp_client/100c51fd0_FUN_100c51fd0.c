
undefined8 FUN_100c51fd0(long param_1,undefined8 param_2,byte *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  lVar2 = FUN_100c26720();
  uVar3 = 0;
  if (lVar2 != 0) {
    FUN_100c26db0(lVar2,1);
    iVar1 = FUN_100c27160(param_2,lVar2);
    if (iVar1 < 1) {
      *param_3 = *param_3 | 1;
    }
    FUN_100c26b50(lVar2,*(undefined8 *)(param_1 + 8));
    FUN_100c2ba20(lVar2,1);
    iVar1 = FUN_100c27160(param_2,lVar2);
    if (-1 < iVar1) {
      *param_3 = *param_3 | 2;
    }
    FUN_100c266b0(lVar2);
    uVar3 = 1;
  }
  return uVar3;
}

