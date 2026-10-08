
void FUN_1004b3660(long param_1)

{
  QString *pQVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  Data *local_30;
  undefined1 local_21;
  
  local_30 = (Data *)PTR_shared_null_1021e15e8;
  uVar4 = FUN_10044e660();
  cVar2 = FUN_1003c0600(uVar4);
  if (cVar2 == '\0') {
    local_38 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x58);
    FUN_100359270(&local_30,&local_38);
    local_40 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x48);
    FUN_100359270(&local_30,&local_40);
  }
  uVar4 = FUN_10044e660(param_1);
  cVar2 = FUN_1003c0630(uVar4);
  if (cVar2 == '\0') {
    local_48 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x68);
    FUN_100359270(&local_30,&local_48);
  }
  local_68 = local_30;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 == 0) {
      QListData::detach((int)&local_68);
      lVar5 = (long)*(int *)(local_68 + 8);
      if ((local_30 + (long)*(int *)(local_30 + 8) * 8 != local_68 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_68 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_68 + 0xc))
         ) {
        _memcpy(local_68 + lVar5 * 8 + 0x10,local_30 + (long)*(int *)(local_30 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    do {
      local_50 = 1;
      (**(code **)(**(long **)local_60 + 0x68))(*(long **)local_60,0);
      QLayout::removeWidget(*(QWidget **)(*(long *)(param_1 + 0x68) + 8));
      local_60 = local_60 + 8;
    } while (local_60 != local_58);
  }
  local_50 = 1;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004b37e0;
    }
    QListData::dispose(local_68);
  }
LAB_1004b37e0:
  iVar3 = FUN_10044e480(param_1);
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x68) + 0x50);
  if (iVar3 != 7) {
    QMetaObject::tr((char *)&local_98,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Share_Mac_camera_with__1_10226ecb8);
    FUN_10044e480(param_1);
    EnumUtils::OsTypeToString((uint)&local_a0);
    QString::arg(&local_90,&local_98,&local_a0,0,0x20);
    QAbstractButton::setText(pQVar1);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_21 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1004b39f8;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1004b39f8:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_21 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1004b3a2e;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_1004b3a2e:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_21 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1004b3a64;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_1004b3a64:
    pQVar1 = *(QString **)(*(long *)(param_1 + 0x68) + 0x68);
    QMetaObject::tr((char *)&local_b0,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Share_Bluetooth_devices_with__1_10226ecc0);
    FUN_10044e480(param_1);
    EnumUtils::OsTypeToString((uint)&local_b8);
    QString::arg(&local_a8,&local_b0,&local_b8,0,0x20);
    QAbstractButton::setText(pQVar1);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_21 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1004b3b0e;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_1004b3b0e:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_21 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1004b3b44;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_1004b3b44:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_21 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1004b3b7a;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
    goto LAB_1004b3b7a;
  }
  QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Share_Mac_camera_10226ecd0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004b3857;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1004b3857:
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x68) + 0x68);
  QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Share_Bluetooth_devices_10226ecc8);
  FUN_10044e480(param_1);
  EnumUtils::OsTypeToString((uint)&local_88);
  QString::arg(&local_78,&local_80,&local_88,0,0x20);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004b38e9;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1004b38e9:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_21 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004b3919;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1004b3919:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004b3b7a;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1004b3b7a:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QListData::dispose(local_30);
  }
  return;
}

