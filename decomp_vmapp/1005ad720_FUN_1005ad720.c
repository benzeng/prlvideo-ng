
void FUN_1005ad720(uint *param_1,uint param_2)

{
  uint *puVar1;
  
  if (*(long *)(param_1 + 2) == 0) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","isValid()","BlockGroup.cpp",
                  0x3ed,"setBit");
  }
  if (*param_1 <= param_2) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","num < m_BitSize",
                  "BlockGroup.cpp",0x3ee,"setBit");
  }
  puVar1 = (uint *)(*(long *)(param_1 + 2) + (ulong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
  return;
}

