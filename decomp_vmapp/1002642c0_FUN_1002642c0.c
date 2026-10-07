
QString * FUN_1002642c0(QString *param_1)

{
  pid_t pVar1;
  int iVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QTypedArrayData<unsigned_short> *local_28;
  undefined1 local_19;
  
  QDir::tempPath();
  local_40 = (QArrayData *)QString::fromAscii_helper("/Parallels_Spool_%1_%2.ps",0x19);
  pVar1 = _getpid();
  QString::arg(&local_38,&local_40,(long)pVar1,0,10,0x20);
  iVar2 = _rand();
  QString::arg(&local_30,&local_38,(long)iVar2,0,10,0x20);
  param_1->field0_0x0 = local_28;
  if (1 < *(int *)local_28 + 1U) {
    LOCK();
    *(int *)local_28 = *(int *)local_28 + 1;
    local_19 = *(int *)local_28 != 0;
    UNLOCK();
  }
  QString::append(param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100264386;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100264386:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002643b6;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002643b6:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002643e6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002643e6:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28,2,8);
  }
  return param_1;
}

