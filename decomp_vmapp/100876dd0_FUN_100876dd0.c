
undefined8 FUN_100876dd0(long param_1,undefined8 param_2,byte *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  lVar2 = FUN_10084b520();
  uVar3 = 0;
  if (lVar2 != 0) {
    FUN_10084bbb0(lVar2,1);
    iVar1 = FUN_10084bf60(param_2,lVar2);
    if (iVar1 < 1) {
      *param_3 = *param_3 | 1;
    }
    FUN_10084b950(lVar2,*(undefined8 *)(param_1 + 8));
    FUN_100850820(lVar2,1);
    iVar1 = FUN_10084bf60(param_2,lVar2);
    if (-1 < iVar1) {
      *param_3 = *param_3 | 2;
    }
    FUN_10084b4b0(lVar2);
    uVar3 = 1;
  }
  return uVar3;
}

