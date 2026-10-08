
/* Function Stack Size: 0x28 bytes */

void CWindowRestoration::restoreWindowWithIdentifier_state_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  QTextStream *pQVar8;
  char *pcVar9;
  long lVar10;
  QArrayData *pQVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined8 *local_188;
  Connection local_180 [8];
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QVariant local_158;
  QString local_148;
  Data *local_140;
  Data *local_138;
  Data *local_130;
  Data *local_128;
  uint local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QTextStream *local_f8;
  QDebug local_f0 [8];
  QTextStream *local_e8;
  QArrayData *local_e0;
  QDataStream local_d8 [32];
  QArrayData *local_b8;
  undefined8 local_b0;
  QArrayData *local_a8 [2];
  _func_void_Node_ptr *local_98;
  _func_void_Node_ptr *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  Data_conflict local_70;
  undefined4 local_68;
  QArrayData *local_60;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  cVar3 = FUN_100075300();
  if (cVar3 == '\0') {
    if (DAT_10230ffd0 < 3) goto LAB_100076e80;
    pcVar9 = "Resume is not supported";
    uVar6 = 3;
  }
  else {
    if ((param_3 != 0) && (param_4 != 0)) {
      QSettings::QSettings((QSettings *)&local_58,(QObject *)0x0);
      local_60 = (QArrayData *)
                 QString::fromAscii_helper("Application preferences/Close Windows On Quit",0x2d);
      local_68 = 0x80000000;
      local_70.field7 = 0;
      QSettings::value((QString *)&local_48,&local_58);
      cVar3 = ::QVariant::toBool();
      ::QVariant::~QVariant(&local_48);
      ::QVariant::~QVariant((QVariant *)&local_70);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100076dfe;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100076dfe:
      QSettings::~QSettings((QSettings *)&local_58);
      if (cVar3 == '\0') {
        if (DAT_102310870 == (void *)0x0) {
          pvVar5 = operator_new(0x18);
          FUN_10007a670(pvVar5);
          DAT_102310870 = pvVar5;
        }
        puVar2 = PTR__objc_msgSend_1021e1c68;
        uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (PTR_CRestorationSharedData_10226aa30,PTR_s_sharedInstance_102269e90);
        lVar7 = (*(code *)puVar2)(uVar6,PTR_s_manager_102269e98);
        if (lVar7 != 0) {
          if (PTR__OBJC_CLASS___NSString_10226a7c8 == (undefined *)0x0) {
            local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
          }
          else {
            _objc_msgSend_stret((undefined *)&local_78,(ID)PTR__OBJC_CLASS___NSString_10226a7c8,
                                PTR_s_QStringWithString__1022696d0,param_3);
          }
          if (2 < DAT_10230ffd0) {
            local_88 = (QArrayData *)local_78.field0_0x0;
            if (1 < *(int *)local_78.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
              local_31 = *(int *)local_78.field0_0x0 != 0;
              UNLOCK();
            }
            QString::toLocal8Bit();
            FUN_100df99c0("[APP_RESUME]","prl_client_app",3,
                          "Restoration requested for window with id %s",
                          local_80 + *(long *)(local_80 + 0x10));
            if (*(int *)local_80 != -1) {
              if (*(int *)local_80 != 0) {
                LOCK();
                *(int *)local_80 = *(int *)local_80 + -1;
                local_31 = *(int *)local_80 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100076fe5;
              }
              QArrayData::deallocate(local_80,1,8);
            }
LAB_100076fe5:
            if (*(int *)local_88 != -1) {
              if (*(int *)local_88 != 0) {
                LOCK();
                *(int *)local_88 = *(int *)local_88 + -1;
                local_31 = *(int *)local_88 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100077015;
              }
              QArrayData::deallocate(local_88,2,8);
            }
          }
LAB_100077015:
          FUN_100074140(local_a8);
          local_b0 = 0;
          pcVar9 = (char *)(*(code *)PTR__objc_msgSend_1021e1c68)
                                     (param_4,PTR_s_decodeBytesForKey_returnedLength_102269ea0,
                                      &cf_resumeData,&local_b0);
          if (pcVar9 == (char *)0x0) {
            FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"Can\'t decode resume data");
            (**(code **)(param_5 + 0x10))(param_5,0,0);
          }
          else {
            QByteArray::QByteArray((QByteArray *)&local_b8,pcVar9,(int)local_b0);
            QDataStream::QDataStream(local_d8,&local_b8,1);
            FUN_100074260(local_d8,local_a8);
            puVar2 = PTR_shared_null_1021e1288;
            local_e0 = (QArrayData *)PTR_shared_null_1021e1288;
            pQVar8 = operator_new(0x50);
            QTextStream::QTextStream(pQVar8,&local_e0,2);
            *(undefined **)(pQVar8 + 0x10) = puVar2;
            *(undefined4 *)(pQVar8 + 0x1c) = 0;
            pQVar8[0x20] = (QTextStream)0x1;
            pQVar8[0x21] = (QTextStream)0x0;
            *(undefined4 *)(pQVar8 + 0x28) = 2;
            *(undefined8 *)(pQVar8 + 0x44) = 0;
            *(undefined8 *)(pQVar8 + 0x3c) = 0;
            *(undefined8 *)(pQVar8 + 0x34) = 0;
            *(undefined8 *)(pQVar8 + 0x2c) = 0;
            *(undefined4 *)(pQVar8 + 0x18) = 2;
            local_f8 = pQVar8;
            local_e8 = pQVar8;
            FUN_1000742b0(local_f0,&local_f8,local_a8);
            QDebug::~QDebug(local_f0);
            QDebug::~QDebug((QDebug *)&local_f8);
            if (1 < DAT_10230ffd0) {
              local_108 = local_e0;
              if (1 < *(int *)local_e0 + 1U) {
                LOCK();
                *(int *)local_e0 = *(int *)local_e0 + 1;
                local_31 = *(int *)local_e0 != 0;
                UNLOCK();
              }
              QString::toLocal8Bit();
              FUN_100df99c0("[APP_RESUME]","prl_client_app",2,"Decoded data: %s",
                            local_100 + *(long *)(local_100 + 0x10));
              if (*(int *)local_100 != -1) {
                if (*(int *)local_100 != 0) {
                  LOCK();
                  *(int *)local_100 = *(int *)local_100 + -1;
                  local_31 = *(int *)local_100 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000771e2;
                }
                QArrayData::deallocate(local_100,1,8);
              }
LAB_1000771e2:
              if (*(int *)local_108 != -1) {
                if (*(int *)local_108 != 0) {
                  LOCK();
                  *(int *)local_108 = *(int *)local_108 + -1;
                  local_31 = *(int *)local_108 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100077218;
                }
                QArrayData::deallocate(local_108,2,8);
              }
            }
LAB_100077218:
            QDebug::~QDebug((QDebug *)&local_e8);
            if (*(int *)local_e0 != -1) {
              if (*(int *)local_e0 != 0) {
                LOCK();
                *(int *)local_e0 = *(int *)local_e0 + -1;
                local_31 = *(int *)local_e0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10007725a;
              }
              QArrayData::deallocate(local_e0,2,8);
            }
LAB_10007725a:
            QDataStream::~QDataStream(local_d8);
            if (*(int *)local_b8 != -1) {
              if (*(int *)local_b8 != 0) {
                LOCK();
                *(int *)local_b8 = *(int *)local_b8 + -1;
                local_31 = *(int *)local_b8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10007729c;
              }
              QArrayData::deallocate(local_b8,1,8);
            }
LAB_10007729c:
            cVar3 = FUN_1000751f0(local_a8);
            if (cVar3 == '\0') {
              local_118 = local_a8[0];
              if (1 < *(int *)local_a8[0] + 1U) {
                LOCK();
                *(int *)local_a8[0] = *(int *)local_a8[0] + 1;
                local_31 = *(int *)local_a8[0] != 0;
                UNLOCK();
              }
              QString::toLocal8Bit();
              FUN_100df99c0("[APP_RESUME]","prl_client_app",0,
                            "The window class is not restorable: %s",
                            local_110 + *(long *)(local_110 + 0x10));
              if (*(int *)local_110 != -1) {
                if (*(int *)local_110 != 0) {
                  LOCK();
                  *(int *)local_110 = *(int *)local_110 + -1;
                  local_31 = *(int *)local_110 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100077466;
                }
                QArrayData::deallocate(local_110,1,8);
              }
LAB_100077466:
              if (*(int *)local_118 != -1) {
                if (*(int *)local_118 != 0) {
                  LOCK();
                  *(int *)local_118 = *(int *)local_118 + -1;
                  local_31 = *(int *)local_118 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10007749c;
                }
                QArrayData::deallocate(local_118,2,8);
              }
LAB_10007749c:
              (**(code **)(param_5 + 0x10))(param_5,0,0);
            }
            else {
              uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                (PTR_CRestorationSharedData_10226aa30,PTR_s_sharedInstance_102269e90
                                );
              lVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_manager_102269e98);
              if (*(char *)(lVar7 + 0x20) != '\x01') {
                *(undefined1 *)(lVar7 + 0x20) = 1;
                FUN_1008666b0(*(undefined8 *)(lVar7 + 0x10));
              }
              uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                (PTR_CRestorationSharedData_10226aa30,PTR_s_sharedInstance_102269e90
                                );
              uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_manager_102269e98);
              FUN_1000780c0(uVar6,&local_78,param_5);
              QApplication::topLevelWidgets();
              local_138 = local_140;
              if (*(int *)local_140 != -1) {
                if (*(int *)local_140 == 0) {
                  QListData::detach((int)&local_138);
                  lVar7 = (long)*(int *)(local_138 + 8);
                  if ((local_140 + (long)*(int *)(local_140 + 8) * 8 != local_138 + lVar7 * 8) &&
                     (lVar10 = *(int *)(local_138 + 0xc) - lVar7,
                     lVar10 != 0 && lVar7 <= *(int *)(local_138 + 0xc))) {
                    _memcpy(local_138 + lVar7 * 8 + 0x10,
                            local_140 + (long)*(int *)(local_140 + 8) * 8 + 0x10,lVar10 * 8);
                  }
                }
                else {
                  LOCK();
                  *(int *)local_140 = *(int *)local_140 + 1;
                  local_31 = *(int *)local_140 != 0;
                  UNLOCK();
                }
              }
              local_130 = local_138 + (long)*(int *)(local_138 + 8) * 8 + 0x10;
              local_128 = local_138 + (long)*(int *)(local_138 + 0xc) * 8 + 0x10;
              local_120 = 1;
              if (*(int *)local_140 == -1) {
LAB_100077529:
                local_188 = (undefined8 *)0x0;
                do {
                  while( true ) {
                    puVar12 = local_188;
                    if (local_130 == local_128) goto LAB_10007764b;
                    if (local_120 != 0) break;
LAB_100077560:
                    local_130 = local_130 + 8;
                    local_120 = 1;
                  }
                  puVar12 = *(undefined8 **)local_130;
                  QObject::property((char *)&local_158);
                  ::QVariant::toString();
                  cVar3 = operator==(&local_148,&local_78);
                  if (*(int *)local_148.field0_0x0 != -1) {
                    if (*(int *)local_148.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
                      local_31 = *(int *)local_148.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1000775f3;
                    }
                    QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
                  }
LAB_1000775f3:
                  ::QVariant::~QVariant(&local_158);
                  if (cVar3 == '\0') goto LAB_100077560;
                  local_130 = local_130 + 8;
                  uVar4 = local_120 ^ 1;
                  bVar13 = local_120 != 1;
                  local_188 = puVar12;
                  local_120 = uVar4;
                } while (bVar13);
              }
              else {
                if (*(int *)local_140 == 0) {
LAB_100077513:
                  QListData::dispose(local_140);
                }
                else {
                  LOCK();
                  *(int *)local_140 = *(int *)local_140 + -1;
                  local_31 = *(int *)local_140 != 0;
                  UNLOCK();
                  if (!(bool)local_31) goto LAB_100077513;
                }
                puVar12 = (undefined8 *)0x0;
                if (local_120 != 0) goto LAB_100077529;
              }
LAB_10007764b:
              if (*(int *)local_138 != -1) {
                if (*(int *)local_138 != 0) {
                  LOCK();
                  *(int *)local_138 = *(int *)local_138 + -1;
                  local_31 = *(int *)local_138 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10007767e;
                }
                QListData::dispose(local_138);
              }
LAB_10007767e:
              if (puVar12 == (undefined8 *)0x0) {
                pvVar5 = operator_new(0x60);
                FUN_1002eb200(pvVar5,&local_78,local_a8);
                uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                  (PTR_CRestorationSharedData_10226aa30,
                                   PTR_s_sharedInstance_102269e90);
                uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_manager_102269e98);
                QObject::connect(local_180,pvVar5,"2taskFinished(PRL_RESULT)",uVar6,
                                 "1onResumeWindowTaskFinished(PRL_RESULT)",0);
                QMetaObject::Connection::~Connection(local_180);
                CAbstractTask::execute();
              }
              else {
                if (2 < DAT_10230ffd0) {
                  local_168 = (QArrayData *)local_78.field0_0x0;
                  if (1 < *(int *)local_78.field0_0x0 + 1U) {
                    LOCK();
                    *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
                    local_31 = *(int *)local_78.field0_0x0 != 0;
                    UNLOCK();
                  }
                  QString::toLocal8Bit();
                  pQVar11 = local_160 + *(long *)(local_160 + 0x10);
                  (**(code **)*puVar12)(puVar12);
                  uVar6 = QMetaObject::className();
                  QWidget::windowTitle();
                  QString::toUtf8();
                  FUN_100df99c0("[APP_RESUME]","prl_client_app",3,
                                "Found existing window with id: %s class: %s title: %s",pQVar11,
                                uVar6,local_170 + *(long *)(local_170 + 0x10));
                  if (*(int *)local_170 != -1) {
                    if (*(int *)local_170 != 0) {
                      LOCK();
                      *(int *)local_170 = *(int *)local_170 + -1;
                      local_31 = *(int *)local_170 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10007776e;
                    }
                    QArrayData::deallocate(local_170,1,8);
                  }
LAB_10007776e:
                  if (*(int *)local_178 != -1) {
                    if (*(int *)local_178 != 0) {
                      LOCK();
                      *(int *)local_178 = *(int *)local_178 + -1;
                      local_31 = *(int *)local_178 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1000777a4;
                    }
                    QArrayData::deallocate(local_178,2,8);
                  }
LAB_1000777a4:
                  if (*(int *)local_160 != -1) {
                    if (*(int *)local_160 != 0) {
                      LOCK();
                      *(int *)local_160 = *(int *)local_160 + -1;
                      local_31 = *(int *)local_160 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1000777da;
                    }
                    QArrayData::deallocate(local_160,1,8);
                  }
LAB_1000777da:
                  if (*(int *)local_168 != -1) {
                    if (*(int *)local_168 != 0) {
                      LOCK();
                      *(int *)local_168 = *(int *)local_168 + -1;
                      local_31 = *(int *)local_168 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100077810;
                    }
                    QArrayData::deallocate(local_168,2,8);
                  }
                }
LAB_100077810:
                uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                  (PTR_CRestorationSharedData_10226aa30,
                                   PTR_s_sharedInstance_102269e90);
                uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_manager_102269e98);
                FUN_100078240(uVar6,puVar12);
                uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                  (PTR_CRestorationSharedData_10226aa30,
                                   PTR_s_sharedInstance_102269e90);
                uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_manager_102269e98);
                FUN_100078320(uVar6,&local_78,puVar12);
              }
            }
          }
          if (*(int *)(local_90 + 0x10) != -1) {
            if (*(int *)(local_90 + 0x10) != 0) {
              LOCK();
              pcVar1 = local_90 + 0x10;
              *(int *)pcVar1 = *(int *)pcVar1 + -1;
              local_31 = *(int *)pcVar1 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100077924;
            }
            QHashData::free_helper(local_90);
          }
