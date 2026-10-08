
QVariant *
FUN_1004335e0(QVariant *param_1,undefined8 param_2,undefined4 param_3,int param_4,int param_5)

{
  QString local_40;
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  if (param_4 == 1) {
    if (param_5 == 7) {
      QVariant::QVariant(param_1,1);
      return param_1;
    }
    if (param_5 == 0) {
      switch(param_3) {
      case 0:
        QMetaObject::tr((char *)&local_28,"",0x1ded987);
        QVariant::QVariant(param_1,&local_28);
        if (*(int *)local_28.field0_0x0 == -1) {
          return param_1;
        }
        local_40.field0_0x0 = local_28.field0_0x0;
        if (*(int *)local_28.field0_0x0 != 0) {
          LOCK();
          *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_28.field0_0x0 != 0) {
            return param_1;
          }
          local_19 = 0;
        }
        break;
      case 1:
        QMetaObject::tr((char *)&local_30,"",0x1e2e422);
        QVariant::QVariant(param_1,&local_30);
        if (*(int *)local_30.field0_0x0 == -1) {
          return param_1;
        }
        local_40.field0_0x0 = local_30.field0_0x0;
        if (*(int *)local_30.field0_0x0 != 0) {
          LOCK();
          *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_30.field0_0x0 != 0) {
            return param_1;
          }
          local_19 = 0;
        }
        break;
      case 2:
        QMetaObject::tr((char *)&local_38,"",0x1df420b);
        QVariant::QVariant(param_1,&local_38);
        if (*(int *)local_38.field0_0x0 == -1) {
          return param_1;
        }
        local_40.field0_0x0 = local_38.field0_0x0;
        if (*(int *)local_38.field0_0x0 != 0) {
          LOCK();
          *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_38.field0_0x0 != 0) {
            return param_1;
          }
          local_19 = 0;
        }
        break;
      case 3:
        QMetaObject::tr((char *)&local_40,"",0x1dc673b);
        QVariant::QVariant(param_1,&local_40);
        if (*(int *)local_40.field0_0x0 == -1) {
          return param_1;
        }
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_40.field0_0x0 != 0) {
            return param_1;
          }
          local_19 = 0;
        }
        break;
      default:
        goto switchD_10043363c_default;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      return param_1;
    }
  }
switchD_10043363c_default:
  (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
  (param_1->field0_0x0).field0_0x0.field7 = 0;
  return param_1;
}

