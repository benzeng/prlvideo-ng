
QString * FUN_100789a20(QString *param_1,uint param_2,char param_3)

{
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if (param_2 < 0xe10) {
    if (param_2 < 0x3c) {
      if (0x31 < param_2 - 10) {
        if (param_3 == '\0') {
          QString::number((uint)&local_68,param_2);
          QString::operator=(param_1,&local_68);
          if (*(int *)local_68.field0_0x0 == -1) {
            return param_1;
          }
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            UNLOCK();
            if (*(int *)local_68.field0_0x0 != 0) {
              return param_1;
            }
            local_21 = 0;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
          return param_1;
        }
        QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_100ba2140,0xaf507e);
        QString::operator=(param_1,&local_60);
        if (*(int *)local_60.field0_0x0 == -1) {
          return param_1;
        }
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_60.field0_0x0 != 0) {
            return param_1;
          }
          local_21 = 0;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
        return param_1;
      }
      if (param_3 == '\0') {
        QString::number((uint)&local_58,param_2);
        QString::operator=(param_1,&local_58);
        if (*(int *)local_58.field0_0x0 == -1) {
          return param_1;
        }
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_58.field0_0x0 != 0) {
            return param_1;
          }
          local_21 = 0;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        return param_1;
      }
      QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_100ba2140,0xaf506b);
      QString::operator=(param_1,&local_50);
      if (*(int *)local_50.field0_0x0 == -1) {
        return param_1;
      }
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_50.field0_0x0 != 0) {
          return param_1;
        }
        local_21 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      return param_1;
    }
    QString::number((uint)&local_40,param_2 / 0x3c);
    QString::operator=(param_1,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_21 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100789b43;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_100789b43:
    if (param_3 == '\0') {
      return param_1;
    }
    if (param_2 - 0x3c < 0x3c) {
      QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_100ba2140,0xaf505a);
    }
    else {
      QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_100ba2140,0xaf5062);
    }
    QString::append(param_1);
    if (*(int *)local_48 == -1) {
      return param_1;
    }
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
    return param_1;
  }
  QString::number((uint)&local_30,param_2 / 0xe10);
  QString::operator=(param_1,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100789aa9;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100789aa9:
  if (param_3 != '\0') {
    if (param_2 - 0xe10 < 0xe10) {
      QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_100ba2140,0xaf504d);
    }
    else {
      QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_100ba2140,0xaf5053);
    }
    QString::append(param_1);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return param_1;
        }
        local_21 = 0;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
  return param_1;
}

