
int FUN_100d032a0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x110);
  lVar2 = *(long *)(lVar1 + 0x10);
  return (uint)*(byte *)(lVar1 + 0x78 + lVar2) +
         (uint)*(byte *)(lVar1 + 0x50 + lVar2) +
         (uint)*(byte *)(lVar1 + 0x28 + lVar2) + (uint)*(byte *)(lVar1 + lVar2);
}

