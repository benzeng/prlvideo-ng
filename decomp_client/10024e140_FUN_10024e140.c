
void FUN_10024e140(CAbstractTask *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  CTaskGenericId *this;
  
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0x3c);
  *(undefined ***)this = &PTR_FUN_102271cc0;
  CAbstractTask::CAbstractTask(param_1,this);
  *(undefined ***)param_1 = &PTR_FUN_102204260;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x18) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = (int *)*param_3;
  *(int **)(param_1 + 0x20) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  CProductUpdateInfo::CProductUpdateInfo((CProductUpdateInfo *)(param_1 + 0x28),1);
  return;
}

