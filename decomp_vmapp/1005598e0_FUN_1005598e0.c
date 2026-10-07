
void FUN_1005598e0(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  QMutex::lock();
  lVar4 = param_1[2];
  if (lVar4 == 0) {
    FUN_1008e3970("","TransMem",0,"CSnapshotEngineCompressed::release_buff() stopped");
    FUN_1008e3970("","TransMem",0,
                  "Failed to get buffer for an uncompressed block: the engine is stopped");
    lVar4 = lVar1;
  }
  else {
    param_3 = param_3 / *(uint *)(lVar4 + 4);
    uVar2 = *(uint *)(lVar4 + 0x24) >> 3;
    if (7 < *(uint *)(lVar4 + 0x24)) {
      uVar5 = 0;
      do {
        if (*(char *)(*(long *)(lVar4 + 0x48) + uVar5 + uVar2 * (int)param_3) != -1) {
          lVar6 = param_1[0x13];
          uVar2 = 0;
          lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
          goto LAB_100559a80;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
    }
    lVar6 = (param_3 & 0xffffffff) * 0x10;
    if (*(long *)(param_1[0xc] + 8 + lVar6) == 0) {
      lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
    else {
      (**(code **)(*param_1 + 0x70))(param_1);
      lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
      *(undefined8 *)(param_1[0xc] + 8 + lVar6) = 0;
    }
  }
  goto LAB_100559ae0;
  while (uVar2 = uVar2 + 1, uVar2 <= *(uint *)((long)param_1 + 0x84)) {
LAB_100559a80:
    lVar3 = (ulong)uVar2 * 0x10;
    if ((*(char *)(lVar6 + 8 + lVar3) != '\0') && (*(long *)(lVar6 + lVar3) == param_5)) {
      *(undefined1 *)(lVar6 + 8 + lVar3) = 0;
      goto LAB_100559ae0;
    }
  }
  FUN_1008e3970("","TransMem",0,"CSnapshotEngineCompressed::put_buffer() not found");
LAB_100559ae0:
  QMutex::unlock();
  if (lVar4 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

