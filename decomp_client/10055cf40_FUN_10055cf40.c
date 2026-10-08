
void FUN_10055cf40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(uint *)*param_1 < 2) {
    puVar1 = (undefined8 *)QListData::append();
    puVar2 = operator_new(0xc);
  }
  else {
    puVar1 = (undefined8 *)FUN_10055d000(param_1,0x7fffffff,1);
    puVar2 = operator_new(0xc);
  }
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 1);
  *puVar2 = *param_2;
  *puVar1 = puVar2;
  return;
}

