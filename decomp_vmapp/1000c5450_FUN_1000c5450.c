
bool FUN_1000c5450(long param_1)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  bVar2 = 0x17 < (*(int *)(lVar1 + 0x14) - *(int *)(lVar1 + 0x10) & *(uint *)(lVar1 + 0x24));
  if (!bVar2) {
    lVar1 = *(long *)(param_1 + 0x20);
    FUN_1008e3970("","vm",0,"No events in the profile buffer: %d",
                  *(int *)(lVar1 + 0x14) - *(int *)(lVar1 + 0x10) & *(uint *)(lVar1 + 0x24));
  }
  return bVar2;
}

