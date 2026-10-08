
void FUN_10013e570(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  if (*(uint *)*param_1 < 2) {
    puVar1 = (undefined8 *)QListData::insert((int)param_1);
    pvVar2 = operator_new(0x48);
    FUN_10013e6e0(pvVar2,param_3);
  }
  else {
    puVar1 = (undefined8 *)FUN_10013ef60(param_1,param_2,1);
    pvVar2 = operator_new(0x48);
    FUN_10013e6e0(pvVar2,param_3);
  }
  *puVar1 = pvVar2;
  return;
}

