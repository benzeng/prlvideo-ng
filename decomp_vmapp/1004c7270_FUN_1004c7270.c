
QString * FUN_1004c7270(QString *param_1)

{
  QArrayData *pQVar1;
  long lVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  QString local_48;
  QArrayData *local_40;
  int *local_38;
  QString local_30;
  undefined1 local_21;
  
  QMutex::lock();
  pQVar3 = DAT_1011bc068;
  param_1->field0_0x0 = DAT_1011bc068;
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_21 = *(int *)pQVar3 != 0;
    UNLOCK();
    pQVar3 = param_1->field0_0x0;
  }
  QMutex::unlock();
  lVar2 = DAT_1011c3698;
  if (*(int *)(pQVar3 + 4) != 0) {
    return param_1;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("parallels.SharedFolders.guest.win",0x21);
  FUN_100473b30(&local_38,lVar2 + 0x10840,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004c732c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004c732c:
  if (local_38[0x16] != 1) {
    QString::fromUtf8_helper((char *)&local_30,0xa3a58c);
    pQVar1 = (QArrayData *)param_1->field0_0x0;
    param_1->field0_0x0 = local_30.field0_0x0;
    local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar1;
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        UNLOCK();
        if (*(int *)pQVar1 != 0) goto LAB_1004c73f4;
        local_21 = 0;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
    goto LAB_1004c73f4;
  }
  FUN_1004c74e0(&local_48,&local_38);
  pQVar1 = (QArrayData *)param_1->field0_0x0;
  param_1->field0_0x0 = local_48.field0_0x0;
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar1;
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_21 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004c7379;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1004c7379:
  QMutex::lock();
  QString::operator=((QString *)&DAT_1011bc068,param_1);
  QMutex::unlock();
LAB_1004c73f4:
  if (local_38 != (int *)0x0) {
    LOCK();
    *local_38 = *local_38 + -1;
    local_21 = *local_38 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_38 != (int *)0x0)) {
      FUN_100031ed0(local_38);
      operator_delete(local_38);
    }
  }
  return param_1;
}

