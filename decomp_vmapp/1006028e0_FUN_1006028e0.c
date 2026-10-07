
void FUN_1006028e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(uint *)*param_1 < 2) {
    puVar2 = (undefined8 *)QListData::append();
    puVar3 = operator_new(0x10);
  }
  else {
    puVar2 = (undefined8 *)FUN_1006029a0(param_1,0x7fffffff,1);
    puVar3 = operator_new(0x10);
  }
  uVar1 = *param_2;
  puVar3[1] = param_2[1];
  *puVar3 = uVar1;
  *puVar2 = puVar3;
  return;
}

