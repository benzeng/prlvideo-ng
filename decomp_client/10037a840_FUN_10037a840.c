
undefined8 * FUN_10037a840(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((((*(long *)(param_2 + 0x30) != 0) && (*(int *)(*(long *)(param_2 + 0x30) + 4) != 0)) &&
      (*(long *)(param_2 + 0x38) != 0)) && (lVar1 = FUN_100323dd0(), lVar1 != 0)) {
    uVar2 = 0;
    if ((*(long *)(param_2 + 0x30) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_2 + 0x30) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_2 + 0x38);
    }
    uVar2 = FUN_100323dd0(uVar2);
    FUN_1001884b0(param_1,uVar2);
    return param_1;
  }
  uVar2 = QString::fromAscii_helper("",0);
  *param_1 = uVar2;
  return param_1;
}

