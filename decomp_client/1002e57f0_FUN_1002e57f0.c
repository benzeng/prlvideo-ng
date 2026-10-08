
undefined8 FUN_1002e57f0(long param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  size_t sVar7;
  QString *this;
  undefined8 *puVar8;
  int *piVar9;
  QArrayData *pQVar10;
  undefined8 uVar11;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QString local_1d8;
  QDomNodeList local_1d0 [8];
  int *local_1c8;
  int *local_1c0;
  int *local_1b8;
  undefined4 local_1b0;
  QArrayData *local_1a8;
  QString local_1a0;
  QArrayData *local_198;
  QString local_190;
  QArrayData *local_188;
  QString local_180;
  QArrayData *local_178;
  QString local_170;
  QArrayData *local_168;
  QString local_160;
  QArrayData *local_158;
  QString local_150;
  QArrayData *local_148;
  QString local_140;
  QArrayData *local_138;
  QString local_130;
  QArrayData *local_128;
  QString local_120;
  QArrayData *local_118;
  QString local_110;
  QArrayData *local_108;
  QString local_100;
  QArrayData *local_f8;
  QString local_f0;
  QArrayData *local_e8;
  QString local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QString local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QString local_78;
  QDomDocument local_70 [8];
  QString local_68;
  QString local_60 [2];
  char local_49;
  QString local_48;
  QFileInfo local_40 [15];
  undefined1 local_31;
  
  local_48.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x10);
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  QFileInfo::QFileInfo(local_40,&local_48);
  cVar2 = QFileInfo::exists();
  QFileInfo::~QFileInfo(local_40);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e5871;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1002e5871:
  if (cVar2 == '\0') {
    return 1;
  }
  local_49 = '\0';
  local_68.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x10);
  if (1 < *(int *)local_68.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
    local_31 = *(int *)local_68.field0_0x0 != 0;
    UNLOCK();
  }
  QFile::QFile((QFile *)local_60,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e58d9;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1002e58d9:
  lVar6 = (**(code **)(local_60[0].field0_0x0 + 0xa0))(local_60);
  uVar11 = 4;
  if (lVar6 < 1) goto LAB_1002e6da2;
  local_78.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("responseDocument",0x10);
  QDomDocument::QDomDocument(local_70,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e594b;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1002e594b:
  cVar2 = QDomDocument::setContent((QIODevice *)local_70,local_60,(int *)0x0,(int *)0x0);
  uVar11 = 3;
  if (cVar2 != '\0') {
    QDomDocument::documentElement();
    QDomElement::tagName();
    QString::toLocal8Bit();
    pQVar10 = local_88 + *(long *)(local_88 + 0x10);
    local_a8 = (QArrayData *)QString::fromAscii_helper("Version",7);
    local_b0 = (QArrayData *)QString::fromAscii_helper("Unknown",7);
    QDomElement::attribute(&local_a0,&local_80);
    QString::toLocal8Bit();
    FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,"Received element %s - %s",pQVar10,
                  local_98 + *(long *)(local_98 + 0x10));
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e5a68;
      }
      QArrayData::deallocate(local_98,1,8);
    }
LAB_1002e5a68:
    if (*(int *)local_a0.field0_0x0 != -1) {
      if (*(int *)local_a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
        local_31 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e5a9e;
      }
      QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
    }
LAB_1002e5a9e:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e5ad4;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_1002e5ad4:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e5b0a;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_1002e5b0a:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e5b3a;
      }
      QArrayData::deallocate(local_88,1,8);
    }
LAB_1002e5b3a:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e5b70;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1002e5b70:
    if (2 < DAT_10230ffd0) {
      QDomDocument::toString((int)&local_c0);
      QString::toUtf8();
      if ((1 < *(uint *)local_b8) || (*(long *)(local_b8 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_b8,*(uint *)(local_b8 + 4) + 1,*(uint *)(local_b8 + 8) >> 0x1f);
      }
      FUN_100df99c0("[TASK_PROMO]","prl_client_app",3,"Received descriptor:\n%s",
                    local_b8 + *(long *)(local_b8 + 0x10));
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002e5c37;
        }
        QArrayData::deallocate(local_b8,1,8);
      }
LAB_1002e5c37:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002e5c6d;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
    }
