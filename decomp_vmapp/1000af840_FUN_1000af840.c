
void FUN_1000af840(long param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  
  lVar3 = *(long *)(param_1 + 0x1938);
  if (lVar3 == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pAsyncMem","VirtualPC.cpp",0xbd7
                  ,"ClearActiveVcpuMask");
    lVar3 = *(long *)(param_1 + 0x1938);
  }
  uVar2 = *(uint *)(lVar3 + 0x3eb70);
  do {
    LOCK();
    uVar1 = *(uint *)(lVar3 + 0x3eb70);
    bVar4 = uVar2 == uVar1;
    if (bVar4) {
      *(uint *)(lVar3 + 0x3eb70) = ~(1 << (param_2 & 0x1f)) & uVar2;
      uVar1 = uVar2;
    }
    uVar2 = uVar1;
    UNLOCK();
  } while (!bVar4);
  return;
}

