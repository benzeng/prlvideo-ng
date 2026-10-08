
void FUN_100210420(CAbstractTask *param_1,CVmConfiguration *param_2,QObject *param_3,QList *param_4,
                  QObject *param_5)

{
  CTaskGenericId *pCVar1;
  CVmConfiguration *pCVar2;
  undefined8 uVar3;
  QArrayData *local_40;
  undefined1 local_33;
  
  pCVar1 = operator_new(0x18);
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  FUN_1002126f0(pCVar1,&local_40);
  CAbstractTask::CAbstractTask(param_1,param_4,pCVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_33 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_1002104b4;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002104b4:
  *(undefined ***)param_1 = &PTR_FUN_102200db0;
  pCVar2 = (CVmConfiguration *)FUN_10018c2b0(param_3);
  CVmConfiguration::CVmConfiguration((CVmConfiguration *)(param_1 + 0x18),pCVar2);
  CVmConfiguration::CVmConfiguration((CVmConfiguration *)(param_1 + 0x110),param_2);
  uVar3 = 0;
  if (param_3 != (QObject *)0x0) {
    uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x208) = uVar3;
  *(QObject **)(param_1 + 0x210) = param_3;
  uVar3 = 0;
  if (param_5 != (QObject *)0x0) {
    uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_5);
  }
  *(undefined8 *)(param_1 + 0x218) = uVar3;
  *(QObject **)(param_1 + 0x220) = param_5;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  return;
}

