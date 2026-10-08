
void FUN_1005bfc30(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(uint *)*param_1 < 2) {
    uVar1 = *param_3;
    puVar2 = (undefined8 *)QListData::insert((int)param_1);
    *puVar2 = uVar1;
  }
  else {
    puVar2 = (undefined8 *)FUN_1005c0de0((int)param_1,param_2,1);
    *puVar2 = *param_3;
  }
  return;
}

