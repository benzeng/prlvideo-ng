
void FUN_1002f6230(CAbstractTask *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined *puVar3;
  CTaskGenericId *this;
  undefined *local_38;
  undefined1 local_29;
  
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0x3d);
  *(undefined ***)this = &PTR_FUN_102273600;
  CAbstractTask::CAbstractTask(param_1,this);
  *(undefined ***)param_1 = &PTR_FUN_10220b200;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x28) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_29 = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = (int *)param_2[1];
  *(int **)(param_1 + 0x30) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_29 = *piVar1 != 0;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x38) = param_2[2];
  piVar1 = (int *)param_2[3];
  *(int **)(param_1 + 0x40) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_29 = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = (int *)param_2[4];
  *(int **)(param_1 + 0x48) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_29 = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = (int *)param_2[5];
  *(int **)(param_1 + 0x50) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_29 = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = (int *)param_2[6];
  *(int **)(param_1 + 0x58) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_29 = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = (int *)param_2[7];
  *(int **)(param_1 + 0x60) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_29 = *piVar1 != 0;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x68) = param_2[8];
  uVar2 = *param_3;
  *(undefined8 *)(param_1 + 0x78) = param_3[1];
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  puVar3 = PTR_shared_null_1021e1288;
  local_38 = PTR_shared_null_1021e1288;
  FUN_1002f6080(param_1 + 0x88,&local_38);
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_29 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  return;
}

