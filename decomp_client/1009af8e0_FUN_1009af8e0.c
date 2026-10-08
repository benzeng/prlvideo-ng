
void FUN_1009af8e0(undefined8 param_1,int param_2,QString *param_3,QString *param_4)

{
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  if (param_2 < 0x8b1a002) {
    if (2 < param_2 + 0xf74e9ff8U) {
      return;
    }
    QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s__1_has_detected_that__2_has_a_bu_10227e140);
    local_78 = (QArrayData *)QString::fromAscii_helper("Parallels Transporter",0x15);
    QString::arg(&local_68,&local_70,&local_78,0,0x20);
    local_80 = (QArrayData *)QString::fromAscii_helper("Parallels Transporter Agent",0x1b);
    QString::arg(&local_60,&local_68,&local_80,0,0x20);
    QString::operator=(param_3,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_21 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009af9c8;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_1009af9c8:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_21 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009af9f8;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_1009af9f8:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_21 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009afa28;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1009afa28:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_21 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009afa58;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_1009afa58:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_21 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009afa88;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1009afa88:
    QMetaObject::tr((char *)&local_88,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Please_synchronize_the_versions_a_10227e148);
    QString::operator=(param_4,&local_88);
    if (*(int *)local_88.field0_0x0 == -1) {
      return;
    }
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_88.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
  }
  else {
    switch(param_2) {
    case 0x8b1a002:
    case 0x8b1a007:
      QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_You_entered_an_invalid_name_or_p_10227e068);
      QString::operator=(param_3,&local_30);
      if (*(int *)local_30.field0_0x0 != -1) {
        if (*(int *)local_30.field0_0x0 != 0) {
          LOCK();
          *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
          local_21 = *(int *)local_30.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1009afb69;
        }
        QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
      }
LAB_1009afb69:
      QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Please_check_your_name_and_passw_10227e070);
      QString::operator=(param_4,&local_38);
      if (*(int *)local_38.field0_0x0 == -1) {
        return;
      }
      local_88.field0_0x0 = local_38.field0_0x0;
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_38.field0_0x0 != 0) {
          return;
        }
        local_21 = 0;
      }
      break;
    default:
      goto switchD_1009afb07_caseD_8b1a003;
    case 0x8b1a004:
      QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Administrator_s_password_is_requ_10227e078);
      QString::operator=(param_3,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_21 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1009afc2b;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_1009afc2b:
      QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_You_need_to_type_an_administrato_10227e080);
      QString::operator=(param_4,&local_48);
      if (*(int *)local_48.field0_0x0 == -1) {
        return;
      }
      local_88.field0_0x0 = local_48.field0_0x0;
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_48.field0_0x0 != 0) {
          return;
        }
        local_21 = 0;
      }
      break;
    case 0x8b1a005:
      QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_You_entered_an_invalid_name_or_p_10227e088);
      QString::operator=(param_3,&local_50);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_21 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1009afced;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_1009afced:
      QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Make_sure_that_you_typed_the_pas_10227e090);
      QString::operator=(param_4,&local_58);
      if (*(int *)local_58.field0_0x0 == -1) {
        return;
      }
      local_88.field0_0x0 = local_58.field0_0x0;
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_58.field0_0x0 != 0) {
          return;
        }
        local_21 = 0;
      }
    }
  }
  QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
switchD_1009afb07_caseD_8b1a003:
  return;
}

