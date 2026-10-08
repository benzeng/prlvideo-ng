
void FUN_100320900(long param_1,int param_2,long *param_3)

{
  bool bVar1;
  undefined *puVar2;
  QArrayData *pQVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  QString *pQVar9;
  QStringList *pQVar10;
  long lVar11;
  CTaskGenericId *pCVar12;
  long *plVar13;
  void *pvVar14;
  char *pcVar15;
  undefined8 uVar16;
  int *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  Data_conflict local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined1 local_a0 [24];
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  uint local_60;
  int local_5c;
  QArrayData *local_58;
  CTaskGenericId local_50 [31];
  undefined1 local_31;
  
  if (*param_3 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Invalid tis record handle");
    return;
  }
  local_5c = 0;
  uVar5 = _PrlTisRecord_GetState(*param_3,&local_5c);
  if ((int)uVar5 < 0) {
    uVar16 = FUN_100dddcf0(uVar5);
    pcVar15 = "(!)Error: PrlTisRecord_GetState failed with RC = %.8X [%s]";
LAB_100320a64:
    FUN_100df99c0("","prl_client_app",0,pcVar15,uVar5,uVar16);
    return;
  }
  if (local_5c != 1) {
    if ((param_2 == 0) && (*(int *)(param_1 + 0x54) != 0)) {
      *(undefined4 *)(param_1 + 0x54) = 0;
      FUN_10082a030(param_1,0);
    }
    if (DAT_10230ffd0 < 2) {
      return;
    }
    FUN_100df99c0("","prl_client_app",2,"TIS Record state is not active. ID is %d. State is %d",
                  param_2,local_5c);
    return;
  }
  local_60 = 0;
  uVar5 = _PrlTisRecord_GetData(*param_3,0,&local_60);
  if ((int)uVar5 < 0) {
    uVar16 = FUN_100dddcf0(uVar5);
    pcVar15 = "(!)Error: PrlTisRecord_GetData failed with RC = %.8X [%s]";
    goto LAB_100320a64;
  }
  if (local_60 < 0x18) {
    pcVar15 = "(!)Error: AppPackageTisState data size is too small (%d). It has to be %ld.";
    uVar16 = 0x18;
    uVar5 = local_60;
    goto LAB_100320a64;
  }
  QByteArray::QByteArray((QByteArray *)&local_68,local_60,'?');
  lVar11 = *param_3;
  if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_68,*(uint *)(local_68 + 4) + 1,*(uint *)(local_68 + 8) >> 0x1f);
  }
  iVar6 = _PrlTisRecord_GetData(lVar11,local_68 + *(long *)(local_68 + 0x10),&local_60);
  if (iVar6 < 0) {
    uVar16 = FUN_100dddcf0(iVar6);
    FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlTisRecord_GetData failed with RC = %.8X [%s]",
                  iVar6,uVar16);
    goto LAB_100321156;
  }
  if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_68,*(uint *)(local_68 + 4) + 1,*(uint *)(local_68 + 8) >> 0x1f);
  }
  pQVar3 = local_68;
  lVar11 = *(long *)(local_68 + 0x10);
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,"Status TIS Record : ID=%d, state=%d, instRes=%d",param_2,
                  *(undefined4 *)(local_68 + lVar11),*(undefined4 *)(local_68 + lVar11 + 4));
  }
  iVar6 = *(int *)(pQVar3 + lVar11);
  if (iVar6 - 2U < 2) {
    if (param_2 == 0) {
      if (*(int *)(param_1 + 0x54) != 2) {
        *(undefined4 *)(param_1 + 0x54) = 2;
        FUN_10082a030(param_1,2);
      }
      goto LAB_100320c2a;
    }
    bVar1 = false;
LAB_100320c33:
    FUN_100321630(param_1,param_2,0,1);
    if (bVar1) goto LAB_100320c4d;
    bVar1 = false;
  }
  else {
    if ((iVar6 != 1) && (iVar6 != 8)) {
      if (param_2 == 0) {
        if (*(int *)(param_1 + 0x54) != 0) {
          *(undefined4 *)(param_1 + 0x54) = 0;
          FUN_10082a030(param_1,0);
        }
        goto LAB_100320c2a;
      }
      bVar1 = false;
      goto LAB_100320c33;
    }
    if (param_2 != 0) {
      bVar1 = false;
      goto LAB_100320c33;
    }
    if (*(int *)(param_1 + 0x54) != 1) {
      *(undefined4 *)(param_1 + 0x54) = 1;
      FUN_10082a030(param_1,1);
    }
LAB_100320c2a:
    bVar1 = true;
    if (*(int *)(param_1 + 0x54) != 2) goto LAB_100320c33;
LAB_100320c4d:
    bVar1 = true;
    if ((*(int *)(param_1 + 0x54) == 2) && (*(int *)(pQVar3 + lVar11 + 4) == 0)) {
      FUN_100321630(param_1,param_2,1,0);
      uVar7 = FUN_100152280();
      uVar16 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar16 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar16 = *(undefined8 *)(param_1 + 0x18);
      }
      FUN_100188480(&local_70,uVar16);
      lVar8 = FUN_1001547d0(uVar7,&local_70);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100320cec;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100320cec:
      if (lVar8 == 0) {
        FUN_100df99c0("","prl_client_app",0,
                      "(!)Error: failed to obtain server instance to register InstalledSoftware.");
      }
      else {
        FUN_100173e70(lVar8,DAT_100e15314);
      }
      if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
         (lVar8 = *(long *)(param_1 + 0x18), lVar8 == 0)) {
        FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance.");
      }
      else {
        local_78 = (QArrayData *)
                   QString::fromAscii_helper("{9705AA2E-F680-45b7-AD4E-043E891AE496}",0x26);
        QString::number((int)&local_80,0x10);
        lVar8 = FUN_100198ac0(lVar8,&local_78,&local_80,0);
        *(undefined1 *)(lVar8 + 0x60) = 1;
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100320dc3;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_100320dc3:
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100320e13;
          }
          QArrayData::deallocate(local_78,2,8);
        }
      }
    }
  }
