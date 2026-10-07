
undefined4 FUN_100399b60(long *param_1,uint param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(*(long *)(*param_1 + 8) + (ulong)param_2 * 0x10);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(lVar1 + 0x8c);
  }
  return uVar2;
}

