
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009ee30(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_38;
  undefined1 local_30 [8];
  
  *param_1 = param_2;
  if (DAT_102311e90 == (undefined8 *)0x0) {
    puVar1 = operator_new(0xa0);
    *puVar1 = &PTR_FUN_1021ee1b0;
    FUN_10009f010(puVar1 + 1,puVar1);
    FUN_10009f350(puVar1 + 5,puVar1 + 3);
    puVar1[0x12] = PTR_shared_null_1021e12f0;
    puVar1[0x13] = PTR_shared_null_1021e15d0;
    DAT_102311e90 = puVar1;
  }
  _DAT_102311e88 = _DAT_102311e88 + 1;
  param_1[2] = DAT_102311e90;
  FUN_1003193e0(param_1 + 3,param_2);
  QString::toUtf8();
  *(undefined1 *)(param_1 + 5) = 0;
  local_38 = param_1;
  FUN_10009fae0(param_1[2] + 0x98,&local_38,local_30);
  return;
}

