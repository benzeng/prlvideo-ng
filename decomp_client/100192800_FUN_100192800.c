
undefined8 FUN_100192800(long param_1)

{
  undefined8 uVar1;
  Data_conflict local_20;
  undefined4 local_18;
  
  uVar1 = _PrlVm_BeginEdit(*(undefined8 *)(param_1 + 0x40));
  local_18 = 0x80000000;
  local_20.field7 = 0;
  uVar1 = FUN_100191960(param_1,uVar1,0x7ea,&local_20);
  QVariant::~QVariant((QVariant *)&local_20);
  return uVar1;
}

