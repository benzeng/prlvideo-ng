
undefined8 FUN_1009f3070(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0xd0);
  uVar2 = 0;
  if (*(int *)(lVar1 + 0xc) != *(int *)(lVar1 + 8)) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8);
  }
  return uVar2;
}

