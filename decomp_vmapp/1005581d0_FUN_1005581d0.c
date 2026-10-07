
long FUN_1005581d0(long param_1,undefined8 param_2,ulong param_3,undefined4 *param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  QMutex::lock();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    lVar3 = 0;
    FUN_1008e3970("","TransMem",0,
                  "Failed to get buffer for an uncompressed block: the engine is stopped");
  }
  else {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_3;
    auVar2 = auVar2 / ZEXT416(*(uint *)(lVar3 + 4));
    uVar5 = *(uint *)(lVar3 + 0x24) >> 3;
    if (7 < *(uint *)(lVar3 + 0x24)) {
      uVar6 = 0;
      do {
        if (*(char *)(*(long *)(lVar3 + 0x48) + uVar6 + uVar5 * auVar2._0_4_) != -1) {
          lVar3 = FUN_100557a20(param_1);
          goto LAB_1005582f5;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
    }
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x20);
    lVar3 = 0;
    if (lVar4 != 0) {
      lVar4 = lVar4 + param_3;
      lVar3 = 0;
      if (lVar4 != 0) {
        lVar3 = lVar4;
      }
    }
LAB_1005582f5:
    if (lVar3 == 0) {
      lVar3 = 0;
      FUN_1008e3970("","TransMem",0,"Failed to get buffer for uncompressed block %u",
                    auVar2._0_8_ & 0xffffffff);
    }
    else {
      *param_4 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 4);
    }
  }
  QMutex::unlock();
  if (*(long *)PTR____stack_chk_guard_100ba2320 == lVar1) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

