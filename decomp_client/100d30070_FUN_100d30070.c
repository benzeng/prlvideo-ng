
void FUN_100d30070(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  QArrayData *pQVar1;
  QArrayData *pQVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  pQVar1 = (QArrayData *)*param_2;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_21 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  pQVar2 = (QArrayData *)*param_3;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_21 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  local_38 = pQVar1;
  local_30 = pQVar2;
  FUN_100d30a20(param_1 + 8,&local_38);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d300e7;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100d300e7:
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

