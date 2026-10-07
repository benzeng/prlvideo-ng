
void FUN_1000a78a0(long param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  
  if (param_2 == '\0') {
    FUN_100097c10(param_1);
    lVar5 = *(long *)(param_1 + 0x1938);
    if (lVar5 != 0) {
      uVar3 = *(ulong *)(lVar5 + 0xd000);
      do {
        LOCK();
        uVar4 = *(ulong *)(lVar5 + 0xd000);
        bVar6 = uVar3 == uVar4;
        if (bVar6) {
          *(ulong *)(lVar5 + 0xd000) = uVar3 & 0xffffffff7fffffff;
          uVar4 = uVar3;
        }
        UNLOCK();
        uVar3 = uVar4;
      } while (!bVar6);
    }
    uVar3 = 0;
    while( true ) {
      uVar2 = *(uint *)(param_1 + 0x1164);
      if (uVar2 == 0) {
        uVar2 = *(uint *)(param_1 + 0x5d8);
        *(uint *)(param_1 + 0x1164) = uVar2;
      }
      if (uVar2 <= (uint)uVar3) break;
      lVar5 = *(long *)(param_1 + 0x1938);
      if (lVar5 == 0) {
        FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pAsyncMem","VirtualPC.cpp",
                      0xbe7,"ClearPausedVcpuMask");
        lVar5 = *(long *)(param_1 + 0x1938);
      }
      uVar2 = *(uint *)(lVar5 + 0x3eb74);
      do {
        LOCK();
        uVar1 = *(uint *)(lVar5 + 0x3eb74);
        bVar6 = uVar2 == uVar1;
        if (bVar6) {
          *(uint *)(lVar5 + 0x3eb74) = ~(1 << ((byte)uVar3 & 0x1f)) & uVar2;
          uVar1 = uVar2;
        }
        uVar2 = uVar1;
        UNLOCK();
      } while (!bVar6);
      FUN_10008fa70(*(undefined8 *)(param_1 + 0x1810 + uVar3 * 8),1);
      uVar3 = (ulong)((uint)uVar3 + 1);
    }
    *(undefined4 *)(param_1 + 0x109d0) = 0;
    return;
  }
  FUN_1000acd00(param_1,0x80000000,0,0);
  return;
}

