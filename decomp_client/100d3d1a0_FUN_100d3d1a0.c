
void FUN_100d3d1a0(QString *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  puVar1 = PTR_shared_null_1021e1288;
  auVar2._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar2._0_8_ = PTR_shared_null_1021e1288;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])param_1 = auVar2;
  param_1[3].field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  QString::fromUtf8_helper((char *)&local_30,0x1e41978);
  QString::operator=(param_1,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d3d21b;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100d3d21b:
  param_1[2].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  local_38 = (QArrayData *)*param_2;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_21 = *(int *)local_38 != 0;
    UNLOCK();
  }
  FUN_100d3d3a0(param_1,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

