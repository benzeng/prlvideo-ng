
void FUN_100397840(long param_1)

{
  QString *pQVar1;
  long *plVar2;
  code *pcVar3;
  undefined *puVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  byte bVar15;
  byte local_20c;
  QArrayData *local_208;
  QArrayData *local_200;
  QArrayData *local_1f8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  QString local_1e0;
  QString local_1d8;
  QString local_1d0;
  QArrayData *local_1c8;
  QString local_1c0;
  QString local_1b8;
  QString local_1b0;
  QString local_1a8;
  QString local_1a0;
  undefined8 local_198;
  QVariant local_190;
  QString local_180;
  undefined8 local_178;
  QString local_170;
  QString local_168;
  QString local_160;
  QDateTime local_158;
  QVariant local_150;
  QDateTime local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QVariant local_128;
  QArrayData *local_118;
  QString local_110;
  QString local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QString local_f0;
  QString local_e8;
  QVariant local_e0;
  QString local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar1 = *(QString **)(param_1 + 0x10);
  QMetaObject::tr((char *)&local_a8,PTR_staticMetaObject_1021e1520,0x1df0cc4);
  FUN_1001c72e0(&local_b0);
  QString::arg(&local_a0,&local_a8,&local_b0,0,0x20);
  QWidget::setWindowTitle(pQVar1);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003978f1;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1003978f1:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100397927;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100397927:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10039795d;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10039795d:
  pQVar1 = *(QString **)(param_1 + 0x78);
  FUN_1001c72e0(&local_b8);
  local_58 = (QArrayData *)QString::fromAscii_helper("<sup>%1</sup>",0xd);
  QString::arg(&local_50,&local_58,0xae,0,0x20);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003979cd;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003979cd:
  QString::append(&local_b8);
  cVar5 = FUN_100d80630(1);
  if (cVar5 == '\0') {
    QString::number((int)&local_68,0xc);
    QString::fromUtf8_helper((char *)&local_60,0x1e31adc);
    QString::append(&local_60);
    QString::append(&local_b8);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100397a64;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_100397a64:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100397a94;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_100397a94:
  cVar5 = FUN_100d80630(1);
  if (cVar5 != '\0') {
    QMetaObject::tr((char *)&local_78,PTR_staticMetaObject_1021e1520,(int)PTR_s_Lite_102270a50);
    QString::fromUtf8_helper((char *)&local_70,0x1e31adc);
    QString::append(&local_70);
    QString::append(&local_b8);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100397b2a;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_100397b2a:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100397b5a;
      }
      QArrayData::deallocate(local_78,2,8);
    }
  }
LAB_100397b5a:
  QMetaObject::tr((char *)&local_88,PTR_staticMetaObject_1021e1520,0x1dd2c37);
  QString::fromUtf8_helper((char *)&local_80,0x1e31adc);
  QString::append(&local_80);
  QString::append(&local_b8);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100397bdb;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100397bdb:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100397c0b;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100397c0b:
  FUN_1001c74e0(&local_90);
  if (*(int *)(local_90 + 4) != 0) {
    QString::fromUtf8_helper((char *)&local_98,0x1ddad42);
    QString::append(&local_98);
    QString::append(&local_b8);
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_31 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100397c98;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
  }
