
void FUN_10052c0d0(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  ulong *puVar3;
  
  if (*(uint *)*param_1 < 2) {
    uVar1 = *param_2;
    puVar3 = (ulong *)QListData::prepend();
    *puVar3 = (ulong)uVar1;
  }
  else {
    puVar2 = (uint *)FUN_10077cf30(param_1,0,1);
    *puVar2 = *param_2;
  }
  return;
}

