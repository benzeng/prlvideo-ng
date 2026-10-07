
void FUN_10006a690(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  QArrayData *pQVar1;
  QArrayData *pQVar2;
  undefined8 *puVar3;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  pQVar1 = (QArrayData *)*param_3;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_21 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  pQVar2 = (QArrayData *)*param_2;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_21 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  puVar3 = *(undefined8 **)(param_1 + 8);
  local_38 = pQVar1;
  local_30 = pQVar2;
  if (puVar3 == *(undefined8 **)(param_1 + 0x10)) {
    FUN_10006aa90(param_1,&local_38);
  }
  else {
    *puVar3 = pQVar1;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_21 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    puVar3[1] = pQVar2;
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
    }
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  }
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10006a73f;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10006a73f:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_21 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_21) {
        return;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

