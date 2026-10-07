
void FUN_1000c57e0(long param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  lVar5 = FUN_1000e99d0(*(undefined8 *)(*(long *)(param_1 + 0x148) + 0x1158),0xaa,0);
  *(long *)(param_1 + 0x20) = lVar5;
  if (lVar5 != 0) {
    uVar2 = FUN_1000a7060(*(undefined8 *)(param_1 + 0x148));
    *(uint *)(param_1 + 0x10) = uVar2;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(*(long *)(param_1 + 0x148) + 0x5b8);
    if (uVar2 != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      lVar5 = 0;
      do {
        puVar6 = operator_new(0x450);
        *puVar6 = (int)lVar5;
        *(undefined8 *)(puVar6 + 2) = uVar8;
        *(long *)(puVar6 + 4) = param_1;
        ___bzero(puVar6 + 6,0x438);
        *(undefined4 **)(param_1 + 0x48 + lVar5 * 8) = puVar6;
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < uVar2);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar7 = FUN_1007da300("vm.profiler.work_cycle",400);
    *(int *)(param_1 + 0x30) = (int)((uVar7 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x10));
    iVar3 = FUN_1007da300("vm.profiler.period",1,
                          (uVar7 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x10));
    *(int *)(param_1 + 0x2c) = iVar3 * *(int *)(param_1 + 0x10);
    uVar8 = FUN_1007da520("vm.profiler.region_sz",0x10);
    *(undefined8 *)(param_1 + 0x38) = uVar8;
    uVar4 = FUN_1007da300("vm.profiler.event_buffer_min_usage",10);
    *(undefined4 *)(param_1 + 0x40) = uVar4;
    while (*(int *)(param_1 + 0x158) == 0) {
      QThread::usleep((ulong)(uint)(*(int *)(param_1 + 0x30) * 1000));
      FUN_1000c5720(param_1);
    }
    FUN_1008e3970("","vm",0," ");
    FUN_1008e3970("","vm",0,
                  "     VMM/VM time profiling statistics >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar7 = 0;
      do {
        FUN_1000c4ed0(*(undefined8 *)(param_1 + 0x48 + uVar7 * 8));
        uVar7 = uVar7 + 1;
        uVar9 = (ulong)*(uint *)(param_1 + 0x10);
      } while (uVar7 < uVar9);
      if (*(uint *)(param_1 + 0x10) != 0) {
        lVar5 = 0;
        do {
          pvVar1 = *(void **)(param_1 + 0x48 + lVar5 * 8);
          if (pvVar1 != (void *)0x0) {
            FUN_1000c43a0(pvVar1);
            operator_delete(pvVar1);
            *(undefined8 *)(param_1 + 0x48 + lVar5 * 8) = 0;
            uVar9 = (ulong)*(uint *)(param_1 + 0x10);
          }
          lVar5 = lVar5 + 1;
        } while ((uint)lVar5 < (uint)uVar9);
      }
    }
    return;
  }
  FUN_1008e3970("","vm",0,"Failed to share PRFL_MEMORY!");
  return;
}

