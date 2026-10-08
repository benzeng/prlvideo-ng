
void FUN_100d3d020(QString *param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  QString local_28;
  undefined1 local_1c;
  
  puVar1 = PTR_shared_null_1021e1288;
  auVar2._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar2._0_8_ = PTR_shared_null_1021e1288;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])param_1 = auVar2;
  param_1[3].field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  QString::fromUtf8_helper((char *)&local_28,0x1e41978);
  QString::operator=(param_1,&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) goto LAB_100d3d095;
      local_1c = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_100d3d095:
  param_1[2].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  return;
}

