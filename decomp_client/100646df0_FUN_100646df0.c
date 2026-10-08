
void FUN_100646df0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *pQVar5;
  QString *pQVar6;
  QDateTime local_1a0;
  QVariant local_198;
  QString local_188 [2];
  QArrayData *local_178;
  Data_conflict local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QString local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QString local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
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
  QVariant local_68;
  QVariant local_58;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  FUN_10063f490();
  puVar1 = PTR_shared_null_1021e1288;
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  uVar3 = FUN_10063f730(param_1);
  lVar4 = FUN_100675e00(uVar3);
  if (lVar4 == 0) {
    pQVar6 = *(QString **)(*(long *)(param_1 + 0x48) + 0xb8);
LAB_100646fb2:
    QMetaObject::tr((char *)&local_80,(char *)&PTR_PTR_1022231c0,0x1e0a578);
    QLabel::setText(pQVar6);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10064700d;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_10064700d:
    pQVar6 = *(QString **)(*(long *)(param_1 + 0x48) + 200);
    QMetaObject::tr((char *)&local_88,(char *)&PTR_PTR_1022231c0,0x1e0a5a1);
    QLabel::setText(pQVar6);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100647073;
      }
      QArrayData::deallocate(local_88,2,8);
    }
  }
  else {
    uVar3 = FUN_10063f730(param_1);
    uVar3 = FUN_100675e00(uVar3);
    uVar3 = FUN_10016f500(uVar3);
    FUN_10061abe0(&local_58,uVar3,0xe);
    QVariant::toString();
    QString::operator=(&local_40,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100646ea6;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_100646ea6:
    QVariant::~QVariant(&local_58);
    FUN_10061abe0(&local_68,uVar3,0xd);
    iVar2 = QVariant::toInt((bool *)&local_68);
    QVariant::~QVariant(&local_68);
    pQVar6 = *(QString **)(*(long *)(param_1 + 0x48) + 0xb8);
    if (iVar2 < 1) goto LAB_100646fb2;
    QMetaObject::tr((char *)&local_78,(char *)&PTR_PTR_1022231c0,0x1e0a544);
    QString::arg(&local_70,&local_78,(long)iVar2,0,10,0x20);
    QLabel::setText(pQVar6);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100646f66;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100646f66:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100647073;
      }
      QArrayData::deallocate(local_78,2,8);
    }
  }
LAB_100647073:
  local_90 = (QArrayData *)QString::fromAscii_helper("activatepd@parallels.com",0x18);
  local_98 = (QArrayData *)QString::fromAscii_helper("http://activatepd.parallels.com",0x1f);
  local_a0 = (QArrayData *)QString::fromAscii_helper("https://activatepd.parallels.com/pdfm12",0x27)
  ;
  local_c0 = (QArrayData *)QString::fromAscii_helper("mailto:%1?Subject=%2&Body=%3",0x1c);
  QString::arg(&local_b8,&local_c0,&local_90,0,0x20);
  QMetaObject::tr((char *)&local_d8,(char *)&PTR_PTR_1022231c0,0x1e0a644);
  local_e0 = (QArrayData *)puVar1;
  local_e8 = (QArrayData *)puVar1;
  QUrl::toPercentEncoding(&local_d0,(QByteArray *)&local_d8,(QByteArray *)&local_e0);
  lVar4 = 0;
  pQVar5 = (QArrayData *)(local_d0.field0_0x0 + *(long *)(local_d0.field0_0x0 + 0x10));
  if ((pQVar5 != (QArrayData *)0x0) && (*(uint *)(local_d0.field0_0x0 + 4) != 0)) {
    lVar4 = 0;
    do {
      if (pQVar5[lVar4] == (QArrayData)0x0) break;
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(local_d0.field0_0x0 + 4));
  }
  local_c8 = (QArrayData *)QString::fromAscii_helper((char *)pQVar5,(int)lVar4);
  QString::arg(&local_b0,&local_b8,&local_c8,0,0x20);
  local_100 = (QArrayData *)puVar1;
  local_108 = (QArrayData *)puVar1;
  QUrl::toPercentEncoding(&local_f8,(QByteArray *)&local_40,(QByteArray *)&local_100);
  lVar4 = 0;
  pQVar5 = (QArrayData *)(local_f8.field0_0x0 + *(long *)(local_f8.field0_0x0 + 0x10));
  if ((pQVar5 != (QArrayData *)0x0) && (*(uint *)(local_f8.field0_0x0 + 4) != 0)) {
    lVar4 = 0;
    do {
      if (pQVar5[lVar4] == (QArrayData)0x0) break;
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(local_f8.field0_0x0 + 4));
  }
  local_f0 = (QArrayData *)QString::fromAscii_helper((char *)pQVar5,(int)lVar4);
  QString::arg(&local_a8,&local_b0,&local_f0,0,0x20);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100647271;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100647271:
  if (*(int *)local_f8.field0_0x0 != -1) {
    if (*(int *)local_f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
      local_31 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006472a7;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,1,8);
  }
