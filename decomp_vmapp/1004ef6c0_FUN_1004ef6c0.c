
undefined4 FUN_1004ef6c0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(short *)(*(long *)(param_1 + 8) + 0x16) != 0) {
    uVar2 = 0;
    lVar1 = FUN_1002a6120(*(long *)(param_1 + 8),0,1);
    if (lVar1 != 0) {
      uVar2 = *(undefined4 *)(lVar1 + 8);
    }
  }
  return uVar2;
}

