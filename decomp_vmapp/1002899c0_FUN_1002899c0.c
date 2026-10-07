
void FUN_1002899c0(long param_1,long param_2)

{
  byte bVar1;
  
  if ((*(uint *)(param_1 + 0x1084) & 0xf0000000) == 0x20000000) {
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined2 *)(param_2 + 10) = 0x605;
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(*(long *)(param_2 + 0x88) + 8);
    bVar1 = *(byte *)(*(long *)(param_2 + 0x88) + 6);
    if (((ulong)bVar1 < 0x40) && ((*(ulong *)(param_1 + 0x10a8) >> ((ulong)bVar1 & 0x3f) & 1) != 0))
    {
      *(byte *)(param_2 + 0xe) = bVar1;
    }
  }
  return;
}

