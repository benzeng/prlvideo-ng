
void FUN_100461500(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(uint *)*param_1 < 2) {
    uVar1 = *param_2;
    puVar2 = (undefined8 *)QListData::append();
    *puVar2 = uVar1;
  }
  else {
    puVar2 = (undefined8 *)FUN_1004684a0(param_1,0x7fffffff,1);
    *puVar2 = *param_2;
  }
  return;
}

