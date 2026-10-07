
ulong FUN_1005aa6e0(long param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_2;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x18) * uVar1 - (ulong)*(uint *)(param_1 + 0x20);
  }
  return uVar1;
}

