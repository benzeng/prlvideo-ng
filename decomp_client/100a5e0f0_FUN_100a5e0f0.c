
void FUN_100a5e0f0(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_38 [24];
  QString local_20;
  undefined1 local_11;
  
  FUN_100a5cae0(local_38);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  cVar1 = FUN_100a51b90(&local_40);
  if (cVar1 == '\0') {
    QString::fromUtf8_helper((char *)&local_20,0x1e3d3fa);
    QString::operator=(&local_40,&local_20);
    if (*(int *)local_20.field0_0x0 != -1) {
      if (*(int *)local_20.field0_0x0 != 0) {
        LOCK();
        *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
        local_11 = *(int *)local_20.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_100a5e16f;
      }
      QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
    }
  }
LAB_100a5e16f:
  local_48 = (QArrayData *)local_40.field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_11 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  FUN_100a5ce90(local_38,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_11 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100a5e1c5;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100a5e1c5:
  uVar2 = FUN_100a52130(&local_40);
  FUN_100a61730(&local_50,uVar2);
  FUN_100a5ce80(local_38,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_11 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100a5e216;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100a5e216:
  FUN_100a5d230(&local_60,local_38);
  QString::toUtf8();
  QByteArray::QByteArray((QByteArray *)&local_68,(char *)(local_58 + *(long *)(local_58 + 0x10)),-1)
  ;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_11 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100a5e276;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100a5e276:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_11 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100a5e2a6;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100a5e2a6:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_11 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100a5e2d6;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100a5e2d6:
  FUN_100a5ccc0(local_38);
  FUN_100a5e510(param_1,&local_68,4);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return;
      }
      local_38[0] = 0;
    }
    QArrayData::deallocate(local_68,1,8);
  }
  return;
}

