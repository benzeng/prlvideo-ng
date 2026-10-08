
void FUN_1002264f0(undefined8 *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  ulong *puVar3;
  
  if (*(uint *)*param_1 < 2) {
    uVar1 = *param_3;
    puVar3 = (ulong *)QListData::insert((int)param_1);
    *puVar3 = (ulong)uVar1;
  }
  else {
    puVar2 = (uint *)FUN_10012b570((int)param_1,param_2,1);
    *puVar2 = *param_3;
  }
  return;
}

