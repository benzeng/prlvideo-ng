
/* WARNING: Removing unreachable block (ram,0x0001001befb7) */
/* WARNING: Removing unreachable block (ram,0x0001001befc5) */
/* WARNING: Removing unreachable block (ram,0x0001001befd1) */

void FUN_1001bebc0(long param_1,QString param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  Data *pDVar9;
  QArrayData *pQVar10;
  uint in_stack_fffffffffffffebc;
  Data_conflict local_108;
  undefined4 local_100;
  undefined1 local_f8;
  undefined1 local_e8 [24];
  QVariant local_d0;
  QArrayData *local_c0;
  int *local_b8 [4];
  QVariant local_98 [2];
  Data *local_80;
  long local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QNetworkProxy local_60 [8];
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  puVar3 = PTR_shared_null_1021e1288;
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_40 = (QArrayData *)QString::fromAscii_helper("http_proxy_host",0xf);
  lVar6 = CVmEvent::getEventParameter(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001bec37;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001bec37:
  if (lVar6 != 0) {
    CVmEventParameter::getParamValue();
    QString::operator=(&local_38,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_29 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001bec85;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_1001bec85:
  local_50 = (QArrayData *)QString::fromAscii_helper("http_proxy_port",0xf);
  lVar6 = CVmEvent::getEventParameter(param_2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001becd9;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001becd9:
  if (lVar6 == 0) goto LAB_1001bf167;
  CVmEventParameter::getParamValue();
  uVar4 = QString::toInt((bool *)&local_58,0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001bed30;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1001bed30:
  if ((uVar4 == 0) || (*(int *)(local_38.field0_0x0 + 4) == 0)) goto LAB_1001bf167;
  local_68 = (QArrayData *)puVar3;
  local_70 = (QArrayData *)puVar3;
  QNetworkProxy::QNetworkProxy(local_60,3,&local_38,uVar4 & 0xffff,&local_68,&local_70);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001bed9c;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1001bed9c:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001bedcc;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1001bedcc:
  local_78 = 0;
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x14) == 0) {
LAB_1001bee0e:
    lVar6 = FUN_1001be580(*(undefined8 *)(param_1 + 0x10),local_60);
  }
  else {
    plVar8 = (long *)(*(long *)(param_1 + 0x10) + 0x18);
    plVar7 = (long *)FUN_1001bfdb0(plVar8,local_60,0);
    if (*plVar7 == *plVar8) {
      plVar7 = &local_78;
    }
    else {
      plVar7 = (long *)(*plVar7 + 0x18);
    }
    lVar6 = *plVar7;
    if (lVar6 == 0) goto LAB_1001bee0e;
  }
  *(undefined1 *)(lVar6 + 0x2a) = 1;
  CMessageManager::instance();
  CMessageManager::getMessageWindowsForId((int)&local_80);
  iVar5 = *(int *)(local_80 + 0xc);
  iVar1 = *(int *)(local_80 + 8);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001bee62;
    }
    QListData::dispose(local_80);
  }
LAB_1001bee62:
  if (iVar5 == iVar1) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    local_c0 = (QArrayData *)
               QString::fromAscii_helper
                         ("1onNotificationClosed(PRL_RESULT,Messaging::ButtonID)",0x35);
    local_d0.field0_0x0.field1_0x8.bitField0_30 = 0x80000000;
    local_d0.field0_0x0.field0_0x0.field7 = 0;
    FUN_100a1c600(local_b8,uVar2,&local_c0,&local_d0);
    QVariant::~QVariant(&local_d0);
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_29 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001beefb;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_1001beefb:
    iVar5 = CMessageManager::instance();
    local_e8._16_8_ = puVar3;
    local_e8._8_8_ = PTR_shared_null_1021e15e8;
    local_e8._0_8_ = PTR_shared_null_1021e15e8;
    local_100 = 0x80000000;
    local_108.field7 = 0;
    local_f8 = 1;
    CMessageManager::showMessageBox
              (iVar5,(QString *)0x3c7a,(QStringList *)(local_e8 + 0x10),
               (QStringList *)(local_e8 + 8),(CSlotInfo *)local_e8,SUB81(local_b8,0),
               (QWidget *)((ulong)in_stack_fffffffffffffebc << 0x20),(CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_108);
    uVar2 = local_e8._0_8_;
    if (*(int *)local_e8._0_8_ != -1) {
      if (*(int *)local_e8._0_8_ != 0) {
        LOCK();
        *(int *)local_e8._0_8_ = *(int *)local_e8._0_8_ + -1;
        local_29 = *(int *)local_e8._0_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001bf061;
      }
      iVar5 = *(int *)(local_e8._0_8_ + 0xc);
      if (iVar5 != *(int *)(local_e8._0_8_ + 8)) {
        lVar6 = (long)*(int *)(local_e8._0_8_ + 8) * 8 + (long)iVar5 * -8;
        pDVar9 = (Data *)(local_e8._0_8_ + (long)iVar5 * 8 + 8);
        do {
          pQVar10 = *(QArrayData **)pDVar9;
          if (*(int *)pQVar10 == 0) {
LAB_1001bf040:
            QArrayData::deallocate(pQVar10,2,8);
          }
          else if (*(int *)pQVar10 != -1) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + -1;
            local_29 = *(int *)pQVar10 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar10 = *(QArrayData **)pDVar9;
              goto LAB_1001bf040;
            }
          }
          pDVar9 = pDVar9 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose((Data *)uVar2);
    }
LAB_1001bf061:
    uVar2 = local_e8._8_8_;
    if (*(int *)local_e8._8_8_ != -1) {
      if (*(int *)local_e8._8_8_ != 0) {
        LOCK();
        *(int *)local_e8._8_8_ = *(int *)local_e8._8_8_ + -1;
        local_29 = *(int *)local_e8._8_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001bf0f1;
      }
      iVar5 = *(int *)(local_e8._8_8_ + 0xc);
      if (iVar5 != *(int *)(local_e8._8_8_ + 8)) {
        lVar6 = (long)*(int *)(local_e8._8_8_ + 8) * 8 + (long)iVar5 * -8;
        pDVar9 = (Data *)(local_e8._8_8_ + (long)iVar5 * 8 + 8);
        do {
          pQVar10 = *(QArrayData **)pDVar9;
          if (*(int *)pQVar10 == 0) {
LAB_1001bf0d0:
            QArrayData::deallocate(pQVar10,2,8);
          }
          else if (*(int *)pQVar10 != -1) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + -1;
            local_29 = *(int *)pQVar10 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar10 = *(QArrayData **)pDVar9;
              goto LAB_1001bf0d0;
            }
          }
          pDVar9 = pDVar9 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose((Data *)uVar2);
    }
LAB_1001bf0f1:
    if (*(int *)local_e8._16_8_ != -1) {
      if (*(int *)local_e8._16_8_ != 0) {
        LOCK();
        *(int *)local_e8._16_8_ = *(int *)local_e8._16_8_ + -1;
        local_29 = *(int *)local_e8._16_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001bf127;
      }
      QArrayData::deallocate((QArrayData *)local_e8._16_8_,2,8);
    }
LAB_1001bf127:
    QVariant::~QVariant(local_98);
    if (local_b8[0] != (int *)0x0) {
      LOCK();
      *local_b8[0] = *local_b8[0] + -1;
      local_29 = *local_b8[0] != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_b8[0] != (int *)0x0)) {
        operator_delete(local_b8[0]);
      }
    }
  }
  QNetworkProxy::~QNetworkProxy(local_60);
LAB_1001bf167:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return;
}

