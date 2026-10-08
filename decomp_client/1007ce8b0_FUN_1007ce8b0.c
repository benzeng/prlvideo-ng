
void FUN_1007ce8b0(QString *param_1)

{
  QString QVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  long lVar5;
  GuiUsage *this;
  void *pvVar6;
  QArrayData *pQVar7;
  QObject *pQVar8;
  QTypedArrayData<unsigned_short> *pQVar9;
  QTypedArrayData<unsigned_short> *pQVar10;
  uint uVar11;
  int *piVar12;
  bool bVar13;
  long local_130;
  AnonymousUnion0 local_128;
  undefined *local_120;
  QArrayData *local_118;
  QString local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QDateTime local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  Data_conflict local_d8;
  undefined4 local_d0;
  QVariant local_c8;
  QArrayData *local_b8;
  QArrayData *local_b0;
  int *local_a8;
  int *local_a0;
  int *local_98;
  uint local_90;
  int *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  cVar4 = QDateTime::isValid();
  if (cVar4 != '\0') {
    QDateTime::currentDateTime();
    lVar5 = QDateTime::secsTo((QDateTime *)(param_1 + 0x43));
    QDateTime::~QDateTime(&local_f8);
    if (lVar5 < 300) {
      CBaseNode::toString(false,(bool)((char)param_1 + '\x10'));
      CCepStatisticsCollector::collected(param_1);
      if (*(int *)local_100 == -1) {
        return;
      }
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        UNLOCK();
        if (*(int *)local_100 != 0) {
          return;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_100,2,8);
      return;
    }
  }
  QVar1.field0_0x0 = (QTypedArrayData<unsigned_short> *)(param_1 + 2);
  FUN_10011b320(&local_108);
  ClientStatistics::setHostDisplays(QVar1);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007ce9c9;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1007ce9c9:
  local_110.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_100a04400(&local_58);
  FUN_1007caa20(&local_60);
  QSettings::QSettings((QSettings *)&local_50,&local_58,&local_60,(QObject *)0x0);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cea2c;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1007cea2c:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cea5c;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1007cea5c:
  FUN_1007d2760(&local_78);
  local_80 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_78;
  if (1 < *(int *)local_78 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_31 = *(int *)local_78 != 0;
    UNLOCK();
  }
  QString::append(&local_70);
  local_68.field0_0x0 = local_70.field0_0x0;
  if (1 < *(int *)local_70.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
    local_31 = *(int *)local_70.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e18ce2);
  QString::append(&local_68);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007ceb0b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007ceb0b:
  QSettings::beginGroup((QString *)&local_50);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007ceb48;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1007ceb48:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007ceb78;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1007ceb78:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007ceba8;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1007ceba8:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cebd8;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1007cebd8:
  QSettings::allKeys();
  local_a8 = local_88;
  if (*local_88 != -1) {
    if (*local_88 == 0) {
      QListData::detach((int)&local_a8);
      iVar2 = local_a8[2];
      if (iVar2 != local_a8[3]) {
        local_88 = local_88 + (long)local_88[2] * 2 + 4;
        piVar12 = local_a8 + (long)iVar2 * 2 + 4;
        lVar5 = (long)local_a8[3] * 8 + (long)iVar2 * -8;
        do {
          piVar3 = *(int **)local_88;
          *(int **)piVar12 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_31 = *piVar3 != 0;
            UNLOCK();
          }
          piVar12 = piVar12 + 2;
          local_88 = local_88 + 2;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_88 = *local_88 + 1;
      local_31 = *local_88 != 0;
      UNLOCK();
    }
  }
  local_a0 = local_a8 + (long)local_a8[2] * 2 + 4;
  local_98 = local_a8 + (long)local_a8[3] * 2 + 4;
  local_90 = 1;
  if (local_a8[2] != local_a8[3]) {
    do {
      local_b0 = *(QArrayData **)local_a0;
      if (1 < *(int *)local_b0 + 1U) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + 1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
      }
      if (local_90 != 0) {
        local_d0 = 0x80000000;
        local_d8.field7 = 0;
        QSettings::value((QString *)&local_c8,&local_50);
        QVariant::toString();
        QVariant::~QVariant(&local_c8);
        QVariant::~QVariant((QVariant *)&local_d8);
        local_f0 = (QArrayData *)QString::fromAscii_helper("%1 : %2\n",8);
        QString::arg(&local_e8,&local_f0,&local_b0,0,0x20);
        QString::arg(&local_e0,&local_e8,&local_b8,0,0x20);
        QString::append(&local_110);
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007cede0;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
LAB_1007cede0:
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_31 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007cee16;
          }
          QArrayData::deallocate(local_e8,2,8);
        }
LAB_1007cee16:
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_31 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007cee4c;
          }
          QArrayData::deallocate(local_f0,2,8);
        }
