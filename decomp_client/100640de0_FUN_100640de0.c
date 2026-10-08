
void FUN_100640de0(QString *param_1)

{
  QString *pQVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  int local_2c0;
  char local_2b4;
  char local_2b0;
  char local_2ac;
  QVariant local_2a8;
  QArrayData *local_298;
  QString local_290;
  QArrayData *local_288;
  QString local_280;
  QArrayData *local_278;
  QArrayData *local_270;
  QString local_268;
  QArrayData *local_260;
  QArrayData *local_258;
  QString local_250;
  QArrayData *local_248;
  QArrayData *local_240;
  QString local_238;
  QString local_230;
  QString local_228;
  QString local_220;
  QArrayData *local_218;
  QArrayData *local_210;
  QArrayData *local_208;
  QArrayData *local_200;
  QArrayData *local_1f8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QString local_1c8;
  QString local_1c0;
  QString local_1b8;
  QArrayData *local_1b0;
  undefined8 local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QString local_190;
  undefined8 local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QString local_168;
  QString local_160;
  QArrayData *local_158;
  QString local_150;
  QString local_148;
  undefined8 local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QString local_120;
  QString local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QString local_e8;
  QString local_e0;
  QString local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QDateTime local_c0;
  QDateTime local_b8;
  QVariant local_b0;
  QDateTime local_a0;
  QVariant local_98;
  QDateTime local_88;
  QVariant local_80;
  QString local_70;
  QVariant local_68;
  QString local_58;
  QDateTime local_50;
  QDateTime local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_10063f490();
  QDateTime::QDateTime(&local_48);
  QDateTime::QDateTime(&local_50);
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  uVar5 = FUN_10063f730(param_1);
  lVar6 = FUN_100675e00(uVar5);
  if (lVar6 == 0) {
    iVar3 = -0x7ffef000;
    local_2b0 = '\0';
    local_2b4 = '\0';
    local_2ac = '\0';
    iVar4 = 0;
    local_2c0 = 0;
    cVar2 = '\0';
  }
  else {
    uVar5 = FUN_10063f730(param_1);
    uVar5 = FUN_100675e00(uVar5);
    uVar5 = FUN_10016f500(uVar5);
    FUN_10061abe0(&local_68,uVar5,0);
    iVar3 = QVariant::toInt((bool *)&local_68);
    QVariant::~QVariant(&local_68);
    cVar2 = FUN_10061b4d0(uVar5,0x20);
    FUN_10061abe0(&local_80,uVar5,0xc);
    QVariant::toString();
    QString::operator=(&local_58,&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100640edd;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_100640edd:
    QVariant::~QVariant(&local_80);
    local_2b0 = FUN_10061b4d0(uVar5,0x8000);
    local_2b4 = FUN_10061b4d0(uVar5,0x80);
    local_2ac = FUN_100624c50(uVar5);
    FUN_10061abe0(&local_98,uVar5,6);
    QVariant::toDateTime();
    QDateTime::operator=(&local_48,&local_88);
    QDateTime::~QDateTime(&local_88);
    QVariant::~QVariant(&local_98);
    FUN_10061abe0(&local_b0,uVar5,9);
    QVariant::toDateTime();
    QDateTime::operator=(&local_50,&local_a0);
    QDateTime::~QDateTime(&local_a0);
    QVariant::~QVariant(&local_b0);
    QDateTime::currentDateTime();
    local_2c0 = QDateTime::daysTo(&local_b8);
    QDateTime::~QDateTime(&local_b8);
    QDateTime::currentDateTime();
    iVar4 = QDateTime::daysTo(&local_c0);
    QDateTime::~QDateTime(&local_c0);
  }
  (**(code **)(**(long **)(param_1[9].field0_0x0 + 0x28) + 0x68))();
  pQVar1 = *(QString **)(param_1[9].field0_0x0 + 0x48);
  local_c8 = (QArrayData *)QString::fromAscii_helper("",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006410b5;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1006410b5:
  FUN_100623da0(&local_d0);
  CAbstractWizardPage::setTitle(param_1);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100641106;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100641106:
  if (iVar3 < 0) {
    if (iVar3 < -0x7ffeefa8) {
      if (iVar3 != -0x7ffeefff) goto LAB_1006417f8;
    }
    else if (iVar3 < -0x7ffeef8c) {
      if (iVar3 == -0x7ffeefa8) goto LAB_100641148;
      if (iVar3 != -0x7ffeef9b) goto LAB_1006417f8;
    }
    else if ((iVar3 != -0x7ffeef8c) && (iVar3 != -0x7ffeef89)) goto LAB_1006417f8;
    if (cVar2 == '\0') {
      pQVar1 = *(QString **)(param_1[9].field0_0x0 + 0x18);
      FUN_1001c7700(&local_1f0,PTR_s_The_product_license_has_expired__1022709e0);
      QLabel::setText(pQVar1);
      if (*(int *)local_1f0 != -1) {
        if (*(int *)local_1f0 != 0) {
          LOCK();
          *(int *)local_1f0 = *(int *)local_1f0 + -1;
          local_31 = *(int *)local_1f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10064276c;
        }
        QArrayData::deallocate(local_1f0,2,8);
      }
    }
    else {
      QMetaObject::tr((char *)&local_1d8,(char *)&PTR_PTR_102223090,0x1e09e89);
      FUN_1001c72e0(&local_1e0);
      QString::arg(&local_1d0,&local_1d8,&local_1e0,0,0x20);
      CAbstractWizardPage::setTitle(param_1);
      if (*(int *)local_1d0 != -1) {
        if (*(int *)local_1d0 != 0) {
          LOCK();
          *(int *)local_1d0 = *(int *)local_1d0 + -1;
          local_31 = *(int *)local_1d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10064170f;
        }
        QArrayData::deallocate(local_1d0,2,8);
      }
LAB_10064170f:
      if (*(int *)local_1e0 != -1) {
        if (*(int *)local_1e0 != 0) {
          LOCK();
          *(int *)local_1e0 = *(int *)local_1e0 + -1;
          local_31 = *(int *)local_1e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100641745;
        }
        QArrayData::deallocate(local_1e0,2,8);
      }
LAB_100641745:
      if (*(int *)local_1d8 != -1) {
        if (*(int *)local_1d8 != 0) {
          LOCK();
          *(int *)local_1d8 = *(int *)local_1d8 + -1;
          local_31 = *(int *)local_1d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10064177b;
        }
        QArrayData::deallocate(local_1d8,2,8);
      }
LAB_10064177b:
      pQVar1 = *(QString **)(param_1[9].field0_0x0 + 0x18);
      FUN_1001c7700(&local_1e8,PTR_s_The_trial_period_for_this_copy_o_10226e198);
      QLabel::setText(pQVar1);
      if (*(int *)local_1e8 != -1) {
        if (*(int *)local_1e8 != 0) {
          LOCK();
          *(int *)local_1e8 = *(int *)local_1e8 + -1;
          local_31 = *(int *)local_1e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006417de;
        }
        QArrayData::deallocate(local_1e8,2,8);
      }
LAB_1006417de:
      QWidget::setFocus(*(undefined8 *)(param_1[9].field0_0x0 + 0x88),7);
    }
  }
  else if (iVar3 == 0) {
LAB_100641148:
    if (cVar2 == '\0') {
      FUN_10061da90(*(undefined8 *)(param_1[9].field0_0x0 + 0x88),1);
    }
    local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    if (local_2ac == '\0') {
      if (cVar2 == '\0') {
        if (local_2b0 == '\0') {
          uVar5 = FUN_10063f730(param_1);
          lVar6 = FUN_100675e00(uVar5);
          if (lVar6 != 0) {
            uVar5 = FUN_10063f730(param_1);
            uVar5 = FUN_100675e00(uVar5);
            uVar5 = FUN_10016f500(uVar5);
            cVar2 = FUN_10061c5c0(uVar5);
            if (cVar2 != '\0') {
              QMetaObject::tr((char *)&local_1c0,(char *)&PTR_PTR_102223090,0x1df118e);
              QString::operator=(&local_d8,&local_1c0);
              if (*(int *)local_1c0.field0_0x0 != -1) {
                if (*(int *)local_1c0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_1c0.field0_0x0 = *(int *)local_1c0.field0_0x0 + -1;
                  local_31 = *(int *)local_1c0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100642722;
                }
                QArrayData::deallocate((QArrayData *)local_1c0.field0_0x0,2,8);
              }
              goto LAB_100642722;
            }
          }
          FUN_1001c7700(&local_1c8,PTR_s_This_is_an_active_copy_of___PROD_10226e180);
          QString::operator=(&local_d8,&local_1c8);
          if (*(int *)local_1c8.field0_0x0 != -1) {
            if (*(int *)local_1c8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1c8.field0_0x0 = *(int *)local_1c8.field0_0x0 + -1;
              local_31 = *(int *)local_1c8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100642722;
            }
            QArrayData::deallocate((QArrayData *)local_1c8.field0_0x0,2,8);
          }
        }
        else {
          iVar3 = iVar4;
          if (local_2b4 != '\0') {
            iVar3 = local_2c0;
          }
          if (iVar3 - 1U < 0x1e) {
            QMetaObject::tr((char *)&local_158,(char *)&PTR_PTR_102223090,0x1e09f13);
            QString::arg(&local_150,&local_158,(long)iVar3,0,10,0x20);
            QString::operator=(&local_d8,&local_150);
            if (*(int *)local_150.field0_0x0 != -1) {
              if (*(int *)local_150.field0_0x0 != 0) {
                LOCK();
                *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
                local_31 = *(int *)local_150.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100641ee5;
              }
              QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
            }
LAB_100641ee5:
            if (*(int *)local_158 != -1) {
              if (*(int *)local_158 != 0) {
                LOCK();
                *(int *)local_158 = *(int *)local_158 + -1;
                local_31 = *(int *)local_158 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100642722;
              }
              QArrayData::deallocate(local_158,2,8);
            }
          }
          else if (iVar3 == 0) {
            QMetaObject::tr((char *)&local_160,(char *)&PTR_PTR_102223090,0x1e09f60);
            QString::operator=(&local_d8,&local_160);
            if (*(int *)local_160.field0_0x0 != -1) {
              if (*(int *)local_160.field0_0x0 != 0) {
                LOCK();
                *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
                local_31 = *(int *)local_160.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100642722;
              }
              QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
            }
          }
          else if ((iVar4 < 0) && (local_2b4 == '\0')) {
            if (local_2c0 < 1) {
              if (local_2c0 == 0) {
                QMetaObject::tr((char *)&local_198,(char *)&PTR_PTR_102223090,0x1e09fec);
                local_1a8 = QDateTime::date();
                QDate::toString(&local_1a0,&local_1a8,4);
                QString::arg(&local_190,&local_198,&local_1a0,0,0x20);
                QString::operator=(&local_d8,&local_190);
                if (*(int *)local_190.field0_0x0 != -1) {
                  if (*(int *)local_190.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
                    local_31 = *(int *)local_190.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10064264b;
                  }
                  QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
                }
LAB_10064264b:
                if (*(int *)local_1a0 != -1) {
                  if (*(int *)local_1a0 != 0) {
                    LOCK();
                    *(int *)local_1a0 = *(int *)local_1a0 + -1;
                    local_31 = *(int *)local_1a0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100642681;
                  }
                  QArrayData::deallocate(local_1a0,2,8);
                }
LAB_100642681:
                if (*(int *)local_198 != -1) {
                  if (*(int *)local_198 != 0) {
                    LOCK();
                    *(int *)local_198 = *(int *)local_198 + -1;
                    local_31 = *(int *)local_198 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1006426b7;
                  }
                  QArrayData::deallocate(local_198,2,8);
                }
              }
            }
            else {
              QMetaObject::tr((char *)&local_178,(char *)&PTR_PTR_102223090,0x1e09f84);
              local_188 = QDateTime::date();
              QDate::toString(&local_180,&local_188,4);
              QString::arg(&local_170,&local_178,&local_180,0,0x20);
              QString::arg(&local_168,&local_170,(long)local_2c0,0,10,0x20);
              QString::operator=(&local_d8,&local_168);
              if (*(int *)local_168.field0_0x0 != -1) {
                if (*(int *)local_168.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
                  local_31 = *(int *)local_168.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100642391;
                }
                QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
              }
LAB_100642391:
              if (*(int *)local_170 != -1) {
                if (*(int *)local_170 != 0) {
                  LOCK();
                  *(int *)local_170 = *(int *)local_170 + -1;
                  local_31 = *(int *)local_170 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006423c7;
                }
                QArrayData::deallocate(local_170,2,8);
              }
LAB_1006423c7:
              if (*(int *)local_180 != -1) {
                if (*(int *)local_180 != 0) {
                  LOCK();
                  *(int *)local_180 = *(int *)local_180 + -1;
                  local_31 = *(int *)local_180 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006423fd;
                }
                QArrayData::deallocate(local_180,2,8);
              }
LAB_1006423fd:
              if (*(int *)local_178 != -1) {
                if (*(int *)local_178 != 0) {
                  LOCK();
                  *(int *)local_178 = *(int *)local_178 + -1;
                  local_31 = *(int *)local_178 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006426b7;
                }
                QArrayData::deallocate(local_178,2,8);
              }
            }
LAB_1006426b7:
            QMetaObject::tr((char *)&local_1b0,(char *)&PTR_PTR_102223090,0x1e0a028);
            QString::append(&local_d8);
            if (*(int *)local_1b0 != -1) {
              if (*(int *)local_1b0 != 0) {
                LOCK();
                *(int *)local_1b0 = *(int *)local_1b0 + -1;
                local_31 = *(int *)local_1b0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100642722;
              }
              QArrayData::deallocate(local_1b0,2,8);
            }
          }
          else {
            FUN_1001c7700(&local_1b8,PTR_s_This_is_an_active_copy_of___PROD_10226e180);
            QString::operator=(&local_d8,&local_1b8);
            if (*(int *)local_1b8.field0_0x0 != -1) {
              if (*(int *)local_1b8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + -1;
                local_31 = *(int *)local_1b8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100642722;
              }
              QArrayData::deallocate((QArrayData *)local_1b8.field0_0x0,2,8);
            }
          }
        }
      }
      else {
        QMetaObject::tr((char *)&local_108,(char *)&PTR_PTR_102223090,0x1e09e89);
        FUN_1001c72e0(&local_110);
        QString::arg(&local_100,&local_108,&local_110,0,0x20);
        CAbstractWizardPage::setTitle(param_1);
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_31 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100641409;
          }
          QArrayData::deallocate(local_100,2,8);
        }
LAB_100641409:
        if (*(int *)local_110 != -1) {
          if (*(int *)local_110 != 0) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + -1;
            local_31 = *(int *)local_110 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10064143f;
          }
          QArrayData::deallocate(local_110,2,8);
        }
LAB_10064143f:
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            local_31 = *(int *)local_108 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100641475;
          }
          QArrayData::deallocate(local_108,2,8);
        }
LAB_100641475:
        FUN_1001c7700(&local_118,PTR_s_This_is_a_trial_version_of___PRO_10226e190);
        QString::operator=(&local_d8,&local_118);
        if (*(int *)local_118.field0_0x0 != -1) {
          if (*(int *)local_118.field0_0x0 != 0) {
            LOCK();
            *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
            local_31 = *(int *)local_118.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006414d4;
          }
          QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
        }
LAB_1006414d4:
        if (local_2c0 < 1) {
          QMetaObject::tr((char *)&local_148,(char *)&PTR_PTR_102223090,0x1e09eea);
          QString::operator=(&local_d8,&local_148);
          if (*(int *)local_148.field0_0x0 != -1) {
            if (*(int *)local_148.field0_0x0 != 0) {
              LOCK();
              *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
              local_31 = *(int *)local_148.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100642722;
            }
            QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
          }
        }
        else {
          QMetaObject::tr((char *)&local_130,(char *)&PTR_PTR_102223090,0x1e09e92);
          local_140 = QDateTime::date();
          QDate::toString(&local_138,&local_140,4);
          QString::arg(&local_128,&local_130,&local_138,0,0x20);
          QString::arg(&local_120,&local_128,(long)local_2c0,0,10,0x20);
          QString::operator=(&local_d8,&local_120);
          if (*(int *)local_120.field0_0x0 != -1) {
            if (*(int *)local_120.field0_0x0 != 0) {
              LOCK();
              *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
              local_31 = *(int *)local_120.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006415b5;
            }
            QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
          }
LAB_1006415b5:
          if (*(int *)local_128 != -1) {
            if (*(int *)local_128 != 0) {
              LOCK();
              *(int *)local_128 = *(int *)local_128 + -1;
              local_31 = *(int *)local_128 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006415eb;
            }
            QArrayData::deallocate(local_128,2,8);
          }
LAB_1006415eb:
          if (*(int *)local_138 != -1) {
            if (*(int *)local_138 != 0) {
              LOCK();
              *(int *)local_138 = *(int *)local_138 + -1;
              local_31 = *(int *)local_138 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100641621;
            }
            QArrayData::deallocate(local_138,2,8);
          }
LAB_100641621:
          if (*(int *)local_130 != -1) {
            if (*(int *)local_130 != 0) {
              LOCK();
              *(int *)local_130 = *(int *)local_130 + -1;
              local_31 = *(int *)local_130 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100642722;
            }
            QArrayData::deallocate(local_130,2,8);
          }
        }
      }
    }
    else {
      MessageUtils::getMessageString((int)&local_f0,true);
      local_e8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_f0;
      if (1 < *(int *)local_f0 + 1U) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + 1;
        local_31 = *(int *)local_f0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_40,0x1ddad42);
      QString::append(&local_e8);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100641208;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_100641208:
      MessageUtils::getMessageString((int)&local_f8,true);
      local_e0.field0_0x0 = local_e8.field0_0x0;
      if (1 < *(int *)local_e8.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + 1;
        local_31 = *(int *)local_e8.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_e0);
      QString::operator=(&local_d8,&local_e0);
      if (*(int *)local_e0.field0_0x0 != -1) {
        if (*(int *)local_e0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
          local_31 = *(int *)local_e0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100641296;
        }
        QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
      }
