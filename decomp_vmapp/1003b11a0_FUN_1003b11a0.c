
undefined8 FUN_1003b11a0(long param_1,undefined8 param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 != *(long *)(param_1 + 8)) {
      *(ulong *)(param_1 + 0x10) =
           (~((lVar2 + -8) - *(long *)(param_1 + 8)) & 0xfffffffffffffff8U) + lVar2;
    }
  }
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_1003b1260(param_1);
  FUN_1003b1650(param_1);
  if (*(char *)(DAT_1011c8478 + 0x88) != '\0') {
    FUN_1003b21c0(param_1);
  }
  FUN_1003b2370(param_1);
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = **(long **)(lVar2 + 0xf0);
  if (lVar3 != 0) {
    iVar4 = 0;
    do {
      *(int *)(lVar3 + 0x30) = iVar4;
      iVar4 = iVar4 + 1;
      lVar3 = **(long **)(lVar3 + 8);
    } while (lVar3 != 0);
  }
  piVar1 = (int *)(lVar2 + 0x170);
  *piVar1 = *piVar1 + (*(int *)(param_1 + 0x28) + 3U >> 2);
  return 0;
}

