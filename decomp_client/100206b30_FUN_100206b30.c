
void FUN_100206b30(long *param_1,int param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  QString local_40;
  undefined1 local_33;
  undefined1 local_31;
  
  if (((param_1[0xe] != 0) && (*(int *)(param_1[0xe] + 4) != 0)) && (param_1[0xf] != 0)) {
    FUN_1001a3530(&local_40);
    QString::operator=((QString *)(param_1 + 9),&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_33 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_33) goto LAB_100206baa;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_100206baa:
    uVar4 = 0;
    if (param_2 == 1) {
      CAbstractTask::appendSubTask((int)param_1);
      goto LAB_100206c19;
    }
    if (param_2 != 0) goto LAB_100206c19;
  }
  iVar3 = CAbstractTask::getCurrentSubTask();
  if (iVar3 == 1) {
    if (param_1[0xc] != 0) {
      CSdkRequest::cancel();
    }
  }
  else {
    (**(code **)(*param_1 + 0x98))(param_1,0x80000009);
  }
  uVar4 = 0x80000275;
  if (((param_1[3] != 0) && (*(int *)(param_1[3] + 4) != 0)) && (param_1[4] != 0)) {
    QWidget::close();
  }
LAB_100206c19:
  plVar1 = param_1 + 0xe;
  QObject::deleteLater();
  piVar2 = (int *)*plVar1;
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_31 = *piVar2 != 0;
    UNLOCK();
    if ((!(bool)local_31) && ((void *)*plVar1 != (void *)0x0)) {
      operator_delete((void *)*plVar1);
    }
    param_1[0xf] = 0;
    *plVar1 = 0;
  }
  (**(code **)(*param_1 + 0xb0))(param_1,uVar4);
  return;
}