LAB_1002e5c6d:
    local_c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    local_d8 = (QArrayData *)QString::fromAscii_helper("Result",6);
    FUN_1002e78a0(&local_d0,param_1,&local_d8,&local_80);
    QString::operator=(&local_c8,&local_d0);
    if (*(int *)local_d0.field0_0x0 != -1) {
      if (*(int *)local_d0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
        local_31 = *(int *)local_d0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e5cf6;
      }
      QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
    }
LAB_1002e5cf6:
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_31 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e5d2c;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_1002e5d2c:
    if (*(int *)(local_c8.field0_0x0 + 4) == 0) {
      uVar11 = 3;
      FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,
                    "(!)Error: can\'t get <%s> value from response.","Result");
    }
    else {
      uVar3 = QString::toInt((bool *)&local_c8,(int)&local_49);
      *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x1c) = uVar3;
      if (local_49 == '\0') {
        uVar11 = 3;
        FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,
                      "(!)Error: failed to extract value from response.");
      }
      else {
        uVar11 = 0;
        FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,"Promo result_code: %d",uVar3);
        if (*(int *)(*(long *)(param_1 + 0x30) + 0x1c) != 0) {
          local_e8 = (QArrayData *)QString::fromAscii_helper("RemindPeriod",0xc);
          FUN_1002e78a0(&local_e0,param_1,&local_e8,&local_80);
          QString::operator=(&local_c8,&local_e0);
          if (*(int *)local_e0.field0_0x0 != -1) {
            if (*(int *)local_e0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
              local_31 = *(int *)local_e0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002e5e12;
            }
            QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
          }
LAB_1002e5e12:
          if (*(int *)local_e8 != -1) {
            if (*(int *)local_e8 != 0) {
              LOCK();
              *(int *)local_e8 = *(int *)local_e8 + -1;
              local_31 = *(int *)local_e8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002e5e48;
            }
            QArrayData::deallocate(local_e8,2,8);
          }
LAB_1002e5e48:
          if (*(int *)(local_c8.field0_0x0 + 4) == 0) {
            uVar11 = 3;
            FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,
                          "(!)Error: can\'t get <%s> value from response.","RemindPeriod");
          }
          else {
            iVar4 = QString::toInt((bool *)&local_c8,(int)&local_49);
            *(int *)(*(long *)(param_1 + 0x30) + 0x18) = iVar4 * 86400000;
            if (local_49 == '\0') {
              uVar11 = 3;
              FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,
                            "(!)Error: failed to extract value from response.");
            }
            else {
              local_f8 = (QArrayData *)QString::fromAscii_helper("Delay",5);
              QDomElement::elementsByTagName(&local_f0);
              iVar4 = QDomNodeList::length();
              QDomNodeList::~QDomNodeList((QDomNodeList *)&local_f0);
              if (*(int *)local_f8 != -1) {
                if (*(int *)local_f8 != 0) {
                  LOCK();
                  *(int *)local_f8 = *(int *)local_f8 + -1;
                  local_31 = *(int *)local_f8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1002e5f05;
                }
                QArrayData::deallocate(local_f8,2,8);
              }
LAB_1002e5f05:
              if (iVar4 == 0) {
LAB_1002e5ffc:
                local_118 = (QArrayData *)QString::fromAscii_helper("Width",5);
                FUN_1002e78a0(&local_110,param_1,&local_118,&local_80);
                QString::operator=(&local_c8,&local_110);
                if (*(int *)local_110.field0_0x0 != -1) {
                  if (*(int *)local_110.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
                    local_31 = *(int *)local_110.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1002e6077;
                  }
                  QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
                }
LAB_1002e6077:
                if (*(int *)local_118 != -1) {
                  if (*(int *)local_118 != 0) {
                    LOCK();
                    *(int *)local_118 = *(int *)local_118 + -1;
                    local_31 = *(int *)local_118 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1002e60ad;
                  }
                  QArrayData::deallocate(local_118,2,8);
                }
LAB_1002e60ad:
                if (*(int *)(local_c8.field0_0x0 + 4) == 0) {
                  uVar11 = 3;
                  FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,
                                "(!)Error: can\'t get <%s> value from response.","Width");
                }
                else {
                  lVar6 = *(long *)(param_1 + 0x38);
                  uVar3 = QString::toInt((bool *)&local_c8,(int)&local_49);
                  *(undefined4 *)(lVar6 + 0x18) = uVar3;
                  if (local_49 == '\0') {
                    uVar11 = 3;
                    FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,
                                  "(!)Error: failed to extract value from response.");
                  }
                  else {
                    local_128 = (QArrayData *)QString::fromAscii_helper("Height",6);
                    FUN_1002e78a0(&local_120,param_1,&local_128,&local_80);
                    QString::operator=(&local_c8,&local_120);
                    if (*(int *)local_120.field0_0x0 != -1) {
                      if (*(int *)local_120.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
                        local_31 = *(int *)local_120.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1002e615f;
                      }
                      QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
                    }
LAB_1002e615f:
                    if (*(int *)local_128 != -1) {
                      if (*(int *)local_128 != 0) {
                        LOCK();
                        *(int *)local_128 = *(int *)local_128 + -1;
                        local_31 = *(int *)local_128 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1002e6195;
                      }
                      QArrayData::deallocate(local_128,2,8);
                    }
LAB_1002e6195:
                    if (*(int *)(local_c8.field0_0x0 + 4) == 0) {
                      uVar11 = 3;
                      FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,
                                    "(!)Error: can\'t get <%s> value from response.","Height");
                    }
                    else {
                      lVar6 = *(long *)(param_1 + 0x38);
                      uVar3 = QString::toInt((bool *)&local_c8,(int)&local_49);
                      *(undefined4 *)(lVar6 + 0x1c) = uVar3;
                      if (local_49 == '\0') {
                        uVar11 = 3;
                        FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,
                                      "(!)Error: failed to extract value from response.");
                      }
                      else {
                        local_138 = (QArrayData *)QString::fromAscii_helper("URL",3);
                        FUN_1002e78a0(&local_130,param_1,&local_138,&local_80);
                        QString::operator=(&local_c8,&local_130);
                        if (*(int *)local_130.field0_0x0 != -1) {
                          if (*(int *)local_130.field0_0x0 != 0) {
                            LOCK();
                            *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
                            local_31 = *(int *)local_130.field0_0x0 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1002e6247;
                          }
                          QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
                        }
LAB_1002e6247:
                        if (*(int *)local_138 != -1) {
                          if (*(int *)local_138 != 0) {
                            LOCK();
                            *(int *)local_138 = *(int *)local_138 + -1;
                            local_31 = *(int *)local_138 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1002e627d;
                          }
                          QArrayData::deallocate(local_138,2,8);
                        }
LAB_1002e627d:
                        if (*(int *)(local_c8.field0_0x0 + 4) == 0) {
                          uVar11 = 3;
                          FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,
                                        "(!)Error: can\'t get <%s> value from response.","URL");
                        }
                        else {
                          QString::operator=((QString *)(*(long *)(param_1 + 0x38) + 8),&local_c8);
                          local_148 = (QArrayData *)QString::fromAscii_helper("ID",2);
                          FUN_1002e78a0(&local_140,param_1,&local_148,&local_80);
                          QString::operator=(&local_c8,&local_140);
                          if (*(int *)local_140.field0_0x0 != -1) {
                            if (*(int *)local_140.field0_0x0 != 0) {
                              LOCK();
                              *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
                              local_31 = *(int *)local_140.field0_0x0 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_1002e631d;
                            }
                            QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
                          }
LAB_1002e631d:
                          if (*(int *)local_148 != -1) {
                            if (*(int *)local_148 != 0) {
                              LOCK();
                              *(int *)local_148 = *(int *)local_148 + -1;
                              local_31 = *(int *)local_148 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_1002e6353;
                            }
                            QArrayData::deallocate(local_148,2,8);
                          }
LAB_1002e6353:
                          if (*(int *)(local_c8.field0_0x0 + 4) == 0) {
                            uVar11 = 3;
                            FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,
                                          "(!)Error: can\'t get <%s> value from response.","ID");
                          }
                          else {
                            QString::operator=(*(QString **)(param_1 + 0x38),&local_c8);
                            QString::operator=(*(QString **)(param_1 + 0x30),&local_c8);
                            if ((*(uint *)(*(long *)(param_1 + 0x30) + 8) & 0xfffffffe) != 100) {
                              local_158 = (QArrayData *)QString::fromAscii_helper("Type",4);
                              FUN_1002e78a0(&local_150,param_1,&local_158);
                              QString::operator=(&local_c8,&local_150);
                              if (*(int *)local_150.field0_0x0 != -1) {
                                if (*(int *)local_150.field0_0x0 != 0) {
                                  LOCK();
                                  *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
                                  local_31 = *(int *)local_150.field0_0x0 != 0;
                                  UNLOCK();
                                  if ((bool)local_31) goto LAB_1002e6412;
                                }
                                QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
                              }
LAB_1002e6412:
                              if (*(int *)local_158 != -1) {
                                if (*(int *)local_158 != 0) {
                                  LOCK();
                                  *(int *)local_158 = *(int *)local_158 + -1;
                                  local_31 = *(int *)local_158 != 0;
                                  UNLOCK();
                                  if ((bool)local_31) goto LAB_1002e6448;
                                }
                                QArrayData::deallocate(local_158,2,8);
                              }
LAB_1002e6448:
                              if (*(int *)(local_c8.field0_0x0 + 4) == 0) {
                                uVar11 = 3;
                                FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,
                                              "(!)Error: can\'t get <%s> value from response.",
                                              "Type");
                                goto LAB_1002e6d5a;
                              }
                              iVar5 = QString::toInt((bool *)&local_c8,(int)&local_49);
                              iVar4 = 0;
                              if (iVar5 < 5) {
                                iVar4 = iVar5;
                              }
                              *(int *)(*(long *)(param_1 + 0x30) + 8) = iVar4;
                            }
                            local_168 = (QArrayData *)
                                        QString::fromAscii_helper("PromotedVersion",0xf);
                            FUN_1002e78a0(&local_160,param_1,&local_168,&local_80);
                            QString::operator=(&local_c8,&local_160);
                            if (*(int *)local_160.field0_0x0 != -1) {
                              if (*(int *)local_160.field0_0x0 != 0) {
                                LOCK();
                                *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
                                local_31 = *(int *)local_160.field0_0x0 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_1002e64f8;
                              }
                              QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
                            }
LAB_1002e64f8:
                            if (*(int *)local_168 != -1) {
                              if (*(int *)local_168 != 0) {
                                LOCK();
                                *(int *)local_168 = *(int *)local_168 + -1;
                                local_31 = *(int *)local_168 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_1002e652e;
                              }
                              QArrayData::deallocate(local_168,2,8);
                            }
LAB_1002e652e:
                            uVar3 = QString::toInt((bool *)&local_c8,(int)&local_49);
                            *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x28) = uVar3;
                            local_178 = (QArrayData *)QString::fromAscii_helper("ShortText",9);
                            FUN_1002e78a0(&local_170,param_1,&local_178,&local_80);
                            QString::operator=(&local_c8,&local_170);
                            if (*(int *)local_170.field0_0x0 != -1) {
                              if (*(int *)local_170.field0_0x0 != 0) {
                                LOCK();
                                *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
                                local_31 = *(int *)local_170.field0_0x0 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_1002e65c5;
                              }
                              QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
                            }
