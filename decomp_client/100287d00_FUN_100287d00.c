
void FUN_100287d00(CAbstractTask *param_1,QObject *param_2,undefined4 param_3,QObject *param_4,
                  undefined8 param_5)

{
  int iVar1;
  CTaskGenericId *pCVar2;
  undefined8 uVar3;
  QVariant local_78;
  QVariant local_68;
  QVariant local_58;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pCVar2 = operator_new(0x18);
  QObject::property((char *)&local_58);
  QVariant::toString();
  iVar1 = *(int *)(local_48 + 4);
  if (iVar1 == 0) {
    QObject::property((char *)&local_68);
    QVariant::toString();
  }
  else {
    QObject::property((char *)&local_78);
    QVariant::toString();
  }
  FUN_10028a4a0(pCVar2,&local_40);
  CAbstractTask::CAbstractTask(param_1,pCVar2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100287e10;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100287e10:
  if (iVar1 == 0) {
    QVariant::~QVariant(&local_68);
  }
  else {
    QVariant::~QVariant(&local_78);
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100287e6b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100287e6b:
  QVariant::~QVariant(&local_58);
  *(undefined ***)param_1 = &PTR_FUN_1022063b0;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  uVar3 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(QObject **)(param_1 + 0x28) = param_2;
  uVar3 = 0;
  if (param_4 != (QObject *)0x0) {
    uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_4);
  }
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(QObject **)(param_1 + 0x38) = param_4;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined **)(param_1 + 0x50) = PTR_shared_null_1021e1288;
  FUN_10012b980(param_1 + 0x58,param_5);
  return;
}

