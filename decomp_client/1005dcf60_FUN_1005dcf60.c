
undefined1 FUN_1005dcf60(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  QString QVar8;
  undefined8 uVar9;
  uint in_stack_fffffffffffffcdc;
  QArrayData *local_308;
  QArrayData *local_300;
  QString local_2f8;
  QString local_2f0;
  int *local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  Data_conflict local_2c8;
  undefined4 local_2c0;
  undefined1 local_2b8;
  int *local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined4 local_290;
  Data_conflict local_288;
  undefined4 local_280;
  undefined1 local_278;
  undefined1 local_268 [24];
  QArrayData *local_250;
  int *local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined4 local_230;
  Data_conflict local_228;
  undefined4 local_220;
  undefined1 local_218;
  int *local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  Data_conflict local_1e8;
  undefined4 local_1e0;
  undefined1 local_1d8;
  undefined1 local_1c8 [32];
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QString local_190;
  QString local_188;
  QString local_180;
  QArrayData *local_178;
  QString local_170;
  int *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  Data_conflict local_148;
  undefined4 local_140;
  undefined1 local_138;
  int *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  Data_conflict local_108;
  undefined4 local_100;
  undefined1 local_f8;
  undefined1 local_f0 [24];
  int *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  Data_conflict local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  int *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  Data_conflict local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_58 [32];
  QArrayData *local_38;
  undefined1 local_29;
  
  QLineEdit::text();
  if (*(int *)(local_38 + 4) != 0) {
    QString::trimmed();
    iVar5 = *(int *)(local_58._24_8_ + 4);
    if (*(int *)local_58._24_8_ != -1) {
      if (*(int *)local_58._24_8_ != 0) {
        LOCK();
        *(int *)local_58._24_8_ = *(int *)local_58._24_8_ + -1;
        local_29 = *(int *)local_58._24_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005dcfd4;
      }
      QArrayData::deallocate((QArrayData *)local_58._24_8_,2,8);
    }
LAB_1005dcfd4:
    if (iVar5 != 0) {
      cVar3 = FUN_100df0a80(&local_38);
      if (cVar3 == '\0') {
        iVar5 = CMessageManager::instance();
        puVar2 = PTR_shared_null_1021e15e8;
        local_f0._16_8_ = PTR_shared_null_1021e1288;
        local_f0._8_8_ = PTR_shared_null_1021e15e8;
        FUN_1000341d0(local_f0 + 8,&local_38);
        local_f0._0_8_ = puVar2;
        local_128 = (int *)0x0;
        uStack_120 = 0;
        local_110 = 0;
        local_118 = 0;
        local_100 = 0x80000000;
        local_108.field7 = 0;
        local_f8 = 1;
        local_168 = (int *)0x0;
        uStack_160 = 0;
        local_150 = 0;
        local_158 = 0;
        local_140 = 0x80000000;
        local_148.field7 = 0;
        local_138 = 1;
        CMessageManager::showMessageBox
                  (iVar5,(QString *)0x3ac5,(QStringList *)(local_f0 + 0x10),
                   (QStringList *)(local_f0 + 8),(CSlotInfo *)local_f0,SUB81(&local_128,0),
                   (QWidget *)((ulong)in_stack_fffffffffffffcdc << 0x20),(CSlotInfo *)0x0);
        QVariant::~QVariant((QVariant *)&local_148);
        if (local_168 != (int *)0x0) {
          LOCK();
          *local_168 = *local_168 + -1;
          local_29 = *local_168 != 0;
          UNLOCK();
          if ((!(bool)local_29) && (local_168 != (int *)0x0)) {
            operator_delete(local_168);
          }
        }
        QVariant::~QVariant((QVariant *)&local_108);
        if (local_128 != (int *)0x0) {
          LOCK();
          *local_128 = *local_128 + -1;
          local_29 = *local_128 != 0;
          UNLOCK();
          if ((!(bool)local_29) && (local_128 != (int *)0x0)) {
            operator_delete(local_128);
          }
        }
        FUN_100039a80(local_f0);
        FUN_100039a80(local_f0 + 8);
        if (*(int *)local_f0._16_8_ == -1) {
          uVar4 = 0;
        }
        else {
          if (*(int *)local_f0._16_8_ != 0) {
            LOCK();
            *(int *)local_f0._16_8_ = *(int *)local_f0._16_8_ + -1;
            local_29 = *(int *)local_f0._16_8_ != 0;
            UNLOCK();
            if ((bool)local_29) {
              uVar4 = 0;
              goto LAB_1005dddd2;
            }
          }
          QArrayData::deallocate((QArrayData *)local_f0._16_8_,2,8);
          uVar4 = 0;
        }
        goto LAB_1005dddd2;
      }
      CPrlFileDevSelectorWidget::getCurrentSystemName();
      if (*(int *)(local_178 + 4) == 0) {
        local_170.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x20);
        if (1 < *(int *)local_170.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + 1;
          local_29 = *(int *)local_170.field0_0x0 != 0;
          UNLOCK();
        }
      }
      else {
        CPrlFileDevSelectorWidget::getCurrentSystemName();
      }
      if (*(int *)local_178 != -1) {
        if (*(int *)local_178 != 0) {
          LOCK();
          *(int *)local_178 = *(int *)local_178 + -1;
          local_29 = *(int *)local_178 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005dd3ed;
        }
        QArrayData::deallocate(local_178,2,8);
      }
LAB_1005dd3ed:
      cVar3 = FUN_100d80630(1);
      if (cVar3 == '\0') {
LAB_1005dd65c:
        CPrlFileDevSelectorWidget::getCurrentSystemName();
        iVar5 = *(int *)(local_1c8._24_8_ + 4);
        if (*(int *)local_1c8._24_8_ != -1) {
          if (*(int *)local_1c8._24_8_ != 0) {
            LOCK();
            *(int *)local_1c8._24_8_ = *(int *)local_1c8._24_8_ + -1;
            local_29 = *(int *)local_1c8._24_8_ != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005dd6a9;
          }
          QArrayData::deallocate((QArrayData *)local_1c8._24_8_,2,8);
        }
LAB_1005dd6a9:
        if (iVar5 == 0) {
          iVar5 = CMessageManager::instance();
          local_1c8._16_8_ = PTR_shared_null_1021e1288;
          local_1c8._8_8_ = PTR_shared_null_1021e15e8;
          local_1c8._0_8_ = PTR_shared_null_1021e15e8;
          local_208 = (int *)0x0;
          uStack_200 = 0;
          local_1f0 = 0;
          local_1f8 = 0;
          local_1e0 = 0x80000000;
          local_1e8.field7 = 0;
          local_1d8 = 1;
          local_248 = (int *)0x0;
          uStack_240 = 0;
          local_230 = 0;
          local_238 = 0;
          local_220 = 0x80000000;
          local_228.field7 = 0;
          local_218 = 1;
          CMessageManager::showMessageBox
                    (iVar5,(QString *)0x3aa7,(QStringList *)(local_1c8 + 0x10),
                     (QStringList *)(local_1c8 + 8),(CSlotInfo *)local_1c8,SUB81(&local_208,0),
                     (QWidget *)((ulong)in_stack_fffffffffffffcdc << 0x20),(CSlotInfo *)0x0);
          QVariant::~QVariant((QVariant *)&local_228);
          if (local_248 != (int *)0x0) {
            LOCK();
            *local_248 = *local_248 + -1;
            local_29 = *local_248 != 0;
            UNLOCK();
            if ((!(bool)local_29) && (local_248 != (int *)0x0)) {
              operator_delete(local_248);
            }
          }
          QVariant::~QVariant((QVariant *)&local_1e8);
          if (local_208 != (int *)0x0) {
            LOCK();
            *local_208 = *local_208 + -1;
            local_29 = *local_208 != 0;
            UNLOCK();
            if ((!(bool)local_29) && (local_208 != (int *)0x0)) {
              operator_delete(local_208);
            }
          }
          FUN_100039a80(local_1c8);
          FUN_100039a80(local_1c8 + 8);
          if (*(int *)local_1c8._16_8_ == -1) {
            uVar4 = 0;
          }
          else {
            if (*(int *)local_1c8._16_8_ != 0) {
              LOCK();
              *(int *)local_1c8._16_8_ = *(int *)local_1c8._16_8_ + -1;
              local_29 = *(int *)local_1c8._16_8_ != 0;
              UNLOCK();
              if ((bool)local_29) {
                uVar4 = 0;
                goto LAB_1005ddd9c;
              }
            }
            QArrayData::deallocate((QArrayData *)local_1c8._16_8_,2,8);
            uVar4 = 0;
          }
        }
        else {
          uVar6 = FUN_1005ec9b0(*(long *)(param_1 + 0x10) + 0x48);
          FUN_1005de7d0(&local_250,param_1);
          cVar3 = FUN_1005cbf40(uVar6,&local_250,&local_38);
          if (*(int *)local_250 != -1) {
            if (*(int *)local_250 != 0) {
              LOCK();
              *(int *)local_250 = *(int *)local_250 + -1;
              local_29 = *(int *)local_250 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_1005dd71b;
            }
            QArrayData::deallocate(local_250,2,8);
          }
LAB_1005dd71b:
          if (cVar3 == '\0') {
            iVar5 = CMessageManager::instance();
            puVar2 = PTR_shared_null_1021e15e8;
            local_268._16_8_ = PTR_shared_null_1021e1288;
            local_268._8_8_ = PTR_shared_null_1021e15e8;
            FUN_1000341d0(local_268 + 8,&local_38);
            local_268._0_8_ = puVar2;
            local_2a8 = (int *)0x0;
            uStack_2a0 = 0;
            local_290 = 0;
            local_298 = 0;
            local_280 = 0x80000000;
            local_288.field7 = 0;
            local_278 = 1;
            local_2e8 = (int *)0x0;
            uStack_2e0 = 0;
            local_2d0 = 0;
            local_2d8 = 0;
            local_2c0 = 0x80000000;
            local_2c8.field7 = 0;
            local_2b8 = 1;
            CMessageManager::showMessageBox
                      (iVar5,(QString *)0x80000115,(QStringList *)(local_268 + 0x10),
                       (QStringList *)(local_268 + 8),(CSlotInfo *)local_268,SUB81(&local_2a8,0),
                       (QWidget *)((ulong)in_stack_fffffffffffffcdc << 0x20),(CSlotInfo *)0x0);
            QVariant::~QVariant((QVariant *)&local_2c8);
            if (local_2e8 != (int *)0x0) {
              LOCK();
              *local_2e8 = *local_2e8 + -1;
              local_29 = *local_2e8 != 0;
              UNLOCK();
              if ((!(bool)local_29) && (local_2e8 != (int *)0x0)) {
                operator_delete(local_2e8);
              }
            }
            QVariant::~QVariant((QVariant *)&local_288);
            if (local_2a8 != (int *)0x0) {
              LOCK();
              *local_2a8 = *local_2a8 + -1;
              local_29 = *local_2a8 != 0;
              UNLOCK();
              if ((!(bool)local_29) && (local_2a8 != (int *)0x0)) {
                operator_delete(local_2a8);
              }
            }
            FUN_100039a80(local_268);
            FUN_100039a80(local_268 + 8);
            if (*(int *)local_268._16_8_ == -1) {
              uVar4 = 0;
            }
            else {
              if (*(int *)local_268._16_8_ != 0) {
                LOCK();
                *(int *)local_268._16_8_ = *(int *)local_268._16_8_ + -1;
                local_29 = *(int *)local_268._16_8_ != 0;
                UNLOCK();
                if ((bool)local_29) {
                  uVar4 = 0;
                  goto LAB_1005ddd9c;
                }
              }
              QArrayData::deallocate((QArrayData *)local_268._16_8_,2,8);
              uVar4 = 0;
            }
          }
          else {
            lVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
            uVar4 = QAbstractButton::isChecked();
            *(undefined1 *)(lVar7 + 0x6f) = uVar4;
            lVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
            uVar4 = QAbstractButton::isChecked();
            *(undefined1 *)(lVar7 + 0x6d) = uVar4;
            lVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
            uVar4 = QAbstractButton::isChecked();
            *(undefined1 *)(lVar7 + 0x168) = uVar4;
            lVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
            *(undefined1 *)(lVar7 + 0x6e) = 0;
            lVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
            FUN_1005de920(&local_2f0,param_1);
            QString::operator=((QString *)(lVar7 + 0x178),&local_2f0);
            if (*(int *)local_2f0.field0_0x0 != -1) {
              if (*(int *)local_2f0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_2f0.field0_0x0 = *(int *)local_2f0.field0_0x0 + -1;
                local_29 = *(int *)local_2f0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_29) goto LAB_1005dd802;
              }
              QArrayData::deallocate((QArrayData *)local_2f0.field0_0x0,2,8);
            }
LAB_1005dd802:
            lVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
            FUN_1005de7d0(&local_2f8,param_1);
            QString::operator=((QString *)(lVar7 + 0x180),&local_2f8);
            if (*(int *)local_2f8.field0_0x0 != -1) {
              if (*(int *)local_2f8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_2f8.field0_0x0 = *(int *)local_2f8.field0_0x0 + -1;
                local_29 = *(int *)local_2f8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_29) goto LAB_1005dd86d;
              }
              QArrayData::deallocate((QArrayData *)local_2f8.field0_0x0,2,8);
            }
LAB_1005dd86d:
            if (*(char *)(param_1 + 0x30) != '\0') {
              FUN_1005de9d0(param_1);
            }
            lVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
            uVar4 = 1;
            if ((*(int *)(lVar7 + 0x50) != 5) &&
               (lVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48),
               *(int *)(lVar7 + 0x50) != 10)) {
              lVar7 = FUN_1005ec9d0(*(long *)(param_1 + 0x10) + 0x48);
              if (lVar7 == 0) {
                uVar4 = 0;
                FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm Configuration instance is null.");
              }
              else {
                FUN_1005ec9d0(*(long *)(param_1 + 0x10) + 0x48);
                QVar8.field0_0x0 =
                     (QTypedArrayData<unsigned_short> *)CVmConfiguration::getVmIdentification();
                FUN_1005de920(&local_300,param_1);
                CVmIdentification::setVmName(QVar8);
                if (*(int *)local_300 != -1) {
                  if (*(int *)local_300 != 0) {
                    LOCK();
                    *(int *)local_300 = *(int *)local_300 + -1;
                    local_29 = *(int *)local_300 != 0;
                    UNLOCK();
                    if ((bool)local_29) goto LAB_1005dd92e;
                  }
                  QArrayData::deallocate(local_300,2,8);
                }
LAB_1005dd92e:
                FUN_1005ec9d0(*(long *)(param_1 + 0x10) + 0x48);
                QVar8.field0_0x0 =
                     (QTypedArrayData<unsigned_short> *)CVmConfiguration::getVmIdentification();
                FUN_1005de7d0(&local_308,param_1);
                CVmIdentification::setHomePath(QVar8);
                if (*(int *)local_308 != -1) {
                  if (*(int *)local_308 != 0) {
                    LOCK();
                    *(int *)local_308 = *(int *)local_308 + -1;
                    local_29 = *(int *)local_308 != 0;
                    UNLOCK();
                    if ((bool)local_29) goto LAB_1005dd99a;
                  }
                  QArrayData::deallocate(local_308,2,8);
                }
LAB_1005dd99a:
                uVar6 = FUN_1005ec9d0(*(long *)(param_1 + 0x10) + 0x48);
                uVar9 = FUN_1005ec9b0(*(long *)(param_1 + 0x10) + 0x48);
                uVar4 = FUN_1005ca590(uVar6,uVar9);
              }
            }
          }
        }
      }
      else {
        local_180.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("[VMD]",5);
        local_188.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        cVar3 = SandboxFileAccessHelpers::checkAvailability(&local_170,&local_180,false,&local_188);
        if (*(int *)local_188.field0_0x0 != -1) {
          if (*(int *)local_188.field0_0x0 != 0) {
            LOCK();
            *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
            local_29 = *(int *)local_188.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005dd479;
          }
          QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
        }
LAB_1005dd479:
        if (*(int *)local_180.field0_0x0 != -1) {
          if (*(int *)local_180.field0_0x0 != 0) {
            LOCK();
            *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
            local_29 = *(int *)local_180.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005dd4af;
          }
          QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
        }
LAB_1005dd4af:
        if (cVar3 != '\0') goto LAB_1005dd65c;
        QMetaObject::tr((char *)&local_198,"",(int)PTR_s_Select_the_folder_where_virtual_m_10226f1a8
                       );
        SandboxFileAccessHelpers::selectDirectory(&local_190,&local_170);
        if (*(int *)local_198 != -1) {
          if (*(int *)local_198 != 0) {
            LOCK();
            *(int *)local_198 = *(int *)local_198 + -1;
            local_29 = *(int *)local_198 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005dd52c;
          }
          QArrayData::deallocate(local_198,2,8);
        }
LAB_1005dd52c:
        bVar1 = true;
        if (*(int *)(local_190.field0_0x0 + 4) != 0) {
          uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
          local_1a0 = (QArrayData *)local_190.field0_0x0;
          iVar5 = *(int *)local_190.field0_0x0;
          if (1 < iVar5 + 1U) {
            LOCK();
            *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + 1;
            local_29 = *(int *)local_190.field0_0x0 != 0;
            UNLOCK();
            iVar5 = *(int *)local_190.field0_0x0;
          }
          local_1a8 = (QArrayData *)local_190.field0_0x0;
          if (1 < iVar5 + 1U) {
            LOCK();
            *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + 1;
            local_29 = *(int *)local_190.field0_0x0 != 0;
            UNLOCK();
          }
          CPrlFileDevSelectorWidget::setCurrentItem(uVar6,2,&local_1a0,&local_1a8,0);
          if (*(int *)local_1a8 != -1) {
            if (*(int *)local_1a8 != 0) {
              LOCK();
              *(int *)local_1a8 = *(int *)local_1a8 + -1;
              local_29 = *(int *)local_1a8 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_1005dd5d6;
            }
            QArrayData::deallocate(local_1a8,2,8);
          }
LAB_1005dd5d6:
          if (*(int *)local_1a0 != -1) {
            if (*(int *)local_1a0 != 0) {
              LOCK();
              *(int *)local_1a0 = *(int *)local_1a0 + -1;
              local_29 = *(int *)local_1a0 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_1005dd60c;
            }
            QArrayData::deallocate(local_1a0,2,8);
          }
LAB_1005dd60c:
          FUN_1005db720(param_1);
          *(undefined1 *)(param_1 + 0x30) = 1;
          bVar1 = false;
        }
        if (*(int *)local_190.field0_0x0 != -1) {
          if (*(int *)local_190.field0_0x0 != 0) {
            LOCK();
            *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
            local_29 = *(int *)local_190.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005dd651;
          }
          QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
        }
LAB_1005dd651:
        if (!bVar1) goto LAB_1005dd65c;
        uVar4 = 0;
      }