LAB_1002e65c5:
                            if (*(int *)local_178 != -1) {
                              if (*(int *)local_178 != 0) {
                                LOCK();
                                *(int *)local_178 = *(int *)local_178 + -1;
                                local_31 = *(int *)local_178 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_1002e65fb;
                              }
                              QArrayData::deallocate(local_178,2,8);
                            }
LAB_1002e65fb:
                            QString::operator=((QString *)(*(long *)(param_1 + 0x30) + 0x30),
                                               &local_c8);
                            local_188 = (QArrayData *)QString::fromAscii_helper("LongText",8);
                            FUN_1002e78a0(&local_180,param_1,&local_188,&local_80);
                            QString::operator=(&local_c8,&local_180);
                            if (*(int *)local_180.field0_0x0 != -1) {
                              if (*(int *)local_180.field0_0x0 != 0) {
                                LOCK();
                                *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
                                local_31 = *(int *)local_180.field0_0x0 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_1002e668a;
                              }
                              QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
                            }
LAB_1002e668a:
                            if (*(int *)local_188 != -1) {
                              if (*(int *)local_188 != 0) {
                                LOCK();
                                *(int *)local_188 = *(int *)local_188 + -1;
                                local_31 = *(int *)local_188 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_1002e66c0;
                              }
                              QArrayData::deallocate(local_188,2,8);
                            }
