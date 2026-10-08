
undefined8 * FUN_10012f890(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  if ((param_3 == 0) || (lVar2 = FUN_100b3f650(param_3), lVar2 == 0)) {
    *param_1 = PTR_shared_null_1021e1288;
    return param_1;
  }
  iVar1 = FUN_10012f780(lVar2);
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (iVar1 == 0) {
    QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s___1__is_a_Bridged_Ethernet_netwo_10226ea40);
    QString::operator=(&local_28,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_19 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10012fa8c;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
  else if (iVar1 == 2) {
    QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s___1__is_a_Shared_network__It_all_10226ea38);
    QString::operator=(&local_28,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_19 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10012fa8c;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
  else if (iVar1 == 1) {
    QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s___1__is_a_Host_Only_network__It_a_10226ea48);
    QString::operator=(&local_28,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_19 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10012fa8c;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
  else {
    QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,0x1dc0b26);
    QString::operator=(&local_28,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_19 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10012fa8c;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_10012fa8c:
  local_50 = (QArrayData *)local_28.field0_0x0;
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_19 = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  CVirtualNetwork::getNetworkID();
  QString::arg(param_1,&local_50,&local_58,0,0x20);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10012faf9;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10012faf9:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10012fb29;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10012fb29:
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
  return param_1;
}

