
void FUN_1002ed960(long *param_1,QString *param_2)

{
  char cVar1;
  undefined8 uVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  QArrayData *local_48;
  QVariant local_40;
  QString local_30;
  undefined1 local_21;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("vmUuid",6);
  FUN_100036660(&local_40,param_1 + 6,&local_48);
  QVariant::toString();
  QVariant::~QVariant(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002ed9e2;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002ed9e2:
  cVar1 = operator==(param_2,&local_30);
  if (cVar1 != '\0') {
    uVar2 = FUN_100370280();
    pQVar3 = (QObject *)FUN_1003704b0(uVar2,&local_30,DAT_100e152b8);
    piVar4 = (int *)0x0;
    if (pQVar3 != (QObject *)0x0) {
      piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    }
    piVar5 = (int *)param_1[8];
    if (piVar5 != piVar4) {
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        local_21 = *piVar4 != 0;
        UNLOCK();
        piVar5 = (int *)param_1[8];
      }
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        local_21 = *piVar5 != 0;
        UNLOCK();
        if ((!(bool)local_21) && ((void *)param_1[8] != (void *)0x0)) {
          operator_delete((void *)param_1[8]);
        }
      }
      param_1[8] = (long)piVar4;
      param_1[9] = (long)pQVar3;
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_21 = *piVar4 != 0;
      UNLOCK();
      if (!(bool)local_21) {
        operator_delete(piVar4);
      }
    }
    if (((param_1[8] == 0) || (*(int *)(param_1[8] + 4) == 0)) || (param_1[9] == 0)) {
      FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "! m_window.isNull()","Tasks/CTaskResumeWindow.cpp",0x182,
                    "onConsoleWindowCreated");
    }
    (**(code **)(*param_1 + 0xb0))(param_1,0);
  }
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

