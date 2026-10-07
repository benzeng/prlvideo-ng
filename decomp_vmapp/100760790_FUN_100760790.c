
bool FUN_100760790(undefined8 param_1,undefined8 param_2,int param_3,int param_4,ulong *param_5)

{
  long lVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = 0xfeedfacf;
  local_2c = 0x1000007;
  local_28 = 3;
  local_24 = 4;
  local_20 = param_4 + param_3;
  local_1c = param_4 * 0xb8 + param_3 * 0x48;
  local_18 = 0;
  local_14 = 0;
  *param_5 = (ulong)local_1c + 0x101f & 0x1fffff000;
  lVar1 = FUN_100761880(param_2,FUN_100761810,0,&local_30,0x20);
  if (lVar1 != 0x20) {
    FUN_1008e3970("","dbgdump",0,"Write to dump file failed");
  }
  return lVar1 == 0x20;
}

