
void FUN_1000a6f10(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = FUN_1007da300("vm.vcpuprio",0xffffffff);
  uVar4 = 0;
  while( true ) {
    uVar2 = *(uint *)(param_1 + 0x1164);
    if (uVar2 == 0) {
      uVar2 = *(uint *)(param_1 + 0x5d8);
      *(uint *)(param_1 + 0x1164) = uVar2;
    }
    if (uVar2 <= uVar4) break;
    if (*(long *)(param_1 + 0x1810 + (ulong)uVar4 * 8) != 0) {
      FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL == m_aVcpu[i]",
                    "VirtualPC.cpp",0x453,"VMInitCPUs");
    }
    lVar5 = *(long *)(param_1 + 0x1950);
    if (lVar5 == 0) {
      FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_hyp","VirtualPC.cpp",0x454,
                    "VMInitCPUs");
      lVar5 = *(long *)(param_1 + 0x1950);
    }
    pvVar3 = operator_new(0x3b8);
    FUN_1000c0380(pvVar3,lVar5,uVar4,uVar1);
    *(void **)(param_1 + 0x1810 + (ulong)uVar4 * 8) = pvVar3;
    uVar4 = uVar4 + 1;
  }
  return;
}

