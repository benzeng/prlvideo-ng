
bool FUN_1005574d0(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  
  QMutex::lock();
  if (*(long *)(param_1 + 0x10) == 0) {
    bVar7 = false;
    FUN_1008e3970("","TransMem",0,"CSnapshotEngineCompressed::process_main() stopped");
    QMutex::unlock();
  }
  else {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 8);
    uVar5 = 0;
    FUN_1008e3970("","TransMem",0,
                  "CSnapshotEngineCompressed::process_main() started, %u out of %u blocks processed"
                  ,*(undefined4 *)(param_1 + 0x80),uVar1);
    if (uVar1 != 0) {
      lVar3 = *(long *)(param_1 + 0x78);
      lVar4 = 4;
      do {
        if (((*(uint *)(lVar3 + (ulong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) == 0) &&
           ((lVar6 = *(long *)(param_1 + 0x60), *(int *)(lVar6 + -4 + lVar4) < -2 ||
            (*(int *)(lVar6 + lVar4) < -2)))) {
          *(undefined4 *)(lVar6 + 4 + (long)(int)uVar5 * 0x10) = 0xffffffff;
          *(undefined4 *)(lVar6 + (long)(int)uVar5 * 0x10) = *(undefined4 *)(param_1 + 0x88);
          iVar2 = *(int *)(param_1 + 0x88);
          if ((long)iVar2 < 0) {
            lVar6 = 0;
            if (iVar2 == -1) {
              lVar6 = param_1 + 0x88;
            }
          }
          else {
            lVar6 = lVar6 + (long)iVar2 * 0x10;
          }
          *(uint *)(lVar6 + 4) = uVar5;
          *(uint *)(param_1 + 0x88) = uVar5;
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar1 != uVar5);
    }
    QMutex::unlock();
    QWaitCondition::wakeAll();
    QThread::wait(param_1 + 0x30);
    FUN_1008e3970("","TransMem",0,
                  "CSnapshotEngineCompressed::process_main() done, %u out of %u blocks processed",
                  *(undefined4 *)(param_1 + 0x80),uVar1);
    bVar7 = *(uint *)(param_1 + 0x80) == uVar1;
  }
  return bVar7;
}

