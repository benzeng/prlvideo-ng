
void FUN_1002394f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(uint *)*param_1 < 2) {
    puVar1 = (undefined8 *)QListData::prepend();
    puVar2 = operator_new(8);
  }
  else {
    puVar1 = (undefined8 *)FUN_1002396f0(param_1,0,1);
    puVar2 = operator_new(8);
  }
  *puVar2 = *param_2;
  *puVar1 = puVar2;
  return;
}

