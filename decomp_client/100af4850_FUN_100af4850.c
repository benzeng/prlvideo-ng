
bool FUN_100af4850(long param_1,undefined8 *param_2)

{
  QArrayData *pQVar1;
  int iVar2;
  long lVar3;
  char extraout_DL;
  QArrayData *local_38;
  undefined1 local_30;
  undefined1 local_21;
  
  pQVar1 = (QArrayData *)*param_2;
  iVar2 = *(int *)pQVar1;
  if (1 < iVar2 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
    iVar2 = *(int *)pQVar1;
  }
  if (1 < iVar2 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
    iVar2 = *(int *)pQVar1;
  }
  if (1 < iVar2 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_21 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  local_30 = 1;
  local_38 = pQVar1;
  lVar3 = FUN_100af9b60(param_1 + 0x28,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100af48e0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100af48e0:
  if (*(int *)pQVar1 == -1) goto LAB_100af4936;
  if (*(int *)pQVar1 == 0) {
LAB_100af48f9:
    QArrayData::deallocate(pQVar1,2,8);
  }
  else {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + -1;
    local_21 = *(int *)pQVar1 != 0;
    UNLOCK();
    if (!(bool)local_21) goto LAB_100af48f9;
  }
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_21 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100af4936;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100af4936:
  if (extraout_DL == '\0') {
    *(undefined1 *)(lVar3 + 0x28) = 1;
  }
  return extraout_DL == '\0';
}

