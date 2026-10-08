
void FUN_100988a20(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  ulong *puVar3;
  
  if (*(uint *)*param_1 < 2) {
    bVar1 = *param_2;
    puVar3 = (ulong *)QListData::append();
    *puVar3 = (ulong)bVar1;
  }
  else {
    pbVar2 = (byte *)FUN_10098a630(param_1,0x7fffffff,1);
    *pbVar2 = *param_2;
  }
  return;
}

