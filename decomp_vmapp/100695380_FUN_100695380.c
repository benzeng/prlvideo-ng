
long FUN_100695380(long *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)((ulong)*(uint *)(param_2 + 0x20) + *(long *)(param_2 + 8) +
                   (param_3 & 0xffffffff) * 4);
  lVar2 = 0;
  if (uVar1 != 0xffffffff) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x3121) /
            *(ulong *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1) +
            (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)
    ;
  }
  return lVar2;
}

