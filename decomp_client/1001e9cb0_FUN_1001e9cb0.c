
void FUN_1001e9cb0(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  
  FUN_1001e9c00();
  *param_1 = &PTR_FUN_1021ffaa0;
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
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = puVar1;
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
      if (*(int *)puVar1 != 0) goto LAB_1001e9d7e;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_1001e9d7e:
  if (*(int *)puVar1 == -1) {
    return;
  }
  if (*(int *)puVar1 == 0) {
LAB_1001e9d9f:
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  else {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (*(int *)puVar1 == 0) goto LAB_1001e9d9f;
  }
  if (*(int *)puVar1 == -1) {
    return;
  }
  if (*(int *)puVar1 != 0) {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (*(int *)puVar1 != 0) goto LAB_1001e9de8;
  }
  QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
LAB_1001e9de8:
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

