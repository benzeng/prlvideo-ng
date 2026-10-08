
long FUN_100193e80(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  Data_conflict local_28;
  undefined4 local_20;
  
  uVar1 = _PrlVm_Restore(*(undefined8 *)(param_1 + 0x40));
  local_20 = 0x80000000;
  local_28.field7 = 0;
  lVar2 = FUN_100191960(param_1,uVar1,0x83d,&local_28);
  QVariant::~QVariant((QVariant *)&local_28);
  if (lVar2 != 0) {
    FUN_10018c880(param_1,0x30000003);
  }
  return lVar2;
}

