
void FUN_1002f3e00(CAbstractTask *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined *puVar3;
  CTaskGenericId *this;
  undefined *local_38;
  undefined1 local_2d;
  undefined1 local_2b;
  
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0x3e);
  *(undefined ***)this = &PTR_FUN_1022735c0;
  CAbstractTask::CAbstractTask(param_1,this);
  *(undefined ***)param_1 = &PTR_FUN_10220b0e0;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x18) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_2d = *piVar1 != 0;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar2 = *param_3;
  *(undefined8 *)(param_1 + 0x38) = param_3[1];
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  puVar3 = PTR_shared_null_1021e1288;
  local_38 = PTR_shared_null_1021e1288;
  FUN_1002f6080(param_1 + 0x40,&local_38);
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_2b = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_2b) goto LAB_1002f3eda;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_1002f3eda:
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  return;
}

