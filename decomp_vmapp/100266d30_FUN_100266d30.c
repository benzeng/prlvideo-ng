
QString * FUN_100266d30(QString *param_1)

{
  char cVar1;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  QMutex::lock();
  if (DAT_101115b30 == -1) {
    FUN_1002671c0();
  }
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  do {
    if (DAT_101115b30 == 0) {
      local_50 = (QArrayData *)QString::fromAscii_helper("",0);
      QString::arg(&local_48,&DAT_1011c37f0,&local_50,0,0x20);
      local_58 = (QArrayData *)QString::fromAscii_helper("",0);
      QString::arg(&local_40,&local_48,&local_58,0,0x20);
      QString::operator=(param_1,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100266f0f;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_100266f0f:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100266f3f;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_100266f3f:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100266f6f;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_100266f6f:
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100266fa0;
        }
        QArrayData::deallocate(local_50,2,8);
      }
    }
    else {
      local_70 = (QArrayData *)QString::fromAscii_helper("-",1);
      QString::arg(&local_68,&DAT_1011c37f0,&local_70,0,0x20);
      QString::arg(&local_60,&local_68,DAT_101115b30,0,10,0x20);
      QString::operator=(param_1,&local_60);
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100266e13;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
LAB_100266e13:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100266e43;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_100266e43:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100266fa0;
        }
        QArrayData::deallocate(local_70,2,8);
      }
    }
LAB_100266fa0:
    DAT_101115b30 = DAT_101115b30 + 1;
    cVar1 = QFile::exists(param_1);
    if (cVar1 == '\0') {
      QMutex::unlock();
      return param_1;
    }
  } while( true );
}