LAB_1007cee4c:
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007cee82;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
LAB_1007cee82:
        local_90 = 0;
      }
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007ceec2;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_1007ceec2:
      local_a0 = local_a0 + 2;
      uVar11 = local_90 ^ 1;
      bVar13 = local_90 != 1;
      local_90 = uVar11;
    } while ((bVar13) && (local_a0 != local_98));
  }
  FUN_100039a80(&local_a8);
  FUN_100039a80(&local_88);
  QSettings::~QSettings((QSettings *)&local_50);
  ClientStatistics::setMessages(QVar1);
  if (*(int *)local_110.field0_0x0 != -1) {
    if (*(int *)local_110.field0_0x0 != 0) {
      LOCK();
      *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
      local_31 = *(int *)local_110.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cef68;
    }
    QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
  }
LAB_1007cef68:
  FUN_100dc58b0(&local_118,1);
  ClientStatistics::setCepClientProxyInfo(QVar1);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cefbd;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1007cefbd:
  this = operator_new(0xb0);
  GuiUsage::GuiUsage(this);
  FUN_1007ccfa0(this);
  ClientStatistics::setGuiUsage((GuiUsage *)QVar1.field0_0x0);
  local_120 = PTR_shared_null_1021e15e8;
  if (DAT_102310a08 == (void *)0x0) {
    pvVar6 = operator_new(0x220);
    FUN_1007ca700(pvVar6);
    DAT_102273890 = 1;
    DAT_102310a08 = pvVar6;
  }
  FUN_1007cf850();
  pQVar7 = (QArrayData *)QString::fromAscii_helper("\n",1);
  QtPrivate::QStringList_join
            ((QStringList *)&local_128.field0,(QChar *)&local_120,
             (int)*(undefined8 *)(pQVar7 + 0x10) + (int)pQVar7);
  ClientStatistics::setHIDHostHookUsage(QVar1);
  if (*(int *)local_128.field1 != -1) {
    if (*(int *)local_128.field1 != 0) {
      LOCK();
      *(int *)local_128.field1 = *(int *)local_128.field1 + -1;
      local_31 = *(int *)local_128.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cf0a2;
    }
    QArrayData::deallocate((QArrayData *)local_128.field1,2,8);
  }
LAB_1007cf0a2:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cf0cd;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1007cf0cd:
  FUN_1007d0350(param_1);
  FUN_1007d05e0(param_1);
  if ((((param_1[0x26].field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) ||
       (*(int *)(param_1[0x26].field0_0x0 + 4) == 0)) ||
      (param_1[0x27].field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0)) ||
     (cVar4 = FUN_100a07890(), cVar4 == '\0')) {
    pQVar8 = operator_new(0x18);
    FUN_100a06fa0(pQVar8,0);
    pQVar9 = (QTypedArrayData<unsigned_short> *)
             QtSharedPointer::ExternalRefCountData::getAndRef(pQVar8);
    pQVar10 = param_1[0x26].field0_0x0;
    if (pQVar10 != pQVar9) {
      if (pQVar9 != (QTypedArrayData<unsigned_short> *)0x0) {
        LOCK();
        *(int *)pQVar9 = *(int *)pQVar9 + 1;
        local_31 = *(int *)pQVar9 != 0;
        UNLOCK();
        pQVar10 = param_1[0x26].field0_0x0;
      }
      if (pQVar10 != (QTypedArrayData<unsigned_short> *)0x0) {
        LOCK();
        *(int *)pQVar10 = *(int *)pQVar10 + -1;
        local_31 = *(int *)pQVar10 != 0;
        UNLOCK();
        if ((!(bool)local_31) &&
           (param_1[0x26].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0)) {
          operator_delete(param_1[0x26].field0_0x0);
        }
      }
      param_1[0x26].field0_0x0 = pQVar9;
      param_1[0x27].field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar8;
    }
    if (pQVar9 != (QTypedArrayData<unsigned_short> *)0x0) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + -1;
      local_31 = *(int *)pQVar9 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(pQVar9);
      }
    }
    pQVar10 = (QTypedArrayData<unsigned_short> *)0x0;
    if ((param_1[0x26].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
       (pQVar10 = (QTypedArrayData<unsigned_short> *)0x0,
       *(int *)(param_1[0x26].field0_0x0 + 4) != 0)) {
      pQVar10 = param_1[0x27].field0_0x0;
    }
    FUN_100a078a0(pQVar10,1);
    pQVar10 = (QTypedArrayData<unsigned_short> *)0x0;
    if ((param_1[0x26].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
       (pQVar10 = (QTypedArrayData<unsigned_short> *)0x0,
       *(int *)(param_1[0x26].field0_0x0 + 4) != 0)) {
      pQVar10 = param_1[0x27].field0_0x0;
    }
    QObject::connect(&local_130,pQVar10,"2collected(const QString&)",param_1,
                     "1onInstalledSoftwareCollected(const QString&)",0);
    if (local_130 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_130);
    pQVar10 = (QTypedArrayData<unsigned_short> *)0x0;
    if ((param_1[0x26].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
       (pQVar10 = (QTypedArrayData<unsigned_short> *)0x0,
       *(int *)(param_1[0x26].field0_0x0 + 4) != 0)) {
      pQVar10 = param_1[0x27].field0_0x0;
    }
    FUN_100a07790(pQVar10);
  }
  FUN_100039a80(&local_120);
  return;
}

