
undefined8 FUN_1006924c0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*param_1 + -0x80);
  lVar2 = *(long *)(lVar1 + 0x20 + (long)param_1);
  if (lVar2 == 0) {
    FUN_1008e3970("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL != m_Info",
                  "DiskImageComp.cpp",0xc2c,"IsDirty");
    lVar2 = *(long *)((long)param_1 + lVar1 + 0x20);
  }
  return CONCAT71((int7)((ulong)lVar2 >> 8),(*(byte *)(lVar2 + 0x80) & 1) == 0);
}

