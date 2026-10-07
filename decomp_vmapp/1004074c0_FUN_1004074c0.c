
undefined8 FUN_1004074c0(QString *param_1,long param_2)

{
  QArrayData *pQVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  QArrayData *local_48;
  long local_40;
  undefined1 local_31;
  
  QMutex::lock();
  uVar7 = 0x80000083;
  if ((param_2 == 0) || (*(int *)(param_1->field0_0x0 + 4) == 0)) goto LAB_10040765c;
  if (DAT_1011bbd60 != (undefined8 *)0x0) {
    puVar2 = DAT_1011bbd60;
    puVar6 = &DAT_1011bbd60;
    do {
      while (puVar5 = puVar2, cVar3 = operator<((QString *)(puVar5 + 4),param_1), cVar3 != '\0') {
        puVar2 = (undefined8 *)puVar5[1];
        if ((undefined8 *)puVar5[1] == (undefined8 *)0x0) goto LAB_100407550;
      }
      puVar6 = puVar5;
      puVar2 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
LAB_100407550:
    if ((undefined8 **)puVar6 != &DAT_1011bbd60) {
      cVar3 = operator<(param_1,(QString *)(puVar6 + 4));
      uVar7 = 0x80000009;
      if (cVar3 == '\0') goto LAB_10040765c;
    }
  }
  pQVar1 = (QArrayData *)param_1->field0_0x0;
  iVar4 = *(int *)pQVar1;
  if (1 < iVar4 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
    iVar4 = *(int *)pQVar1;
  }
  if (1 < iVar4 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
    iVar4 = *(int *)pQVar1;
  }
  if (1 < iVar4 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  local_48 = pQVar1;
  local_40 = param_2;
  FUN_100408760(&DAT_1011bbd58,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004075ff;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004075ff:
  uVar7 = 0;
  if (*(int *)pQVar1 == -1) goto LAB_10040765c;
  if (*(int *)pQVar1 == 0) {
LAB_10040761d:
    QArrayData::deallocate(pQVar1,2,8);
  }
  else {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + -1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
    if (!(bool)local_31) goto LAB_10040761d;
  }
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10040765c;
    }
    QArrayData::deallocate(pQVar1,2,8);
    uVar7 = 0;
  }
LAB_10040765c:
  QMutex::unlock();
  return uVar7;
}

