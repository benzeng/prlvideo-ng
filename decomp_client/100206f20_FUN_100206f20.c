
void FUN_100206f20(QObject *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  QString *pQVar3;
  AnonymousUnion0 AVar4;
  char cVar5;
  int iVar6;
  QArrayData *pQVar7;
  undefined8 uVar8;
  CSdkRequest *pCVar9;
  QStringList *pQVar10;
  Data *pDVar11;
  long lVar12;
  undefined1 local_1e8 [16];
  AnonymousUnion0 local_1d8;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  int *local_1c0 [4];
  QVariant local_1a0 [2];
  QVariant local_188;
  Data_conflict local_178;
  undefined4 local_170;
  AnonymousUnion0 local_168;
  QArrayData *local_160;
  QString local_158;
  char local_149;
  QArrayData *local_148;
  Data *local_140;
  QString local_138;
  QArrayData *local_130;
  CVmConfiguration local_128 [16];
  undefined1 local_118 [239];
  undefined1 local_29;
  
  if (param_2 < 0) {
    if (param_2 != -0x7fffffc9) {
      FUN_10080e230(param_1,100);
      if (((*(long *)(param_1 + 0x80) != 0) && (*(int *)(*(long *)(param_1 + 0x80) + 4) != 0)) &&
         (*(long *)(param_1 + 0x88) != 0)) {
        QWidget::hide();
      }
      if ((param_2 == -0x7ffffef9) || (param_2 == -0x7ffffd8b)) {
                    /* WARNING: Could not recover jumptable at 0x000100207245. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)param_1 + 0xb0))(param_1,param_2);
        return;
      }
      local_170 = 0x80000000;
      local_178.field7 = 0;
      if (param_2 != -0x7ffffc8f) {
        QVariant::QVariant(&local_188,param_2);
        QVariant::operator=((QVariant *)&local_178,&local_188);
        QVariant::~QVariant(&local_188);
      }
      local_1c8 = (QArrayData *)
                  QString::fromAscii_helper
                            ("1onErrorMessageClosed(PRL_RESULT, Messaging::ButtonID, const QVariant&)"
                             ,0x47);
      FUN_100a1c600(local_1c0,param_1,&local_1c8,&local_178);
      if (*(int *)local_1c8 != -1) {
        if (*(int *)local_1c8 != 0) {
          LOCK();
          *(int *)local_1c8 = *(int *)local_1c8 + -1;
          local_29 = *(int *)local_1c8 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10020749b;
        }
        QArrayData::deallocate(local_1c8,2,8);
      }
LAB_10020749b:
      if (param_2 != -0x7ffffc8f) {
        if (*(long *)(param_1 + 0x60) != 0) {
          pCVar9 = (CSdkRequest *)CMessageManager::instance();
          pQVar3 = *(QString **)(param_1 + 0x60);
          if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0))
             || (*(long *)(param_1 + 0x30) == 0)) {
            local_1e8._0_8_ = QString::fromAscii_helper("",0);
          }
          else {
            FUN_100188480(local_1e8);
          }
          CMessageManager::showMessageBoxForRequest(pCVar9,pQVar3,(CSlotInfo *)local_1e8);
          if (*(int *)local_1e8._0_8_ != -1) {
            if (*(int *)local_1e8._0_8_ != 0) {
              LOCK();
              *(int *)local_1e8._0_8_ = *(int *)local_1e8._0_8_ + -1;
              local_29 = *(int *)local_1e8._0_8_ != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_100207747;
            }
            QArrayData::deallocate((QArrayData *)local_1e8._0_8_,2,8);
          }
        }
        goto LAB_100207747;
      }
      iVar6 = CMessageManager::instance();
      uVar8 = FUN_100370280();
      if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)) ||
         (*(long *)(param_1 + 0x30) == 0)) {
        local_1d0 = (QArrayData *)QString::fromAscii_helper("",0);
      }
      else {
        FUN_100188480(&local_1d0);
      }
      pQVar10 = (QStringList *)FUN_1003704b0(uVar8,&local_1d0,DAT_100e152b8);
      local_1d8.field1 = (Data *)PTR_shared_null_1021e15e8;
      local_1e8._8_8_ = PTR_shared_null_1021e15e8;
      CMessageManager::showMessageBox
                (iVar6,(QWidget *)0x80041303,pQVar10,(QStringList *)&local_1d8.field0,
                 (CSlotInfo *)(local_1e8 + 8),SUB81(local_1c0,0));
      uVar8 = local_1e8._8_8_;
      if (*(int *)local_1e8._8_8_ != -1) {
        if (*(int *)local_1e8._8_8_ != 0) {
          LOCK();
          *(int *)local_1e8._8_8_ = *(int *)local_1e8._8_8_ + -1;
          local_29 = *(int *)local_1e8._8_8_ != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10020761d;
        }
        iVar6 = *(int *)(local_1e8._8_8_ + 0xc);
        if (iVar6 != *(int *)(local_1e8._8_8_ + 8)) {
          lVar12 = (long)*(int *)(local_1e8._8_8_ + 8) * 8 + (long)iVar6 * -8;
          pDVar11 = (Data *)(local_1e8._8_8_ + (long)iVar6 * 8 + 8);
          do {
            pQVar7 = *(QArrayData **)pDVar11;
            if (*(int *)pQVar7 == 0) {
LAB_1002075fc:
              QArrayData::deallocate(pQVar7,2,8);
            }
            else if (*(int *)pQVar7 != -1) {
              LOCK();
              *(int *)pQVar7 = *(int *)pQVar7 + -1;
              local_29 = *(int *)pQVar7 != 0;
              UNLOCK();
              if (!(bool)local_29) {
                pQVar7 = *(QArrayData **)pDVar11;
                goto LAB_1002075fc;
              }
            }
            pDVar11 = pDVar11 + -8;
            lVar12 = lVar12 + 8;
          } while (lVar12 != 0);
        }
        QListData::dispose((Data *)uVar8);
      }
LAB_10020761d:
      AVar4 = local_1d8;
      if (*(int *)local_1d8.field1 != -1) {
        if (*(int *)local_1d8.field1 != 0) {
          LOCK();
          *(int *)local_1d8.field1 = *(int *)local_1d8.field1 + -1;
          local_29 = *(int *)local_1d8.field1 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002076a7;
        }
        iVar6 = *(int *)(local_1d8.field1 + 0xc);
        if (iVar6 != *(int *)(local_1d8.field1 + 8)) {
          lVar12 = (long)*(int *)(local_1d8.field1 + 8) * 8 + (long)iVar6 * -8;
          pDVar11 = (Data *)(local_1d8.field1 + (long)iVar6 * 8 + 8);
          do {
            pQVar7 = *(QArrayData **)pDVar11;
            if (*(int *)pQVar7 == 0) {
LAB_100207686:
              QArrayData::deallocate(pQVar7,2,8);
            }
            else if (*(int *)pQVar7 != -1) {
              LOCK();
              *(int *)pQVar7 = *(int *)pQVar7 + -1;
              local_29 = *(int *)pQVar7 != 0;
              UNLOCK();
              if (!(bool)local_29) {
                pQVar7 = *(QArrayData **)pDVar11;
                goto LAB_100207686;
              }
            }
            pDVar11 = pDVar11 + -8;
            lVar12 = lVar12 + 8;
          } while (lVar12 != 0);
        }
        QListData::dispose((Data *)AVar4.field1);
      }
LAB_1002076a7:
      if (*(int *)local_1d0 != -1) {
        if (*(int *)local_1d0 != 0) {
          LOCK();
          *(int *)local_1d0 = *(int *)local_1d0 + -1;
          local_29 = *(int *)local_1d0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100207747;
        }
        QArrayData::deallocate(local_1d0,2,8);
      }
LAB_100207747:
      QVariant::~QVariant(local_1a0);
      if (local_1c0[0] != (int *)0x0) {
        LOCK();
        *local_1c0[0] = *local_1c0[0] + -1;
        local_29 = *local_1c0[0] != 0;
        UNLOCK();
        if ((!(bool)local_29) && (local_1c0[0] != (int *)0x0)) {
          operator_delete(local_1c0[0]);
        }
      }
      QVariant::~QVariant((QVariant *)&local_178);
      return;
    }
    local_148 = (QArrayData *)QString::fromAscii_helper(" ",1);
    QString::split(&local_140,param_1 + 0x40,&local_148,0,1);
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_29 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002070eb;
      }
      QArrayData::deallocate(local_148,2,8);
    }
LAB_1002070eb:
    local_149 = '\x01';
    if (1 < *(uint *)local_140) {
      FUN_100036c40(&local_140,*(uint *)(local_140 + 4));
    }
    iVar6 = QString::toInt((bool *)(local_140 + (long)(int)*(uint *)(local_140 + 0xc) * 8 + 8),
                           (int)&local_149);
    if (local_149 == '\0') {
      pQVar7 = (QArrayData *)QString::fromAscii_helper("1",1);
      local_160 = pQVar7;
      FUN_1000341d0(&local_140,&local_160);
      if (*(int *)pQVar7 != -1) {
        if (*(int *)pQVar7 != 0) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002072a0;
        }
        QArrayData::deallocate(pQVar7,2,8);
      }
    }
    else {
      uVar1 = *(uint *)(local_140 + 8);
      uVar2 = *(uint *)(local_140 + 0xc);
      QString::number((int)&local_158,iVar6 + 1);
      if (1 < *(uint *)local_140) {
        FUN_100036c40(&local_140,*(uint *)(local_140 + 4));
      }
      QString::operator=((QString *)
                         (local_140 +
                         ((long)(int)((uVar2 - 1) - uVar1) + (long)(int)*(uint *)(local_140 + 8)) *
                         8 + 0x10),&local_158);
      if (*(int *)local_158.field0_0x0 != -1) {
        if (*(int *)local_158.field0_0x0 != 0) {
          LOCK();
          *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
          local_29 = *(int *)local_158.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002072a0;
        }
        QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
      }
    }
LAB_1002072a0:
    pQVar7 = (QArrayData *)QString::fromAscii_helper(" ",1);
    QtPrivate::QStringList_join
              ((QStringList *)&local_168.field0,(QChar *)&local_140,
               (int)*(undefined8 *)(pQVar7 + 0x10) + (int)pQVar7);
    QString::operator=((QString *)(param_1 + 0x40),(QString *)&local_168.field0);
    if (*(int *)local_168.field1 != -1) {
      if (*(int *)local_168.field1 != 0) {
        LOCK();
        *(int *)local_168.field1 = *(int *)local_168.field1 + -1;
        local_29 = *(int *)local_168.field1 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100207316;
      }
      QArrayData::deallocate((QArrayData *)local_168.field1,2,8);
    }
LAB_100207316:
    if (*(int *)pQVar7 != -1) {
      if (*(int *)pQVar7 != 0) {
        LOCK();
        *(int *)pQVar7 = *(int *)pQVar7 + -1;
        local_29 = *(int *)pQVar7 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100207341;
      }
      QArrayData::deallocate(pQVar7,2,8);
    }
LAB_100207341:
    FUN_100204a00(param_1);
    if (*(int *)local_140 == -1) {
      return;
    }
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      UNLOCK();
      if (*(int *)local_140 != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar6 = *(int *)(local_140 + 0xc);
    if (iVar6 != *(int *)(local_140 + 8)) {
      lVar12 = (long)*(int *)(local_140 + 8) * 8 + (long)iVar6 * -8;
      pDVar11 = local_140 + (long)iVar6 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar11;
        if (*(int *)pQVar7 == 0) {
LAB_1002073c0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar11;
            goto LAB_1002073c0;
          }
        }
        pDVar11 = pDVar11 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose(local_140);
    return;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  cVar5 = FUN_10018ff40();
  if (cVar5 == '\0') {
    return;
  }
  CVmConfiguration::CVmConfiguration(local_128);
  CSdkRequest::getResultAsString((int)&local_130);
  CBaseNode::fromString
            ((QTypedArrayData<unsigned_short> *)local_118,SUB81(&local_130,0),(QString *)0x0,
             (int *)0x0,(int *)0x0);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_29 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100206fec;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100206fec:
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  QString::operator=((QString *)(param_1 + 0x38),&local_138);
  if (*(int *)local_138.field0_0x0 != -1) {
    if (*(int *)local_138.field0_0x0 != 0) {
      LOCK();
      *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
      local_29 = *(int *)local_138.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10020704d;
    }
    QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
  }
LAB_10020704d:
  QTimer::singleShot(0,param_1,"1onCheckForVmAdded()");
  CVmConfiguration::~CVmConfiguration(local_128);
  return;
}

