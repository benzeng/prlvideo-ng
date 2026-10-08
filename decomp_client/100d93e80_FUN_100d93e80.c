
QString * FUN_100d93e80(QString *param_1,int param_2)

{
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (param_2 < 0xffff) {
    switch(param_2) {
    case 0:
      QString::fromUtf8_helper((char *)&local_50,0x1efed4b);
      QString::operator=(param_1,&local_50);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_19 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) break;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
      break;
    case 1:
      QString::fromUtf8_helper((char *)&local_48,0x1efed92);
      QString::operator=(param_1,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_19 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) break;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
      break;
    case 2:
      QString::fromUtf8_helper((char *)&local_40,0x1efedda);
      QString::operator=(param_1,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_19 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) break;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
      break;
    case 3:
      QString::fromUtf8_helper((char *)&local_38,0x1efee26);
      QString::operator=(param_1,&local_38);
      if (*(int *)local_38.field0_0x0 != -1) {
        if (*(int *)local_38.field0_0x0 != 0) {
          LOCK();
          *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
          local_19 = *(int *)local_38.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) break;
        }
        QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
      }
      break;
    case 4:
      goto switchD_100d93eb9_caseD_4;
    case 5:
      QString::fromUtf8_helper((char *)&local_30,0x1efee6d);
      QString::operator=(param_1,&local_30);
      if (*(int *)local_30.field0_0x0 != -1) {
        if (*(int *)local_30.field0_0x0 != 0) {
          LOCK();
          *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
          local_19 = *(int *)local_30.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) break;
        }
        QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
      }
      break;
    case 6:
      QString::fromUtf8_helper((char *)&local_28,0x1efeeb3);
      QString::operator=(param_1,&local_28);
      if (*(int *)local_28.field0_0x0 != -1) {
        if (*(int *)local_28.field0_0x0 != 0) {
          LOCK();
          *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
          local_19 = *(int *)local_28.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) break;
        }
        QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
      }
    }
  }
  else {
    if (param_2 != 0xffff) goto switchD_100d93eb9_default;
switchD_100d93eb9_caseD_4:
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Unknown",7);
    QString::operator=(param_1,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_19 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto switchD_100d93eb9_default;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
switchD_100d93eb9_default:
  if (2 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","cmn_utils",3,"Updater url = %s",local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        UNLOCK();
        if (*(int *)local_60 != 0) {
          return param_1;
        }
        local_19 = 0;
      }
      QArrayData::deallocate(local_60,1,8);
    }
  }
  return param_1;
}

