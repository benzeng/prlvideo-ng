
void FUN_100469980(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  if (*(uint *)*param_1 < 2) {
    puVar1 = (undefined8 *)QListData::append();
    puVar2 = operator_new(0x20);
    *puVar2 = *param_2;
    FUN_100469680(puVar2 + 2,param_2 + 2);
  }
  else {
    puVar1 = (undefined8 *)FUN_100469a90(param_1,0x7fffffff,1);
    puVar2 = operator_new(0x20);
    *puVar2 = *param_2;
    FUN_100469680(puVar2 + 2,param_2 + 2);
  }
  *puVar2 = *param_2;
  *puVar1 = puVar2;
  return;
}

