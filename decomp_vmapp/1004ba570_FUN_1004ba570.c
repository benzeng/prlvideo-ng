
void FUN_1004ba570(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(uint *)*param_1 < 2) {
    puVar2 = (undefined8 *)QListData::append();
    puVar3 = operator_new(0x24);
  }
  else {
    puVar2 = (undefined8 *)FUN_1004ba640(param_1,0x7fffffff,1);
    puVar3 = operator_new(0x24);
  }
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_2 + 4);
  puVar3[3] = param_2[3];
  puVar3[2] = param_2[2];
  uVar1 = *param_2;
  puVar3[1] = param_2[1];
  *puVar3 = uVar1;
  *puVar2 = puVar3;
  return;
}

