
char FUN_1000f2d70(undefined8 param_1,int param_2)

{
  long lVar1;
  char cVar2;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined1 local_58 [8];
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QMutex::lock();
  lVar1 = DAT_1023108a8;
  if (DAT_1023108a8 != 0) {
    DAT_1023108b0 = DAT_1023108b0 + 1;
  }
  QMutex::unlock();
  if (lVar1 == 0) {
    FUN_100df99c0("SGAC","prl_client_app",0,"Failed to get CSharedAppsDsp instance");
LAB_1000f2deb:
    if (param_2 == 8) {
      QString::fromUtf8_helper((char *)&local_40,0x1dbf450);
      QString::operator=(&local_50,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_29 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1000f2efc;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
    }
    else if (param_2 == 9) {
      QString::fromUtf8_helper((char *)&local_48,0x1dbf438);
      QString::operator=(&local_50,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_29 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1000f2efc;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
    }
    else {
      QString::fromUtf8_helper((char *)&local_38,0x1dbf468);
      QString::operator=(&local_50,&local_38);
      if (*(int *)local_38.field0_0x0 != -1) {
        if (*(int *)local_38.field0_0x0 != 0) {
          LOCK();
          *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
          local_29 = *(int *)local_38.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1000f2efc;
        }
        QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
      }
    }
  }
  else if (*(int *)(lVar1 + 0x90) == 2) goto LAB_1000f2deb;
LAB_1000f2efc:
  cVar2 = '\x03';
  if (*(int *)(local_50.field0_0x0 + 4) == 0) goto LAB_1000f2fc0;
  QString::toUtf8();
  FUN_100ab74e0(local_58,local_60 + *(long *)(local_60 + 0x10));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000f2f5d;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_1000f2f5d:
  QString::toUtf8();
  cVar2 = FUN_100ab78d0(local_58,local_68 + *(long *)(local_68 + 0x10));
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000f2fac;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_1000f2fac:
  FUN_100ab75f0(local_58);
  cVar2 = (cVar2 == '\0') * '\x03';
LAB_1000f2fc0:
  if (lVar1 != 0) {
    FUN_100055290(&DAT_102310898);
  }
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) {
        return cVar2;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
  return cVar2;
}