LAB_100397c98:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100397cce;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100397cce:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100397cfe;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100397cfe:
  QLabel::setText(pQVar1);
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_31 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100397d43;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_100397d43:
  puVar4 = PTR_shared_null_1021e1288;
  local_c0 = (QArrayData *)PTR_shared_null_1021e1288;
  QLabel::setText(*(QString **)(param_1 + 0x80));
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100397d9b;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100397d9b:
  plVar2 = *(long **)(param_1 + 0x80);
  pcVar3 = *(code **)(*plVar2 + 0x68);
  QLabel::text();
  (*pcVar3)(plVar2,*(int *)(local_c8 + 4) != 0);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100397e06;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100397e06:
  cVar5 = FUN_100d80630(1);
  if (cVar5 != '\0') {
    QWidget::hide();
    QWidget::hide();
    QLabel::clear();
    QLabel::clear();
    return;
  }
  uVar11 = FUN_100152280();
  lVar12 = FUN_100154790(uVar11,0);
  if (lVar12 == 0) {
    FUN_100df99c0("","prl_client_app",0,"Error(!): Server instance is null.");
    FUN_10039b0a0(param_1);
    return;
  }
  local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar4;
  uVar11 = FUN_10016f500(lVar12);
  FUN_10061abe0(&local_e0,uVar11,0);
  iVar10 = QVariant::toInt((bool *)&local_e0);
  QVariant::~QVariant(&local_e0);
  bVar6 = FUN_10061b4d0(uVar11,0x2010);
  bVar7 = FUN_10061b4d0(uVar11,0x20);
  bVar8 = FUN_10061b4d0(uVar11,0x8000);
  bVar9 = FUN_10061b4d0(uVar11,0x80);
  bVar15 = 1;
  if (bVar6 == 0) {
    bVar15 = (bVar9 ^ 1) & bVar8;
  }
  if (iVar10 < 0) {
    if (iVar10 < -0x7ffeefa8) {
      if (iVar10 != -0x7ffeefff) goto LAB_1003983e3;
    }
    else if (iVar10 < -0x7ffeef8c) {
      if (iVar10 == -0x7ffeefa8) goto LAB_100397f63;
      if (iVar10 != -0x7ffeef9b) goto LAB_1003983e3;
    }
    else if ((iVar10 != -0x7ffeef8c) && (iVar10 != -0x7ffeef89)) goto LAB_1003983e3;
    if (bVar8 == 0) {
      if (bVar7 == 0) {
        FUN_1001c7700(&local_1d0,PTR_s_Your_current_activation_key_has_e_10226e208);
      }
      else {
        FUN_1001c7700(&local_1d0,PTR_s_Your_trial_activation_key_has_ex_10226e228);
      }
      QString::operator=(&local_d0,&local_1d0);
      if (*(int *)local_1d0.field0_0x0 != -1) {
        if (*(int *)local_1d0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_1d0.field0_0x0 = *(int *)local_1d0.field0_0x0 + -1;
          local_31 = *(int *)local_1d0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100398470;
        }
        QArrayData::deallocate((QArrayData *)local_1d0.field0_0x0,2,8);
      }
    }
    else {
      FUN_1001c7700(&local_1e8,PTR_s_The_product_license_has_expired__1022709e0);
      local_1e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_1e8;
      if (1 < *(int *)local_1e8 + 1U) {
        LOCK();
        *(int *)local_1e8 = *(int *)local_1e8 + 1;
        local_31 = *(int *)local_1e8 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_40,0x1e31adc);
      QString::append(&local_1e0);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003982a3;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_1003982a3:
      FUN_1001c7700(&local_1f0,PTR_s_To_continue_using___PRODUCT_NAME_1022709e8);
      local_1d8.field0_0x0 = local_1e0.field0_0x0;
      if (1 < *(int *)local_1e0.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_1e0.field0_0x0 = *(int *)local_1e0.field0_0x0 + 1;
        local_31 = *(int *)local_1e0.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_1d8);
      QString::operator=(&local_d0,&local_1d8);
      if (*(int *)local_1d8.field0_0x0 != -1) {
        if (*(int *)local_1d8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_1d8.field0_0x0 = *(int *)local_1d8.field0_0x0 + -1;
          local_31 = *(int *)local_1d8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100398334;
        }
        QArrayData::deallocate((QArrayData *)local_1d8.field0_0x0,2,8);
      }
LAB_100398334:
      if (*(int *)local_1f0 != -1) {
        if (*(int *)local_1f0 != 0) {
          LOCK();
          *(int *)local_1f0 = *(int *)local_1f0 + -1;
          local_31 = *(int *)local_1f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10039836a;
        }
        QArrayData::deallocate(local_1f0,2,8);
      }
LAB_10039836a:
      if (*(int *)local_1e0.field0_0x0 != -1) {
        if (*(int *)local_1e0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_1e0.field0_0x0 = *(int *)local_1e0.field0_0x0 + -1;
          local_31 = *(int *)local_1e0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003983a0;
        }
        QArrayData::deallocate((QArrayData *)local_1e0.field0_0x0,2,8);
      }
LAB_1003983a0:
      if (*(int *)local_1e8 != -1) {
        if (*(int *)local_1e8 != 0) {
          LOCK();
          *(int *)local_1e8 = *(int *)local_1e8 + -1;
          local_31 = *(int *)local_1e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100398470;
        }
        QArrayData::deallocate(local_1e8,2,8);
      }
    }
LAB_100398470:
    QWidget::hide();
    QWidget::hide();
  }
  else {
    if (iVar10 != 0) {
LAB_1003983e3:
      FUN_10039b0a0(param_1);
      goto LAB_100398e80;
    }
LAB_100397f63:
    cVar5 = FUN_100624c50(uVar11);
    if (cVar5 == '\0') {
      cVar5 = FUN_10061c5c0(uVar11);
      if (cVar5 == '\0') {
        if (bVar7 == 0) {
          FUN_1001c7700(&local_110,PTR_s_This_is_an_active_copy_of___PROD_10226e1e8);
        }
        else {
          FUN_1001c7700(&local_110,PTR_s_You_are_using_a_trial_time_limit_10226e218);
        }
        QString::operator=(&local_d0,&local_110);
        if (*(int *)local_110.field0_0x0 != -1) {
          if (*(int *)local_110.field0_0x0 != 0) {
            LOCK();
            *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
            local_31 = *(int *)local_110.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003984e8;
          }
          QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
        }
      }
      else {
        QMetaObject::tr((char *)&local_108,(char *)&PTR_staticMetaObject_10220feb0,0x1df118e);
        QString::operator=(&local_d0,&local_108);
        if (*(int *)local_108.field0_0x0 != -1) {
          if (*(int *)local_108.field0_0x0 != 0) {
            LOCK();
            *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
            local_31 = *(int *)local_108.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003984e8;
          }
          QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
        }
      }
    }
    else {
      MessageUtils::getMessageString((int)&local_f8,true);
      local_f0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_f8;
      if (1 < *(int *)local_f8 + 1U) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + 1;
        local_31 = *(int *)local_f8 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_48,0x1ddad42);
      QString::append(&local_f0);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100397ffd;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_100397ffd:
      MessageUtils::getMessageString((int)&local_100,true);
      local_e8.field0_0x0 = local_f0.field0_0x0;
      if (1 < *(int *)local_f0.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + 1;
        local_31 = *(int *)local_f0.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_e8);
      QString::operator=(&local_d0,&local_e8);
      if (*(int *)local_e8.field0_0x0 != -1) {
        if (*(int *)local_e8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
          local_31 = *(int *)local_e8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10039808b;
        }
        QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
      }
LAB_10039808b:
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_31 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003980c1;
        }
        QArrayData::deallocate(local_100,2,8);
      }
