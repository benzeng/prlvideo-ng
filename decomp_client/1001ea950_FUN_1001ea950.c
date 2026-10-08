
void FUN_1001ea950(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  
  FUN_1001e9c00();
  *param_1 = &PTR_FUN_1021ffb70;
  puVar1 = PTR_shared_null_1021e1288;
  param_1[6] = PTR_shared_null_1021e1288;
  iVar2 = *(int *)puVar1;
  if (1 < iVar2 + 1U) {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + 1;
    UNLOCK();
    iVar2 = *(int *)puVar1;
  }
  param_1[7] = puVar1;
  if (1 < iVar2 + 1U) {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + 1;
    UNLOCK();
    iVar2 = *(int *)puVar1;
  }
  param_1[8] = puVar1;
  if (1 < iVar2 + 1U) {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + 1;
    UNLOCK();
    iVar2 = *(int *)puVar1;
  }
  if (iVar2 != -1) {
    if (iVar2 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (*(int *)puVar1 != 0) goto LAB_1001ea9f4;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_1001ea9f4:
  if (*(int *)puVar1 == -1) {
    return;
  }
  if (*(int *)puVar1 != 0) {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (*(int *)puVar1 != 0) goto LAB_1001eaa23;
  }
  QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
LAB_1001eaa23:
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (*(int *)puVar1 != 0) {
        return;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  return;
}

