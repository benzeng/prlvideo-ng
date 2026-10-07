
void FUN_1005446a0(undefined8 *param_1)

{
  undefined4 *puVar1;
  QFileInfo local_40 [8];
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  puVar1 = (undefined4 *)*param_1;
  if (*(char *)(puVar1 + 1) == '\0') goto LAB_100544782;
  if (*(char *)(param_1 + 2) != '\0') {
    QFileInfo::absoluteFilePath();
    QString::toUtf8();
    if ((1 < *(uint *)local_30) || (*(long *)(local_30 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_30,*(uint *)(local_30 + 4) + 1,*(uint *)(local_30 + 8) >> 0x1f)
      ;
    }
    _unlink((char *)(local_30 + *(long *)(local_30 + 0x10)));
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100544745;
      }
      QArrayData::deallocate(local_30,1,8);
    }
LAB_100544745:
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100544775;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_100544775:
  _close(*(int *)*param_1);
  puVar1 = (undefined4 *)*param_1;
LAB_100544782:
  *puVar1 = 0xffffffff;
  QFileInfo::QFileInfo(local_40);
  QFileInfo::operator=((QFileInfo *)(param_1 + 1),local_40);
  QFileInfo::~QFileInfo(local_40);
  return;
}