LAB_1003980c1:
      if (*(int *)local_f0.field0_0x0 != -1) {
        if (*(int *)local_f0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
          local_31 = *(int *)local_f0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003980f7;
        }
        QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
      }
LAB_1003980f7:
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_31 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003984e8;
        }
        QArrayData::deallocate(local_f8,2,8);
      }
    }
LAB_1003984e8:
    FUN_10061abe0(&local_128,uVar11,1);
    QVariant::toString();
    QVariant::~QVariant(&local_128);
    pQVar1 = *(QString **)(param_1 + 0x58);
    if (*(int *)(local_118 + 4) == 0) {
      QWidget::hide();
    }
    else {
      QMetaObject::tr((char *)&local_138,(char *)&PTR_staticMetaObject_10220feb0,0x1df0f71);
      QString::arg(&local_130,&local_138,&local_118,0,0x20);
      QLabel::setText(pQVar1);
      if (*(int *)local_130 != -1) {
        if (*(int *)local_130 != 0) {
          LOCK();
          *(int *)local_130 = *(int *)local_130 + -1;
          local_31 = *(int *)local_130 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003985ba;
        }
        QArrayData::deallocate(local_130,2,8);
      }
LAB_1003985ba:
      if (*(int *)local_138 != -1) {
        if (*(int *)local_138 != 0) {
          LOCK();
          *(int *)local_138 = *(int *)local_138 + -1;
          local_31 = *(int *)local_138 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003985fa;
        }
        QArrayData::deallocate(local_138,2,8);
      }
    }
