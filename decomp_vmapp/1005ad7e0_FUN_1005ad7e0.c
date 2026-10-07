
undefined4 FUN_1005ad7e0(uint *param_1,uint param_2)

{
  uint uVar1;
  
  if (*(long *)(param_1 + 2) == 0) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","isValid()","BlockGroup.cpp",
                  0x3f5,"isSet");
  }
  if (*param_1 <= param_2) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","num < m_BitSize",
                  "BlockGroup.cpp",0x3f6,"isSet");
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 2) + (ulong)(param_2 >> 5) * 4);
  return CONCAT31((int3)(uVar1 >> 8),(uVar1 >> (param_2 & 0x1f) & 1) != 0);
}

