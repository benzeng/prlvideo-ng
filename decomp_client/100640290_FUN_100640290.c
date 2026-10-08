
void FUN_100640290(QString *param_1)

{
  int *piVar1;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  char local_20;
  undefined7 uStack_1f;
  undefined1 local_11;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QString::fromUtf8_helper((char *)&local_38,0x1e0a3ee);
  QString::append(&local_40);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006402f9;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006402f9:
  local_58 = (QArrayData *)
             QString::fromAscii_helper
                       ("<span style=\"font-size:15pt;\"><b>%1<sup>&reg;</sup> %2</b></span>",0x41);
  FUN_1001c7310(&local_60);
  QString::arg(&local_50,&local_58,&local_60,0,0x20);
  QString::arg(&local_48,&local_50,0xc,0,10,0x20);
  QString::append(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_11 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10064038d;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10064038d:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_11 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006403bd;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006403bd:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_11 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006403ed;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1006403ed:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_11 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10064041d;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10064041d:
  local_70 = (QArrayData *)
             QString::fromAscii_helper("<span style=\"font-size:15pt;\"><b> %1</b></span>",0x2f);
  QMetaObject::tr((char *)&local_78,PTR_staticMetaObject_1021e1520,0x1dd2c37);
  QString::arg(&local_68,&local_70,&local_78,0,0x20);
  QString::append(&local_40);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_11 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006404a7;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1006404a7:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_11 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006404d7;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1006404d7:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_11 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100640507;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100640507:
  QString::fromUtf8_helper((char *)&local_30,0x1ddad42);
  QString::append(&local_40);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100640559;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100640559:
  QString::fromUtf8_helper((char *)&local_28,0x1e0a499);
  QString::append(&local_40);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006405ab;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1006405ab:
  QString::fromUtf8_helper(&local_20,0x1e0a4fd);
  QString::append(&local_40);
  piVar1 = (int *)CONCAT71(uStack_1f,local_20);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      local_11 = *piVar1 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006405fd;
    }
    QArrayData::deallocate((QArrayData *)CONCAT71(uStack_1f,local_20),2,8);
  }
LAB_1006405fd:
  QLabel::setText(param_1);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_20 = '\0';
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

