
void FUN_1009b64f0(undefined8 param_1,int param_2,QString *param_3,QString *param_4)

{
  QString local_100;
  QString local_f8;
  QString local_f0;
  QString local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QString local_c0;
  QString local_b8;
  QString local_b0;
  QString local_a8;
  QString local_a0;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  if (param_2 < 0x8b17069) {
    switch(param_2) {
    case 0x8b17037:
      QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_An_error_occurred_while_collecti_10227e160);
      QString::operator=(param_3,&local_38);
      if (*(int *)local_38.field0_0x0 != -1) {
        if (*(int *)local_38.field0_0x0 != 0) {
          LOCK();
          *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
          local_29 = *(int *)local_38.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1009b6962;
        }
        QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
      }
LAB_1009b6962:
      QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_The_necessary_drivers_for__1_cou_10227e168);
      local_58 = (QArrayData *)QString::fromAscii_helper("Parallels Transporter Agent",0x1b);
      QString::arg(&local_48,&local_50,&local_58,0,0x20);
      local_60 = (QArrayData *)QString::fromAscii_helper("Parallels Transporter Agent",0x1b);
      QString::arg(&local_40,&local_48,&local_60,0,0x20);
      QString::operator=(param_4,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_29 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1009b6a1c;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_1009b6a1c:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_29 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1009b6a4c;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_1009b6a4c:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_29 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1009b6a7c;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_1009b6a7c:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_29 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1009b6aac;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_1009b6aac:
      if (*(int *)local_50 == -1) {
        return;
      }
      local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_50;
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        if (*(int *)local_50 != 0) {
          return;
        }
        local_29 = 0;
      }
      goto LAB_1009b6e5d;
    case 0x8b17038:
      QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_An_error_occurred_while_collecti_10227e170);
      QString::operator=(param_3,&local_68);
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_29 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1009b6b3e;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_1009b6b3e:
      QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_The_necessary_drivers_for__1_cou_10227e178);
      local_88 = (QArrayData *)QString::fromAscii_helper("Parallels Transporter Agent",0x1b);
      QString::arg(&local_78,&local_80,&local_88,0,0x20);
      local_90 = (QArrayData *)QString::fromAscii_helper("Parallels Transporter Agent",0x1b);
      QString::arg(&local_70,&local_78,&local_90,0,0x20);
      QString::operator=(param_4,&local_70);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_29 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1009b6bfe;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
LAB_1009b6bfe:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_29 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1009b6c34;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_1009b6c34:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_29 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1009b6c64;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1009b6c64:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_29 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1009b6c94;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1009b6c94:
      if (*(int *)local_80 == -1) {
        return;
      }
      local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_80;
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        UNLOCK();
        if (*(int *)local_80 != 0) {
          return;
        }
        local_29 = 0;
      }
      goto LAB_1009b6e5d;
    case 0x8b17039:
      QMetaObject::tr((char *)&local_98,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_An_error_occurred_while_collecti_10227e180);
      QString::operator=(param_3,&local_98);
      if (*(int *)local_98.field0_0x0 != -1) {
        if (*(int *)local_98.field0_0x0 != 0) {
          LOCK();
          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
          local_29 = *(int *)local_98.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1009b6d2f;
        }
        QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
      }
LAB_1009b6d2f:
      QMetaObject::tr((char *)&local_a0,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_You_do_not_have_the_permission_t_10227e188);
      QString::operator=(param_4,&local_a0);
      if (*(int *)local_a0.field0_0x0 == -1) {
        return;
      }
      local_100.field0_0x0 = local_a0.field0_0x0;
      if (*(int *)local_a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_a0.field0_0x0 != 0) {
          return;
        }
        local_29 = 0;
      }
      goto LAB_1009b6e5d;
    case 0x8b1703a:
      QMetaObject::tr((char *)&local_a8,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_An_error_occurred_while_collecti_10227e190);
      QString::operator=(param_3,&local_a8);
      if (*(int *)local_a8.field0_0x0 != -1) {
        if (*(int *)local_a8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
          local_29 = *(int *)local_a8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1009b6e03;
        }
        QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
      }
