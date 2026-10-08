
undefined8 FUN_100197190(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  Data_conflict local_30;
  undefined4 local_28;
  
  FUN_100df99c0("","prl_client_app",0,"Compact operation flags: %d",param_3);
  uVar1 = _PrlVm_Compact(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
  local_28 = 0x80000000;
  local_30.field7 = 0;
  uVar1 = FUN_100191960(param_1,uVar1,0x419,&local_30);
  QVariant::~QVariant((QVariant *)&local_30);
  return uVar1;
}

