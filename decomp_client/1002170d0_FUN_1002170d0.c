
void FUN_1002170d0(CAbstractTask *param_1,QObject *param_2,QObject *param_3,CTaskGenericId *param_4,
                  CAbstractTask param_5)

{
  undefined8 uVar1;
  bool bVar2;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  bVar2 = param_4 == (CTaskGenericId *)0x0;
  if (bVar2) {
    param_4 = operator_new(0x18);
    FUN_100188480(&local_40,param_2);
    FUN_100191030(param_4,&local_40);
  }
  CAbstractTask::CAbstractTask(param_1,param_4);
  if ((bVar2) && (*(int *)local_40 != -1)) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100217163;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100217163:
  *(undefined ***)param_1 = &PTR_FUN_102201420;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(QObject **)(param_1 + 0x20) = param_2;
  uVar1 = 0;
  if (param_3 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(QObject **)(param_1 + 0x30) = param_3;
  CVmConfiguration::CVmConfiguration((CVmConfiguration *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_48,uVar1);
  COsInstallationInfo::COsInstallationInfo((COsInstallationInfo *)(param_1 + 0x148),&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100217227;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100217227:
  param_1[0x168] = param_5;
  *(undefined8 *)(param_1 + 0x170) = 0;
  param_1[0x178] = (CAbstractTask)0x0;
  COsInstallationInfo::load();
  CAbstractTask::setOption(param_1,2,0);
  return;
}