LAB_1009b6e03:
      QMetaObject::tr((char *)&local_b0,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Unable_to_collect_system_data_on_10227e198);
      QString::operator=(param_4,&local_b0);
      if (*(int *)local_b0.field0_0x0 == -1) {
        return;
      }
      local_100.field0_0x0 = local_b0.field0_0x0;
      if (*(int *)local_b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_b0.field0_0x0 != 0) {
          return;
        }
        local_29 = 0;
      }
      goto LAB_1009b6e5d;
    case 0x8b1703b:
    case 0x8b1703c:
      QMetaObject::tr((char *)&local_b8,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_An_error_occurred_while_collecti_10227e150);
      QString::operator=(param_3,&local_b8);
      if (*(int *)local_b8.field0_0x0 != -1) {
        if (*(int *)local_b8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
          local_29 = *(int *)local_b8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1009b659c;
        }
        QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
      }
LAB_1009b659c:
      QMetaObject::tr((char *)&local_d0,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s__1_cannot_access_the_required_li_10227e158);
      local_d8 = (QArrayData *)QString::fromAscii_helper("Parallels Transporter Agent",0x1b);
      QString::arg(&local_c8,&local_d0,&local_d8,0,0x20);
      local_e0 = (QArrayData *)QString::fromAscii_helper("Parallels Transporter Agent",0x1b);
      QString::arg(&local_c0,&local_c8,&local_e0,0,0x20);
      QString::operator=(param_4,&local_c0);
      if (*(int *)local_c0.field0_0x0 != -1) {
        if (*(int *)local_c0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
          local_29 = *(int *)local_c0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1009b667a;
        }
        QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
      }
LAB_1009b667a:
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_29 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1009b66b0;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_1009b66b0:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_29 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1009b66e6;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_1009b66e6:
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_29 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1009b671c;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_1009b671c:
      if (*(int *)local_d0 == -1) {
        return;
      }
      local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_d0;
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        UNLOCK();
        if (*(int *)local_d0 != 0) {
          return;
        }
        local_29 = 0;
      }
      goto LAB_1009b6e5d;
    }
  }
  else if (param_2 == 0x8b17069) {
    QMetaObject::tr((char *)&local_e8,PTR_staticMetaObject_1021e1520,0x1e35306);
    QString::operator=(param_3,&local_e8);
    if (*(int *)local_e8.field0_0x0 != -1) {
      if (*(int *)local_e8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
        local_29 = *(int *)local_e8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1009b67c6;
      }
      QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
    }
LAB_1009b67c6:
    QMetaObject::tr((char *)&local_f0,PTR_staticMetaObject_1021e1520,0x1e35328);
    QString::operator=(param_4,&local_f0);
    if (*(int *)local_f0.field0_0x0 == -1) {
      return;
    }
    local_100.field0_0x0 = local_f0.field0_0x0;
    if (*(int *)local_f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_f0.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    goto LAB_1009b6e5d;
  }
  QMetaObject::tr((char *)&local_f8,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_An_error_occurred_while_collecti_10227e130);
  QString::operator=(param_3,&local_f8);
  if (*(int *)local_f8.field0_0x0 != -1) {
    if (*(int *)local_f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
      local_29 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009b6897;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
  }
LAB_1009b6897:
  QMetaObject::tr((char *)&local_100,PTR_staticMetaObject_1021e1520,(int)PTR_s__10227e138);
  QString::operator=(param_4,&local_100);
  if (*(int *)local_100.field0_0x0 == -1) {
    return;
  }
  if (*(int *)local_100.field0_0x0 != 0) {
    LOCK();
    *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
    UNLOCK();
    if (*(int *)local_100.field0_0x0 != 0) {
      return;
    }
    local_29 = 0;
  }
LAB_1009b6e5d:
  QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
  return;
}

