
undefined8 FUN_1002329c0(long param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  AnonymousUnion0 AVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  QWidget *pQVar9;
  undefined8 uVar10;
  long *plVar11;
  CTaskGenericId *pCVar12;
  void *pvVar13;
  char *pcVar14;
  long *plVar15;
  undefined8 uVar16;
  QKeySequence *this;
  Data *pDVar17;
  QArrayData *pQVar18;
  int iVar19;
  Data *pDVar20;
  long lVar21;
  uint in_stack_fffffffffffffe5c;
  QArrayData *local_178;
  QString local_170;
  QVariant local_168;
  QString local_158;
  Data *local_150;
  Data *local_148;
  Data *local_140;
  Data *local_138;
  int local_130;
  QVariant local_128;
  int *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  Data_conflict local_f8;
  undefined4 local_f0;
  undefined1 local_e8;
  int *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  Data_conflict local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  AnonymousUnion0 local_98;
  AnonymousUnion0 local_90;
  Data *local_88 [2];
  QArrayData *local_78;
  undefined1 local_70 [40];
  Data *local_48;
  Data *local_40;
  undefined1 local_31;
  
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar8 = FUN_100319960(uVar10);
  if (((lVar8 != 0) && (pQVar9 = (QWidget *)FUN_100323e30(lVar8,0), pQVar9 != (QWidget *)0x0)) &&
     ((iVar6 = MacUtils::tabsCountInWindow(pQVar9), iVar6 == 0 ||
      (cVar5 = MacUtils::isWindowOnActiveTab(pQVar9), cVar5 != '\0')))) {
    MacUtils::orderFront(pQVar9);
    QWidget::activateWindow();
    QWidget::setFocus(pQVar9,7);
  }
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar10 = FUN_100319d40(uVar10);
  FUN_10035bc20(uVar10,0x1b);
  if (*(int *)(param_1 + 0x2c) == *(int *)(param_1 + 0x28)) {
    return 0;
  }
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x20);
  }
  plVar11 = (long *)FUN_100319cb0(uVar10);
  (**(code **)(*plVar11 + 0x68))(plVar11);
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar10 = FUN_100319390(uVar10);
  FUN_100118820(&local_40,0x25,uVar10);
  if (*(int *)(local_40 + 8) < *(int *)(local_40 + 0xc)) {
    lVar8 = 0;
    do {
      uVar10 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar10 = *(undefined8 *)(param_1 + 0x20);
      }
      uVar10 = FUN_100319390(uVar10);
      FUN_10018c2b0(uVar10);
      CVmConfiguration::getVmSecurity();
      CVmSecurity::getLockedOperationsList();
      CVmLockedOperationsList::getLockedOperations();
      pDVar17 = local_48;
      iVar6 = *(int *)(local_48 + 8);
      iVar19 = *(int *)(local_48 + 0xc);
      if (iVar6 == iVar19) {
        bVar2 = false;
      }
      else {
        pDVar20 = local_48 + (long)iVar6 * 8 + 0x10;
        lVar21 = (long)iVar19 * 8 + (long)iVar6 * -8;
        do {
          bVar2 = true;
          if (**(int **)pDVar20 ==
              **(int **)(local_40 + (*(int *)(local_40 + 8) + lVar8) * 8 + 0x10))
          goto LAB_100232b95;
          pDVar20 = pDVar20 + 8;
          lVar21 = lVar21 + -8;
        } while (lVar21 != 0);
        bVar2 = false;
      }
LAB_100232b95:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100232c0b;
          iVar6 = *(int *)(local_48 + 8);
          iVar19 = *(int *)(local_48 + 0xc);
        }
        if (iVar19 != iVar6) {
          lVar21 = (long)iVar6 * 8 + (long)iVar19 * -8;
          pDVar20 = local_48 + (long)iVar19 * 8 + 8;
          do {
            if (*(void **)pDVar20 != (void *)0x0) {
              operator_delete(*(void **)pDVar20);
            }
            pDVar20 = pDVar20 + -8;
            lVar21 = lVar21 + 8;
          } while (lVar21 != 0);
        }
        QListData::dispose(pDVar17);
      }
