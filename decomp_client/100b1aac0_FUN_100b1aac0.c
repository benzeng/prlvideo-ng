
undefined8 FUN_100b1aac0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    FUN_100df99c0("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL != m_Info",
                  "DiskImageComp.cpp",0xc2c,"IsDirty");
    lVar1 = *(long *)(param_1 + 0x20);
  }
  return CONCAT71((int7)((ulong)lVar1 >> 8),(*(byte *)(lVar1 + 0x80) & 1) == 0);
}

