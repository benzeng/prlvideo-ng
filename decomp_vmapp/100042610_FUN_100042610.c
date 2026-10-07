
void FUN_100042610(QObject *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  QObject *pQVar3;
  QString local_40;
  undefined1 local_33;
  
  QObject::QObject(param_1,(QObject *)0x0);
  FUN_1004c0650(param_1 + 0x10,param_2);
  FUN_100519220();
  *(undefined ***)param_1 = &PTR_FUN_100ba9cb0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100ba9d48;
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_100ba9d90;
  FUN_100041050(param_1 + 0x78);
  *(undefined ***)(param_1 + 0x78) = &PTR_FUN_100ba80a8;
  *(QObject **)(param_1 + 0x120) = param_1;
  *(undefined8 *)(param_1 + 0x128) = DAT_1011c3698;
  *(undefined **)(param_1 + 0x130) = PTR_shared_null_100ba20d0;
  *(undefined **)(param_1 + 0x140) = PTR_shared_null_100ba2180;
  QMutex::QMutex((QMutex *)(param_1 + 0x148),0);
  *(undefined **)(param_1 + 0x150) = PTR_shared_null_100ba2188;
  QMutex::QMutex((QMutex *)(param_1 + 0x158),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x178),0);
  *(undefined2 *)(param_1 + 0x198) = 0;
  param_1[0x19a] = (QObject)0x0;
  QMutex::QMutex((QMutex *)(param_1 + 0x1a0),0);
  FUN_1004c0790(param_1 + 0x10,0x8302,0x8302);
  FUN_10051a6b0(*(long *)(param_1 + 0x128) + 0x10f0,3,param_1 + 0x38);
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  QString::operator=((QString *)(param_1 + 0x130),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_33 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_1000427be;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1000427be:
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  iVar1 = CVmCommonOptions::getOsType();
  uVar2 = 0x11;
  if (iVar1 != 8) {
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x138) = uVar2;
  iVar1 = FUN_100060640();
  param_1[0x198] = (QObject)(iVar1 != 1);
  param_1[0x199] = (QObject)(iVar1 != 1);
  pQVar3 = param_1 + 0xf8;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  if (((ulong)pQVar3 & 1) == 0) {
    QReadWriteLock::lockForWrite();
    pQVar3 = (QObject *)((ulong)pQVar3 | 1);
  }
  param_1[0x10c] = (QObject)0x1;
  if (((ulong)pQVar3 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  FUN_100046350(&DAT_1011c35d0,param_1);
  return;
}

