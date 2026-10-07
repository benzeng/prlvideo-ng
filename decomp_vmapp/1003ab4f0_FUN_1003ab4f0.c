
void FUN_1003ab4f0(long param_1)

{
  long lVar1;
  long lVar2;
  
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
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 0x38);
  *(long *)(*(long *)(param_1 + 0x38) + 0x10) = lVar1;
  *(long *)(param_1 + 0x38) = param_1 + 0x30;
  *(long *)(param_1 + 0x40) = param_1 + 0x30;
  while (lVar1 = **(long **)(param_1 + 0x50), lVar1 != 0) {
    *(undefined8 *)(lVar1 + 8) = 0;
    lVar2 = *(long *)(lVar1 + 0x20);
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 0x18);
    *(long *)(*(long *)(lVar1 + 0x18) + 0x10) = lVar2;
    *(long *)(lVar1 + 0x18) = lVar1 + 0x10;
    *(long *)(lVar1 + 0x20) = lVar1 + 0x10;
  }
  while (lVar1 = **(long **)(param_1 + 0x68), lVar1 != 0) {
    *(undefined8 *)(lVar1 + 8) = 0;
    lVar2 = *(long *)(lVar1 + 0x20);
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 0x18);
    *(long *)(*(long *)(lVar1 + 0x18) + 0x10) = lVar2;
    *(long *)(lVar1 + 0x18) = lVar1 + 0x10;
    *(long *)(lVar1 + 0x20) = lVar1 + 0x10;
  }
  return;
}

