
void FUN_100200260(long *param_1,int param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  QString local_40;
  undefined1 local_33;
  undefined1 local_31;
  
  if (((param_1[0x10] != 0) && (*(int *)(param_1[0x10] + 4) != 0)) && (param_1[0x11] != 0)) {
    FUN_100756320(&local_40);
    QString::operator=((QString *)(param_1 + 9),&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_33 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_33) goto LAB_1002002e0;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_1002002e0:
    if (param_2 != 0) {
      uVar3 = 0;
      if (param_2 == 1) {
        CAbstractTask::appendSubTask((int)param_1);
      }
      else if (param_2 != 2) goto LAB_100200335;
      CAbstractTask::appendSubTask((int)param_1);
      goto LAB_100200335;
    }
  }
  uVar3 = 0x80000275;
  if (((param_1[3] != 0) && (*(int *)(param_1[3] + 4) != 0)) && (param_1[4] != 0)) {
    QWidget::close();
  }
LAB_100200335:
  plVar2 = param_1 + 0x10;
  QObject::deleteLater();
  piVar1 = (int *)*plVar2;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_31 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_31) && ((void *)*plVar2 != (void *)0x0)) {
      operator_delete((void *)*plVar2);
    }
    param_1[0x11] = 0;
    *plVar2 = 0;
  }
  (**(code **)(*param_1 + 0xb0))(param_1,uVar3);
  return;
}

