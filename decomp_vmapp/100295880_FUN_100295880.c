
uint FUN_100295880(long param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0xfed) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    if ((*(uint *)((ulong)*(ushort *)(param_1 + 0xfee) * 0x80 + *(long *)(param_1 + 0x1000) + 0x4310
                  + (ulong)*(ushort *)(param_1 + 0xff0) * 4) & ~*(uint *)(param_1 + 0x1014)) == 0) {
      if (*(long *)(param_1 + 0x14158) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(uint *)(*(long *)(param_1 + 0x14158) + 0x10) & 1;
      }
    }
  }
  return uVar1;
}