LAB_1006472a7:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006472dd;
    }
    QArrayData::deallocate(local_108,1,8);
  }
LAB_1006472dd:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100647313;
    }
    QArrayData::deallocate(local_100,1,8);
  }
LAB_100647313:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100647349;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100647349:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10064737f;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10064737f:
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_31 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006473b5;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,1,8);
  }
LAB_1006473b5:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006473eb;
    }
    QArrayData::deallocate(local_e8,1,8);
  }
LAB_1006473eb:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100647421;
    }
    QArrayData::deallocate(local_e0,1,8);
  }
LAB_100647421:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100647457;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100647457:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10064748d;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10064748d:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006474c3;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1006474c3:
  local_120 = (QArrayData *)QString::fromAscii_helper("%1?activation_code=%2",0x15);
  QString::arg(&local_118,&local_120,&local_a0,0,0x20);
  local_138 = (QArrayData *)puVar1;
  local_140 = (QArrayData *)puVar1;
  QUrl::toPercentEncoding(&local_130,(QByteArray *)&local_40,(QByteArray *)&local_138);
  lVar4 = 0;
  pQVar5 = (QArrayData *)(local_130.field0_0x0 + *(long *)(local_130.field0_0x0 + 0x10));
  if ((pQVar5 != (QArrayData *)0x0) && (*(uint *)(local_130.field0_0x0 + 4) != 0)) {
    lVar4 = 0;
    do {
      if (pQVar5[lVar4] == (QArrayData)0x0) break;
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(local_130.field0_0x0 + 4));
  }
  local_128 = (QArrayData *)QString::fromAscii_helper((char *)pQVar5,(int)lVar4);
  QString::arg(&local_110,&local_118,&local_128,0,0x20);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006475c1;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_1006475c1:
  if (*(int *)local_130.field0_0x0 != -1) {
    if (*(int *)local_130.field0_0x0 != 0) {
      LOCK();
      *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
      local_31 = *(int *)local_130.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006475f7;
    }
    QArrayData::deallocate((QArrayData *)local_130.field0_0x0,1,8);
  }
LAB_1006475f7:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10064762d;
    }
    QArrayData::deallocate(local_140,1,8);
  }
LAB_10064762d:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100647663;
    }
    QArrayData::deallocate(local_138,1,8);
  }
LAB_100647663:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100647699;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100647699:
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006476cf;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1006476cf:
  QTextEdit::setPlainText(*(QString **)(*(long *)(param_1 + 0x48) + 0x78));
  pQVar6 = *(QString **)(*(long *)(param_1 + 0x48) + 0x28);
  QMetaObject::tr((char *)&local_168,(char *)&PTR_PTR_1022231c0,0x1e0a668);
  QString::arg(&local_160,&local_168,&local_a8,0,0x20);
  QString::arg(&local_158,&local_160,&local_90,0,0x20);
  QString::arg(&local_150,&local_158,&local_110,0,0x20);
  QString::arg(&local_148,&local_150,&local_98,0,0x20);
  QLabel::setText(pQVar6);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006477d7;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1006477d7:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10064780d;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_10064780d:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100647843;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100647843:
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_31 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100647879;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_100647879:
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006478af;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_1006478af:
  local_170.field7 = QString::fromAscii_helper("OfflineActivationReminderLastShowTime/",0x26);
  uVar3 = FUN_10063f730(param_1);
  uVar3 = FUN_100675e00(uVar3);
  FUN_10015a2b0(&local_178,uVar3);
  QString::append((QString *)&local_170);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10064792f;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_10064792f:
  QSettings::QSettings((QSettings *)local_188,(QObject *)0x0);
  QDateTime::currentDateTime();
  QVariant::QVariant(&local_198,&local_1a0);
  QSettings::setValue(local_188,(QVariant *)&local_170);
  QVariant::~QVariant(&local_198);
  QDateTime::~QDateTime(&local_1a0);
  QSettings::~QSettings((QSettings *)local_188);
  if (*(int *)local_170.field15 != -1) {
    if (*(int *)local_170.field15 != 0) {
      LOCK();
      *(int *)local_170.field15 = *(int *)local_170.field15 + -1;
      local_31 = *(int *)local_170.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006479d0;
    }
    QArrayData::deallocate((QArrayData *)local_170.field15,2,8);
  }
LAB_1006479d0:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100647a06;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100647a06:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100647a3c;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100647a3c:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100647a72;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100647a72:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100647aa8;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100647aa8:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100647ade;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100647ade:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

