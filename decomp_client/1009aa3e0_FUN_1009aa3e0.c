
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1009aa3e0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  float fVar2;
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (0x3b < param_3) {
    iVar1 = 0;
    if (DAT_100e11208 <= (float)param_3 / _DAT_101c9c218) {
      iVar1 = (int)((float)param_3 / _DAT_101c9c218);
      if (iVar1 == 1) {
        QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,(int)PTR_s_1_hour_10227dfc8
                       );
        QString::append(&local_30);
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_21 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1009aa612;
          }
          QArrayData::deallocate(local_48,2,8);
        }
      }
      else {
        QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s__1_hours_10227dfd0);
        QString::arg(&local_50,&local_58,(long)iVar1,0,10,0x20);
        QString::append(&local_30);
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_21 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1009aa5e2;
          }
          QArrayData::deallocate(local_50,2,8);
        }
LAB_1009aa5e2:
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_21 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1009aa612;
          }
          QArrayData::deallocate(local_58,2,8);
        }
      }
LAB_1009aa612:
      param_3 = param_3 + iVar1 * -0xe10;
    }
    fVar2 = (float)param_3 / _DAT_101c9c21c;
    if (DAT_100e11208 <= fVar2) {
      if (0 < iVar1) {
        local_68 = (QArrayData *)QString::fromAscii_helper(" %1 ",4);
        QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,(int)PTR_s_and_10227dfd8);
        QString::arg(&local_60,&local_68,&local_70,0,0x20);
        QString::append(&local_30);
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_21 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1009aa6d5;
          }
          QArrayData::deallocate(local_60,2,8);
        }
LAB_1009aa6d5:
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_21 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1009aa705;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_1009aa705:
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_21 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1009aa745;
          }
          QArrayData::deallocate(local_68,2,8);
        }
      }
LAB_1009aa745:
      iVar1 = (int)fVar2;
      if (iVar1 == 1) {
        QMetaObject::tr((char *)&local_78,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_1_minute_10227dfe0);
        QString::append(&local_30);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_21 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1009aa867;
          }
          QArrayData::deallocate(local_78,2,8);
        }
      }
      else {
        QMetaObject::tr((char *)&local_88,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s__1_minutes_10227dfe8);
        QString::arg(&local_80,&local_88,(long)iVar1,0,10,0x20);
        QString::append(&local_30);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_21 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1009aa837;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_1009aa837:
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_21 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1009aa867;
          }
          QArrayData::deallocate(local_88,2,8);
        }
      }
    }
LAB_1009aa867:
    QMetaObject::tr((char *)&local_98,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s____1_remaining_10227dfc0);
    QString::arg(&local_90,&local_98,&local_30,0,0x20);
    QString::operator=(&local_30,&local_90);
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_21 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009aa8f1;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
LAB_1009aa8f1:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_21 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009aa927;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_1009aa927:
    *param_1 = local_30.field0_0x0;
    if (1 < *(int *)local_30.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
    }
    goto LAB_1009aa93f;
  }
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s____1_remaining_10227dfc0);
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_less_than_a_minute_10227dff0);
  QString::arg(param_1,&local_38,&local_40,0,0x20);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009aa495;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009aa495:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009aa93f;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1009aa93f:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return param_1;
}

