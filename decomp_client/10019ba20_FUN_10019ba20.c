
undefined8 FUN_10019ba20(long param_1)

{
  undefined8 uVar1;
  Data_conflict local_20;
  undefined4 local_18;
  
  uVar1 = _PrlVmGuest_GetNetworkSettings(*(undefined8 *)(param_1 + 0x10),0);
  local_18 = 0x80000000;
  local_20.field7 = 0;
  uVar1 = FUN_10019afb0(param_1,uVar1,0x414,&local_20);
  QVariant::~QVariant((QVariant *)&local_20);
  return uVar1;
}