LAB_100232c0b:
      if (bVar2) {
        uVar10 = FUN_1001d50a0();
        FUN_1001d5100(uVar10,1);
        break;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < (long)*(int *)(local_40 + 0xc) - (long)*(int *)(local_40 + 8));
  }
  pCVar12 = (CTaskGenericId *)CTaskManager::instance();
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar10 = FUN_100319390(uVar10);
  FUN_100188480(local_70 + 8,uVar10);
  FUN_1001bace0(local_70 + 0x10,local_70 + 8);
  cVar5 = CTaskManager::isTaskRunning(pCVar12);
  CTaskGenericId::~CTaskGenericId((CTaskGenericId *)(local_70 + 0x10));
  if (*(int *)local_70._8_8_ != -1) {
    if (*(int *)local_70._8_8_ != 0) {
      LOCK();
      *(int *)local_70._8_8_ = *(int *)local_70._8_8_ + -1;
      local_31 = *(int *)local_70._8_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100232d1a;
    }
    QArrayData::deallocate((QArrayData *)local_70._8_8_,2,8);
  }
LAB_100232d1a:
  if ((cVar5 == '\0') && (*(int *)(param_1 + 0x2c) != 3)) {
    uVar10 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar10 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar10 = FUN_100319390(uVar10);
    FUN_10018c2b0(uVar10);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmRuntimeOptions();
    CVmRunTimeOptions::getVmFullScreen();
    cVar5 = CVmFullScreen::isOptimiseForGames();
    puVar3 = PTR_shared_null_1021e15e8;
    if (cVar5 != '\0') {
      local_70._0_8_ = PTR_shared_null_1021e15e8;
      if (DAT_102310998 == (void *)0x0) {
        pvVar13 = operator_new(0x18);
        FUN_1006faf60(pvVar13);
        DAT_102274400 = 1;
        DAT_102310998 = pvVar13;
      }
      cVar5 = FUN_1006faa10(DAT_102310998,0x5a);
      if (cVar5 != '\0') {
        if (DAT_102310998 == (void *)0x0) {
          pvVar13 = operator_new(0x18);
          FUN_1006faf60(pvVar13);
          DAT_102274400 = 1;
          DAT_102310998 = pvVar13;
        }
        FUN_1006faa30(local_88,DAT_102310998,0x5a);
        FUN_100708910(&local_78,local_88,1);
        FUN_1000341d0(local_70,&local_78);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100232e4e;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_100232e4e:
        if (*(int *)local_88[0] != -1) {
          if (*(int *)local_88[0] != 0) {
            LOCK();
            *(int *)local_88[0] = *(int *)local_88[0] + -1;
            local_31 = *(int *)local_88[0] != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100232eac;
          }
          iVar6 = *(int *)(local_88[0] + 0xc);
          if (iVar6 != *(int *)(local_88[0] + 8)) {
            lVar8 = (long)*(int *)(local_88[0] + 8) * 8 + (long)iVar6 * -8;
            this = (QKeySequence *)(local_88[0] + (long)iVar6 * 8 + 8);
            do {
              QKeySequence::~QKeySequence(this);
              this = this + -8;
              lVar8 = lVar8 + 8;
            } while (lVar8 != 0);
          }
          QListData::dispose(local_88[0]);
        }
      }
LAB_100232eac:
      iVar6 = CMessageManager::instance();
      uVar10 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar10 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_1003193e0(&local_90,uVar10);
      local_98.field1 = (Data *)puVar3;
      local_d8 = (int *)0x0;
      uStack_d0 = 0;
      local_c0 = 0;
      local_c8 = 0;
      local_b0 = 0x80000000;
      local_b8.field7 = 0;
      local_a8 = 1;
      local_118 = (int *)0x0;
      uStack_110 = 0;
      local_100 = 0;
      local_108 = 0;
      local_f0 = 0x80000000;
      local_f8.field7 = 0;
      local_e8 = 1;
      CMessageManager::showMessageBox
                (iVar6,(QString *)0x3c78,(QStringList *)&local_90.field0,
                 (QStringList *)&local_98.field0,(CSlotInfo *)local_70,SUB81(&local_d8,0),
                 (QWidget *)((ulong)in_stack_fffffffffffffe5c << 0x20),(CSlotInfo *)0x0);
      QVariant::~QVariant((QVariant *)&local_f8);
      if (local_118 != (int *)0x0) {
        LOCK();
        *local_118 = *local_118 + -1;
        local_31 = *local_118 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (local_118 != (int *)0x0)) {
          operator_delete(local_118);
        }
      }
      QVariant::~QVariant((QVariant *)&local_b8);
      if (local_d8 != (int *)0x0) {
        LOCK();
        *local_d8 = *local_d8 + -1;
        local_31 = *local_d8 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (local_d8 != (int *)0x0)) {
          operator_delete(local_d8);
        }
      }
      AVar4 = local_98;
      if (*(int *)local_98.field1 != -1) {
        if (*(int *)local_98.field1 != 0) {
          LOCK();
          *(int *)local_98.field1 = *(int *)local_98.field1 + -1;
          local_31 = *(int *)local_98.field1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100233091;
        }
        iVar6 = *(int *)(local_98.field1 + 0xc);
        if (iVar6 != *(int *)(local_98.field1 + 8)) {
          lVar8 = (long)*(int *)(local_98.field1 + 8) * 8 + (long)iVar6 * -8;
          pDVar17 = (Data *)(local_98.field1 + (long)iVar6 * 8 + 8);
          do {
            pQVar18 = *(QArrayData **)pDVar17;
            if (*(int *)pQVar18 == 0) {
LAB_100233070:
              QArrayData::deallocate(pQVar18,2,8);
            }
            else if (*(int *)pQVar18 != -1) {
              LOCK();
              *(int *)pQVar18 = *(int *)pQVar18 + -1;
              local_31 = *(int *)pQVar18 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar18 = *(QArrayData **)pDVar17;
                goto LAB_100233070;
              }
            }
            pDVar17 = pDVar17 + -8;
            lVar8 = lVar8 + 8;
          } while (lVar8 != 0);
        }
        QListData::dispose((Data *)AVar4.field1);
      }
