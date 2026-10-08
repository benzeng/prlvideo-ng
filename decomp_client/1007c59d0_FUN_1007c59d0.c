
void FUN_1007c59d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(uint *)*param_1 < 2) {
    uVar1 = *param_2;
    puVar2 = (undefined8 *)QListData::prepend();
    *puVar2 = uVar1;
  }
  else {
    puVar2 = (undefined8 *)FUN_1007c62a0(param_1,0,1);
    *puVar2 = *param_2;
  }
  return;
}

