
void FUN_1002f4c70(long *param_1,int param_2)

{
  QMapNodeBase *pQVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  QMapNodeBase *pQVar6;
  QMapNodeBase *pQVar7;
  QArrayData *local_b8;
  QArrayData *local_b0;
  undefined8 local_a8;
  QString local_a0;
  QString local_98;
  QArrayData *local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QMapNodeBase *local_60;
  QVariant local_58;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  lVar4 = QObject::sender();
  if (param_2 < 0) {
    iVar3 = -0x7ffeabfb;
    if (*(long *)(lVar4 + 0x38) != 0) {
      iVar3 = QNetworkReply::error();
      iVar3 = -0x7ffeabfa - (uint)(iVar3 == 0);
    }
    FUN_1002f5770(param_1,iVar3);
    return;
  }
  QVariant::QVariant(&local_58,(QVariant *)(*(long *)(lVar4 + 0x28) + 0x18));
  iVar3 = QVariant::toInt((bool *)&local_58);
  QVariant::~QVariant(&local_58);
  if (iVar3 != 0) {
    FUN_100df99c0("","prl_client_app",0,"Failed to place free product upgrade order with error: %d",
                  iVar3);
    FUN_1002f5770(param_1,0x80015405);
    return;
  }
  CHttpResponseParser::getValues();
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("License",7);
  if (1 < *(uint *)local_60) {
    FUN_10008d290(&local_60);
  }
  if (*(QMapNodeBase **)(local_60 + 0x10) == (QMapNodeBase *)0x0) {
LAB_1002f4db2:
    pQVar6 = local_60 + 8;
  }
  else {
    pQVar1 = *(QMapNodeBase **)(local_60 + 0x10);
    pQVar7 = (QMapNodeBase *)0x0;
    do {
      while (pQVar6 = pQVar1, cVar2 = operator<((QString *)(pQVar6 + 0x18),&local_68), cVar2 == '\0'
            ) {
        pQVar1 = *(QMapNodeBase **)(pQVar6 + 8);
        pQVar7 = pQVar6;
        if (*(QMapNodeBase **)(pQVar6 + 8) == (QMapNodeBase *)0x0) goto LAB_1002f4da1;
      }
      pQVar1 = *(QMapNodeBase **)(pQVar6 + 0x10);
    } while (*(QMapNodeBase **)(pQVar6 + 0x10) != (QMapNodeBase *)0x0);
    pQVar6 = pQVar7;
    if (pQVar7 == (QMapNodeBase *)0x0) goto LAB_1002f4db2;
LAB_1002f4da1:
    cVar2 = operator<(&local_68,(QString *)(pQVar6 + 0x18));
    if (cVar2 != '\0') goto LAB_1002f4db2;
  }
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f4dea;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1002f4dea:
  if (1 < *(uint *)local_60) {
    FUN_10008d290(&local_60);
  }
  if (local_60 + 8 == pQVar6) {
    FUN_100df99c0("","prl_client_app",0,
                  "Invalid response to free upgrade request: no upgrade activation key.");
    FUN_1002f5770(param_1,0x80015407);
    goto LAB_1002f5353;
  }
  QVariant::toString();
  QString::operator=((QString *)(param_1 + 0x11),&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_29 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f4e5e;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1002f4e5e:
  local_78.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("DownloadUrl",0xb);
  if (1 < *(uint *)local_60) {
    FUN_10008d290(&local_60);
  }
  if (*(QMapNodeBase **)(local_60 + 0x10) == (QMapNodeBase *)0x0) {
LAB_1002f4ee2:
    pQVar6 = local_60 + 8;
  }
  else {
    pQVar1 = *(QMapNodeBase **)(local_60 + 0x10);
    pQVar7 = (QMapNodeBase *)0x0;
    do {
      while (pQVar6 = pQVar1, cVar2 = operator<((QString *)(pQVar6 + 0x18),&local_78), cVar2 == '\0'
            ) {
        pQVar1 = *(QMapNodeBase **)(pQVar6 + 8);
        pQVar7 = pQVar6;
        if (*(QMapNodeBase **)(pQVar6 + 8) == (QMapNodeBase *)0x0) goto LAB_1002f4ed1;
      }
      pQVar1 = *(QMapNodeBase **)(pQVar6 + 0x10);
    } while (*(QMapNodeBase **)(pQVar6 + 0x10) != (QMapNodeBase *)0x0);
    pQVar6 = pQVar7;
    if (pQVar7 == (QMapNodeBase *)0x0) goto LAB_1002f4ee2;
LAB_1002f4ed1:
    cVar2 = operator<(&local_78,(QString *)(pQVar6 + 0x18));
    if (cVar2 != '\0') goto LAB_1002f4ee2;
  }
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_29 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f4f1a;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1002f4f1a:
  if (1 < *(uint *)local_60) {
    FUN_10008d290(&local_60);
  }
  if (local_60 + 8 == pQVar6) {
    FUN_100df99c0("","prl_client_app",0,
                  "Invalid response to free upgrade request: no upgrade download URL.");
    FUN_1002f5770(param_1,0x80015407);
    goto LAB_1002f5353;
  }
  QVariant::toString();
  QString::operator=((QString *)(param_1 + 0xf),&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_29 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f4f8e;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1002f4f8e:
  QString::fromUtf8_helper((char *)&local_48,0x1ddf8a8);
  QString::operator=((QString *)(param_1 + 8),&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f4fe4;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1002f4fe4:
  QString::fromUtf8_helper((char *)&local_40,0x1de6d6a);
  QString::operator=((QString *)(param_1 + 10),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f5037;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1002f5037:
  QMetaObject::tr((char *)&local_90,(char *)&PTR_staticMetaObject_10220b0a0,0x1de6d76);
  CProductUpdateInfo::getMajorVersionFromFileName(&local_98);
  QString::arg(&local_88,&local_90,&local_98,0,0x20);
  QString::operator=((QString *)(param_1 + 9),&local_88);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_29 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f50c5;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1002f50c5:
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_29 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f50fb;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_1002f50fb:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f5131;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1002f5131:
  QString::fromUtf8_helper((char *)&local_38,0x1de6d9e);
  QString::operator=((QString *)(param_1 + 0x13),&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f5187;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1002f5187:
  local_a8 = QDate::currentDate();
  QDate::toString(&local_a0,&local_a8,3);
  QString::operator=((QString *)(param_1 + 0x14),&local_a0);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_29 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f51f5;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_1002f51f5:
  QString::operator=((QString *)(param_1 + 0x16),(QString *)(param_1 + 0xf));
  local_b0 = (QArrayData *)QString::fromAscii_helper("store",5);
  uVar5 = FUN_10073fe80(&local_b0);
  FUN_1007420e0(uVar5,(QString *)(param_1 + 8));
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f526a;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1002f526a:
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,"Product free upgrade request processed. DownloadURL=[%s]",
                  local_b8 + *(long *)(local_b8 + 0x10));
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_29 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002f52e7;
      }
      QArrayData::deallocate(local_b8,1,8);
    }
  }
LAB_1002f52e7:
  (**(code **)(*param_1 + 0xb0))(param_1,0);
LAB_1002f5353:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_29 = 0;
    }
    if (*(long *)(local_60 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_60,(int)*(undefined8 *)(local_60 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_60);
  }
  return;
}

