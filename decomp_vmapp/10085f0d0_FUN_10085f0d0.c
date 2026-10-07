
undefined8 FUN_10085f0d0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_100857f90();
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_10084b440();
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  iVar1 = FUN_10085c940(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(long *)(param_2 + 0xd0) != 0) {
    lVar2 = FUN_100857ed0();
    *(long *)(param_1 + 0xd0) = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = FUN_1008581f0(lVar2,*(undefined8 *)(param_2 + 0xd0));
    if (lVar2 == 0) goto LAB_10085f176;
  }
  if (*(long *)(param_2 + 0xd8) == 0) {
    return 1;
  }
  lVar2 = FUN_10084b840();
  *(long *)(param_1 + 0xd8) = lVar2;
  if (lVar2 != 0) {
    return 1;
  }
LAB_10085f176:
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_100857f90();
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  return 0;
}

