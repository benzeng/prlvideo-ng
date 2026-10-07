
bool FUN_1000a7e70(long param_1)

{
  bool bVar1;
  
  bVar1 = (*(byte *)(*(long *)(param_1 + 0x1938) + 0x3d820) & 2) != 0;
  if (bVar1) {
    FUN_1008e3970("","vm",0,"Wait event permission from guest!");
  }
  return bVar1;
}

