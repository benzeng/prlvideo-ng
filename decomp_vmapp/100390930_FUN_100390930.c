
undefined2 FUN_100390930(long param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if ((ulong)*(byte *)(param_1 + 4) < 0x11) {
    uVar1 = *(undefined2 *)(&DAT_100b3ed60 + (ulong)*(byte *)(param_1 + 4) * 2);
  }
  return uVar1;
}

