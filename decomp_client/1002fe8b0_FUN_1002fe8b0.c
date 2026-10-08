
void FUN_1002fe8b0(long *param_1,int param_2,uint param_3,int param_4)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  long lVar10;
  bool bVar11;
  undefined1 local_120 [40];
  int *local_f8 [4];
  QVariant local_d8 [2];
  Data_conflict local_c0;
  undefined4 local_b8;
  QArrayData *local_b0;
  int *local_a8 [4];
  QVariant local_88 [2];
  undefined1 local_70 [40];
  QString local_48 [2];
  undefined1 local_31;
  
  if (((param_1[0xc] != 0) && (*(int *)(param_1[0xc] + 4) != 0)) && (param_1[0xd] != 0)) {
    QWidget::hide();
    QObject::deleteLater();
  }
  if (param_2 != -0x7ffffd8b) {
    QSettings::QSettings((QSettings *)local_48,(QObject *)0x0);
    local_70._32_8_ = QString::fromAscii_helper("ForceToRestartServices",0x16);
    QVariant::QVariant((QVariant *)(local_70 + 0x10),true);
    QSettings::setValue(local_48,(QVariant *)(local_70 + 0x20));
    QVariant::~QVariant((QVariant *)(local_70 + 0x10));
    if (*(int *)local_70._32_8_ != -1) {
      if (*(int *)local_70._32_8_ != 0) {
        LOCK();
        *(int *)local_70._32_8_ = *(int *)local_70._32_8_ + -1;
        local_31 = *(int *)local_70._32_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002fe98e;
      }
      QArrayData::deallocate((QArrayData *)local_70._32_8_,2,8);
    }
LAB_1002fe98e:
    QSettings::~QSettings((QSettings *)local_48);
    bVar11 = param_4 == 0;
    if ((-1 < param_2) && (param_4 == 0)) {
      if ((param_3 & 0xfffffffd) == 8) {
        if (((param_1[5] != 0) && (*(int *)(param_1[5] + 4) != 0)) && (param_1[6] != 0)) {
          QWidget::hide();
          QObject::deleteLater();
        }
        iVar2 = CMessageManager::instance();
        uVar5 = 0x80015476;
        if (param_3 != 10) {
          uVar5 = 0;
        }
        uVar6 = 0x80015477;
        if (param_3 != 8) {
          uVar6 = uVar5;
        }
        local_70._8_8_ = PTR_shared_null_1021e15e8;
        local_70._0_8_ = PTR_shared_null_1021e15e8;
        local_b0 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
        local_b8 = 0x80000000;
        local_c0.field7 = 0;
        FUN_100a1c600(local_a8,param_1,&local_b0,&local_c0);
        CMessageManager::showMessageBox
                  (iVar2,(QWidget *)(ulong)uVar6,(QStringList *)0x0,(QStringList *)(local_70 + 8),
                   (CSlotInfo *)local_70,SUB81(local_a8,0));
        QVariant::~QVariant(local_88);
        if (local_a8[0] != (int *)0x0) {
          LOCK();
          *local_a8[0] = *local_a8[0] + -1;
          local_31 = *local_a8[0] != 0;
          UNLOCK();
          if ((!(bool)local_31) && (local_a8[0] != (int *)0x0)) {
            operator_delete(local_a8[0]);
          }
        }
        QVariant::~QVariant((QVariant *)&local_c0);
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002feb0a;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
LAB_1002feb0a:
        uVar4 = local_70._0_8_;
        if (*(int *)local_70._0_8_ != -1) {
          if (*(int *)local_70._0_8_ != 0) {
            LOCK();
            *(int *)local_70._0_8_ = *(int *)local_70._0_8_ + -1;
            local_31 = *(int *)local_70._0_8_ != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002feb91;
          }
          iVar2 = *(int *)(local_70._0_8_ + 0xc);
          if (iVar2 != *(int *)(local_70._0_8_ + 8)) {
            lVar10 = (long)*(int *)(local_70._0_8_ + 8) * 8 + (long)iVar2 * -8;
            pDVar8 = (Data *)(local_70._0_8_ + (long)iVar2 * 8 + 8);
            do {
              pQVar9 = *(QArrayData **)pDVar8;
              if (*(int *)pQVar9 == 0) {
LAB_1002feb70:
                QArrayData::deallocate(pQVar9,2,8);
              }
              else if (*(int *)pQVar9 != -1) {
                LOCK();
                *(int *)pQVar9 = *(int *)pQVar9 + -1;
                local_31 = *(int *)pQVar9 != 0;
                UNLOCK();
                if (!(bool)local_31) {
                  pQVar9 = *(QArrayData **)pDVar8;
                  goto LAB_1002feb70;
                }
              }
              pDVar8 = pDVar8 + -8;
              lVar10 = lVar10 + 8;
            } while (lVar10 != 0);
          }
          QListData::dispose((Data *)uVar4);
        }
LAB_1002feb91:
        uVar4 = local_70._8_8_;
        if (*(int *)local_70._8_8_ == -1) {
          return;
        }
        if (*(int *)local_70._8_8_ != 0) {
          LOCK();
          *(int *)local_70._8_8_ = *(int *)local_70._8_8_ + -1;
          UNLOCK();
          if (*(int *)local_70._8_8_ != 0) {
            return;
          }
          local_31 = 0;
        }
        iVar2 = *(int *)(local_70._8_8_ + 0xc);
        if (iVar2 != *(int *)(local_70._8_8_ + 8)) {
          lVar10 = (long)*(int *)(local_70._8_8_ + 8) * 8 + (long)iVar2 * -8;
          pDVar8 = (Data *)(local_70._8_8_ + (long)iVar2 * 8 + 8);
          do {
            pQVar9 = *(QArrayData **)pDVar8;
            if (*(int *)pQVar9 == 0) {
LAB_1002fec00:
              QArrayData::deallocate(pQVar9,2,8);
            }
            else if (*(int *)pQVar9 != -1) {
              LOCK();
              *(int *)pQVar9 = *(int *)pQVar9 + -1;
              local_31 = *(int *)pQVar9 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar9 = *(QArrayData **)pDVar8;
                goto LAB_1002fec00;
              }
            }
            pDVar8 = pDVar8 + -8;
            lVar10 = lVar10 + 8;
          } while (lVar10 != 0);
        }
        QListData::dispose((Data *)uVar4);
        return;
      }
      if (param_3 != 0) {
        if (param_3 == 9) {
          if (((param_1[5] != 0) && (*(int *)(param_1[5] + 4) != 0)) && (param_1[6] != 0)) {
            QWidget::hide();
            QObject::deleteLater();
          }
          cVar1 = FUN_1002fc710(param_1);
          uVar7 = 0x80015475;
          if (cVar1 != '\0') {
            return;
          }
          goto LAB_1002ff0d3;
        }
        bVar11 = true;
        if (param_3 != 0xb) goto LAB_1002ff05c;
        if (((param_1[5] != 0) && (*(int *)(param_1[5] + 4) != 0)) && (param_1[6] != 0)) {
          QWidget::hide();
          QObject::deleteLater();
        }
        local_120._32_8_ =
             QString::fromAscii_helper
                       ("1onRestartToCompleteIstallMessageClosed(PRL_RESULT, Messaging::ButtonID)",
                        0x48);
        local_120._24_4_ = 0x80000000;
        local_120._16_8_ = (QMetaObject *)0x0;
        FUN_100a1c600(local_f8,param_1,local_120 + 0x20,local_120 + 0x10);
        QVariant::~QVariant((QVariant *)(local_120 + 0x10));
        if (*(int *)local_120._32_8_ != -1) {
          if (*(int *)local_120._32_8_ != 0) {
            LOCK();
            *(int *)local_120._32_8_ = *(int *)local_120._32_8_ + -1;
            local_31 = *(int *)local_120._32_8_ != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002feebb;
          }
          QArrayData::deallocate((QArrayData *)local_120._32_8_,2,8);
        }
LAB_1002feebb:
        iVar2 = CMessageManager::instance();
        local_120._8_8_ = PTR_shared_null_1021e15e8;
        local_120._0_8_ = PTR_shared_null_1021e15e8;
        CMessageManager::showMessageBox
                  (iVar2,(QWidget *)0x80015487,(QStringList *)0x0,(QStringList *)(local_120 + 8),
                   (CSlotInfo *)local_120,SUB81(local_f8,0));
        uVar4 = local_120._0_8_;
        if (*(int *)local_120._0_8_ != -1) {
          if (*(int *)local_120._0_8_ != 0) {
            LOCK();
            *(int *)local_120._0_8_ = *(int *)local_120._0_8_ + -1;
            local_31 = *(int *)local_120._0_8_ != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002fef8a;
          }
          iVar2 = *(int *)(local_120._0_8_ + 0xc);
          if (iVar2 != *(int *)(local_120._0_8_ + 8)) {
            lVar10 = (long)*(int *)(local_120._0_8_ + 8) * 8 + (long)iVar2 * -8;
            pDVar8 = (Data *)(local_120._0_8_ + (long)iVar2 * 8 + 8);
            do {
              pQVar9 = *(QArrayData **)pDVar8;
              if (*(int *)pQVar9 == 0) {
LAB_1002fef69:
                QArrayData::deallocate(pQVar9,2,8);
              }
              else if (*(int *)pQVar9 != -1) {
                LOCK();
                *(int *)pQVar9 = *(int *)pQVar9 + -1;
                local_31 = *(int *)pQVar9 != 0;
                UNLOCK();
                if (!(bool)local_31) {
                  pQVar9 = *(QArrayData **)pDVar8;
                  goto LAB_1002fef69;
                }
              }
              pDVar8 = pDVar8 + -8;
              lVar10 = lVar10 + 8;
            } while (lVar10 != 0);
          }
          QListData::dispose((Data *)uVar4);
        }
LAB_1002fef8a:
        uVar4 = local_120._8_8_;
        if (*(int *)local_120._8_8_ != -1) {
          if (*(int *)local_120._8_8_ != 0) {
            LOCK();
            *(int *)local_120._8_8_ = *(int *)local_120._8_8_ + -1;
            local_31 = *(int *)local_120._8_8_ != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002ff014;
          }
          iVar2 = *(int *)(local_120._8_8_ + 0xc);
          if (iVar2 != *(int *)(local_120._8_8_ + 8)) {
            lVar10 = (long)*(int *)(local_120._8_8_ + 8) * 8 + (long)iVar2 * -8;
            pDVar8 = (Data *)(local_120._8_8_ + (long)iVar2 * 8 + 8);
            do {
              pQVar9 = *(QArrayData **)pDVar8;
              if (*(int *)pQVar9 == 0) {
LAB_1002feff3:
                QArrayData::deallocate(pQVar9,2,8);
              }
              else if (*(int *)pQVar9 != -1) {
                LOCK();
                *(int *)pQVar9 = *(int *)pQVar9 + -1;
                local_31 = *(int *)pQVar9 != 0;
                UNLOCK();
                if (!(bool)local_31) {
                  pQVar9 = *(QArrayData **)pDVar8;
                  goto LAB_1002feff3;
                }
              }
              pDVar8 = pDVar8 + -8;
              lVar10 = lVar10 + 8;
            } while (lVar10 != 0);
          }
          QListData::dispose((Data *)uVar4);
        }
LAB_1002ff014:
        QVariant::~QVariant(local_d8);
        if (local_f8[0] == (int *)0x0) {
          return;
        }
        LOCK();
        *local_f8[0] = *local_f8[0] + -1;
        local_31 = *local_f8[0] != 0;
        UNLOCK();
        if ((bool)local_31) {
          return;
        }
        if (local_f8[0] == (int *)0x0) {
          return;
        }
        operator_delete(local_f8[0]);
        return;
      }
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("","prl_client_app",2,"Bundle initialiation has completed successfully.");
      }
      if (DAT_102310930 == (void *)0x0) {
        pvVar3 = operator_new(0x18);
        FUN_1001e5440(pvVar3);
        DAT_102273630 = 1;
        DAT_102310930 = pvVar3;
      }
      FUN_1001e5610(DAT_102310930,7,0);
      if (DAT_102310930 == (void *)0x0) {
        pvVar3 = operator_new(0x18);
        FUN_1001e5440(pvVar3);
        DAT_102273630 = 1;
        DAT_102310930 = pvVar3;
      }
      FUN_1001e5610(DAT_102310930,5,0);
      if (DAT_102310930 == (void *)0x0) {
        pvVar3 = operator_new(0x18);
        FUN_1001e5440(pvVar3);
        DAT_102273630 = 1;
        DAT_102310930 = pvVar3;
      }
      FUN_1001e5610(DAT_102310930,8,0);
      if (DAT_102310930 == (void *)0x0) {
        pvVar3 = operator_new(0x18);
        FUN_1001e5440(pvVar3);
        DAT_102273630 = 1;
        DAT_102310930 = pvVar3;
      }
      iVar2 = FUN_1001e5550(DAT_102310930,4);
      if (iVar2 < 0) {
LAB_1002fedd1:
        FUN_100059490();
      }
      else {
        if (DAT_102310930 == (void *)0x0) {
          pvVar3 = operator_new(0x18);
          FUN_1001e5440(pvVar3);
          DAT_102273630 = 1;
          DAT_102310930 = pvVar3;
        }
        iVar2 = FUN_1001e5550(DAT_102310930,7);
        if (iVar2 == -0x7ffeac9a) goto LAB_1002fedd1;
      }
      CAbstractTask::prependSubTask((int)param_1);
      uVar7 = 0;
      goto LAB_1002ff0d3;
    }
LAB_1002ff05c:
    if (-1 < param_2) {
      if (bVar11) {
        FUN_100df99c0("","prl_client_app",0,
                      "Bundle initializaion has started, but failed with error %d",param_3);
        uVar7 = 0x80015369;
      }
      else {
        FUN_100df99c0("","prl_client_app",0,
                      "Failed to initialize application bundle. The process has been aborted.");
        uVar7 = 0x80015371;
      }
      goto LAB_1002ff0d3;
    }
  }
  uVar4 = FUN_100dddcf0(param_2);
  FUN_100df99c0("","prl_client_app",0,
                "Failed to initialize application bundle. Failed to launch initialiation script with RC = %.8X, rc = [%s]."
                ,param_2,uVar4);
  uVar7 = 0x80015370;
  if (param_2 == -0x7ffffd8b) {
    uVar7 = 0x80000275;
  }
LAB_1002ff0d3:
  if (((param_1[5] != 0) && (*(int *)(param_1[5] + 4) != 0)) && (param_1[6] != 0)) {
    QWidget::hide();
    QObject::deleteLater();
  }
  (**(code **)(*param_1 + 0xb0))(param_1,uVar7);
  return;
}

