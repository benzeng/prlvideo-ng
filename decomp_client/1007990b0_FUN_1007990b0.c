
undefined8 * FUN_1007990b0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  QString local_e8;
  QString local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QString local_c8;
  QString local_c0;
  QString local_b8;
  QString local_b0;
  QString local_a8;
  QString local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulong local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  puVar2 = PTR_shared_null_1021e1288;
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  lVar1 = *(long *)(param_2 + 0x40);
  local_40 = *(ulong *)(lVar1 + 0x180);
  local_48 = *(undefined8 *)(lVar1 + 0x178);
  local_58 = *(undefined8 *)(lVar1 + 0x168);
  local_50 = *(undefined8 *)(lVar1 + 0x170);
  switch(*(undefined4 *)(lVar1 + 0x160)) {
  case 1:
  case 2:
    if (*(int *)(lVar1 + 0x188) == 0) {
      local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    }
    else {
      QMetaObject::tr((char *)&local_c0,PTR_staticMetaObject_1021e1520,0x1e171e6);
    }
    QString::operator=(&local_30,&local_c0);
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_21 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1007996a3;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
LAB_1007996a3:
    FUN_100799de0(&local_d0,&local_58);
    QMetaObject::tr((char *)&local_d8,PTR_staticMetaObject_1021e1520,0x1e1720c);
    local_c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_d0;
    if (1 < *(int *)local_d0 + 1U) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + 1;
      local_21 = *(int *)local_d0 != 0;
      UNLOCK();
    }
    QString::append(&local_c8);
    QString::operator=(&local_38,&local_c8);
    if (*(int *)local_c8.field0_0x0 != -1) {
      if (*(int *)local_c8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
        local_21 = *(int *)local_c8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10079974d;
      }
      QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
    }
LAB_10079974d:
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_21 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100799783;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_100799783:
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_21 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
    break;
  case 3:
    QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Downloading____1022708c8);
    QString::operator=(&local_30,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_21 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1007991b6;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_1007991b6:
    FUN_100799de0(&local_68,&local_58);
    uVar3 = local_40;
    if ((int)local_40 != 0) {
      FUN_100def650(&local_70,local_40 & 0xffffffff,1);
      QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,0x1dda881);
      QString::arg(&local_78,&local_80,&local_70,0,0x20);
      QString::append(&local_38);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_21 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100799256;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100799256:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_21 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100799286;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100799286:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_21 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1007992b6;
        }
        QArrayData::deallocate(local_70,2,8);
      }
    }
LAB_1007992b6:
    if ((int)(uVar3 >> 0x20) != 0) {
      FUN_100defbb0(&local_88,uVar3 >> 0x20,1);
      QMetaObject::tr((char *)&local_98,PTR_staticMetaObject_1021e1520,0x1dda88b);
      QString::arg(&local_90,&local_98,&local_88,0,0x20);
      QString::append(&local_38);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_21 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10079935b;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_10079935b:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_21 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100799391;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100799391:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_21 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1007993c1;
        }
        QArrayData::deallocate(local_88,2,8);
      }
    }
LAB_1007993c1:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_21 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate(local_68,2,8);
    }
    break;
  case 4:
    QMetaObject::tr((char *)&local_a0,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Unarchiving____1022708d0);
    QString::operator=(&local_30,&local_a0);
    if (*(int *)local_a0.field0_0x0 != -1) {
      if (*(int *)local_a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
        local_21 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100799469;
      }
      QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
    }
LAB_100799469:
    local_a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
    QString::operator=(&local_38,&local_a8);
    if (*(int *)local_a8.field0_0x0 != -1) {
      if (*(int *)local_a8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
        local_21 = *(int *)local_a8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
    }
    break;
  case 5:
    QMetaObject::tr((char *)&local_b0,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Registering____1022708d8);
    QString::operator=(&local_30,&local_b0);
    if (*(int *)local_b0.field0_0x0 != -1) {
      if (*(int *)local_b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
        local_21 = *(int *)local_b0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10079952e;
      }
      QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
    }
LAB_10079952e:
    local_b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
    QString::operator=(&local_38,&local_b8);
    if (*(int *)local_b8.field0_0x0 != -1) {
      if (*(int *)local_b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
        local_21 = *(int *)local_b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
    }
    break;
  case 9:
    QMetaObject::tr((char *)&local_e0,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_The_network_connection_has_been_l_102270920);
    QString::operator=(&local_30,&local_e0);
    if (*(int *)local_e0.field0_0x0 != -1) {
      if (*(int *)local_e0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
        local_21 = *(int *)local_e0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1007995f3;
      }
      QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
    }
LAB_1007995f3:
    FUN_100799de0(&local_e8,&local_58);
    QString::operator=(&local_38,&local_e8);
    if (*(int *)local_e8.field0_0x0 != -1) {
      if (*(int *)local_e8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
        local_21 = *(int *)local_e8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) break;
      }
      QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
    }
  }
  *param_1 = local_30.field0_0x0;
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_21 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  param_1[1] = local_38.field0_0x0;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_21 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10079981a;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10079981a:
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

