
bool FUN_1006bd670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined8 local_14;
  
  local_28 = 0x100000000c;
  uStack_1c = (undefined4)param_2;
  uStack_18 = (undefined4)((ulong)param_2 >> 0x20);
  uStack_20 = 6;
  local_2c = 0;
  local_14 = param_3;
  iVar1 = FUN_1006ce9f0(param_1,&local_28,&local_2c);
  return iVar1 == 0;
}

