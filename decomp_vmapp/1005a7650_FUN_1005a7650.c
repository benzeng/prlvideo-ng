
byte FUN_1005a7650(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  long *plVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  
  cVar2 = (**(code **)(*param_1 + 0x30))();
  if (cVar2 != '\0') {
    return 0;
  }
  cVar2 = QMutex::tryLock((int)param_1 + 0xa8);
  if (cVar2 == '\0') {
    if ((-1 < *(int *)(param_2 + 0x20)) && (*(char *)(param_2 + 0x24) == '\0')) {
      return 1;
    }
    QMutex::lock();
    cVar2 = (**(code **)(*param_1 + 0x30))(param_1);
    if (cVar2 != '\0') {
      bVar3 = 0;
      goto LAB_1005a77d5;
    }
  }
  iVar8 = *(int *)(param_2 + 0x20);
  if (iVar8 < 0) goto LAB_1005a7754;
  plVar5 = (long *)param_1[3];
  uVar7 = 0;
  bVar6 = true;
  bVar3 = 1;
  if (plVar5 == param_1 + 3) {
LAB_1005a7712:
    QWaitCondition::wakeOne();
  }
  else {
    do {
      plVar1 = plVar5 + -2;
      plVar5 = (long *)*plVar5;
      iVar8 = *(int *)(*(long *)(*(long *)*plVar1 + 0x10) + 0x20);
      uVar7 = uVar7 + iVar8;
      bVar3 = bVar3 & *(byte *)(*(long *)(*(long *)*plVar1 + 0x10) + 0x24);
      bVar6 = (bool)(iVar8 != 0 & bVar6);
    } while (plVar5 != param_1 + 3);
    if (bVar6) goto LAB_1005a7712;
  }
  uVar4 = (**(code **)(*param_1 + 0xd0))(param_1);
  (**(code **)(*param_1 + 0xc0))(param_1,(ulong)uVar7 / (ulong)uVar4,(ulong)uVar7 % (ulong)uVar4);
  cVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  iVar8 = -0x7ffdefc8;
  if (cVar2 == '\0') {
    if (bVar3 == 0) {
      bVar3 = (**(code **)(*param_1 + 0x30))(param_1);
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 1;
      if ((char)param_1[0x19] != '\0') {
        QThread::start(param_1 + 0xe,7);
      }
    }
LAB_1005a77d5:
    QMutex::unlock();
    return bVar3;
  }
LAB_1005a7754:
  (**(code **)(*param_1 + 0x38))(param_1);
  QWaitCondition::wakeOne();
  *(undefined1 *)(param_1 + 0x11) = 1;
  if ((char)param_1[0x19] != '\0') {
    QThread::start(param_1 + 0xe,7);
  }
  (**(code **)(*param_1 + 0xc0))(param_1,iVar8);
  QMutex::unlock();
  return 0;
}

