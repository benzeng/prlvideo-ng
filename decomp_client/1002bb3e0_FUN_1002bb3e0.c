
void FUN_1002bb3e0(CAbstractTask *param_1,undefined8 *param_2,undefined8 param_3,QObject *param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  CTaskGenericId *this;
  undefined8 uVar2;
  
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0x7f);
  CAbstractTask::CAbstractTask(param_1,this);
  *(undefined ***)param_1 = &PTR_FUN_102208290;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x18) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined **)(param_1 + 0x20) = PTR_shared_null_1021e1288;
  piVar1 = (int *)*param_5;
  *(int **)(param_1 + 0x28) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  QProcess::QProcess((QProcess *)(param_1 + 0x30),(QObject *)0x0);
  uVar2 = 0;
  if (param_4 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_4);
  }
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(QObject **)(param_1 + 0x48) = param_4;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  FUN_100260700(param_1 + 0x60,param_3);
  param_1[200] = (CAbstractTask)0x0;
  return;
}

