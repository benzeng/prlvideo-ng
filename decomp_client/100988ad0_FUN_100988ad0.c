
void FUN_100988ad0(undefined8 *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ulong *puVar3;
  
  if (*(uint *)*param_1 < 2) {
    uVar1 = *param_2;
    puVar3 = (ulong *)QListData::append();
    *puVar3 = (ulong)uVar1;
  }
  else {
    puVar2 = (ushort *)FUN_10098a740(param_1,0x7fffffff,1);
    *puVar2 = *param_2;
  }
  return;
}

