
void FUN_1001eef00(undefined4 *param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  QString local_28;
  undefined1 local_1a;
  
  *param_1 = 0;
  puVar1 = PTR_shared_null_1021e1288;
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FileDownloadInfo::FileDownloadInfo((FileDownloadInfo *)(param_1 + 2),&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) goto LAB_1001eef5c;
      local_1a = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_1001eef5c:
  auVar2._8_4_ = (int)puVar1;
  auVar2._0_8_ = puVar1;
  auVar2._12_4_ = (int)((ulong)puVar1 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 10) = auVar2;
  *(undefined **)(param_1 + 0xe) = puVar1;
  return;
}