LAB_1005ddd9c:
      if (*(int *)local_170.field0_0x0 != -1) {
        if (*(int *)local_170.field0_0x0 != 0) {
          LOCK();
          *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
          local_29 = *(int *)local_170.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005dddd2;
        }
        QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
      }
      goto LAB_1005dddd2;
    }
  }
  iVar5 = CMessageManager::instance();
  local_58._16_8_ = PTR_shared_null_1021e1288;
  local_58._8_8_ = PTR_shared_null_1021e15e8;
  local_58._0_8_ = PTR_shared_null_1021e15e8;
  local_98 = (int *)0x0;
  uStack_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0x80000000;
  local_78.field7 = 0;
  local_68 = 1;
  local_d8 = (int *)0x0;
  uStack_d0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b0 = 0x80000000;
  local_b8.field7 = 0;
  local_a8 = 1;
  CMessageManager::showMessageBox
            (iVar5,(QString *)0x3aa6,(QStringList *)(local_58 + 0x10),(QStringList *)(local_58 + 8),
             (CSlotInfo *)local_58,SUB81(&local_98,0),
             (QWidget *)((ulong)in_stack_fffffffffffffcdc << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_b8);
  if (local_d8 != (int *)0x0) {
    LOCK();
    *local_d8 = *local_d8 + -1;
    local_29 = *local_d8 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_d8 != (int *)0x0)) {
      operator_delete(local_d8);
    }
  }
  QVariant::~QVariant((QVariant *)&local_78);
  if (local_98 != (int *)0x0) {
    LOCK();
    *local_98 = *local_98 + -1;
    local_29 = *local_98 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_98 != (int *)0x0)) {
      operator_delete(local_98);
    }
  }
  FUN_100039a80(local_58);
  FUN_100039a80(local_58 + 8);
  if (*(int *)local_58._16_8_ == -1) {
    uVar4 = 0;
  }
  else {
    if (*(int *)local_58._16_8_ != 0) {
      LOCK();
      *(int *)local_58._16_8_ = *(int *)local_58._16_8_ + -1;
      local_29 = *(int *)local_58._16_8_ != 0;
      UNLOCK();
      if ((bool)local_29) {
        uVar4 = 0;
        goto LAB_1005dddd2;
      }
    }
    QArrayData::deallocate((QArrayData *)local_58._16_8_,2,8);
    uVar4 = 0;
  }
LAB_1005dddd2:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar4;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return uVar4;
}

