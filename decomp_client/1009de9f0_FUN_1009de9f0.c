
void FUN_1009de9f0(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(uint *)*param_1 < 2) {
    puVar2 = (undefined8 *)QListData::insert((int)param_1);
    puVar3 = operator_new(0x10);
  }
  else {
    puVar2 = (undefined8 *)FUN_1009dedc0(param_1,param_2,1);
    puVar3 = operator_new(0x10);
  }
  uVar1 = *param_3;
  puVar3[1] = param_3[1];
  *puVar3 = uVar1;
  *puVar2 = puVar3;
  return;
}

