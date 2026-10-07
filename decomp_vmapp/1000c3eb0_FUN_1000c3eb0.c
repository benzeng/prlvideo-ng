
byte FUN_1000c3eb0(long param_1,long param_2)

{
  return -((*(ushort *)(param_2 + 0xe) ^ *(ushort *)(param_1 + 8)) < 0x4000) & 1;
}