LAB_100233091:
      if (*(int *)local_90.field1 != -1) {
        if (*(int *)local_90.field1 != 0) {
          LOCK();
          *(int *)local_90.field1 = *(int *)local_90.field1 + -1;
          local_31 = *(int *)local_90.field1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002330c7;
        }
        QArrayData::deallocate((QArrayData *)local_90.field1,2,8);
      }
LAB_1002330c7:
      uVar10 = local_70._0_8_;
      if (*(int *)local_70._0_8_ != -1) {
        if (*(int *)local_70._0_8_ != 0) {
          LOCK();
          *(int *)local_70._0_8_ = *(int *)local_70._0_8_ + -1;
          local_31 = *(int *)local_70._0_8_ != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10023314b;
        }
        iVar6 = *(int *)(local_70._0_8_ + 0xc);
        if (iVar6 != *(int *)(local_70._0_8_ + 8)) {
          lVar8 = (long)*(int *)(local_70._0_8_ + 8) * 8 + (long)iVar6 * -8;
          pDVar17 = (Data *)(local_70._0_8_ + (long)iVar6 * 8 + 8);
          do {
            pQVar18 = *(QArrayData **)pDVar17;
            if (*(int *)pQVar18 == 0) {
LAB_10023312a:
              QArrayData::deallocate(pQVar18,2,8);
            }
            else if (*(int *)pQVar18 != -1) {
              LOCK();
              *(int *)pQVar18 = *(int *)pQVar18 + -1;
              local_31 = *(int *)pQVar18 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar18 = *(QArrayData **)pDVar17;
                goto LAB_10023312a;
              }
            }
            pDVar17 = pDVar17 + -8;
            lVar8 = lVar8 + 8;
          } while (lVar8 != 0);
        }
        QListData::dispose((Data *)uVar10);
      }
    }
  }
