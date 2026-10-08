
void FUN_10028c620(CAbstractTask *param_1,undefined8 param_2,undefined4 param_3,QObject *param_4)

{
  char cVar1;
  CTaskGenericId *pCVar2;
  long lVar3;
  undefined8 uVar4;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  pCVar2 = operator_new(0x18);
  lVar3 = FUN_10061b510(param_2);
  if (lVar3 == 0) {
    local_48 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  else {
    uVar4 = FUN_10061b510(param_2);
    FUN_10015a2b0(&local_48,uVar4);
  }
  FUN_10028e410(pCVar2,&local_48);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,pCVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10028c6e7;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10028c6e7:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10028c70d;
    }
    QListData::dispose(local_40);
  }
LAB_10028c70d:
  *(undefined ***)param_1 = &PTR_FUN_102206840;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  uVar4 = 0;
  if (param_4 != (QObject *)0x0) {
    uVar4 = QtSharedPointer::ExternalRefCountData::getAndRef(param_4);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(QObject **)(param_1 + 0x30) = param_4;
  param_1[0x38] = (CAbstractTask)0x0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  cVar1 = FUN_100612960();
  if (cVar1 != '\0') {
    CAbstractTask::appendSubTask((int)param_1);
  }
  CAbstractTask::appendSubTask((int)param_1);
  return;
}

