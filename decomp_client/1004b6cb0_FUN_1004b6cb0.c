
QString * FUN_1004b6cb0(QString *param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  switch(param_3) {
  case 1:
    if (param_4 >> 8 == 8) {
      if (param_4 < 0x80e) {
        QMetaObject::tr((char *)&local_38,(char *)&PTR_PTR_1022169d0,0x1df91c4);
        QString::operator=(param_1,&local_38);
        if (*(int *)local_38.field0_0x0 != -1) {
          if (*(int *)local_38.field0_0x0 != 0) {
            LOCK();
            *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
            UNLOCK();
            if (*(int *)local_38.field0_0x0 != 0) {
              return param_1;
            }
            local_19 = 0;
          }
          QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
        }
      }
      else {
        QMetaObject::tr((char *)&local_30,(char *)&PTR_PTR_1022169d0,0x1df9190);
        QString::operator=(param_1,&local_30);
        if (*(int *)local_30.field0_0x0 != -1) {
          if (*(int *)local_30.field0_0x0 != 0) {
            LOCK();
            *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
            UNLOCK();
            if (*(int *)local_30.field0_0x0 != 0) {
              return param_1;
            }
            local_19 = 0;
          }
          QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
        }
      }
    }
    else if (param_4 >> 8 == 7) {
      QMetaObject::tr((char *)&local_28,(char *)&PTR_PTR_1022169d0,0x1df9172);
      QString::operator=(param_1,&local_28);
      if (*(int *)local_28.field0_0x0 != -1) {
        if (*(int *)local_28.field0_0x0 != 0) {
          LOCK();
          *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_28.field0_0x0 != 0) {
            return param_1;
          }
          local_19 = 0;
        }
        QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
      }
    }
    break;
  case 2:
    if ((param_4 & 0xffffff00) == 0x800) {
      QMetaObject::tr((char *)&local_40,(char *)&PTR_PTR_1022169d0,0x1df923a);
      QString::operator=(param_1,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_40.field0_0x0 != 0) {
            return param_1;
          }
          local_19 = 0;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
    }
    break;
  case 4:
    QMetaObject::tr((char *)&local_48,(char *)&PTR_PTR_1022169d0,0x1df9277);
    QString::operator=(param_1,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_48.field0_0x0 != 0) {
          return param_1;
        }
        local_19 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
    break;
  case 8:
    if (param_4 < 0x80e) {
      QMetaObject::tr((char *)&local_58,(char *)&PTR_PTR_1022169d0,0x1df92e7);
      QString::operator=(param_1,&local_58);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_58.field0_0x0 != 0) {
            return param_1;
          }
          local_19 = 0;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
    }
    else {
      QMetaObject::tr((char *)&local_50,(char *)&PTR_PTR_1022169d0,0x1df92b9);
      QString::operator=(param_1,&local_50);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_50.field0_0x0 != 0) {
            return param_1;
          }
          local_19 = 0;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
    }
  }
  return param_1;
}

