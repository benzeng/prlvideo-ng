
void FUN_1006640b0(QString *param_1,int param_2)

{
  code *pcVar1;
  QString *this;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  QString *pQVar5;
  CTaskSendHttpRequest *pCVar6;
  QStringList *pQVar7;
  uint uVar8;
  Data *pDVar9;
  int iVar10;
  QArrayData *pQVar11;
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  undefined4 local_1d0;
  Data_conflict local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8;
  undefined1 local_1a8 [24];
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  _func_void_Node_ptr *local_178;
  QString local_170;
  undefined1 local_168 [8];
  QString QStack_160;
  int *local_158;
  QVariant local_150;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QString local_128;
  QString local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QString local_d8;
  undefined1 local_d0 [72];
  long local_88 [2];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  CAbstractWizardPage::wizardModel();
  uVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  FUN_100676150(local_d0,uVar3);
  FUN_1001c72e0(&local_e8);
  local_e0 = local_e8;
  if (1 < *(uint *)local_e8 + 1) {
    LOCK();
    *(uint *)local_e8 = *(uint *)local_e8 + 1;
    local_29 = *(uint *)local_e8 != 0;
    UNLOCK();
  }
  uVar8 = *(uint *)(local_e8 + 4);
  if ((1 < *(uint *)local_e8) || ((*(uint *)(local_e8 + 8) & 0x7fffffff) < uVar8 + 2)) {
    QString::reallocData((uint)&local_e0,SUB41(uVar8 + 2,0));
    uVar8 = *(uint *)(local_e0 + 4);
  }
  *(uint *)(local_e0 + 4) = uVar8 + 1;
  *(undefined2 *)(local_e0 + (long)(int)uVar8 * 2 + *(long *)(local_e0 + 0x10)) = 0x20;
  *(undefined2 *)(local_e0 + (long)(int)*(uint *)(local_e0 + 4) * 2 + *(long *)(local_e0 + 0x10)) =
       0;
  QString::number((int)&local_f0,0xc);
  local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_e0;
  if (1 < *(uint *)local_e0 + 1) {
    LOCK();
    *(uint *)local_e0 = *(uint *)local_e0 + 1;
    local_29 = *(uint *)local_e0 != 0;
    UNLOCK();
  }
  QString::append(&local_d8);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_29 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006641f4;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1006641f4:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_29 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10066422a;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_10066422a:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_29 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100664260;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100664260:
  QMetaObject::tr((char *)&local_100,PTR_staticMetaObject_1021e1520,0x1dd2c37);
  local_f8 = local_100;
  if (1 < *(int *)local_100 + 1U) {
    LOCK();
    *(int *)local_100 = *(int *)local_100 + 1;
    local_29 = *(int *)local_100 != 0;
    UNLOCK();
  }
  QString::insert(&local_f8,0,0x20);
  QString::append(&local_d8);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_29 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006642fd;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1006642fd:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_29 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100664333;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100664333:
  local_108 = (QArrayData *)QString::fromAscii_helper("upgrade",7);
  iVar2 = QString::indexOf(local_d0,&local_108,0,1);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_29 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10066439d;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10066439d:
  if (iVar2 != -1) {
    QMetaObject::tr((char *)&local_118,(char *)&PTR_PTR_102223a10,0x1de6f31);
    local_110 = local_118;
    if (1 < *(int *)local_118 + 1U) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + 1;
      local_29 = *(int *)local_118 != 0;
      UNLOCK();
    }
    QString::insert(&local_110,0,0x20);
    QString::append(&local_d8);
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_29 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100664443;
      }
      QArrayData::deallocate(local_110,2,8);
    }
LAB_100664443:
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_29 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100664479;
      }
      QArrayData::deallocate(local_118,2,8);
    }
  }
