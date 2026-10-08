
QString * FUN_1005b8bb0(QString *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  QString local_90;
  QArrayData *local_88;
  uint *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  undefined1 local_68 [32];
  QArrayData *local_48;
  QTypedArrayData<unsigned_short> *local_40;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_70 = (QArrayData *)QString::fromAscii_helper("os.win.preview",0xe);
  uVar1 = FUN_100748240();
  uVar1 = FUN_100748290(uVar1,&local_70);
  FUN_100746ae0(local_68,uVar1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005b8c23;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1005b8c23:
  if (*(int *)(local_40 + 4) != 0) {
    param_1->field0_0x0 = local_40;
    if (1 < *(int *)local_40 + 1U) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
    }
    goto LAB_1005b8e2b;
  }
  local_78 = local_48;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_19 = *(int *)local_48 != 0;
    UNLOCK();
  }
  local_88 = (QArrayData *)QString::fromAscii_helper(" ",1);
  QString::split(&local_80,&local_78,&local_88,0,1);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_19 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005b8cc1;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1005b8cc1:
  uVar2 = local_80[2];
  if ((int)(local_80[3] - uVar2) < 2) {
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  }
  else {
    if (1 < *local_80) {
      FUN_100036c40(&local_80,local_80[1]);
      uVar2 = local_80[2];
    }
    local_90.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(local_80 + (long)(int)uVar2 * 2 + 4)
    ;
    if (1 < *(int *)local_90.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + 1;
      local_19 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_28,0x1e31adc);
    QString::append(&local_90);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        local_19 = *(int *)local_28 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1005b8d63;
      }
      QArrayData::deallocate(local_28,2,8);
    }
LAB_1005b8d63:
    if (1 < *local_80) {
      FUN_100036c40(&local_80,local_80[1]);
    }
    param_1->field0_0x0 = local_90.field0_0x0;
    if (1 < *(int *)local_90.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + 1;
      local_19 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(param_1);
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_19 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1005b8df2;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
  }
LAB_1005b8df2:
  FUN_100039a80(&local_80);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_19 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005b8e2b;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1005b8e2b:
  FUN_10012ac30(local_68);
  return param_1;
}

