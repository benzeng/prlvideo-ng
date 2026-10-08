
void FUN_10024ed30(long *param_1,int param_2)

{
  QString *this;
  QMapNodeBase *pQVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  QMapNodeBase *pQVar5;
  QMapNodeBase *pQVar6;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QMapNodeBase *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  if (-1 < param_2) {
    lVar4 = QObject::sender();
    QVariant::QVariant(&local_48,(QVariant *)(*(long *)(lVar4 + 0x28) + 0x18));
    iVar3 = QVariant::toInt((bool *)&local_48);
    QVariant::~QVariant(&local_48);
    if (iVar3 != 0) {
      FUN_100df99c0("","prl_client_app",0,
                    "Failed to place product update purchase order with error: %d",iVar3);
      lVar4 = *param_1;
      param_2 = -0x7ffffff7;
      goto LAB_10024f431;
    }
    CHttpResponseParser::getValues();
    local_58.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("PurchaseURL",0xb);
    if (1 < *(uint *)local_50) {
      FUN_10008d290(&local_50);
    }
    if (*(QMapNodeBase **)(local_50 + 0x10) == (QMapNodeBase *)0x0) {
LAB_10024ee52:
      pQVar5 = local_50 + 8;
    }
    else {
      pQVar1 = *(QMapNodeBase **)(local_50 + 0x10);
      pQVar6 = (QMapNodeBase *)0x0;
      do {
        while (pQVar5 = pQVar1, cVar2 = operator<((QString *)(pQVar5 + 0x18),&local_58),
              cVar2 != '\0') {
          pQVar1 = *(QMapNodeBase **)(pQVar5 + 0x10);
          if (*(QMapNodeBase **)(pQVar5 + 0x10) == (QMapNodeBase *)0x0) {
            pQVar5 = pQVar6;
            if (pQVar6 == (QMapNodeBase *)0x0) goto LAB_10024ee52;
            goto LAB_10024ee41;
          }
        }
        pQVar1 = *(QMapNodeBase **)(pQVar5 + 8);
        pQVar6 = pQVar5;
      } while (*(QMapNodeBase **)(pQVar5 + 8) != (QMapNodeBase *)0x0);
LAB_10024ee41:
      cVar2 = operator<(&local_58,(QString *)(pQVar5 + 0x18));
      if (cVar2 != '\0') goto LAB_10024ee52;
    }
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10024ee8a;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_10024ee8a:
    if (1 < *(uint *)local_50) {
      FUN_10008d290(&local_50);
    }
    if (local_50 + 8 != pQVar5) {
      QVariant::toString();
      QString::operator=((QString *)(param_1 + 6),&local_60);
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10024eef6;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
    }
LAB_10024eef6:
    local_68.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("DownloadURL",0xb);
    if (1 < *(uint *)local_50) {
      FUN_10008d290(&local_50);
    }
    if (*(QMapNodeBase **)(local_50 + 0x10) == (QMapNodeBase *)0x0) {
LAB_10024ef82:
      pQVar5 = local_50 + 8;
    }
    else {
      pQVar1 = *(QMapNodeBase **)(local_50 + 0x10);
      pQVar6 = (QMapNodeBase *)0x0;
      do {
        while (pQVar5 = pQVar1, cVar2 = operator<((QString *)(pQVar5 + 0x18),&local_68),
              cVar2 != '\0') {
          pQVar1 = *(QMapNodeBase **)(pQVar5 + 0x10);
          if (*(QMapNodeBase **)(pQVar5 + 0x10) == (QMapNodeBase *)0x0) {
            pQVar5 = pQVar6;
            if (pQVar6 == (QMapNodeBase *)0x0) goto LAB_10024ef82;
            goto LAB_10024ef71;
          }
        }
        pQVar1 = *(QMapNodeBase **)(pQVar5 + 8);
        pQVar6 = pQVar5;
      } while (*(QMapNodeBase **)(pQVar5 + 8) != (QMapNodeBase *)0x0);
LAB_10024ef71:
      cVar2 = operator<(&local_68,(QString *)(pQVar5 + 0x18));
      if (cVar2 != '\0') goto LAB_10024ef82;
    }
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10024efba;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_10024efba:
    if (1 < *(uint *)local_50) {
      FUN_10008d290(&local_50);
    }
    if (local_50 + 8 != pQVar5) {
      QVariant::toString();
      QString::operator=((QString *)(param_1 + 10),&local_70);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10024f026;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
    }
LAB_10024f026:
    local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    local_80.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("TransactionID",0xd);
    if (1 < *(uint *)local_50) {
      FUN_10008d290(&local_50);
    }
    if (*(QMapNodeBase **)(local_50 + 0x10) == (QMapNodeBase *)0x0) {
LAB_10024f0b2:
      pQVar5 = local_50 + 8;
    }
    else {
      pQVar1 = *(QMapNodeBase **)(local_50 + 0x10);
      pQVar6 = (QMapNodeBase *)0x0;
      do {
        while (pQVar5 = pQVar1, cVar2 = operator<((QString *)(pQVar5 + 0x18),&local_80),
              cVar2 != '\0') {
          pQVar1 = *(QMapNodeBase **)(pQVar5 + 0x10);
          if (*(QMapNodeBase **)(pQVar5 + 0x10) == (QMapNodeBase *)0x0) {
            pQVar5 = pQVar6;
            if (pQVar6 == (QMapNodeBase *)0x0) goto LAB_10024f0b2;
            goto LAB_10024f0a1;
          }
        }
        pQVar1 = *(QMapNodeBase **)(pQVar5 + 8);
        pQVar6 = pQVar5;
      } while (*(QMapNodeBase **)(pQVar5 + 8) != (QMapNodeBase *)0x0);
LAB_10024f0a1:
      cVar2 = operator<(&local_80,(QString *)(pQVar5 + 0x18));
      if (cVar2 != '\0') goto LAB_10024f0b2;
    }
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10024f0ea;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
LAB_10024f0ea:
    if (1 < *(uint *)local_50) {
      FUN_10008d290(&local_50);
    }
    if (local_50 + 8 != pQVar5) {
      QVariant::toString();
      QString::operator=(&local_78,&local_88);
      if (*(int *)local_88.field0_0x0 != -1) {
        if (*(int *)local_88.field0_0x0 != 0) {
          LOCK();
          *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
          local_31 = *(int *)local_88.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10024f156;
        }
        QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
      }
    }
LAB_10024f156:
    local_98 = (QArrayData *)QString::fromAscii_helper("custparam.%1",0xc);
    QString::arg(&local_90,&local_98,&local_78,0,0x20);
    this = (QString *)(param_1 + 6);
    cVar2 = QString::endsWith(this,&local_90,1);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10024f1dd;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_10024f1dd:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10024f213;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_10024f213:
    if (cVar2 != '\0') {
      local_a8 = (QArrayData *)QString::fromAscii_helper("/",1);
      QString::lastIndexOf(this,&local_a8,0xffffffff,1);
      QString::left((int)&local_a0);
      QString::operator=(this,&local_a0);
      if (*(int *)local_a0.field0_0x0 != -1) {
        if (*(int *)local_a0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
          local_31 = *(int *)local_a0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10024f2a2;
        }
        QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
      }
LAB_10024f2a2:
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10024f2d8;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
    }
LAB_10024f2d8:
    if (1 < DAT_10230ffd0) {
      QString::toUtf8();
      lVar4 = *(long *)(local_b0 + 0x10);
      QString::toUtf8();
      FUN_100df99c0("","prl_client_app",2,
                    "Product update purchase request processed.\n PurchaseURL=[%s]\n DownloadURL=[%s]"
                    ,local_b0 + lVar4,local_b8 + *(long *)(local_b8 + 0x10));
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10024f37a;
        }
        QArrayData::deallocate(local_b8,1,8);
      }
LAB_10024f37a:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10024f3b0;
        }
        QArrayData::deallocate(local_b0,1,8);
      }
    }
LAB_10024f3b0:
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10024f3e0;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_10024f3e0:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10024f428;
      }
      if (*(long *)(local_50 + 0x10) != 0) {
        FUN_100037d60();
        QMapDataBase::freeTree(local_50,(int)*(undefined8 *)(local_50 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)local_50);
    }
  }
LAB_10024f428:
  lVar4 = *param_1;
LAB_10024f431:
  (**(code **)(lVar4 + 0xb0))(param_1,param_2);
  return;
}

