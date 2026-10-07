
void FUN_10008dc80(long param_1)

{
  byte bVar1;
  byte bVar2;
  int local_1c;
  
  bVar1 = *(byte *)(param_1 + 0x34);
  local_1c = 0;
  bVar2 = FUN_10078c740(&local_1c);
  bVar2 = 0 < local_1c & bVar2;
  *(byte *)(param_1 + 0x34) = bVar2;
  if (bVar1 != bVar2) {
    FUN_1008e3970("","vm",0,"Memory pressure changed %u->%u",bVar1);
  }
  return;
}