LAB_100641296:
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_31 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006412cc;
        }
        QArrayData::deallocate(local_f8,2,8);
      }
LAB_1006412cc:
      if (*(int *)local_e8.field0_0x0 != -1) {
        if (*(int *)local_e8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
          local_31 = *(int *)local_e8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100641302;
        }
        QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
      }
LAB_100641302:
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100642722;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
    }
LAB_100642722:
    QLabel::setText(*(QString **)(param_1[9].field0_0x0 + 0x18));
    if (*(int *)local_d8.field0_0x0 != -1) {
      if (*(int *)local_d8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
        local_31 = *(int *)local_d8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10064276c;
      }
      QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
    }
  }
  else {
LAB_1006417f8:
    uVar5 = FUN_10063f730(param_1);
    cVar2 = FUN_1006760d0(uVar5);
    if (cVar2 == '\0') {
      local_220.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      local_228.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      if ((local_2b0 != '\0') && (local_2b4 != '\0')) {
        FUN_1006216f0(&local_230,0);
        QString::operator=(&local_228,&local_230);
        if (*(int *)local_230.field0_0x0 != -1) {
          if (*(int *)local_230.field0_0x0 != 0) {
            LOCK();
            *(int *)local_230.field0_0x0 = *(int *)local_230.field0_0x0 + -1;
            local_31 = *(int *)local_230.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100641a59;
          }
          QArrayData::deallocate((QArrayData *)local_230.field0_0x0,2,8);
        }
      }
LAB_100641a59:
      if (iVar3 == -0x7ffee8f0) {
        QMetaObject::tr((char *)&local_270,(char *)&PTR_PTR_102223090,0x1e0a121);
        FUN_1001c72b0(&local_278);
        QString::arg(&local_268,&local_270,&local_278,0,0x20);
        QString::operator=(&local_220,&local_268);
        if (*(int *)local_268.field0_0x0 != -1) {
          if (*(int *)local_268.field0_0x0 != 0) {
            LOCK();
            *(int *)local_268.field0_0x0 = *(int *)local_268.field0_0x0 + -1;
            local_31 = *(int *)local_268.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100641c8e;
          }
          QArrayData::deallocate((QArrayData *)local_268.field0_0x0,2,8);
        }
LAB_100641c8e:
        if (*(int *)local_278 != -1) {
          if (*(int *)local_278 != 0) {
            LOCK();
            *(int *)local_278 = *(int *)local_278 + -1;
            local_31 = *(int *)local_278 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100641cc4;
          }
          QArrayData::deallocate(local_278,2,8);
        }
LAB_100641cc4:
        if (*(int *)local_270 != -1) {
          if (*(int *)local_270 != 0) {
            LOCK();
            *(int *)local_270 = *(int *)local_270 + -1;
            local_31 = *(int *)local_270 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100641f87;
          }
          QArrayData::deallocate(local_270,2,8);
        }
      }
      else if (iVar3 == -0x7ffee8f7) {
        QMetaObject::tr((char *)&local_258,(char *)&PTR_PTR_102223090,0x1e0a0d3);
        FUN_1001c72b0(&local_260);
        QString::arg(&local_250,&local_258,&local_260,0,0x20);
        QString::operator=(&local_220,&local_250);
        if (*(int *)local_250.field0_0x0 != -1) {
          if (*(int *)local_250.field0_0x0 != 0) {
            LOCK();
            *(int *)local_250.field0_0x0 = *(int *)local_250.field0_0x0 + -1;
            local_31 = *(int *)local_250.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100641b0c;
          }
          QArrayData::deallocate((QArrayData *)local_250.field0_0x0,2,8);
        }
LAB_100641b0c:
        if (*(int *)local_260 != -1) {
          if (*(int *)local_260 != 0) {
            LOCK();
            *(int *)local_260 = *(int *)local_260 + -1;
            local_31 = *(int *)local_260 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100641b42;
          }
          QArrayData::deallocate(local_260,2,8);
        }
LAB_100641b42:
        if (*(int *)local_258 != -1) {
          if (*(int *)local_258 != 0) {
            LOCK();
            *(int *)local_258 = *(int *)local_258 + -1;
            local_31 = *(int *)local_258 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100641f87;
          }
          QArrayData::deallocate(local_258,2,8);
        }
      }
      else if (iVar3 == -0x7ffee8f8) {
        QMetaObject::tr((char *)&local_240,(char *)&PTR_PTR_102223090,0x1e0a089);
        FUN_1001c72b0(&local_248);
        QString::arg(&local_238,&local_240,&local_248,0,0x20);
        QString::operator=(&local_220,&local_238);
        if (*(int *)local_238.field0_0x0 != -1) {
          if (*(int *)local_238.field0_0x0 != 0) {
            LOCK();
            *(int *)local_238.field0_0x0 = *(int *)local_238.field0_0x0 + -1;
            local_31 = *(int *)local_238.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100641dad;
          }
          QArrayData::deallocate((QArrayData *)local_238.field0_0x0,2,8);
        }
LAB_100641dad:
        if (*(int *)local_248 != -1) {
          if (*(int *)local_248 != 0) {
            LOCK();
            *(int *)local_248 = *(int *)local_248 + -1;
            local_31 = *(int *)local_248 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100641de3;
          }
          QArrayData::deallocate(local_248,2,8);
        }
LAB_100641de3:
        if (*(int *)local_240 != -1) {
          if (*(int *)local_240 != 0) {
            LOCK();
            *(int *)local_240 = *(int *)local_240 + -1;
            local_31 = *(int *)local_240 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100641f87;
          }
          QArrayData::deallocate(local_240,2,8);
        }
      }
      else {
        FUN_1001c7700(&local_280,PTR_s_Please_enter_your_activation_key_10226e188);
        QString::operator=(&local_220,&local_280);
        if (*(int *)local_280.field0_0x0 != -1) {
          if (*(int *)local_280.field0_0x0 != 0) {
            LOCK();
            *(int *)local_280.field0_0x0 = *(int *)local_280.field0_0x0 + -1;
            local_31 = *(int *)local_280.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100641f87;
          }
          QArrayData::deallocate((QArrayData *)local_280.field0_0x0,2,8);
        }
      }
LAB_100641f87:
      QString::append(&local_220);
      local_288 = (QArrayData *)QString::fromAscii_helper("<a href=",8);
      iVar3 = QString::indexOf(&local_228,&local_288,0,1);
      if (*(int *)local_288 != -1) {
        if (*(int *)local_288 != 0) {
          LOCK();
          *(int *)local_288 = *(int *)local_288 + -1;
          local_31 = *(int *)local_288 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100642004;
        }
        QArrayData::deallocate(local_288,2,8);
      }
LAB_100642004:
      if (iVar3 != -1) {
        local_298 = (QArrayData *)
                    QString::fromAscii_helper
                              ("<html><style>a { color: #aaddf0; }</style><body>%1</body></html>",
                               0x40);
        QString::arg(&local_290,&local_298,&local_220,0,0x20);
        QString::operator=(&local_220,&local_290);
        if (*(int *)local_290.field0_0x0 != -1) {
          if (*(int *)local_290.field0_0x0 != 0) {
            LOCK();
            *(int *)local_290.field0_0x0 = *(int *)local_290.field0_0x0 + -1;
            local_31 = *(int *)local_290.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100642090;
          }
          QArrayData::deallocate((QArrayData *)local_290.field0_0x0,2,8);
        }
LAB_100642090:
        if (*(int *)local_298 != -1) {
          if (*(int *)local_298 != 0) {
            LOCK();
            *(int *)local_298 = *(int *)local_298 + -1;
            local_31 = *(int *)local_298 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006420c6;
          }
          QArrayData::deallocate(local_298,2,8);
        }
      }
LAB_1006420c6:
      QLabel::setText(*(QString **)(param_1[9].field0_0x0 + 0x18));
      if (*(int *)local_228.field0_0x0 != -1) {
        if (*(int *)local_228.field0_0x0 != 0) {
          LOCK();
          *(int *)local_228.field0_0x0 = *(int *)local_228.field0_0x0 + -1;
          local_31 = *(int *)local_228.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100642110;
        }
        QArrayData::deallocate((QArrayData *)local_228.field0_0x0,2,8);
      }
LAB_100642110:
      if (*(int *)local_220.field0_0x0 != -1) {
        if (*(int *)local_220.field0_0x0 != 0) {
          LOCK();
          *(int *)local_220.field0_0x0 = *(int *)local_220.field0_0x0 + -1;
          local_31 = *(int *)local_220.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100642146;
        }
        QArrayData::deallocate((QArrayData *)local_220.field0_0x0,2,8);
      }
    }
    else {
      pQVar1 = *(QString **)(param_1[9].field0_0x0 + 0x18);
      QMetaObject::tr((char *)&local_208,(char *)&PTR_PTR_102223090,0x1e0a05d);
      FUN_1001c72b0(&local_210);
      QString::arg(&local_200,&local_208,&local_210,0,0x20);
      QMetaObject::tr((char *)&local_218,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Business_Edition_102270a40);
      QString::arg(&local_1f8,&local_200,&local_218,0,0x20);
      QLabel::setText(pQVar1);
      if (*(int *)local_1f8 != -1) {
        if (*(int *)local_1f8 != 0) {
          LOCK();
          *(int *)local_1f8 = *(int *)local_1f8 + -1;
          local_31 = *(int *)local_1f8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006418f4;
        }
        QArrayData::deallocate(local_1f8,2,8);
      }
LAB_1006418f4:
      if (*(int *)local_218 != -1) {
        if (*(int *)local_218 != 0) {
          LOCK();
          *(int *)local_218 = *(int *)local_218 + -1;
          local_31 = *(int *)local_218 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10064192a;
        }
        QArrayData::deallocate(local_218,2,8);
      }
LAB_10064192a:
      if (*(int *)local_200 != -1) {
        if (*(int *)local_200 != 0) {
          LOCK();
          *(int *)local_200 = *(int *)local_200 + -1;
          local_31 = *(int *)local_200 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100641960;
        }
        QArrayData::deallocate(local_200,2,8);
      }
LAB_100641960:
      if (*(int *)local_210 != -1) {
        if (*(int *)local_210 != 0) {
          LOCK();
          *(int *)local_210 = *(int *)local_210 + -1;
          local_31 = *(int *)local_210 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100641996;
        }
        QArrayData::deallocate(local_210,2,8);
      }
LAB_100641996:
      if (*(int *)local_208 != -1) {
        if (*(int *)local_208 != 0) {
          LOCK();
          *(int *)local_208 = *(int *)local_208 + -1;
          local_31 = *(int *)local_208 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100642146;
        }
        QArrayData::deallocate(local_208,2,8);
      }
    }
LAB_100642146:
    QWidget::setFocus(*(undefined8 *)(param_1[9].field0_0x0 + 0x88),7);
  }
LAB_10064276c:
  QVariant::QVariant(&local_2a8,true);
  QObject::setProperty((char *)param_1,(QVariant *)"initalized");
  QVariant::~QVariant(&local_2a8);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006427cf;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1006427cf:
  QDateTime::~QDateTime(&local_50);
  QDateTime::~QDateTime(&local_48);
  return;
}

