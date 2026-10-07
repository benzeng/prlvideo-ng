
void FUN_1005a55b0(long *param_1)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  ulong uVar5;
  long *plVar6;
  bool bVar7;
  
  plVar1 = param_1 + 3;
  QMutex::lock();
  plVar6 = (long *)param_1[3];
  if (plVar6 == plVar1) {
LAB_1005a56d8:
    QMutex::unlock();
    return;
  }
  bVar3 = true;
  do {
    uVar5 = 0;
    if (*(long *)plVar6[-2] != 0) {
      uVar5 = *(ulong *)(*(long *)plVar6[-2] + 0x10);
    }
    cVar4 = QThread::wait(uVar5);
    lVar2 = *(long *)(*(long *)plVar6[-2] + 0x10);
    if (cVar4 == '\0') {
LAB_1005a563c:
      bVar7 = true;
      if (*(int *)(lVar2 + 0x20) == 0) {
        bVar7 = *(char *)(lVar2 + 0x24) != '\0';
      }
    }
    else {
      bVar7 = true;
      if (-1 < *(int *)(lVar2 + 0x20)) {
        if (*(char *)(lVar2 + 0x24) != '\0') goto LAB_1005a563c;
        FUN_1008e3970("","vdisk",0,"Error: disk thread died, will terminate others!");
        (**(code **)(*param_1 + 0x38))(param_1);
        *(undefined4 *)((long)param_1 + 0xcc) = 0x80000016;
        goto LAB_1005a56d8;
      }
    }
    bVar3 = (bool)(bVar3 & bVar7);
    plVar6 = (long *)*plVar6;
    if (plVar6 == plVar1) {
      if (((bVar3) || (cVar4 = (**(code **)(*param_1 + 0x30))(param_1), cVar4 != '\0')) ||
         (cVar4 = QWaitCondition::wait((QMutex *)(param_1 + 0x16),(ulong)(param_1 + 0x15)),
         cVar4 != '\0')) goto LAB_1005a56d8;
      QMutex::unlock();
      QMutex::lock();
      plVar6 = (long *)*plVar1;
      bVar3 = true;
      if (plVar6 == plVar1) goto LAB_1005a56d8;
    }
  } while( true );
}

