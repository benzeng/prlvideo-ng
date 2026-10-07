
void FUN_100567690(undefined8 *param_1,void *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  if (*(uint *)*param_1 < 2) {
    puVar1 = (undefined8 *)QListData::append();
    pvVar2 = operator_new(0x50);
  }
  else {
    puVar1 = (undefined8 *)FUN_100567750(param_1,0x7fffffff,1);
    pvVar2 = operator_new(0x50);
  }
  _memcpy(pvVar2,param_2,0x50);
  *puVar1 = pvVar2;
  return;
}