LAB_10023314b:
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar8 = FUN_1003192a0(uVar10,0xffffffff);
  if ((lVar8 != 0) &&
     (pcVar14 = (char *)FUN_100323e30(lVar8,0), puVar3 = PTR_s_DynProp_CanShowSheet_102270de0,
     pcVar14 != (char *)0x0)) {
    QVariant::QVariant(&local_128,true);
    QObject::setProperty(pcVar14,(QVariant *)puVar3);
    QVariant::~QVariant(&local_128);
    QApplication::topLevelWidgets();
    local_148 = local_150;
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 == 0) {
        QListData::detach((int)&local_148);
        lVar8 = (long)*(int *)(local_148 + 8);
        if ((local_150 + (long)*(int *)(local_150 + 8) * 8 != local_148 + lVar8 * 8) &&
           (lVar21 = *(int *)(local_148 + 0xc) - lVar8,
           lVar21 != 0 && lVar8 <= *(int *)(local_148 + 0xc))) {
          _memcpy(local_148 + lVar8 * 8 + 0x10,local_150 + (long)*(int *)(local_150 + 8) * 8 + 0x10,
                  lVar21 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + 1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
      }
    }
    local_140 = local_148 + (long)*(int *)(local_148 + 8) * 8 + 0x10;
    local_138 = local_148 + (long)*(int *)(local_148 + 0xc) * 8 + 0x10;
    local_130 = 1;
    if (*(int *)local_150 == -1) {
LAB_1002332c9:
      if (local_140 != local_138) {
        do {
          pQVar9 = *(QWidget **)local_140;
          if (((pQVar9 != (QWidget *)0x0) &&
              (lVar8 = (**(code **)(*(long *)pQVar9 + 8))(pQVar9,"CMessageBoxWndBase"), lVar8 != 0))
             && (lVar8 = (**(code **)(*(long *)pQVar9 + 8))(pQVar9,"CNotificationBox"), lVar8 == 0))
          {
            QObject::property((char *)&local_168);
            QVariant::toString();
            uVar10 = 0;
            if ((*(long *)(param_1 + 0x18) != 0) &&
               (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
              uVar10 = *(undefined8 *)(param_1 + 0x20);
            }
            FUN_1003193e0(&local_170,uVar10);
            cVar5 = operator==(&local_158,&local_170);
            if (*(int *)local_170.field0_0x0 != -1) {
              if (*(int *)local_170.field0_0x0 != 0) {
                LOCK();
                *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
                local_31 = *(int *)local_170.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1002333cb;
              }
              QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
            }
LAB_1002333cb:
            if (*(int *)local_158.field0_0x0 != -1) {
              if (*(int *)local_158.field0_0x0 != 0) {
                LOCK();
                *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
                local_31 = *(int *)local_158.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100233401;
              }
              QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
            }
LAB_100233401:
            QVariant::~QVariant(&local_168);
            if (cVar5 != '\0') {
              plVar11 = (long *)CHostDesktopWorkspacesController::instance();
              pcVar1 = *(code **)(*plVar11 + 0x88);
              plVar15 = (long *)CHostDesktopWorkspacesController::instance();
              uVar7 = (**(code **)(*plVar15 + 0x70))(plVar15,pcVar14);
              (*pcVar1)(plVar11,pQVar9,uVar7);
              MacUtils::setStaysOnTop(pQVar9,true);
            }
          }
          local_140 = local_140 + 8;
          local_130 = 1;
        } while (local_140 != local_138);
      }
    }
    else {
      if (*(int *)local_150 == 0) {
LAB_1002332b0:
        QListData::dispose(local_150);
      }
      else {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_1002332b0;
      }
      if (local_130 != 0) goto LAB_1002332c9;
    }
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_31 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002334b5;
      }
      QListData::dispose(local_148);
    }
  }
LAB_1002334b5:
  uVar16 = FUN_100370280();
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1003193e0(&local_178,uVar10);
  FUN_100375300(uVar16,&local_178,2);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10023352a;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_10023352a:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    iVar6 = *(int *)(local_40 + 0xc);
    if (iVar6 != *(int *)(local_40 + 8)) {
      lVar8 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar6 * -8;
      pDVar17 = local_40 + (long)iVar6 * 8 + 8;
      do {
        if (*(void **)pDVar17 != (void *)0x0) {
          operator_delete(*(void **)pDVar17);
        }
        pDVar17 = pDVar17 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(local_40);
  }
  return 0;
}

