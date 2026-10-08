
undefined8 FUN_100194c70(long param_1)

{
  undefined8 uVar1;
  Data_conflict local_28;
  undefined4 local_20;
  
  uVar1 = 0;
  if ((*(uint *)(param_1 + 0x48) & 0xfffffffe) == 0x30000004) {
    uVar1 = _PrlVm_InitiateDevStateNotifications(*(undefined8 *)(param_1 + 0x40));
    local_20 = 0x80000000;
    local_28.field7 = 0;
    uVar1 = FUN_100191960(param_1,uVar1,0x400,&local_28);
    QVariant::~QVariant((QVariant *)&local_28);
  }
  return uVar1;
}

