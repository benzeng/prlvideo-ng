
long FUN_100c4d7b0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = FUN_100c51af0();
  if (lVar2 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar3 = FUN_100c26a40();
    *(long *)(lVar2 + 8) = lVar3;
    if (lVar3 == 0) goto LAB_100c4d85f;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = FUN_100c26610();
    *(long *)(lVar2 + 0x18) = (long)iVar1;
    lVar3 = FUN_100c26a40(*(undefined8 *)(param_1 + 0x20));
    *(long *)(lVar2 + 0x40) = lVar3;
    if (lVar3 == 0) goto LAB_100c4d85f;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = FUN_100c26a40();
    *(long *)(lVar2 + 0x10) = lVar3;
    if (lVar3 == 0) goto LAB_100c4d85f;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar3 = FUN_100c26a40();
    *(long *)(lVar2 + 0x20) = lVar3;
    if (lVar3 == 0) goto LAB_100c4d85f;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    return lVar2;
  }
  lVar3 = FUN_100c26a40();
  *(long *)(lVar2 + 0x28) = lVar3;
  if (lVar3 != 0) {
    return lVar2;
  }
LAB_100c4d85f:
  FUN_100c51d00(lVar2);
  return 0;
}

