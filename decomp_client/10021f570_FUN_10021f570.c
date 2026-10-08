
/* WARNING: Removing unreachable block (ram,0x00010021fd4e) */
/* WARNING: Removing unreachable block (ram,0x00010021fd5c) */
/* WARNING: Removing unreachable block (ram,0x00010021fd68) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10021f570(long param_1)

{
  code *pcVar1;
  double dVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  double *pdVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  bool bVar12;
  uint in_stack_fffffffffffffdfc;
  Data_conflict local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8;
  QVariant local_1b0;
  QArrayData *local_1a0;
  int *local_198 [4];
  QVariant local_178 [2];
  QArrayData *local_160;
  undefined1 local_158 [24];
  AnonymousUnion0 local_140;
  int *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  Data_conflict local_118;
  undefined4 local_110;
  undefined1 local_108;
  QVariant local_f8;
  QArrayData *local_e8;
  int *local_e0 [4];
  QVariant local_c0 [2];
  QArrayData *local_a8;
  undefined1 local_a0 [24];
  AnonymousUnion0 local_88;
  AnonymousBitField0 local_7c;
  Data *local_78;
  Data *local_70;
  AnonymousBitField0 *local_68;
  AnonymousBitField0 *local_60;
  int local_58;
  _func_void_Node_ptr *local_50;
  Data *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar11 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar11 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar5 = FUN_10018a9d0(uVar11);
  if (iVar5 != 0x30000001) {
    return 0;
  }
  uVar11 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar11 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar5 = FUN_10018f860(uVar11);
  if (iVar5 != 8) {
    return 0x3bfa;
  }
  uVar11 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar11 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar6 = FUN_10018f890(uVar11);
  if (uVar6 < 0x80b) {
    return 0x3bfa;
  }
  uVar7 = FUN_100152280();
  uVar11 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar11 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_40,uVar11);
  uVar11 = FUN_1001547d0(uVar7,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10021f675;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10021f675:
  FUN_10015a340(uVar11);
  CHostHardwareInfoBase::getMemorySettings();
  uVar6 = CHwMemorySettings::getHostRamSize();
  if (uVar6 < 0x400) {
    return 0x3bfa;
  }
  uVar11 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar11 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018c2b0(uVar11);
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getVideo();
  cVar4 = CVmVideo::isEnableHiResDrawing();
  if (cVar4 == '\0') {
    return 0x3bfa;
  }
  MacUtils::getHiDPIDisplays();
  if (*(int *)(local_48 + 0xc) == *(int *)(local_48 + 8)) {
    bVar12 = false;
  }
  else {
    uVar11 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar11 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_10018c2b0(uVar11);
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getVideo();
    uVar6 = CVmVideo::getMemorySize();
    bVar12 = uVar6 < 0x200;
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10021f753;
    }
    QListData::dispose(local_48);
  }
LAB_10021f753:
  if (!bVar12) {
    return 0x3bfa;
  }
  MacUtils::getDisplaySizes();
  FUN_1001299e0(&local_78,&local_50);
  local_70 = local_78;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 == 0) {
      QListData::detach((int)&local_70);
      lVar9 = (long)*(int *)(local_70 + 8);
      if ((local_78 + (long)*(int *)(local_78 + 8) * 8 != local_70 + lVar9 * 8) &&
         (lVar10 = *(int *)(local_70 + 0xc) - lVar9,
         lVar10 != 0 && lVar9 <= *(int *)(local_70 + 0xc))) {
        _memcpy(local_70 + lVar9 * 8 + 0x10,local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10,
                lVar10 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
    }
  }
  local_68 = (AnonymousBitField0 *)(local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10);
  local_60 = (AnonymousBitField0 *)(local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10);
  local_58 = 1;
  if (*(int *)local_78 == -1) {
LAB_10021f830:
    iVar5 = 2;
    if (local_68 != local_60) {
      do {
        local_7c = *local_68;
        pdVar8 = (double *)FUN_1001bc860(&local_50,&local_7c);
        dVar2 = *pdVar8;
        lVar9 = FUN_1001bc860(&local_50,&local_7c);
        if (_DAT_100e15a20 <= dVar2 * (double)*(int *)(lVar9 + 8)) {
          CAbstractTask::setWaitForSubTaskCompletion();
          iVar5 = CMessageManager::instance();
          uVar11 = 0;
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
            uVar11 = *(undefined8 *)(param_1 + 0x20);
          }
          FUN_100188480(&local_88,uVar11);
          puVar3 = PTR_shared_null_1021e15e8;
          local_a0._16_8_ = PTR_shared_null_1021e15e8;
          QString::number((int)local_a0 + 8,0x200);
          FUN_1000341d0(local_a0 + 0x10,local_a0 + 8);
          local_a0._0_8_ = puVar3;
          QString::number((uint)&local_a8,0x200);
          FUN_1000341d0(local_a0,&local_a8);
          local_e8 = (QArrayData *)
                     QString::fromAscii_helper
                               ("1onWarningVideoMemoryIsTooLowClosed( PRL_RESULT, Messaging::ButtonID, const QVariant& )"
                                ,0x57);
          QVariant::QVariant(&local_f8,0x200);
          FUN_100a1c600(local_e0,param_1,&local_e8,&local_f8);
          local_138 = (int *)0x0;
          uStack_130 = 0;
          local_120 = 0;
          local_128 = 0;
          local_110 = 0x80000000;
          local_118.field7 = 0;
          local_108 = 1;
          CMessageManager::showMessageBox
                    (iVar5,(QString *)0x80015503,(QStringList *)&local_88.field0,
                     (QStringList *)(local_a0 + 0x10),(CSlotInfo *)local_a0,SUB81(local_e0,0),
                     (QWidget *)((ulong)in_stack_fffffffffffffdfc << 0x20),(CSlotInfo *)0x0);
          QVariant::~QVariant((QVariant *)&local_118);
          if (local_138 != (int *)0x0) {
            LOCK();
            *local_138 = *local_138 + -1;
            local_31 = *local_138 != 0;
            UNLOCK();
            if ((!(bool)local_31) && (local_138 != (int *)0x0)) {
              operator_delete(local_138);
            }
          }
          QVariant::~QVariant(local_c0);
          if (local_e0[0] != (int *)0x0) {
            LOCK();
            *local_e0[0] = *local_e0[0] + -1;
            local_31 = *local_e0[0] != 0;
            UNLOCK();
            if ((!(bool)local_31) && (local_e0[0] != (int *)0x0)) {
              operator_delete(local_e0[0]);
            }
          }
          QVariant::~QVariant(&local_f8);
          if (*(int *)local_e8 != -1) {
            if (*(int *)local_e8 != 0) {
              LOCK();
              *(int *)local_e8 = *(int *)local_e8 + -1;
              local_31 = *(int *)local_e8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10021fac6;
            }
            QArrayData::deallocate(local_e8,2,8);
          }
LAB_10021fac6:
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10021fafc;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
LAB_10021fafc:
          FUN_100039a80(local_a0);
          if (*(int *)local_a0._8_8_ != -1) {
            if (*(int *)local_a0._8_8_ != 0) {
              LOCK();
              *(int *)local_a0._8_8_ = *(int *)local_a0._8_8_ + -1;
              local_31 = *(int *)local_a0._8_8_ != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10021fb3e;
            }
            QArrayData::deallocate((QArrayData *)local_a0._8_8_,2,8);
          }
LAB_10021fb3e:
          FUN_100039a80(local_a0 + 0x10);
          iVar5 = 1;
          if (*(int *)local_88.field1 == -1) break;
          if (*(int *)local_88.field1 != 0) {
            LOCK();
            *(int *)local_88.field1 = *(int *)local_88.field1 + -1;
            local_31 = *(int *)local_88.field1 != 0;
            UNLOCK();
            if ((bool)local_31) break;
          }
          QArrayData::deallocate((QArrayData *)local_88.field1,2,8);
          break;
        }
        local_68 = local_68 + 2;
        local_58 = 1;
      } while (local_68 != local_60);
    }
  }
  else {
    if (*(int *)local_78 == 0) {
LAB_10021f81b:
      QListData::dispose(local_78);
    }
    else {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_10021f81b;
    }
    iVar5 = 2;
    if (local_58 != 0) goto LAB_10021f830;
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10021fba6;
    }
    QListData::dispose(local_70);
  }
LAB_10021fba6:
  if (iVar5 == 2) {
    QApplication::desktop();
    iVar5 = QDesktopWidget::numScreens();
    bVar12 = false;
    if (1 < iVar5) {
      CAbstractTask::setWaitForSubTaskCompletion();
      iVar5 = CMessageManager::instance();
      uVar11 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar11 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_100188480(&local_140,uVar11);
      puVar3 = PTR_shared_null_1021e15e8;
      local_158._16_8_ = PTR_shared_null_1021e15e8;
      QString::number((int)local_158 + 8,0x200);
      FUN_1000341d0(local_158 + 0x10,local_158 + 8);
      local_158._0_8_ = puVar3;
      QString::number((uint)&local_160,0x200);
      FUN_1000341d0(local_158,&local_160);
      local_1a0 = (QArrayData *)
                  QString::fromAscii_helper
                            ("1onWarningVideoMemoryIsTooLowClosed(PRL_RESULT, Messaging::ButtonID, const QVariant&)"
                             ,0x55);
      QVariant::QVariant(&local_1b0,0x200);
      FUN_100a1c600(local_198,param_1,&local_1a0,&local_1b0);
      local_1c0 = 0x80000000;
      local_1c8.field7 = 0;
      local_1b8 = 1;
      CMessageManager::showMessageBox
                (iVar5,(QString *)0x3c33,(QStringList *)&local_140.field0,
                 (QStringList *)(local_158 + 0x10),(CSlotInfo *)local_158,SUB81(local_198,0),
                 (QWidget *)((ulong)in_stack_fffffffffffffdfc << 0x20),(CSlotInfo *)0x0);
      QVariant::~QVariant((QVariant *)&local_1c8);
      QVariant::~QVariant(local_178);
      if (local_198[0] != (int *)0x0) {
        LOCK();
        *local_198[0] = *local_198[0] + -1;
        local_31 = *local_198[0] != 0;
        UNLOCK();
        if ((!(bool)local_31) && (local_198[0] != (int *)0x0)) {
          operator_delete(local_198[0]);
        }
      }
      QVariant::~QVariant(&local_1b0);
      if (*(int *)local_1a0 != -1) {
        if (*(int *)local_1a0 != 0) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + -1;
          local_31 = *(int *)local_1a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10021fde6;
        }
        QArrayData::deallocate(local_1a0,2,8);
      }
LAB_10021fde6:
      if (*(int *)local_160 != -1) {
        if (*(int *)local_160 != 0) {
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_31 = *(int *)local_160 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10021fe1c;
        }
        QArrayData::deallocate(local_160,2,8);
      }
LAB_10021fe1c:
      FUN_100039a80(local_158);
      if (*(int *)local_158._8_8_ != -1) {
        if (*(int *)local_158._8_8_ != 0) {
          LOCK();
          *(int *)local_158._8_8_ = *(int *)local_158._8_8_ + -1;
          local_31 = *(int *)local_158._8_8_ != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10021fe5e;
        }
        QArrayData::deallocate((QArrayData *)local_158._8_8_,2,8);
      }
LAB_10021fe5e:
      FUN_100039a80(local_158 + 0x10);
      if (*(int *)local_140.field1 == -1) {
        bVar12 = true;
      }
      else {
        if (*(int *)local_140.field1 != 0) {
          LOCK();
          *(int *)local_140.field1 = *(int *)local_140.field1 + -1;
          local_31 = *(int *)local_140.field1 != 0;
          UNLOCK();
          if ((bool)local_31) {
            bVar12 = true;
            goto LAB_10021fe86;
          }
        }
        QArrayData::deallocate((QArrayData *)local_140.field1,2,8);
        bVar12 = true;
      }
    }
  }
  else {
    bVar12 = true;
  }
LAB_10021fe86:
  if (*(int *)(local_50 + 0x10) != -1) {
    if (*(int *)(local_50 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_50 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10021feb5;
      local_31 = 0;
    }
    QHashData::free_helper(local_50);
  }
LAB_10021feb5:
  if (!bVar12) {
    return 0x3bfa;
  }
  return 0;
}