LAB_100077924:
          if (*(int *)(local_98 + 0x10) != -1) {
            if (*(int *)(local_98 + 0x10) != 0) {
              LOCK();
              pcVar1 = local_98 + 0x10;
              *(int *)pcVar1 = *(int *)pcVar1 + -1;
              local_31 = *(int *)pcVar1 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100077959;
            }
            QHashData::free_helper(local_98);
          }
LAB_100077959:
          if (*(int *)local_a8[0] != -1) {
            if (*(int *)local_a8[0] != 0) {
              LOCK();
              *(int *)local_a8[0] = *(int *)local_a8[0] + -1;
              local_31 = *(int *)local_a8[0] != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10007798f;
            }
            QArrayData::deallocate(local_a8[0],2,8);
          }
LAB_10007798f:
          if (*(int *)local_78.field0_0x0 == -1) {
            return;
          }
          if (*(int *)local_78.field0_0x0 != 0) {
            LOCK();
            *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
            UNLOCK();
            if (*(int *)local_78.field0_0x0 != 0) {
              return;
            }
            local_31 = 0;
          }
          QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
          return;
        }
        if (DAT_10230ffd0 < 3) goto LAB_100076f3c;
        pcVar9 = "Invalid Resume manager";
      }
      else {
        if (DAT_10230ffd0 < 3) goto LAB_100076f3c;
        pcVar9 = "Resume disabled by user";
      }
      FUN_100df99c0("[APP_RESUME]","prl_client_app",3,pcVar9);
LAB_100076f3c:
      (**(code **)(param_5 + 0x10))(param_5,0,0);
      return;
    }
    pcVar9 = "Invalid restore data";
    uVar6 = 0;
  }
  FUN_100df99c0("[APP_RESUME]","prl_client_app",uVar6,pcVar9);
LAB_100076e80:
                    /* WARNING: Could not recover jumptable at 0x000100076e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x10))(param_5,0,0);
  return;
}

