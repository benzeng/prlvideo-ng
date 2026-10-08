
void FUN_100276f00(QObject *param_1,undefined8 *param_2)

{
  int *piVar1;
  QString local_28;
  undefined1 local_1b;
  undefined1 local_1a;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined **)param_1 = PTR_DAT_1021e17d0 + 0x10;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x10) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_1b = *piVar1 != 0;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x20) = 0x80000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined **)param_1 = &DAT_1021ef3a0;
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FileDownloadInfo::FileDownloadInfo((FileDownloadInfo *)(param_1 + 0x30),&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_1a = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return;
}

