
undefined8 FUN_1006a5ad0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_20;
  long local_18;
  
  uVar2 = FUN_1006a55d0(param_1,&local_18,&local_20);
  if (-1 < (int)uVar2) {
    lVar1 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(param_1 + 0x1810c);
    *(long *)(lVar1 + 0x18) = local_18 << 9;
    *(long *)(lVar1 + 0x20) = local_20 << 9;
    uVar2 = 0;
  }
  return uVar2;
}