LAB_1003985fa:
    FUN_10061abe0(&local_150,uVar11,9);
    QVariant::toDateTime();
    QVariant::~QVariant(&local_150);
    if (bVar15 == 0) {
      local_20c = bVar8;
      if (bVar8 != 0) {
        local_20c = bVar9;
      }
    }
    else {
      QDateTime::currentDateTime();
      cVar5 = QDateTime::operator<(&local_158,&local_140);
      local_20c = 1;
      if ((cVar5 != '\0') && (local_20c = bVar8, bVar8 != 0)) {
        local_20c = bVar9;
      }
      QDateTime::~QDateTime(&local_158);
    }
    uVar14 = *(undefined8 *)(param_1 + 0x30);
    if ((local_20c == 0) && (bVar7 != 1)) {
      uVar13 = FUN_1006915d0();
      FUN_100691620(uVar13,0x60,*(undefined8 *)PTR_self_1021e1388);
      cVar5 = QAction::isEnabled();
      if (((cVar5 == '\0') || (cVar5 = QAction::isVisible(), cVar5 == '\0')) &&
         (cVar5 = FUN_10061b4d0(uVar11,0x20), cVar5 == '\0')) {
        uVar13 = FUN_1006915d0();
        FUN_100691620(uVar13,0x52,*(undefined8 *)PTR_self_1021e1388);
        cVar5 = QAction::isEnabled();
        if (cVar5 != '\0') {
          QAction::isVisible();
        }
      }
    }
    QWidget::setHidden(SUB81(uVar14,0));
    cVar5 = FUN_100624c50(uVar11);
    if (cVar5 == '\0') {
      if ((byte)(bVar7 | bVar8 | bVar6) == 1) {
        local_160.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        local_168.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        if ((local_20c == 0 & bVar15) == 1) {
          local_178 = QDateTime::date();
          QDate::toString(&local_170,&local_178,4);
          QString::operator=(&local_160,&local_170);
          if (*(int *)local_170.field0_0x0 != -1) {
            if (*(int *)local_170.field0_0x0 != 0) {
              LOCK();
              *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
              local_31 = *(int *)local_170.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003988ed;
            }
            QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
          }
        }
        else {
          FUN_10061abe0(&local_190,uVar11,6);
          local_198 = QVariant::toDate();
          QDate::toString(&local_180,&local_198,4);
          QString::operator=(&local_160,&local_180);
          if (*(int *)local_180.field0_0x0 != -1) {
            if (*(int *)local_180.field0_0x0 != 0) {
              LOCK();
              *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
              local_31 = *(int *)local_180.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003988e1;
            }
            QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
          }
LAB_1003988e1:
          QVariant::~QVariant(&local_190);
        }
LAB_1003988ed:
        if (bVar7 == 0) {
          if ((local_20c == 0) || (bVar15 != 1)) {
            if (bVar15 == 0) {
              if (bVar9 == 0) {
                QMetaObject::tr((char *)&local_1c0,(char *)&PTR_staticMetaObject_10220feb0,0x1df11ae
                               );
                QString::operator=(&local_168,&local_1c0);
                if (*(int *)local_1c0.field0_0x0 != -1) {
                  if (*(int *)local_1c0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_1c0.field0_0x0 = *(int *)local_1c0.field0_0x0 + -1;
                    local_31 = *(int *)local_1c0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100398b5c;
                  }
                  QArrayData::deallocate((QArrayData *)local_1c0.field0_0x0,2,8);
                }
              }
              else {
                QMetaObject::tr((char *)&local_1b8,(char *)&PTR_staticMetaObject_10220feb0,0x1df11ed
                               );
                QString::operator=(&local_168,&local_1b8);
                if (*(int *)local_1b8.field0_0x0 != -1) {
                  if (*(int *)local_1b8.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + -1;
                    local_31 = *(int *)local_1b8.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100398b5c;
                  }
                  QArrayData::deallocate((QArrayData *)local_1b8.field0_0x0,2,8);
                }
              }
            }
            else {
              QMetaObject::tr((char *)&local_1b0,(char *)&PTR_staticMetaObject_10220feb0,0x1df11d9);
              QString::operator=(&local_168,&local_1b0);
              if (*(int *)local_1b0.field0_0x0 != -1) {
                if (*(int *)local_1b0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_1b0.field0_0x0 = *(int *)local_1b0.field0_0x0 + -1;
                  local_31 = *(int *)local_1b0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100398b5c;
                }
                QArrayData::deallocate((QArrayData *)local_1b0.field0_0x0,2,8);
              }
            }
          }
          else {
            QMetaObject::tr((char *)&local_1a8,(char *)&PTR_staticMetaObject_10220feb0,0x1df11bd);
            QString::operator=(&local_168,&local_1a8);
            if (*(int *)local_1a8.field0_0x0 != -1) {
              if (*(int *)local_1a8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
                local_31 = *(int *)local_1a8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100398b5c;
              }
              QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
            }
          }
        }
        else {
          QMetaObject::tr((char *)&local_1a0,(char *)&PTR_staticMetaObject_10220feb0,0x1df11ae);
          QString::operator=(&local_168,&local_1a0);
          if (*(int *)local_1a0.field0_0x0 != -1) {
            if (*(int *)local_1a0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
              local_31 = *(int *)local_1a0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100398b5c;
            }
            QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
          }
        }
LAB_100398b5c:
        pQVar1 = *(QString **)(param_1 + 0x60);
        QString::arg(&local_1c8,&local_168,&local_160,0,0x20);
        QLabel::setText(pQVar1);
        if (*(int *)local_1c8 != -1) {
          if (*(int *)local_1c8 != 0) {
            LOCK();
            *(int *)local_1c8 = *(int *)local_1c8 + -1;
            local_31 = *(int *)local_1c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100398bc8;
          }
          QArrayData::deallocate(local_1c8,2,8);
        }
LAB_100398bc8:
        if (*(int *)local_168.field0_0x0 != -1) {
          if (*(int *)local_168.field0_0x0 != 0) {
            LOCK();
            *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
            local_31 = *(int *)local_168.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100398bfe;
          }
          QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
        }
LAB_100398bfe:
        if (*(int *)local_160.field0_0x0 != -1) {
          if (*(int *)local_160.field0_0x0 != 0) {
            LOCK();
            *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
            local_31 = *(int *)local_160.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100398c34;
          }
          QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
        }
      }
      else {
        QWidget::hide();
      }
    }
    else {
      QWidget::hide();
    }
