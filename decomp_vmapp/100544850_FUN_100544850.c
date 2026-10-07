
int FUN_100544850(undefined8 *param_1,undefined8 param_2,QFileInfo *param_3,char param_4,
                 undefined1 param_5)

{
  long lVar1;
  QArrayData *pQVar2;
  mode_t mVar3;
  int iVar4;
  int *piVar5;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  mVar3 = _umask(0);
  QFileInfo::absoluteFilePath();
  QString::toUtf8();
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  iVar4 = _open((char *)(local_40 + *(long *)(local_40 + 0x10)),
                (param_4 == '\0') + 0x200 + (uint)(param_4 == '\0'),0x1b6);
  *(int *)*param_1 = iVar4;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100544915;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100544915:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100544945;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100544945:
  _umask(mVar3);
  if (*(int *)*param_1 != -1) {
    *(undefined1 *)((int *)*param_1 + 1) = 1;
    QFileInfo::operator=((QFileInfo *)(param_1 + 1),param_3);
    *(undefined1 *)(param_1 + 2) = 0;
    *(char *)((long)param_1 + 0x11) = param_4;
    iVar4 = FUN_100544b80(param_1,param_2,param_5);
    if (iVar4 == 0) {
      return 0;
    }
    _close(*(int *)*param_1);
    *(undefined4 *)*param_1 = 0xffffffff;
    return iVar4;
  }
  QFileInfo::absoluteFilePath();
  QString::toUtf8();
  if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f);
  }
  pQVar2 = local_50;
  lVar1 = *(long *)(local_50 + 0x10);
  piVar5 = ___error();
  FUN_1008e3970("","TransMem",0,"Failed to open file %s (%d)",pQVar2 + lVar1,*piVar5);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100544a4d;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100544a4d:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100544a7d;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100544a7d:
  piVar5 = ___error();
  return *piVar5;
}

