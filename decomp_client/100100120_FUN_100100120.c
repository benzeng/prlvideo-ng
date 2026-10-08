
void FUN_100100120(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  QArrayData *local_68;
  QArrayData *local_60;
  int *local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  cVar1 = QtPrivate::QStringList_contains(param_1 + 0x18,param_2,0);
  if (cVar1 != '\0') {
    return;
  }
  FUN_1000c5530(&local_40,param_2);
  iVar2 = QString::compare(param_3,&local_40,0);
  if (iVar2 == 0) goto LAB_1001002dd;
  QString::toLower();
  QString::toLower();
  QString::operator=(&local_40,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001001cd;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1001001cd:
  lVar3 = *(long *)(param_1 + 0x10);
  iVar2 = *(int *)(lVar3 + 8);
  if (iVar2 != *(int *)(lVar3 + 0xc)) {
    plVar4 = (long *)(lVar3 + 0x10 + (long)iVar2 * 8);
    lVar3 = (long)*(int *)(lVar3 + 0xc) * 8 + (long)iVar2 * -8;
    do {
      cVar1 = operator==((QString *)*plVar4,&local_48);
      if ((cVar1 != '\0') && (cVar1 = operator==((QString *)(*plVar4 + 8),&local_40), cVar1 != '\0')
         ) goto LAB_1001002ad;
      plVar4 = plVar4 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  local_68 = (QArrayData *)local_48.field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  local_60 = (QArrayData *)local_40.field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_31 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  local_58 = (int *)*param_4;
  if (1 < *local_58 + 1U) {
    LOCK();
    *local_58 = *local_58 + 1;
    local_31 = *local_58 != 0;
    UNLOCK();
  }
  FUN_100101790((long *)(param_1 + 0x10),&local_68);
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(int *)(lVar3 + 0xc) - *(int *)(lVar3 + 8) == 1) {
    FUN_100100400(param_1);
  }
  FUN_100101550(&local_68);
LAB_1001002ad:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001002dd;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1001002dd:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

