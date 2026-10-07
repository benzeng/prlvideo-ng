
undefined4 FUN_1005b2cd0(long param_1,ulong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  
  param_2 = param_2 / *(uint *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x78) == -1) {
    uVar2 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x1100);
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar4 = (uint)(param_2 >> 0xc);
      if (*(uint *)(param_1 + 0x10f8) <= uVar4) {
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","num < m_BitSize",
                      "BlockGroup.cpp",0x3f6,"isSet");
        lVar3 = *(long *)(param_1 + 0x1100);
      }
      uVar1 = *(uint *)(lVar3 + (param_2 >> 0xf & 0x1ffffffc));
      uVar2 = CONCAT31((int3)(uVar1 >> 8),(uVar1 >> (uVar4 & 0x1f) & 1) != 0);
    }
  }
  return uVar2;
}