LAB_100320e13:
  if ((*(int *)(pQVar3 + lVar11) != 0) &&
     ((10 < *(int *)(pQVar3 + lVar11 + 4) + 2U ||
      ((0x447U >> (*(int *)(pQVar3 + lVar11 + 4) + 2U & 0x1f) & 1) == 0)))) {
    iVar6 = CMessageManager::instance();
    uVar5 = 0x80000009;
    if (bVar1) {
      uVar5 = 0x80015444;
      if (*(int *)(pQVar3 + lVar11 + 4) - 1U < 5) {
        uVar5 = *(uint *)(&DAT_100e18960 + (long)(int)(*(int *)(pQVar3 + lVar11 + 4) - 1U) * 4);
      }
    }
    pQVar9 = (QString *)CSearchParentHelper::instance();
    local_88 = *(QArrayData **)(param_1 + 0x28);
    if (1 < *(int *)local_88 + 1U) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + 1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
    }
    pQVar10 = (QStringList *)
              CSearchParentHelper::getParentForMessage(pQVar9,SUB81(&local_88,0),(QWidget *)0x0);
    puVar2 = PTR_shared_null_1021e15e8;
    local_a0._16_8_ = PTR_shared_null_1021e15e8;
    QString::number((int)local_a0 + 8,*(int *)(pQVar3 + lVar11 + 4));
    FUN_1000341d0(local_a0 + 0x10,local_a0 + 8);
    local_a0._0_8_ = puVar2;
    local_d8 = (int *)0x0;
    uStack_d0 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_b0 = 0x80000000;
    local_b8.field7 = 0;
    local_a8 = 1;
    CMessageManager::showMessageBox
              (iVar6,(QWidget *)(ulong)uVar5,pQVar10,(QStringList *)(local_a0 + 0x10),
               (CSlotInfo *)local_a0,SUB81(&local_d8,0));
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
    FUN_100039a80(local_a0);
    if (*(int *)local_a0._8_8_ != -1) {
      if (*(int *)local_a0._8_8_ != 0) {
        LOCK();
        *(int *)local_a0._8_8_ = *(int *)local_a0._8_8_ + -1;
        local_31 = *(int *)local_a0._8_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100320fe9;
      }
      QArrayData::deallocate((QArrayData *)local_a0._8_8_,2,8);
    }
LAB_100320fe9:
    FUN_100039a80(local_a0 + 0x10);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100321025;
      }
      QArrayData::deallocate(local_88,2,8);
    }
  }
LAB_100321025:
  if (((((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
       (lVar8 = *(long *)(param_1 + 0x18), lVar8 == 0)) ||
      ((*(int *)(pQVar3 + lVar11) != 1 || (*(int *)(pQVar3 + lVar11 + 4) != 8)))) ||
     ((lVar11 = FUN_10018c280(lVar8), !bVar1 || (*(int *)(lVar11 + 0x54) != 1))))
  goto LAB_100321156;
  uVar16 = FUN_1006915d0();
  FUN_100691620(uVar16,0x66,lVar8);
  cVar4 = QAction::isEnabled();
  if (cVar4 == '\0') goto LAB_100321156;
  pCVar12 = (CTaskGenericId *)CTaskManager::instance();
  FUN_100188480(&local_58,lVar8);
  FUN_1002bab50(local_50,&local_58);
  plVar13 = (long *)CTaskManager::getTaskById(pCVar12);
  CTaskGenericId::~CTaskGenericId(local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10032111c;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10032111c:
  if (plVar13 == (long *)0x0) {
    pvVar14 = operator_new(0x88);
    FUN_1002b6d70(pvVar14,lVar8,0,0);
    CAbstractTask::execute();
  }
  else {
    (**(code **)(*plVar13 + 0x80))(plVar13);
  }
LAB_100321156:
  if (*(int *)local_68 == -1) {
    return;
  }
  if (*(int *)local_68 != 0) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + -1;
    UNLOCK();
    if (*(int *)local_68 != 0) {
      return;
    }
    local_31 = 0;
  }
  QArrayData::deallocate(local_68,1,8);
  return;
}

