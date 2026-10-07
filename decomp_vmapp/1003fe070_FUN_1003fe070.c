
void FUN_1003fe070(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  undefined8 in_stack_ffffffffffffffd0;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulong)in_stack_ffffffffffffffd0 >> 0x20);
  FUN_1008e3970("","HddUtils",0,"hdd: SF deinit");
  if (*(long *)(param_1 + 0x880) != param_1 + 0x880) {
    uVar5 = 1;
    FUN_1008e3970("","HddUtils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "cd_list_empty(&ior_in_progress)","SFilterHddWorker.cpp",0x82,"Deinit");
  }
  lVar2 = *(long *)(param_1 + 0x830);
  if (lVar2 != 0) {
    uVar3 = *(uint *)(lVar2 + 0x10);
    do {
      LOCK();
      uVar1 = *(uint *)(lVar2 + 0x10);
      bVar4 = uVar3 == uVar1;
      if (bVar4) {
        *(uint *)(lVar2 + 0x10) = uVar3 | 4;
        uVar1 = uVar3;
      }
      uVar3 = uVar1;
      UNLOCK();
    } while (!bVar4);
    lVar2 = *(long *)(param_1 + 0x830);
    if (lVar2 != 0) {
      FUN_1008e3970("","HddUtils",0,"hdd: SF Stat: %u, %u, %u, 0x%08X pa: 0x%08llX",
                    *(undefined4 *)(lVar2 + 4),*(undefined4 *)(lVar2 + 8),
                    *(undefined4 *)(lVar2 + 0xc),CONCAT44(uVar5,*(undefined4 *)(lVar2 + 0x10)),0);
    }
    FUN_10008d470(param_1 + 8);
    *(undefined8 *)(param_1 + 0x830) = 0;
  }
  *(undefined8 *)(param_1 + 0x840) = 0;
  *(undefined8 *)(param_1 + 0x838) = 0;
  *(long *)(param_1 + 0x830) = 0;
  if (*(void **)(param_1 + 0x848) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x848));
  }
  *(undefined8 *)(param_1 + 0x848) = 0;
  return;
}