LAB_1002e66c0:
                            QString::operator=((QString *)(*(long *)(param_1 + 0x30) + 0x38),
                                               &local_c8);
                            local_198 = (QArrayData *)
                                        QString::fromAscii_helper("ShowImmediately",0xf);
                            QDomElement::elementsByTagName(&local_190);
                            iVar4 = QDomNodeList::length();
                            QDomNodeList::~QDomNodeList((QDomNodeList *)&local_190);
                            if (*(int *)local_198 != -1) {
                              if (*(int *)local_198 != 0) {
                                LOCK();
                                *(int *)local_198 = *(int *)local_198 + -1;
                                local_31 = *(int *)local_198 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_1002e6754;
                              }
                              QArrayData::deallocate(local_198,2,8);
                            }
LAB_1002e6754:
                            if (iVar4 == 0) {
                              lVar6 = *(long *)(param_1 + 0x30);
LAB_1002e6a92:
                              local_1c8 = *(int **)(lVar6 + 0x60);
                              if (*local_1c8 != -1) {
                                if (*local_1c8 == 0) {
                                  QListData::detach((int)&local_1c8);
                                  iVar4 = local_1c8[2];
                                  if (iVar4 != local_1c8[3]) {
                                    puVar8 = (undefined8 *)
                                             (*(long *)(lVar6 + 0x60) + 0x10 +
                                             (long)*(int *)(*(long *)(lVar6 + 0x60) + 8) * 8);
                                    piVar9 = local_1c8 + (long)iVar4 * 2 + 4;
                                    lVar6 = (long)local_1c8[3] * 8 + (long)iVar4 * -8;
                                    do {
                                      piVar1 = (int *)*puVar8;
                                      *(int **)piVar9 = piVar1;
                                      if (1 < *piVar1 + 1U) {
                                        LOCK();
                                        *piVar1 = *piVar1 + 1;
                                        local_31 = *piVar1 != 0;
                                        UNLOCK();
                                      }
                                      piVar9 = piVar9 + 2;
                                      puVar8 = puVar8 + 1;
                                      lVar6 = lVar6 + -8;
                                    } while (lVar6 != 0);
                                  }
                                }
                                else {
                                  LOCK();
                                  *local_1c8 = *local_1c8 + 1;
                                  local_31 = *local_1c8 != 0;
                                  UNLOCK();
                                }
                              }
                              piVar9 = local_1c8 + (long)local_1c8[2] * 2 + 4;
                              local_1b8 = local_1c8 + (long)local_1c8[3] * 2 + 4;
                              local_1c0 = piVar9;
                              if (local_1c8[2] != local_1c8[3]) {
                                do {
                                  local_1b0 = 1;
                                  local_1c0 = piVar9;
                                  QDomElement::elementsByTagName((QString *)local_1d0);
                                  iVar4 = QDomNodeList::length();
                                  QDomNodeList::~QDomNodeList(local_1d0);
                                  if (iVar4 != 0) {
                                    QString::toUtf8();
                                    pQVar10 = local_1e8 + *(long *)(local_1e8 + 0x10);
                                    iVar4 = -1;
                                    if (pQVar10 != (QArrayData *)0x0) {
                                      sVar7 = _strlen((char *)pQVar10);
                                      iVar4 = (int)sVar7;
                                    }
                                    local_1e0 = (QArrayData *)
                                                QString::fromAscii_helper((char *)pQVar10,iVar4);
                                    FUN_1002e78a0(&local_1d8,param_1,&local_1e0,&local_80);
                                    QString::operator=(&local_c8,&local_1d8);
                                    if (*(int *)local_1d8.field0_0x0 != -1) {
                                      if (*(int *)local_1d8.field0_0x0 != 0) {
                                        LOCK();
                                        *(int *)local_1d8.field0_0x0 =
                                             *(int *)local_1d8.field0_0x0 + -1;
                                        local_31 = *(int *)local_1d8.field0_0x0 != 0;
                                        UNLOCK();
                                        if ((bool)local_31) goto LAB_1002e6c88;
                                      }
                                      QArrayData::deallocate((QArrayData *)local_1d8.field0_0x0,2,8)
                                      ;
                                    }
LAB_1002e6c88:
                                    if (*(int *)local_1e0 != -1) {
                                      if (*(int *)local_1e0 != 0) {
                                        LOCK();
                                        *(int *)local_1e0 = *(int *)local_1e0 + -1;
                                        local_31 = *(int *)local_1e0 != 0;
                                        UNLOCK();
                                        if ((bool)local_31) goto LAB_1002e6cbe;
                                      }
                                      QArrayData::deallocate(local_1e0,2,8);
                                    }
LAB_1002e6cbe:
                                    if (*(int *)local_1e8 != -1) {
                                      if (*(int *)local_1e8 != 0) {
                                        LOCK();
                                        *(int *)local_1e8 = *(int *)local_1e8 + -1;
                                        local_31 = *(int *)local_1e8 != 0;
                                        UNLOCK();
                                        if ((bool)local_31) goto LAB_1002e6cf4;
                                      }
                                      QArrayData::deallocate(local_1e8,1,8);
                                    }
LAB_1002e6cf4:
                                    this = (QString *)
                                           FUN_10002c250(*(long *)(param_1 + 0x30) + 0x68,piVar9);
                                    QString::operator=(this,&local_c8);
                                  }
                                  piVar9 = local_1c0 + 2;
                                  local_1c0 = piVar9;
                                } while (piVar9 != local_1b8);
                              }
                              local_1b0 = 1;
                              FUN_100039a80(&local_1c8);
                              FUN_1002e7960(*(undefined8 *)(param_1 + 0x30));
                              FUN_1002e89f0(*(undefined8 *)(param_1 + 0x38));
                            }
                            else {
                              local_1a8 = (QArrayData *)
                                          QString::fromAscii_helper("ShowImmediately",0xf);
                              FUN_1002e78a0(&local_1a0,param_1,&local_1a8,&local_80);
                              QString::operator=(&local_c8,&local_1a0);
                              if (*(int *)local_1a0.field0_0x0 != -1) {
                                if (*(int *)local_1a0.field0_0x0 != 0) {
                                  LOCK();
                                  *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
                                  local_31 = *(int *)local_1a0.field0_0x0 != 0;
                                  UNLOCK();
                                  if ((bool)local_31) goto LAB_1002e67d8;
                                }
                                QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
                              }
LAB_1002e67d8:
                              if (*(int *)local_1a8 != -1) {
                                if (*(int *)local_1a8 != 0) {
                                  LOCK();
                                  *(int *)local_1a8 = *(int *)local_1a8 + -1;
                                  local_31 = *(int *)local_1a8 != 0;
                                  UNLOCK();
                                  if ((bool)local_31) goto LAB_1002e680e;
                                }
                                QArrayData::deallocate(local_1a8,2,8);
                              }
LAB_1002e680e:
                              if (*(int *)(local_c8.field0_0x0 + 4) == 0) {
                                uVar11 = 3;
                                FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,
                                              "(!)Error: can\'t get <%s> value from response.",
                                              "ShowImmediately");
                              }
                              else {
                                iVar4 = QString::toInt((bool *)&local_c8,(int)&local_49);
                                lVar6 = *(long *)(param_1 + 0x30);
                                *(bool *)(lVar6 + 0x40) = iVar4 != 0;
                                if (local_49 != '\0') goto LAB_1002e6a92;
                                uVar11 = 3;
                                FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,
                                              "(!)Error: failed to extract value from response.");
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                local_108 = (QArrayData *)QString::fromAscii_helper("Delay",5);
                FUN_1002e78a0(&local_100,param_1,&local_108,&local_80);
                QString::operator=(&local_c8,&local_100);
                if (*(int *)local_100.field0_0x0 != -1) {
                  if (*(int *)local_100.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
                    local_31 = *(int *)local_100.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1002e5f89;
                  }
                  QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
                }
