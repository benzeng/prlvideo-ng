
void FUN_1005a5340(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  char cVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar10 = param_1 + 0x15;
  uVar7 = (ulong)plVar10 & 0xfffffffffffffffe;
  do {
    QMutex::lock();
    bVar4 = true;
    plVar8 = (long *)0x0;
    for (plVar2 = (long *)param_1[3]; plVar2 != param_1 + 3; plVar2 = (long *)*plVar2) {
      uVar9 = 0;
      if (*(long *)plVar2[-2] != 0) {
        uVar9 = *(ulong *)(*(long *)plVar2[-2] + 0x10);
      }
      cVar6 = QThread::wait(uVar9);
      if ((((cVar6 != '\0') && (-1 < *(int *)(*(long *)(*(long *)plVar2[-2] + 0x10) + 0x20))) &&
          (*(char *)(*(long *)(*(long *)plVar2[-2] + 0x10) + 0x24) == '\0')) &&
         (cVar6 = (**(code **)(*param_1 + 0x30))(), cVar6 == '\0')) {
        FUN_1008e3970("","vdisk",0,"Error: disk thread died, will terminate others!");
        (**(code **)(*param_1 + 0x38))();
        *(undefined4 *)((long)param_1 + 0xcc) = 0x80000016;
      }
      uVar9 = 0;
      if (*(long *)plVar2[-2] != 0) {
        uVar9 = *(ulong *)(*(long *)plVar2[-2] + 0x10);
      }
      cVar6 = QThread::wait(uVar9);
      if (bVar4 && cVar6 == '\0') {
        plVar3 = *(long **)plVar2[-2];
        if (plVar3 != (long *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        if (plVar8 != (long *)0x0) {
          LOCK();
          plVar1 = plVar8 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        bVar4 = false;
        plVar8 = plVar3;
      }
    }
    QMutex::unlock();
    if (!bVar4) {
      if ((plVar8 == (long *)0x0) || (uVar9 = plVar8[2], uVar9 == 0)) {
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","Thr.isValid()",
                      "DiskStatesManager.cpp",0x76,"WaitForDone",uVar7,plVar10);
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = plVar8[2];
        }
      }
      QThread::wait(uVar9);
    }
    if (plVar8 != (long *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  } while (!bVar4);
  return;
}

