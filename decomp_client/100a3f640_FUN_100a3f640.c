
void FUN_100a3f640(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(uint *)*param_1 < 2) {
    puVar1 = (undefined8 *)QListData::append();
    puVar2 = operator_new(0x10);
    *puVar2 = *param_2;
    FUN_100a3f920(puVar2 + 1,param_2 + 1);
  }
  else {
    puVar1 = (undefined8 *)FUN_100a3fe60(param_1,0x7fffffff,1);
    puVar2 = operator_new(0x10);
    *puVar2 = *param_2;
    FUN_100a3f920(puVar2 + 1,param_2 + 1);
  }
  *puVar2 = *param_2;
  *puVar1 = puVar2;
  return;
}

