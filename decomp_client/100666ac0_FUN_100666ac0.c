
void FUN_100666ac0(QString *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  QObject *pQVar8;
  QTypedArrayData<unsigned_short> *pQVar9;
  QWidget *pQVar10;
  QTypedArrayData<unsigned_short> *pQVar11;
  QObject *pQVar12;
  int iVar13;
  bool bVar14;
  QVariant local_190;
  Connection local_180 [8];
  QArrayData *local_178;
  QVariant local_170;
  QVariant local_160;
  QArrayData *local_150;
  QVariant local_148;
  QArrayData *local_138;
  QVariant local_130;
  QArrayData *local_120;
  QString local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QString local_f8;
  QString local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QString local_d8;
  QArrayData *local_d0;
  QString local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QString local_a8;
  QString local_a0;
  QString local_98;
  QString local_90;
  undefined8 local_88;
  QVariant local_80;
  undefined8 local_70;
  QVariant local_68;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  CAbstractWizardPage::wizardModel();
  lVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  iVar13 = 0;
  if ((lVar4 != 0) && (lVar5 = FUN_100675e00(lVar4), iVar13 = 0, lVar5 != 0)) {
    uVar6 = FUN_100675e00(lVar4);
    uVar6 = FUN_10016f500(uVar6);
    FUN_10061abe0(&local_68,uVar6,0);
    iVar2 = QVariant::toInt((bool *)&local_68);
    QVariant::~QVariant(&local_68);
    cVar1 = FUN_10061b4d0(uVar6,0x20);
    FUN_10061abe0(&local_80,uVar6,6);
    local_70 = QVariant::toDate();
    QVariant::~QVariant(&local_80);
    local_88 = QDate::currentDate();
    iVar3 = QDate::daysTo((QDate *)&local_88);
    iVar13 = 0;
    if (cVar1 != '\0') {
      if (iVar2 < 0) {
        if (iVar2 < -0x7ffeefa8) {
          if (iVar2 == -0x7ffeefff) {
LAB_100666c10:
            QString::fromUtf8_helper((char *)&local_40,0x1e0a191);
            QString::operator=(&local_48,&local_40);
            if (*(int *)local_40.field0_0x0 != -1) {
              if (*(int *)local_40.field0_0x0 != 0) {
                LOCK();
                *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
                local_31 = *(int *)local_40.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100666c62;
              }
              QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
            }
LAB_100666c62:
            cVar1 = FUN_100d80630(1);
            if (cVar1 != '\0') {
              QMetaObject::tr((char *)&local_90,(char *)&PTR_staticMetaObject_102223b40,0x1e0c341);
              QString::operator=(&local_50,&local_90);
              if (*(int *)local_90.field0_0x0 != -1) {
                if (*(int *)local_90.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
                  local_31 = *(int *)local_90.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100666cdc;
                }
                QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
              }
LAB_100666cdc:
              QMetaObject::tr((char *)&local_98,(char *)&PTR_staticMetaObject_102223b40,0x1e0c356);
              QString::operator=(&local_58,&local_98);
              if (*(int *)local_98.field0_0x0 != -1) {
                if (*(int *)local_98.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
                  local_31 = *(int *)local_98.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100666d44;
                }
                QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
              }
LAB_100666d44:
              cVar1 = FUN_100627030(uVar6);
              if (cVar1 == '\0') {
                if (iVar3 < 1) {
                  QMetaObject::tr((char *)&local_d0,(char *)&PTR_staticMetaObject_102223b40,
                                  0x1e0c3ee);
                  QString::fromUtf8_helper((char *)&local_c8,0x1e31adc);
                  QString::append(&local_c8);
                  QString::append(&local_50);
                  if (*(int *)local_c8.field0_0x0 != -1) {
                    if (*(int *)local_c8.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
                      local_31 = *(int *)local_c8.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100667333;
                    }
                    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
                  }
LAB_100667333:
                  if (*(int *)local_d0 != -1) {
                    if (*(int *)local_d0 != 0) {
                      LOCK();
                      *(int *)local_d0 = *(int *)local_d0 + -1;
                      local_31 = *(int *)local_d0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1006673db;
                    }
                    QArrayData::deallocate(local_d0,2,8);
                  }
                }
                else {
                  QMetaObject::tr((char *)&local_c0,(char *)&PTR_staticMetaObject_102223b40,
                                  0x1e0c3e0);
                  QString::arg(&local_b8,&local_c0,(long)iVar3,0,10,0x20);
                  QString::fromUtf8_helper((char *)&local_b0,0x1e31adc);
                  QString::append(&local_b0);
                  QString::append(&local_50);
                  if (*(int *)local_b0.field0_0x0 != -1) {
                    if (*(int *)local_b0.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
                      local_31 = *(int *)local_b0.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10066709f;
                    }
                    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
                  }
LAB_10066709f:
                  if (*(int *)local_b8 != -1) {
                    if (*(int *)local_b8 != 0) {
                      LOCK();
                      *(int *)local_b8 = *(int *)local_b8 + -1;
                      local_31 = *(int *)local_b8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1006670d5;
                    }
                    QArrayData::deallocate(local_b8,2,8);
                  }
LAB_1006670d5:
                  if (*(int *)local_c0 != -1) {
                    if (*(int *)local_c0 != 0) {
                      LOCK();
                      *(int *)local_c0 = *(int *)local_c0 + -1;
                      local_31 = *(int *)local_c0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1006673db;
                    }
                    QArrayData::deallocate(local_c0,2,8);
                  }
                }
              }
              else {
                QMetaObject::tr((char *)&local_a0,(char *)&PTR_staticMetaObject_102223b40,0x1e0c392)
                ;
                QString::operator=(&local_50,&local_a0);
                if (*(int *)local_a0.field0_0x0 != -1) {
                  if (*(int *)local_a0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
                    local_31 = *(int *)local_a0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100666dbc;
                  }
                  QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
                }
LAB_100666dbc:
                QMetaObject::tr((char *)&local_a8,(char *)&PTR_staticMetaObject_102223b40,0x1e0c3b5)
                ;
                QString::operator=(&local_58,&local_a8);
                if (*(int *)local_a8.field0_0x0 != -1) {
                  if (*(int *)local_a8.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
                    local_31 = *(int *)local_a8.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1006673db;
                  }
                  QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
                }
              }
              goto LAB_1006673db;
            }
            QMetaObject::tr((char *)&local_e0,(char *)&PTR_staticMetaObject_102223b40,0x1e09e89);
            FUN_1001c72e0(&local_e8);
            QString::arg(&local_d8,&local_e0,&local_e8,0,0x20);
            QString::operator=(&local_50,&local_d8);
            if (*(int *)local_d8.field0_0x0 != -1) {
              if (*(int *)local_d8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
                local_31 = *(int *)local_d8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100666ec7;
              }
              QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
            }
LAB_100666ec7:
            if (*(int *)local_e8 != -1) {
              if (*(int *)local_e8 != 0) {
                LOCK();
                *(int *)local_e8 = *(int *)local_e8 + -1;
                local_31 = *(int *)local_e8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100666efd;
              }
              QArrayData::deallocate(local_e8,2,8);
            }
LAB_100666efd:
            if (*(int *)local_e0 != -1) {
              if (*(int *)local_e0 != 0) {
                LOCK();
                *(int *)local_e0 = *(int *)local_e0 + -1;
                local_31 = *(int *)local_e0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100666f33;
              }
              QArrayData::deallocate(local_e0,2,8);
            }
LAB_100666f33:
            if (iVar2 < -0x7ffeef8c) {
              if ((iVar2 != -0x7ffeefff) && (iVar2 != -0x7ffeef9b)) goto LAB_100667118;
LAB_100666f69:
              FUN_1001c7700(&local_f0,PTR_s_The_trial_period_for_this_copy_o_10226e198);
              QString::operator=(&local_58,&local_f0);
              if (*(int *)local_f0.field0_0x0 != -1) {
                if (*(int *)local_f0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
                  local_31 = *(int *)local_f0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006673db;
                }
                QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
              }
            }
            else {
              if ((iVar2 == -0x7ffeef8c) || (iVar2 == -0x7ffeef89)) goto LAB_100666f69;
LAB_100667118:
              if (iVar3 < 1) {
                QMetaObject::tr((char *)&local_118,(char *)&PTR_staticMetaObject_102223b40,0x1e09eea
                               );
                QString::operator=(&local_58,&local_118);
                if (*(int *)local_118.field0_0x0 != -1) {
                  if (*(int *)local_118.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
                    local_31 = *(int *)local_118.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1006673db;
                  }
                  QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
                }
              }
              else {
                QMetaObject::tr((char *)&local_108,(char *)&PTR_staticMetaObject_102223b40,0x1e09e92
                               );
                QDate::toString(&local_110,&local_70,4);
                QString::arg(&local_100,&local_108,&local_110,0,0x20);
                QString::arg(&local_f8,&local_100,(long)iVar3,0,10,0x20);
                QString::operator=(&local_58,&local_f8);
                if (*(int *)local_f8.field0_0x0 != -1) {
                  if (*(int *)local_f8.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
                    local_31 = *(int *)local_f8.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1006671f1;
                  }
                  QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
                }
LAB_1006671f1:
                if (*(int *)local_100 != -1) {
                  if (*(int *)local_100 != 0) {
                    LOCK();
                    *(int *)local_100 = *(int *)local_100 + -1;
                    local_31 = *(int *)local_100 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100667227;
                  }
                  QArrayData::deallocate(local_100,2,8);
                }
LAB_100667227:
                if (*(int *)local_110 != -1) {
                  if (*(int *)local_110 != 0) {
                    LOCK();
                    *(int *)local_110 = *(int *)local_110 + -1;
                    local_31 = *(int *)local_110 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10066725d;
                  }
                  QArrayData::deallocate(local_110,2,8);
                }
LAB_10066725d:
                if (*(int *)local_108 != -1) {
                  if (*(int *)local_108 != 0) {
                    LOCK();
                    *(int *)local_108 = *(int *)local_108 + -1;
                    local_31 = *(int *)local_108 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1006673db;
                  }
                  QArrayData::deallocate(local_108,2,8);
                }
              }
            }
LAB_1006673db:
            iVar13 = 0x96;
            CAbstractWizardPage::setTitle(param_1);
          }
        }
        else if ((iVar2 + 0x7ffeefa8U < 0x20) &&
                ((0x90002001U >> (iVar2 + 0x7ffeefa8U & 0x1f) & 1) != 0)) goto LAB_100666c10;
      }
      else if (iVar2 == 0) goto LAB_100666c10;
    }
  }
  local_120 = (QArrayData *)QString::fromAscii_helper("pageTitleBackground",0x13);
  pcVar7 = (char *)qt_qFindChild_helper(param_2,&local_120,PTR_staticMetaObject_1021e1368,1);
  QVariant::QVariant(&local_130,iVar13);
  QObject::setProperty(pcVar7,(QVariant *)"height");
  QVariant::~QVariant(&local_130);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10066748e;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_10066748e:
  local_138 = (QArrayData *)QString::fromAscii_helper("pageTitleBackground",0x13);
  pcVar7 = (char *)qt_qFindChild_helper(param_2,&local_138,PTR_staticMetaObject_1021e1368,1);
  QVariant::QVariant(&local_148,&local_48);
  QObject::setProperty(pcVar7,(QVariant *)"source");
  QVariant::~QVariant(&local_148);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100667530;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100667530:
  local_150 = (QArrayData *)QString::fromAscii_helper("headerText",10);
  pcVar7 = (char *)qt_qFindChild_helper(param_2,&local_150,PTR_staticMetaObject_1021e1368,1);
  QVariant::QVariant(&local_160,&local_58);
  QObject::setProperty(pcVar7,(QVariant *)"text");
  QVariant::~QVariant(&local_160);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006675d2;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1006675d2:
  CAbstractWizardPage::wizardCtrl();
  CWizardController::parentWidget();
  QWidget::window();
  QObject::property((char *)&local_170);
  FUN_10061fde0(&local_170);
  lVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220a9e0);
  QVariant::~QVariant(&local_170);
  if (((param_1[7].field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) ||
      (*(int *)(param_1[7].field0_0x0 + 4) == 0)) ||
     (param_1[8].field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0)) {
    pQVar11 = (QTypedArrayData<unsigned_short> *)0x0;
    pQVar12 = (QObject *)0x0;
    if (lVar4 != 0) {
      pQVar8 = (QObject *)FUN_1002dd030(lVar4);
      pQVar11 = (QTypedArrayData<unsigned_short> *)0x0;
      pQVar12 = (QObject *)0x0;
      if (pQVar8 != (QObject *)0x0) {
        pQVar11 = (QTypedArrayData<unsigned_short> *)
                  QtSharedPointer::ExternalRefCountData::getAndRef(pQVar8);
        pQVar12 = pQVar8;
      }
    }
    pQVar9 = param_1[7].field0_0x0;
    if (pQVar9 != pQVar11) {
      if (pQVar11 != (QTypedArrayData<unsigned_short> *)0x0) {
        LOCK();
        *(int *)pQVar11 = *(int *)pQVar11 + 1;
        local_31 = *(int *)pQVar11 != 0;
        UNLOCK();
        pQVar9 = param_1[7].field0_0x0;
      }
      if (pQVar9 != (QTypedArrayData<unsigned_short> *)0x0) {
        LOCK();
        *(int *)pQVar9 = *(int *)pQVar9 + -1;
        local_31 = *(int *)pQVar9 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (param_1[7].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0))
        {
          operator_delete(param_1[7].field0_0x0);
        }
      }
      param_1[7].field0_0x0 = pQVar11;
      param_1[8].field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar12;
    }
    if (pQVar11 != (QTypedArrayData<unsigned_short> *)0x0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(pQVar11);
      }
    }
  }
  pQVar11 = param_1[7].field0_0x0;
  bVar14 = true;
  if (pQVar11 != (QTypedArrayData<unsigned_short> *)0x0) {
    if ((*(int *)(pQVar11 + 4) != 0) &&
       (pQVar10 = (QWidget *)param_1[8].field0_0x0, pQVar10 != (QWidget *)0x0)) {
      CAbstractWizardPage::wizardCtrl();
      CWizardController::parentWidget();
      QWidget::setParent(pQVar10);
      uVar6 = CDeclarativeWizardPage::pageContentItem();
      local_178 = (QArrayData *)QString::fromAscii_helper("webViewPlaceholder",0x12);
      pQVar10 = (QWidget *)qt_qFindChild_helper(uVar6,&local_178,PTR_staticMetaObject_1021e1488,1);
      if (*(int *)local_178 != -1) {
        if (*(int *)local_178 != 0) {
          LOCK();
          *(int *)local_178 = *(int *)local_178 + -1;
          local_31 = *(int *)local_178 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10066778e;
        }
        QArrayData::deallocate(local_178,2,8);
      }
LAB_10066778e:
      CDeclarativeWidgetPlaceholder::setWidget(pQVar10);
      pQVar11 = (QTypedArrayData<unsigned_short> *)0x0;
      if ((param_1[7].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
         (pQVar11 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[7].field0_0x0 + 4) != 0
         )) {
        pQVar11 = param_1[8].field0_0x0;
      }
      QObject::connect(local_180,pQVar11,"2linkClicked(const QUrl&)",param_1,
                       "1onLinkClicked(const QUrl&)",0x80);
      QMetaObject::Connection::~Connection(local_180);
      QWidget::show();
      pQVar11 = param_1[7].field0_0x0;
      if (pQVar11 == (QTypedArrayData<unsigned_short> *)0x0) goto LAB_100667827;
    }
    if (*(int *)(pQVar11 + 4) != 0) {
      bVar14 = param_1[8].field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0;
    }
  }
LAB_100667827:
  QVariant::QVariant(&local_190,(bool)(bVar14 ^ 1));
  QObject::setProperty(param_2,(QVariant *)"hasWebPromo");
  QVariant::~QVariant(&local_190);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100667891;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100667891:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006678c1;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1006678c1:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return;
}

