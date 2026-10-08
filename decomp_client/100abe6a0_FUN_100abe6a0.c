
void FUN_100abe6a0(long param_1,long param_2,ulong param_3)

{
  undefined4 local_18;
  undefined8 local_14;
  undefined4 local_c;
  
  if ((param_3 & 0x100) == 0) {
    if (((uint)param_3 & 0x20f) == 0x201) {
      local_18 = 0xe;
      local_14 = *(undefined8 *)(param_2 + 0x28);
      local_c = *(undefined4 *)(param_2 + 0x30);
      FUN_100a4a170(param_1 + 0x10,&local_18,0x10);
    }
    return;
  }
  FUN_100abe590(param_1,param_2,(((uint)param_3 & 0xf) - 3) + ((uint)(param_3 >> 4) & 0xf) * 3,0);
  return;
}

