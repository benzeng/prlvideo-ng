
undefined8 FUN_1000afc00(long param_1)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)(param_1 + 0x1938);
  if (lVar1 == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pAsyncMem","VirtualPC.cpp",0xbdd
                  ,"GetPausedVcpusMask");
    lVar1 = *(long *)(param_1 + 0x1938);
    uVar2 = *(uint *)(lVar1 + 0x3eb74);
    if (lVar1 == 0) {
      FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pAsyncMem","VirtualPC.cpp",
                    0xbed,"GetFrozenVcpusMask");
      lVar1 = *(long *)(param_1 + 0x1938);
      uVar2 = uVar2 | *(uint *)(lVar1 + 0x3eb78);
      if (lVar1 == 0) {
        FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pAsyncMem","VirtualPC.cpp",
                      0xbcb,"GetActiveVcpusMask");
        lVar1 = *(long *)(param_1 + 0x1938);
        uVar2 = uVar2 & *(uint *)(lVar1 + 0x3eb70);
        if (lVar1 == 0) {
          FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pAsyncMem","VirtualPC.cpp"
                        ,0xbcb,"GetActiveVcpusMask");
          lVar1 = *(long *)(param_1 + 0x1938);
        }
      }
      else {
        uVar2 = uVar2 & *(uint *)(lVar1 + 0x3eb70);
      }
    }
    else {
      uVar2 = (uVar2 | *(uint *)(lVar1 + 0x3eb78)) & *(uint *)(lVar1 + 0x3eb70);
    }
  }
  else {
    uVar2 = (*(uint *)(lVar1 + 0x3eb74) | *(uint *)(lVar1 + 0x3eb78)) & *(uint *)(lVar1 + 0x3eb70);
  }
  return CONCAT71((int7)((ulong)lVar1 >> 8),uVar2 == *(uint *)(lVar1 + 0x3eb70));
}

