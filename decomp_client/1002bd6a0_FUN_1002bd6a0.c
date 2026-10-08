
void FUN_1002bd6a0(CAbstractTask *param_1,undefined4 param_2,QObject *param_3,QObject *param_4)

{
  CAbstractTask CVar1;
  CTaskGenericId *pCVar2;
  undefined8 uVar3;
  QArrayData *local_40;
  undefined1 local_37;
  
  pCVar2 = operator_new(0x18);
  if (param_3 == (QObject *)0x0) {
    local_40 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  else {
    FUN_100188480(&local_40,param_3);
  }
  FUN_1002befb0(pCVar2,&local_40);
  CAbstractTask::CAbstractTask(param_1,pCVar2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_37 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_37) goto LAB_1002bd73c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002bd73c:
  *(undefined ***)param_1 = &PTR_FUN_1022083b0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar3 = 0;
  if (param_3 != (QObject *)0x0) {
    uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(QObject **)(param_1 + 0x30) = param_3;
  uVar3 = 0;
  if (param_4 != (QObject *)0x0) {
    uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_4);
  }
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(QObject **)(param_1 + 0x40) = param_4;
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined **)(param_1 + 0x60) = PTR_shared_null_1021e1288;
  param_1[0x68] = (CAbstractTask)0x0;
  if (param_3 == (QObject *)0x0) {
    CVar1 = (CAbstractTask)0x0;
  }
  else {
    FUN_10018c2b0(param_3);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmProtection();
    CVar1 = (CAbstractTask)CVmProtection::isEnabled();
  }
  param_1[0x69] = CVar1;
  return;
}