LAB_100664479:
  CAbstractWizardPage::setTitle(param_1);
  local_120.field0_0x0 = param_1[10].field0_0x0;
  if (1 < *(int *)local_120.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + 1;
    local_29 = *(int *)local_120.field0_0x0 != 0;
    UNLOCK();
  }
  QString::arg(&local_140,&local_120,local_70,0,0x20);
  QString::arg(&local_138,&local_140,local_58,0,0x20);
  QString::arg(&local_130,&local_138,local_68,0,0x20);
  QString::arg(&local_128,&local_130,local_88,0,0x20);
  QString::operator=(&local_120,&local_128);
  if (*(int *)local_128.field0_0x0 != -1) {
    if (*(int *)local_128.field0_0x0 != 0) {
      LOCK();
      *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
      local_29 = *(int *)local_128.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10066456a;
    }
    QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
  }
LAB_10066456a:
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_29 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006645a0;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_1006645a0:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_29 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006645d6;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1006645d6:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_29 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10066460c;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_10066460c:
  QLabel::setText(*(QString **)(param_1[9].field0_0x0 + 0x18));
  CAbstractWizardPage::enterPage(param_1,param_2);
  if (param_2 == 0) {
    CAbstractWizardPage::wizardCtrl();
    CWizardController::parentWidget();
    QWidget::window();
    QObject::property((char *)&local_150);
    FUN_10061fde0(&local_150);
    lVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220a9e0);
    QVariant::~QVariant(&local_150);
    if (lVar4 != 0) {
      local_158 = (int *)PTR_shared_null_1021e15e8;
      register0x00001208 = (int)PTR_shared_null_1021e1288;
      local_168 = (undefined1  [8])PTR_shared_null_1021e1288;
      register0x0000120c = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
      QString::fromUtf8_helper((char *)&local_50,0x1de6c14);
      QString::operator=((QString *)local_168,&local_50);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_29 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10066470e;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_10066470e:
      FUN_1002dcf60(&local_170,lVar4);
      this = (QString *)(local_168 + 8);
      QString::operator=(this,&local_170);
      if (*(int *)local_170.field0_0x0 != -1) {
        if (*(int *)local_170.field0_0x0 != 0) {
          LOCK();
          *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
          local_29 = *(int *)local_170.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100664769;
        }
        QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
      }
LAB_100664769:
      FUN_1001c44c0(&local_158,local_168);
      QString::fromUtf8_helper((char *)&local_48,0x1e0bb23);
      QString::operator=((QString *)local_168,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_29 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1006647d1;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
LAB_1006647d1:
      FUN_1002dcf90(&local_178,lVar4);
      local_180 = (QArrayData *)QString::fromAscii_helper("day_of_trial",0xc);
      pQVar5 = (QString *)FUN_10002c250(&local_178,&local_180);
      QString::operator=(this,pQVar5);
      if (*(int *)local_180 != -1) {
        if (*(int *)local_180 != 0) {
          LOCK();
          *(int *)local_180 = *(int *)local_180 + -1;
          local_29 = *(int *)local_180 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10066484c;
        }
        QArrayData::deallocate(local_180,2,8);
      }
LAB_10066484c:
      if (*(int *)(local_178 + 0x10) != -1) {
        if (*(int *)(local_178 + 0x10) != 0) {
          LOCK();
          pcVar1 = local_178 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_29 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100664881;
        }
        QHashData::free_helper(local_178);
      }
LAB_100664881:
      FUN_1001c44c0(&local_158,local_168);
      QString::fromUtf8_helper((char *)&local_40,0x1e28e7e);
      QString::operator=((QString *)local_168,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_29 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1006648e9;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_1006648e9:
      local_188 = (QArrayData *)QString::fromAscii_helper("upgrade",7);
      iVar2 = QString::indexOf(local_d0,&local_188,0,1);
      iVar10 = 0x1e25514;
      if (iVar2 != -1) {
        iVar10 = 0x1e289c2;
      }
      QString::fromUtf8_helper((char *)&local_38,iVar10);
      QString::operator=(this,&local_38);
      if (*(int *)local_38.field0_0x0 != -1) {
        if (*(int *)local_38.field0_0x0 != 0) {
          LOCK();
          *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
          local_29 = *(int *)local_38.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10066497a;
        }
        QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
      }
LAB_10066497a:
      if (*(int *)local_188 != -1) {
        if (*(int *)local_188 != 0) {
          LOCK();
          *(int *)local_188 = *(int *)local_188 + -1;
          local_29 = *(int *)local_188 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1006649b0;
        }
        QArrayData::deallocate(local_188,2,8);
      }
LAB_1006649b0:
      FUN_1001c44c0(&local_158,local_168);
      pCVar6 = operator_new(0x48);
      local_190 = (QArrayData *)
                  QString::fromAscii_helper
                            ("https://webservices.pdfm12.parallels.com/promo_pstats_acceptor",0x3e);
      local_1a8._16_8_ = PTR_shared_null_1021e1288;
      CTaskSendHttpRequest::CTaskSendHttpRequest(pCVar6,&local_190,&local_158,0,2,local_1a8 + 0x10);
      if (*(int *)local_1a8._16_8_ != -1) {
        if (*(int *)local_1a8._16_8_ != 0) {
          LOCK();
          *(int *)local_1a8._16_8_ = *(int *)local_1a8._16_8_ + -1;
          local_29 = *(int *)local_1a8._16_8_ != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100664a51;
        }
        QArrayData::deallocate((QArrayData *)local_1a8._16_8_,1,8);
      }
LAB_100664a51:
      if (*(int *)local_190 != -1) {
        if (*(int *)local_190 != 0) {
          LOCK();
          *(int *)local_190 = *(int *)local_190 + -1;
          local_29 = *(int *)local_190 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100664a87;
        }
        QArrayData::deallocate(local_190,2,8);
      }
LAB_100664a87:
      CAbstractTask::execute();
      if (*(int *)QStack_160.field0_0x0 != -1) {
        if (*(int *)QStack_160.field0_0x0 != 0) {
          LOCK();
          *(int *)QStack_160.field0_0x0 = *(int *)QStack_160.field0_0x0 + -1;
          local_29 = *(int *)QStack_160.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100664ac5;
        }
        QArrayData::deallocate((QArrayData *)QStack_160.field0_0x0,2,8);
      }
LAB_100664ac5:
      if (*(int *)local_168 != -1) {
        if (*(int *)local_168 != 0) {
          LOCK();
          *(int *)local_168 = *(int *)local_168 + -1;
          local_29 = *(int *)local_168 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100664afb;
        }
        QArrayData::deallocate((QArrayData *)local_168,2,8);
      }
LAB_100664afb:
      if (*local_158 != -1) {
        if (*local_158 != 0) {
          LOCK();
          *local_158 = *local_158 + -1;
          local_29 = *local_158 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100664b2e;
        }
        FUN_1001c45d0(&local_158,local_158);
      }
    }
LAB_100664b2e:
    if (*(int *)(local_88[0] + 4) == 0) {
      iVar2 = CMessageManager::instance();
      CAbstractWizardModel::wizardCtrl();
      pQVar7 = (QStringList *)CWizardController::parentWidget();
      local_1a8._8_8_ = PTR_shared_null_1021e15e8;
      local_1a8._0_8_ = PTR_shared_null_1021e15e8;
      local_1e8 = (undefined1  [16])0x0;
      local_1d0 = 0;
      local_1d8 = 0;
      local_1c0 = 0x80000000;
      local_1c8.field7 = 0;
      local_1b8 = 1;
      CMessageManager::showMessageBox
                (iVar2,(QWidget *)0x80015436,pQVar7,(QStringList *)(local_1a8 + 8),
                 (CSlotInfo *)local_1a8,SUB81(local_1e8,0));
      QVariant::~QVariant((QVariant *)&local_1c8);
      if ((int *)local_1e8._0_8_ != (int *)0x0) {
        LOCK();
        *(int *)local_1e8._0_8_ = *(int *)local_1e8._0_8_ + -1;
        local_29 = *(int *)local_1e8._0_8_ != 0;
        UNLOCK();
        if ((!(bool)local_29) && ((int *)local_1e8._0_8_ != (int *)0x0)) {
          operator_delete((void *)local_1e8._0_8_);
        }
      }
      uVar3 = local_1a8._0_8_;
      if (*(int *)local_1a8._0_8_ != -1) {
        if (*(int *)local_1a8._0_8_ != 0) {
          LOCK();
          *(int *)local_1a8._0_8_ = *(int *)local_1a8._0_8_ + -1;
          local_29 = *(int *)local_1a8._0_8_ != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100664ca1;
        }
        iVar2 = *(int *)(local_1a8._0_8_ + 0xc);
        if (iVar2 != *(int *)(local_1a8._0_8_ + 8)) {
          lVar4 = (long)*(int *)(local_1a8._0_8_ + 8) * 8 + (long)iVar2 * -8;
          pDVar9 = (Data *)(local_1a8._0_8_ + (long)iVar2 * 8 + 8);
          do {
            pQVar11 = *(QArrayData **)pDVar9;
            if (*(int *)pQVar11 == 0) {
LAB_100664c80:
              QArrayData::deallocate(pQVar11,2,8);
            }
            else if (*(int *)pQVar11 != -1) {
              LOCK();
              *(int *)pQVar11 = *(int *)pQVar11 + -1;
              local_29 = *(int *)pQVar11 != 0;
              UNLOCK();
              if (!(bool)local_29) {
                pQVar11 = *(QArrayData **)pDVar9;
                goto LAB_100664c80;
              }
            }
            pDVar9 = pDVar9 + -8;
            lVar4 = lVar4 + 8;
          } while (lVar4 != 0);
        }
        QListData::dispose((Data *)uVar3);
      }
LAB_100664ca1:
      uVar3 = local_1a8._8_8_;
      if (*(int *)local_1a8._8_8_ != -1) {
        if (*(int *)local_1a8._8_8_ != 0) {
          LOCK();
          *(int *)local_1a8._8_8_ = *(int *)local_1a8._8_8_ + -1;
          local_29 = *(int *)local_1a8._8_8_ != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100664d31;
        }
        iVar2 = *(int *)(local_1a8._8_8_ + 0xc);
        if (iVar2 != *(int *)(local_1a8._8_8_ + 8)) {
          lVar4 = (long)*(int *)(local_1a8._8_8_ + 8) * 8 + (long)iVar2 * -8;
          pDVar9 = (Data *)(local_1a8._8_8_ + (long)iVar2 * 8 + 8);
          do {
            pQVar11 = *(QArrayData **)pDVar9;
            if (*(int *)pQVar11 == 0) {
LAB_100664d10:
              QArrayData::deallocate(pQVar11,2,8);
            }
            else if (*(int *)pQVar11 != -1) {
              LOCK();
              *(int *)pQVar11 = *(int *)pQVar11 + -1;
              local_29 = *(int *)pQVar11 != 0;
              UNLOCK();
              if (!(bool)local_29) {
                pQVar11 = *(QArrayData **)pDVar9;
                goto LAB_100664d10;
              }
            }
            pDVar9 = pDVar9 + -8;
            lVar4 = lVar4 + 8;
          } while (lVar4 != 0);
        }
        QListData::dispose((Data *)uVar3);
      }
    }
  }
LAB_100664d31:
  if (*(int *)local_120.field0_0x0 != -1) {
    if (*(int *)local_120.field0_0x0 != 0) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
      local_29 = *(int *)local_120.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100664d67;
    }
    QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
  }
LAB_100664d67:
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_29 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100664d9d;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_100664d9d:
  FUN_100252c80(local_78);
  FUN_100252e70(local_d0);
  return;
}

