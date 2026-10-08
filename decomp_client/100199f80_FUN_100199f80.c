
undefined8 FUN_100199f80(undefined8 param_1)

{
  undefined8 uVar1;
  Data_conflict local_28;
  undefined4 local_20;
  long local_18;
  
  FUN_10018c250(&local_18,param_1);
  uVar1 = _PrlVm_Archive(local_18,0);
  local_20 = 0x80000000;
  local_28.field7 = 0;
  uVar1 = FUN_100191960(param_1,uVar1,0x88d,&local_28);
  QVariant::~QVariant((QVariant *)&local_28);
  if (local_18 != 0) {
    _PrlHandle_Free();
  }
  return uVar1;
}

