
void FUN_1005c9870(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  if (*(uint *)*param_1 < 2) {
    puVar1 = (undefined8 *)QListData::append();
    pvVar2 = operator_new(0x68);
    FUN_100260700(pvVar2,param_2);
  }
  else {
    puVar1 = (undefined8 *)FUN_1005c9b40(param_1,0x7fffffff,1);
    pvVar2 = operator_new(0x68);
    FUN_100260700(pvVar2,param_2);
  }
  *puVar1 = pvVar2;
  return;
}

