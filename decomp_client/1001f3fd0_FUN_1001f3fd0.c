
void FUN_1001f3fd0(CAbstractTask *param_1,long *param_2,long *param_3,QList *param_4,
                  QObject *param_5,CAbstractTask param_6)

{
  long lVar1;
  CTaskGenericId *pCVar2;
  undefined8 uVar3;
  QArrayData *local_40;
  undefined1 local_32;
  
  pCVar2 = operator_new(0x18);
  if (param_5 == (QObject *)0x0) {
    local_40 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  else {
    FUN_10015aab0(&local_40,param_5);
  }
  FUN_1001f6560(pCVar2,&local_40);
  CAbstractTask::CAbstractTask(param_1,param_4,pCVar2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_32 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_1001f4078;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001f4078:
  *(undefined ***)param_1 = &PTR_FUN_102200030;
  lVar1 = *param_2;
  *(long *)(param_1 + 0x18) = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef();
  }
  lVar1 = *param_3;
  *(long *)(param_1 + 0x20) = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef();
  }
  uVar3 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_5 != (QObject *)0x0) {
    uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_5);
  }
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(QObject **)(param_1 + 0x38) = param_5;
  *(undefined **)(param_1 + 0x40) = PTR_shared_null_1021e15e8;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x4c] = param_6;
  return;
}