LAB_1002e5f89:
                if (*(int *)local_108 != -1) {
                  if (*(int *)local_108 != 0) {
                    LOCK();
                    *(int *)local_108 = *(int *)local_108 + -1;
                    local_31 = *(int *)local_108 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1002e5fbf;
                  }
                  QArrayData::deallocate(local_108,2,8);
                }
LAB_1002e5fbf:
                if (*(int *)(local_c8.field0_0x0 + 4) == 0) {
                  uVar11 = 3;
                  FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,
                                "(!)Error: can\'t get <%s> value from response.","Delay");
                }
                else {
                  iVar4 = QString::toInt((bool *)&local_c8,(int)&local_49);
                  *(int *)(*(long *)(param_1 + 0x30) + 0x20) = iVar4 * 60000;
                  if (local_49 != '\0') goto LAB_1002e5ffc;
                  uVar11 = 3;
                  FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,
                                "(!)Error: failed to extract value from response.");
                }
              }
            }
          }
        }
      }
    }
LAB_1002e6d5a:
    if (*(int *)local_c8.field0_0x0 != -1) {
      if (*(int *)local_c8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
        local_31 = *(int *)local_c8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e6d90;
      }
      QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
    }
LAB_1002e6d90:
    QDomNode::~QDomNode((QDomNode *)&local_80);
  }
  QDomDocument::~QDomDocument(local_70);
LAB_1002e6da2:
  QFile::~QFile((QFile *)local_60);
  return uVar11;
}

