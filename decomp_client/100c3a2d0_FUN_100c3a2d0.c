
undefined8 FUN_100c3a2d0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_100c33190();
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_100c26640();
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  iVar1 = FUN_100c37b40(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(long *)(param_2 + 0xd0) != 0) {
    lVar2 = FUN_100c330d0();
    *(long *)(param_1 + 0xd0) = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = FUN_100c333f0(lVar2,*(undefined8 *)(param_2 + 0xd0));
    if (lVar2 == 0) goto LAB_100c3a376;
  }
  if (*(long *)(param_2 + 0xd8) == 0) {
    return 1;
  }
  lVar2 = FUN_100c26a40();
  *(long *)(param_1 + 0xd8) = lVar2;
  if (lVar2 != 0) {
    return 1;
  }
LAB_100c3a376:
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_100c33190();
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  return 0;
}

