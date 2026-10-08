
undefined8 FUN_1003b09e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == 0) {
    uVar2 = 0;
  }
  else if (*(int *)(*(long *)(lVar1 + 0x28) + 4) == 0) {
    uVar2 = 0;
  }
  else if (*(long *)(lVar1 + 0x30) == 0) {
    uVar2 = 0;
  }
  else if (*(long *)(lVar1 + 0x18) == 0) {
    uVar2 = 0;
  }
  else if (*(int *)(*(long *)(lVar1 + 0x18) + 4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulong)lVar1 >> 8),*(long *)(lVar1 + 0x20) != 0);
  }
  return uVar2;
}

