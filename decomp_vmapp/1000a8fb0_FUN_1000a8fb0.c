
undefined4 FUN_1000a8fb0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1938);
  if (lVar1 == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pAsyncMem","VirtualPC.cpp",0xbed
                  ,"GetFrozenVcpusMask");
    lVar1 = *(long *)(param_1 + 0x1938);
  }
  return *(undefined4 *)(lVar1 + 0x3eb78);
}

