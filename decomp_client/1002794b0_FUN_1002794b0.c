
void FUN_1002794b0(long *param_1,undefined8 param_2,int param_3)

{
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  if (param_3 != 1) {
                    /* WARNING: Could not recover jumptable at 0x000100279590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000275);
    return;
  }
  FileDownloadInfo::destinationFilePartPath();
  QFile::remove(&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100279514;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100279514:
  FileDownloadInfo::destinationFilePath();
  QFile::remove(&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10027955b;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10027955b:
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

