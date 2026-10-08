
QString * FUN_100d35d10(QString *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  AnonymousUnion0 local_40;
  undefined1 local_38 [8];
  QTypedArrayData<unsigned_short> *local_30;
  undefined2 local_28 [3];
  undefined1 local_21;
  
  if ((DAT_102318840 == '\0') && (iVar2 = ___cxa_guard_acquire(&DAT_102318840), iVar2 != 0)) {
    DAT_102318838 = 0x2f;
    ___cxa_guard_release(&DAT_102318840);
  }
  local_30 = (QTypedArrayData<unsigned_short> *)*param_2;
  param_1->field0_0x0 = local_30;
  iVar2 = *(int *)local_30;
  if (1 < iVar2 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_21 = *(int *)local_30 != 0;
    UNLOCK();
    local_30 = (QTypedArrayData<unsigned_short> *)*param_2;
    iVar2 = *(int *)local_30;
  }
  if (1 < iVar2 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_21 = *(int *)local_30 != 0;
    UNLOCK();
  }
  QString::split(local_38,param_1,DAT_102318838,1,1);
  local_28[0] = DAT_102318838;
  QtPrivate::QStringList_join((QStringList *)&local_40.field0,local_38,(int)local_28);
  QString::operator=(param_1,(QString *)&local_40.field0);
  if (*(int *)local_40.field1 != -1) {
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      local_21 = *(int *)local_40.field1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d35dfd;
    }
    QArrayData::deallocate((QArrayData *)local_40.field1,2,8);
  }
LAB_100d35dfd:
  cVar1 = QString::startsWith(&local_30,DAT_102318838,1);
  if (cVar1 != '\0') {
    QString::insert(param_1,0,DAT_102318838);
  }
  FUN_100039a80(local_38);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30,2,8);
  }
  return param_1;
}

