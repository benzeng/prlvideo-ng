
undefined8 FUN_100273fe0(long param_1)

{
  code *pcVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  QHash *pQVar13;
  int iVar14;
  undefined8 *puVar15;
  Data *pDVar16;
  QArrayData *pQVar17;
  char *pcVar18;
  Data *pDVar19;
  QArrayData *local_d0;
  QArrayData *local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  _func_void_Node_ptr *local_50;
  int *local_48;
  Data *local_40;
  undefined1 local_31;
  
  uVar8 = FUN_100152280();
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar4 = FUN_100155010(uVar8,uVar10,0);
  if (cVar4 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"Current server is not a localhost.");
    return 0x80000009;
  }
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10015a330(uVar10);
  CDispCommonPreferences::getWorkspacePreferences();
  cVar4 = CDispWorkspacePreferences::isEnableSpokenCommands();
  if (cVar4 != '\0') {
    if (DAT_102310850 == (void *)0x0) {
      pvVar9 = operator_new(0x18);
      FUN_10005df70(pvVar9);
      DAT_102271eae = 1;
      DAT_102310850 = pvVar9;
    }
    FUN_10005e090(DAT_102310850);
  }
  uVar10 = FUN_1001d50a0();
  uVar10 = FUN_1001d50d0(uVar10);
  cVar4 = FUN_1001e1720(uVar10);
  if (cVar4 != '\0') {
    bVar3 = 2 < DAT_10230ffd0;
    goto joined_r0x0001002740b1;
  }
  if (DAT_102310920 == (void *)0x0) {
    pvVar9 = operator_new(0x50);
    FUN_1001d1080(pvVar9);
    DAT_10226c778 = 1;
    DAT_102310920 = pvVar9;
  }
  pvVar9 = DAT_102310920;
  local_40 = *(Data **)((long)DAT_102310920 + 0x28);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_40);
      iVar6 = *(int *)(local_40 + 8);
      if (iVar6 != *(int *)(local_40 + 0xc)) {
        puVar15 = (undefined8 *)
                  (*(long *)((long)pvVar9 + 0x28) + 0x10 +
                  (long)*(int *)(*(long *)((long)pvVar9 + 0x28) + 8) * 8);
        pDVar16 = local_40 + (long)iVar6 * 8 + 0x10;
        lVar11 = (long)*(int *)(local_40 + 0xc) * 8 + (long)iVar6 * -8;
        do {
          piVar2 = (int *)*puVar15;
          *(int **)pDVar16 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          pDVar16 = pDVar16 + 8;
          puVar15 = puVar15 + 1;
          lVar11 = lVar11 + -8;
        } while (lVar11 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  pDVar16 = local_40;
  iVar6 = *(int *)(local_40 + 0xc);
  iVar7 = *(int *)(local_40 + 8);
  if (*(int *)local_40 != -1) {
    iVar5 = iVar6;
    iVar14 = iVar7;
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto joined_r0x0001002741d7;
      iVar5 = *(int *)(local_40 + 0xc);
      iVar14 = *(int *)(local_40 + 8);
    }
    if (iVar5 != iVar14) {
      lVar11 = (long)iVar14 * 8 + (long)iVar5 * -8;
      pDVar19 = local_40 + (long)iVar5 * 8 + 8;
      do {
        pQVar17 = *(QArrayData **)pDVar19;
        if (*(int *)pQVar17 == 0) {
LAB_100274250:
          QArrayData::deallocate(pQVar17,2,8);
        }
        else if (*(int *)pQVar17 != -1) {
          LOCK();
          *(int *)pQVar17 = *(int *)pQVar17 + -1;
          local_31 = *(int *)pQVar17 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar17 = *(QArrayData **)pDVar19;
            goto LAB_100274250;
          }
        }
        pDVar19 = pDVar19 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose(pDVar16);
  }
joined_r0x0001002741d7:
  bVar3 = 2 < DAT_10230ffd0;
  if (iVar6 != iVar7) {
joined_r0x0001002740b1:
    if (bVar3) {
      FUN_100df99c0("","prl_client_app",3,"Processing VM paths...");
    }
    uVar8 = 0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x30);
    }
    FUN_1001e06f0(uVar10,uVar8);
    return 0;
  }
  if (bVar3) {
    FUN_100df99c0("","prl_client_app",3,"No VM paths to open");
  }
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar6 = FUN_10015d3a0(uVar8);
  uVar12 = FUN_100794960();
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar7 = FUN_100796670(uVar12,uVar8);
  if (iVar6 + iVar7 == 0) {
    pQVar13 = (QHash *)CTaskManager::instance();
    local_50 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
    CTaskManager::getTasksByType((uint)&local_48,pQVar13);
    iVar6 = local_48[3];
    iVar7 = local_48[2];
    if (*local_48 != -1) {
      if (*local_48 != 0) {
        LOCK();
        *local_48 = *local_48 + -1;
        local_31 = *local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10027435a;
      }
      FUN_100034010(&local_48,local_48);
    }
LAB_10027435a:
    if (*(int *)(local_50 + 0x10) != -1) {
      if (*(int *)(local_50 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_50 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100274389;
      }
      QHashData::free_helper(local_50);
    }
LAB_100274389:
    if (iVar6 == iVar7) {
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("","prl_client_app",3);
      }
      lVar11 = 0;
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (lVar11 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
        lVar11 = *(long *)(param_1 + 0x30);
      }
      uVar10 = 0;
      if (*(char *)(param_1 + 0x38) != '\0') {
        if (lVar11 == 0) {
          return 0;
        }
        QWidget::close();
        return 0;
      }
      if (lVar11 != 0) {
        CContentWindow::contentWidget();
        uVar10 = CContentWidget::contentArea();
      }
      pvVar9 = operator_new(0x100);
      uVar8 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar8 = *(undefined8 *)(param_1 + 0x20);
      }
      local_c8 = (QArrayData *)PTR_shared_null_1021e1288;
      local_c0 = 0;
      local_b8 = 0xff;
      local_b4 = 0;
      local_b0 = 0;
      local_a8._8_4_ = (int)PTR_shared_null_1021e1288;
      local_a8._0_8_ = PTR_shared_null_1021e1288;
      local_a8._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
      local_98._8_4_ = (int)PTR_shared_null_1021e15e8;
      local_98._0_8_ = PTR_shared_null_1021e15e8;
      local_98._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
      local_88 = 0;
      local_80 = PTR_shared_null_1021e1288;
      local_78 = 0;
      local_74 = 0;
      local_70 = 0;
      local_58 = 0;
      local_60 = 0;
      local_68 = 0;
      FUN_10025b010(pvVar9,uVar8,uVar10,&local_c8);
      FUN_10005e410(&local_b8);
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100274687;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_100274687:
      CAbstractTask::execute();
      return 0;
    }
  }
  if (((*(long *)(param_1 + 0x28) != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
     (*(long *)(param_1 + 0x30) != 0)) {
    QWidget::close();
  }
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  local_d0 = (QArrayData *)PTR_shared_null_1021e1288;
  cVar4 = FUN_1001e0cd0(uVar10,uVar8,&local_d0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002744f5;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1002744f5:
  if (2 < DAT_10230ffd0) {
    pcVar18 = "NO";
    if (cVar4 != '\0') {
      pcVar18 = "YES";
    }
    FUN_100df99c0("","prl_client_app",3,"Any VM was autostarted: %s",pcVar18);
  }
  if (cVar4 != '\0' || *(char *)(param_1 + 0x38) != '\0') {
    return 0;
  }
  FUN_1001d9980(uVar10,0xc);
  return 0;
}

