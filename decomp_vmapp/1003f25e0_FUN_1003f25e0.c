
void FUN_1003f25e0(long *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1[0xb] + 4);
  (**(code **)(*param_1 + 0x260))();
  *(uint *)((long)param_1 + 0x8c) = bVar1 & 1;
  return;
}

