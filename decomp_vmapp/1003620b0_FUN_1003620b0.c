
void FUN_1003620b0(long param_1,undefined8 param_2,long param_3)

{
  if ((*(ushort *)(param_3 + 0xb0) & 1) != 0) {
    FUN_1003852f0(*(undefined8 *)(param_1 + 0x90),param_3,param_2);
    **(uint **)(param_3 + 0x90) = **(uint **)(param_3 + 0x90) | 1;
  }
  return;
}

