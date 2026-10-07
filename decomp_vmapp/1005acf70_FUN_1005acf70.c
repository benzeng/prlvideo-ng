
undefined4 FUN_1005acf70(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x30) == -1) {
    uVar2 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x10b8);
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      if (*(uint *)(param_1 + 0x10b0) <= param_2) {
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","num < m_BitSize",
                      "BlockGroup.cpp",0x3f6,"isSet");
        lVar3 = *(long *)(param_1 + 0x10b8);
      }
      uVar1 = *(uint *)(lVar3 + (ulong)(param_2 >> 5) * 4);
      uVar2 = CONCAT31((int3)(uVar1 >> 8),(uVar1 >> (param_2 & 0x1f) & 1) != 0);
    }
  }
  return uVar2;
}

