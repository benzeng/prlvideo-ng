
void FUN_1002463f0(CAbstractTask *param_1,CVmConfiguration *param_2,QObject *param_3,QList *param_4,
                  QObject *param_5)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  QArrayData *local_40;
  undefined1 local_33;
  
  pCVar1 = operator_new(0x18);
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  FUN_100248ed0(pCVar1,&local_40);
  CAbstractTask::CAbstractTask(param_1,param_4,pCVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_33 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_100246488;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100246488:
  *(undefined ***)param_1 = &PTR_FUN_102203b90;
  CVmConfiguration::CVmConfiguration((CVmConfiguration *)(param_1 + 0x18),param_2);
  uVar2 = 0;
  if (param_3 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  *(QObject **)(param_1 + 0x118) = param_3;
  uVar2 = 0;
  if (param_5 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_5);
  }
  *(undefined8 *)(param_1 + 0x120) = uVar2;
  *(QObject **)(param_1 + 0x128) = param_5;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined **)(param_1 + 0x138) = PTR_shared_null_1021e12f0;
  return;
}

