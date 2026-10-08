
char FUN_1000f6140(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined **local_58 [2];
  undefined **local_48 [2];
  QString local_38;
  undefined1 local_29;
  
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_100d72f10(local_48);
  local_48[0] = &PTR_FUN_10226d2f8;
  FUN_100d72f10(local_58);
  local_58[0] = &PTR_FUN_10226cc58;
  if (*(int *)(*(long *)(param_2 + 0x10) + 4) == 0) {
    cVar2 = '\x06';
    if (*(int *)(*(long *)(param_2 + 0x18) + 4) == 0) goto LAB_1000f632d;
    QString::append(&local_38,0x22);
    QString::append(&local_38);
    QString::append(&local_38,0x22);
    if (*(int *)(*(long *)(param_2 + 0x20) + 4) != 0) {
      QString::append(&local_38,0x20);
      QString::append(&local_38);
    }
  }
  else {
    QString::append(&local_38,0x22);
    QString::append(&local_38);
    QString::append(&local_38,0x22);
  }
  QString::toUtf8();
  iVar1 = FUN_100d73da0(local_58,local_60 + *(long *)(local_60 + 0x10));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000f6275;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_1000f6275:
  cVar2 = '\x03';
  if ((((iVar1 != 0) || (iVar1 = FUN_100d73f50(param_3,1), iVar1 != 0)) ||
      (iVar1 = FUN_100d74050(param_3,local_58), iVar1 != 0)) ||
     (iVar1 = FUN_100d73e20(local_48,1), iVar1 != 0)) goto LAB_1000f632d;
  QString::toUtf8();
  iVar1 = FUN_100d73de0(local_48,local_68 + *(long *)(local_68 + 0x10));
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000f6311;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_1000f6311:
  if (iVar1 == 0) {
    iVar1 = FUN_100d74140(param_3,local_48);
    cVar2 = (iVar1 != 0) * '\x03';
  }
LAB_1000f632d:
  FUN_100d72f50(local_58);
  FUN_100d72f50(local_48);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return cVar2;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return cVar2;
}

