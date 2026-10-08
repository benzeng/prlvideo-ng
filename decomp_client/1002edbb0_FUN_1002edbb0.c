
void FUN_1002edbb0(long *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  
  FUN_100060bb0();
  uVar1 = QMetaObject::className();
  lVar5 = 0;
  if ((param_1[10] != 0) && (lVar5 = 0, *(int *)(param_1[10] + 4) != 0)) {
    lVar5 = param_1[0xb];
  }
  pQVar2 = (QObject *)FUN_100060e80(uVar1,lVar5);
  piVar3 = (int *)0x0;
  if (pQVar2 != (QObject *)0x0) {
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  }
  piVar4 = (int *)param_1[8];
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
      piVar4 = (int *)param_1[8];
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if ((*piVar4 == 0) && ((void *)param_1[8] != (void *)0x0)) {
        operator_delete((void *)param_1[8]);
      }
    }
    param_1[8] = (long)piVar3;
    param_1[9] = (long)pQVar2;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      operator_delete(piVar3);
    }
  }
  if (((param_1[8] == 0) || (*(int *)(param_1[8] + 4) == 0)) || (param_1[9] == 0)) {
    FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "! m_window.isNull()","Tasks/CTaskResumeWindow.cpp",0x189,"onConfigEditorOpened");
  }
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

