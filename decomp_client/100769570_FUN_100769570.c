
void FUN_100769570(long param_1)

{
  char cVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  void *pvVar5;
  undefined8 uVar6;
  char *pcVar7;
  long local_50;
  long local_48;
  QString local_40;
  QVariant local_38;
  undefined1 local_21;
  
  (**(code **)(**(long **)(param_1 + 0x50) + 0x70))();
  (**(code **)(**(long **)(param_1 + 0x58) + 0x70))();
  FUN_1007677f0(param_1);
  FUN_100767ef0(param_1);
  FUN_100768420(param_1);
  FUN_100768d00(param_1);
  FUN_100769160(param_1);
  if (((*(long *)(param_1 + 0x28) != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
     (*(long *)(param_1 + 0x30) != 0)) goto LAB_100769815;
  pQVar2 = operator_new(0x70);
  FUN_10075e150(pQVar2);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  piVar4 = *(int **)(param_1 + 0x28);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_21 = *piVar3 != 0;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x28);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_21 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x28));
      }
    }
    *(int **)(param_1 + 0x28) = piVar3;
    *(QObject **)(param_1 + 0x30) = pQVar2;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_21 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar3);
    }
  }
  if (DAT_1023109c0 == (void *)0x0) {
    pvVar5 = operator_new(0x18);
    FUN_10076b480(pvVar5);
    DAT_102271418 = 1;
    DAT_1023109c0 = pvVar5;
  }
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_10076b4f0(DAT_1023109c0,uVar6);
  pcVar7 = (char *)0x0;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (pcVar7 = (char *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
    pcVar7 = *(char **)(param_1 + 0x30);
  }
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10015aab0(&local_40,uVar6);
  QVariant::QVariant(&local_38,&local_40);
  QObject::setProperty(pcVar7,(QVariant *)"serverUuid");
  QVariant::~QVariant(&local_38);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100769735;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100769735:
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
  }
  cVar1 = '\0';
  QObject::connect(&local_48,uVar6,"2buttonClicked(FreeDiskSpace::Section)",param_1,
                   "1onButtonClicked(FreeDiskSpace::Section)",0);
  if (local_48 != 0) {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
  }
  QObject::connect(&local_50,uVar6,"2finished(int)",*(undefined8 *)(param_1 + 0x10),
                   "2dialogClosed()",2);
  if ((cVar1 != '\0') && (local_50 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_10075e160(uVar6,*(undefined8 *)(param_1 + 0x38));
LAB_100769815:
  QWidget::show();
  QWidget::activateWindow();
  QWidget::raise();
  return;
}

