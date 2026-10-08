
void FUN_100129840(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  ulong *puVar3;
  
  if (*(uint *)*param_1 < 2) {
    uVar1 = *param_2;
    puVar3 = (ulong *)QListData::append();
    *puVar3 = (ulong)uVar1;
  }
  else {
    puVar2 = (uint *)FUN_10012b570(param_1,0x7fffffff,1);
    *puVar2 = *param_2;
  }
  return;
}

