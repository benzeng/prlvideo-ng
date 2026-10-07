
void FUN_1000a7e40(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1938);
  if ((*(uint *)(lVar1 + 0x3d820) & 2) != 0) {
    *(uint *)(lVar1 + 0x3d820) = *(uint *)(lVar1 + 0x3d820) | 4;
    *(uint *)(lVar1 + 0x3d824) = *(uint *)(lVar1 + 0x3d824) | param_2 & 7;
  }
  return;
}

