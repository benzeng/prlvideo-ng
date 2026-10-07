
void FUN_1000a9090(long param_1,uint param_2)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  uint local_24;
  
  uVar7 = (ulong)param_2;
  if ((*(char *)(param_1 + 0x130) == '\0') && ((*(uint *)(param_1 + 0x138) & 0xfffffffe) != 2)) {
    uVar7 = 100;
  }
  if (*(long *)(param_1 + 0x1938) == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pAsyncMem","VirtualPC.cpp",
                  0x10d9,"SetCpuQuota");
  }
  iVar2 = FUN_1007da300("kernel.cpu.quota",(int)(uVar7 / 0x19) * 0xf + 0x28);
  if (99 < iVar2 - 1U) {
    iVar2 = 100;
  }
  *(int *)(*(long *)(param_1 + 0x1938) + 0x3eb88) = iVar2;
  lVar6 = *(long *)(param_1 + 0x1938);
  uVar4 = *(ulong *)(lVar6 + 0xd000);
  do {
    puVar1 = (ulong *)(lVar6 + 0xd000);
    LOCK();
    uVar5 = *puVar1;
    bVar8 = uVar4 == uVar5;
    if (bVar8) {
      *puVar1 = uVar4 | 0x2000000000000;
      uVar5 = uVar4;
    }
    UNLOCK();
    uVar4 = uVar5;
  } while (!bVar8);
  local_24 = FUN_1007da300("devices.hdd.quota",uVar7);
  if (100 < local_24) {
    local_24 = 100;
  }
  FUN_1002592b0(FUN_1000a7ef0,&local_24);
  uVar3 = FUN_1007da300("devices.net.quota",uVar7);
  if (100 < uVar3) {
    uVar3 = 100;
  }
  iVar2 = 0;
  do {
    lVar6 = FUN_1000915d0(param_1,iVar2);
    if (lVar6 != 0) {
      FUN_100279910(lVar6,uVar3);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x10);
  return;
}

