
void FUN_1003aab10(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x30) == param_1) {
      *(undefined8 *)(lVar1 + 0x30) = **(undefined8 **)(param_1 + 8);
    }
    if (*(long *)(lVar1 + 0x28) == param_1) {
      *(undefined8 *)(lVar1 + 0x28) = **(undefined8 **)(param_1 + 0x10);
    }
  }
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 8);
  *(long *)(*(long *)(param_1 + 8) + 0x10) = lVar1;
  *(long *)(param_1 + 8) = param_1;
  *(long *)(param_1 + 0x10) = param_1;
  lVar1 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 0x20);
  *(long *)(*(long *)(param_1 + 0x20) + 0x10) = lVar1;
  *(long *)(param_1 + 0x20) = param_1 + 0x18;
  *(long *)(param_1 + 0x28) = param_1 + 0x18;
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar3 = *(long *)(lVar1 + -8) << 6;
      do {
        lVar2 = *(long *)(lVar1 + -0x20 + lVar3);
        *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + -0x28 + lVar3);
        *(long *)(*(long *)(lVar1 + -0x28 + lVar3) + 0x10) = lVar2;
        lVar2 = lVar1 + -0x30 + lVar3;
        *(long *)(lVar1 + -0x28 + lVar3) = lVar2;
        *(long *)(lVar1 + -0x20 + lVar3) = lVar2;
        lVar3 = lVar3 + -0x40;
      } while (lVar3 != 0);
    }
    operator_delete__((void *)(lVar1 + -8));
    return;
  }
  return;
}

