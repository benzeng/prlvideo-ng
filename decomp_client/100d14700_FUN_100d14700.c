
void FUN_100d14700(QString *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_1a;
  undefined1 local_19;
  
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QString::operator=(param_1,&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_19 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d14752;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_100d14752:
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("c",1);
  QString::operator=(param_1 + 1,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d147a7;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100d147a7:
  *(undefined4 *)&param_1[2].field0_0x0 = 0x1000000;
  *(undefined1 *)&param_1[3].field0_0x0 = 1;
  local_38.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Untitled Virtual Machine",0x18)
  ;
  QString::operator=(param_1 + 0x11,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d1480a;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100d1480a:
  *(undefined4 *)((long)&param_1[2].field0_0x0 + 4) = 2;
  *(undefined1 *)((long)&param_1[3].field0_0x0 + 1) = 0;
  local_40 = (QArrayData *)QString::fromAscii_helper("70000000",8);
  uVar1 = QString::toInt((bool *)&local_40,(int)&local_1a);
  *(undefined4 *)((long)&param_1[3].field0_0x0 + 4) = uVar1;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d1486f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100d1486f:
  *(undefined1 *)&param_1[4].field0_0x0 = 0;
  *(undefined4 *)((long)&param_1[4].field0_0x0 + 4) = 1;
  *(undefined1 *)&param_1[5].field0_0x0 = 0;
  *(undefined4 *)((long)&param_1[5].field0_0x0 + 4) = 1;
  *(undefined1 *)((long)&param_1[0xb].field0_0x0 + 2) = 1;
  *(undefined1 *)&param_1[6].field0_0x0 = 0;
  local_48 = (QArrayData *)QString::fromAscii_helper("ffffffff",8);
  uVar1 = QString::toInt((bool *)&local_48,(int)&local_1a);
  *(undefined4 *)((long)&param_1[6].field0_0x0 + 4) = uVar1;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d148e7;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d148e7:
  *(undefined4 *)&param_1[7].field0_0x0 = 0xffffffff;
  *(undefined4 *)((long)&param_1[7].field0_0x0 + 4) = 0xffffffff;
  *(undefined4 *)((long)&param_1[8].field0_0x0 + 4) = 0xffffffff;
  *(undefined4 *)&param_1[9].field0_0x0 = 1;
  *(undefined4 *)((long)&param_1[9].field0_0x0 + 4) = 1;
  *(undefined4 *)&param_1[10].field0_0x0 = 0xffffffff;
  *(undefined4 *)((long)&param_1[10].field0_0x0 + 4) = 0;
  *(undefined1 *)&param_1[0xb].field0_0x0 = 0;
  *(undefined1 *)((long)&param_1[0xb].field0_0x0 + 1) = 1;
  *(undefined1 *)((long)&param_1[0xb].field0_0x0 + 4) = 0;
  *(undefined1 *)((long)&param_1[0xb].field0_0x0 + 5) = 1;
  *(undefined1 *)((long)&param_1[0xb].field0_0x0 + 6) = 1;
  *(undefined1 *)((long)&param_1[0xb].field0_0x0 + 7) = 0;
  *(undefined4 *)((long)&param_1[0xe].field0_0x0 + 4) = 1;
  *(undefined4 *)&param_1[0xf].field0_0x0 = 1;
  param_1[0xc].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x7a12000002710;
  param_1[0xd].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x400000001;
  *(undefined4 *)&param_1[0xe].field0_0x0 = 1;
  *(undefined4 *)((long)&param_1[0xf].field0_0x0 + 4) = 0xffffffff;
  *(undefined4 *)&param_1[0x10].field0_0x0 = 0xffffffff;
  uVar2 = FUN_100dc8a10(1,0);
  *(uint *)((long)&param_1[0x10].field0_0x0 + 4) = uVar2 >> 5 & 1;
  *(undefined1 *)&param_1[0x12].field0_0x0 = 0;
  return;
}

