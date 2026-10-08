
QString * FUN_100251d80(QString *param_1,long param_2)

{
  undefined8 uVar1;
  QArrayData *local_b8;
  QArrayData *local_b0;
  undefined1 local_a8 [72];
  QString local_60 [2];
  undefined1 local_50 [47];
  undefined1 local_21;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (*(int *)(param_2 + 0x14) != 1) {
    return param_1;
  }
  local_b0 = (QArrayData *)QString::fromAscii_helper("store",5);
  uVar1 = FUN_10073fe80(&local_b0);
  local_b8 = (QArrayData *)QString::fromAscii_helper("desktop_upgrade",0xf);
  FUN_100743a40(local_a8,uVar1,&local_b8,param_2);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_21 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100251e38;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100251e38:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_21 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100251e6e;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100251e6e:
  QString::operator=(param_1,local_60);
  FUN_100252c80(local_50);
  FUN_100252e70(local_a8);
  return param_1;
}

