
undefined2 FUN_1002918f0(long param_1)

{
  undefined2 uVar1;
  
  if (*(char *)(param_1 + 0xfed) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT11((char)(*(ushort *)(param_1 + 0xff0) >> 8),
                     (*(uint *)((ulong)*(ushort *)(param_1 + 0xfee) * 0x80 +
                                *(long *)(param_1 + 0x1000) + 0x4310 +
                               (ulong)*(ushort *)(param_1 + 0xff0) * 4) &
                     ~*(uint *)(param_1 + 0x1014)) != 0);
  }
  return uVar1;
}

