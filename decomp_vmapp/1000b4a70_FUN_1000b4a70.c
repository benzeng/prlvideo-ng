
void FUN_1000b4a70(long param_1,uint param_2)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  bool bVar7;
  
  if (*(long *)(param_1 + 0x1938) == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pAsyncMem","VirtualPC.cpp",
                  0x10d9,"SetCpuQuota");
  }
  iVar3 = FUN_1007da300("kernel.cpu.quota",(param_2 / 0x19) * 0xf + 0x28);
  iVar6 = 100;
  if (iVar3 - 1U < 100) {
    iVar6 = iVar3;
  }
  *(int *)(*(long *)(param_1 + 0x1938) + 0x3eb88) = iVar6;
  lVar2 = *(long *)(param_1 + 0x1938);
  uVar4 = *(ulong *)(lVar2 + 0xd000);
  do {
    puVar1 = (ulong *)(lVar2 + 0xd000);
    LOCK();
    uVar5 = *puVar1;
    bVar7 = uVar4 == uVar5;
    if (bVar7) {
      *puVar1 = uVar4 | 0x2000000000000;
      uVar5 = uVar4;
    }
    UNLOCK();
    uVar4 = uVar5;
  } while (!bVar7);
  return;
}

