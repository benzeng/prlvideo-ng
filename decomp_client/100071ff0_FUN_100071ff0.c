
void FUN_100071ff0(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  if (*(uint *)*param_1 < 2) {
    puVar1 = (undefined8 *)QListData::append();
    puVar2 = operator_new(4);
  }
  else {
    puVar1 = (undefined8 *)FUN_1000720a0(param_1,0x7fffffff,1);
    puVar2 = operator_new(4);
  }
  *puVar2 = *param_2;
  *puVar1 = puVar2;
  return;
}