LAB_100398c34:
    QDateTime::~QDateTime(&local_140);
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_31 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100398c7d;
      }
      QArrayData::deallocate(local_118,2,8);
    }
  }
LAB_100398c7d:
  QLabel::setText(*(QString **)(param_1 + 0x68));
  if ((bVar6 | bVar8) == 1) {
    pQVar1 = *(QString **)(param_1 + 0x30);
    QMetaObject::tr((char *)&local_1f8,(char *)&PTR_staticMetaObject_10220feb0,0x1df1203);
    QAbstractButton::setText(pQVar1);
    if (*(int *)local_1f8 != -1) {
      if (*(int *)local_1f8 != 0) {
        LOCK();
        *(int *)local_1f8 = *(int *)local_1f8 + -1;
        local_31 = *(int *)local_1f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100398e80;
      }
      QArrayData::deallocate(local_1f8,2,8);
    }
  }
  else {
    uVar14 = FUN_1006915d0();
    puVar4 = PTR_self_1021e1388;
    FUN_100691620(uVar14,0x60,*(undefined8 *)PTR_self_1021e1388);
    cVar5 = QAction::isEnabled();
    if ((cVar5 == '\0') || (cVar5 = QAction::isVisible(), cVar5 == '\0')) {
      cVar5 = FUN_10061b4d0(uVar11,0x20);
      if (cVar5 == '\0') {
        uVar11 = FUN_1006915d0();
        FUN_100691620(uVar11,0x52,*(undefined8 *)puVar4);
        cVar5 = QAction::isEnabled();
        if ((cVar5 != '\0') && (cVar5 = QAction::isVisible(), cVar5 != '\0')) {
          pQVar1 = *(QString **)(param_1 + 0x30);
          uVar11 = FUN_1006915d0();
          FUN_100691620(uVar11,0x52,*(undefined8 *)puVar4);
          QAction::text();
          QAbstractButton::setText(pQVar1);
          if (*(int *)local_208 != -1) {
            if (*(int *)local_208 != 0) {
              LOCK();
              *(int *)local_208 = *(int *)local_208 + -1;
              local_31 = *(int *)local_208 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100398e80;
            }
            QArrayData::deallocate(local_208,2,8);
          }
        }
      }
    }
    else {
      pQVar1 = *(QString **)(param_1 + 0x30);
      uVar11 = FUN_1006915d0();
      FUN_100691620(uVar11,0x60,*(undefined8 *)puVar4);
      QAction::text();
      QAbstractButton::setText(pQVar1);
      if (*(int *)local_200 != -1) {
        if (*(int *)local_200 != 0) {
          LOCK();
          *(int *)local_200 = *(int *)local_200 + -1;
          local_31 = *(int *)local_200 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100398e80;
        }
        QArrayData::deallocate(local_200,2,8);
      }
    }
  }
LAB_100398e80:
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_d0.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
  return;
}

