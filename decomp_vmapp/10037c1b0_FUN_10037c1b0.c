
void FUN_10037c1b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 0x30);
  *(long *)(*(long *)(param_1 + 0x30) + 0x10) = lVar1;
  *(long *)(param_1 + 0x30) = param_1 + 0x28;
  *(long *)(param_1 + 0x38) = param_1 + 0x28;
  lVar1 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 0x48);
  *(long *)(*(long *)(param_1 + 0x48) + 0x10) = lVar1;
  *(long *)(param_1 + 0x48) = param_1 + 0x40;
  *(long *)(param_1 + 0x50) = param_1 + 0x40;
  lVar1 = *(long *)(param_1 + 0x68);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 0x60);
  *(long *)(*(long *)(param_1 + 0x60) + 0x10) = lVar1;
  *(long *)(param_1 + 0x60) = param_1 + 0x58;
  *(long *)(param_1 + 0x68) = param_1 + 0x58;
  lVar1 = *(long *)(param_1 + 0x80);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 0x78);
  *(long *)(*(long *)(param_1 + 0x78) + 0x10) = lVar1;
  *(long *)(param_1 + 0x78) = param_1 + 0x70;
  *(long *)(param_1 + 0x80) = param_1 + 0x70;
  return;
}

