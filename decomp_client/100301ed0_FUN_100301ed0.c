
void FUN_100301ed0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  CProblemReportDelegate *pCVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  CTaskGenericId *pCVar12;
  int *piVar13;
  long lVar14;
  QArrayData *pQVar15;
  int iVar16;
  ulong uVar17;
  QString local_108;
  int local_100 [2];
  undefined *local_f8;
  undefined4 local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  CTaskGenericId local_d8 [24];
  QArrayData *local_c0;
  int local_b8 [2];
  undefined *local_b0;
  undefined4 local_a8;
  QArrayData *local_a0;
  int local_98 [2];
  undefined *local_90;
  undefined4 local_88;
  int local_80 [2];
  undefined *local_78;
  undefined4 local_70;
  int local_68 [2];
  undefined *local_60;
  undefined4 local_58;
  int local_50 [2];
  undefined *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  if (DAT_102310a08 == (void *)0x0) {
    pvVar5 = operator_new(0x220);
    FUN_1007cc3f0(pvVar5);
    DAT_102273890 = 1;
    DAT_102310a08 = pvVar5;
  }
  pvVar5 = DAT_102310a08;
  lVar6 = CMessageInfo::data();
  lVar7 = CMessageInfo::data();
  FUN_1007d3aa0(pvVar5,lVar6 + 0x18,lVar7 + 0x20);
  lVar6 = CMessageInfo::data();
  if (*(char *)(lVar6 + 0xa8) != '\0') {
    lVar6 = CMessageInfo::data();
    puVar1 = PTR_shared_null_1021e1288;
    local_50[0] = -1;
    local_48 = PTR_shared_null_1021e1288;
    local_40 = 0xffffffff;
    lVar6 = *(long *)(*(long *)(lVar6 + 0x40) + 0x10);
    lVar7 = 0;
    if (lVar6 == 0) {
LAB_100301fce:
      lVar14 = 0;
    }
    else {
      do {
        while (lVar14 = lVar6, iVar16 = *(int *)(lVar14 + 0x18), iVar16 < param_3) {
          lVar6 = *(long *)(lVar14 + 0x10);
          if (*(long *)(lVar14 + 0x10) == 0) {
            if (lVar7 == 0) goto LAB_100301fce;
            iVar16 = *(int *)(lVar7 + 0x18);
            lVar14 = lVar7;
            goto LAB_100301fc9;
          }
        }
        lVar6 = *(long *)(lVar14 + 8);
        lVar7 = lVar14;
      } while (*(long *)(lVar14 + 8) != 0);
LAB_100301fc9:
      if (param_3 < iVar16) goto LAB_100301fce;
    }
    piVar13 = local_50;
    if (lVar14 != 0) {
      piVar13 = (int *)(lVar14 + 0x20);
    }
    iVar16 = *piVar13;
    pQVar15 = *(QArrayData **)(piVar13 + 2);
    iVar3 = *(int *)pQVar15;
    if (1 < iVar3 + 1U) {
      LOCK();
      *(int *)pQVar15 = *(int *)pQVar15 + 1;
      local_31 = *(int *)pQVar15 != 0;
      UNLOCK();
      iVar3 = *(int *)pQVar15;
    }
    if (iVar3 != -1) {
      if (iVar3 != 0) {
        LOCK();
        *(int *)pQVar15 = *(int *)pQVar15 + -1;
        local_31 = *(int *)pQVar15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10030201f;
      }
      QArrayData::deallocate(pQVar15,2,8);
    }
LAB_10030201f:
    if (*(int *)puVar1 != -1) {
      if (*(int *)puVar1 != 0) {
        LOCK();
        *(int *)puVar1 = *(int *)puVar1 + -1;
        local_31 = *(int *)puVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100302052;
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
LAB_100302052:
    if (iVar16 != 0xcf09) goto LAB_1003020c3;
    pCVar8 = operator_new(0x98);
    uVar9 = FUN_100060bb0();
    uVar9 = FUN_1000609c0(uVar9);
    CTaskCreateProblemReport::CTaskCreateProblemReport((CTaskCreateProblemReport *)pCVar8,uVar9,1);
    puVar10 = (undefined4 *)CMessageInfo::data();
    *(undefined4 *)(pCVar8 + 0x78) = *puVar10;
    pvVar5 = operator_new(0x18);
    FUN_10019c1a0(pvVar5,pCVar8);
    CTaskCreateProblemReport::setDelegate(pCVar8);
LAB_1003020b9:
    CAbstractTask::execute();
    goto LAB_10030247c;
  }
LAB_1003020c3:
  lVar6 = CMessageInfo::data();
  puVar1 = PTR_shared_null_1021e1288;
  local_68[0] = -1;
  local_60 = PTR_shared_null_1021e1288;
  local_58 = 0xffffffff;
  lVar6 = *(long *)(*(long *)(lVar6 + 0x40) + 0x10);
  lVar7 = 0;
  if (lVar6 == 0) {
LAB_10030213e:
    lVar14 = 0;
  }
  else {
    do {
      while (lVar14 = lVar6, iVar16 = *(int *)(lVar14 + 0x18), iVar16 < param_3) {
        lVar6 = *(long *)(lVar14 + 0x10);
        if (*(long *)(lVar14 + 0x10) == 0) {
          if (lVar7 == 0) goto LAB_10030213e;
          iVar16 = *(int *)(lVar7 + 0x18);
          lVar14 = lVar7;
          goto LAB_100302139;
        }
      }
      lVar6 = *(long *)(lVar14 + 8);
      lVar7 = lVar14;
    } while (*(long *)(lVar14 + 8) != 0);
LAB_100302139:
    if (param_3 < iVar16) goto LAB_10030213e;
  }
  piVar13 = local_68;
  if (lVar14 != 0) {
    piVar13 = (int *)(lVar14 + 0x20);
  }
  iVar16 = *piVar13;
  pQVar15 = *(QArrayData **)(piVar13 + 2);
  iVar3 = *(int *)pQVar15;
  if (1 < iVar3 + 1U) {
    LOCK();
    *(int *)pQVar15 = *(int *)pQVar15 + 1;
    local_31 = *(int *)pQVar15 != 0;
    UNLOCK();
    iVar3 = *(int *)pQVar15;
  }
  if (iVar3 != -1) {
    if (iVar3 != 0) {
      LOCK();
      *(int *)pQVar15 = *(int *)pQVar15 + -1;
      local_31 = *(int *)pQVar15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10030218f;
    }
    QArrayData::deallocate(pQVar15,2,8);
  }
LAB_10030218f:
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_31 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003021c2;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_1003021c2:
  if (iVar16 == 53000) {
    if (DAT_1023109c0 == (void *)0x0) {
      pvVar5 = operator_new(0x18);
      FUN_10076b480(pvVar5);
      DAT_102271418 = 1;
      DAT_1023109c0 = pvVar5;
    }
    FUN_10076b4e0(DAT_1023109c0);
    goto LAB_10030247c;
  }
  lVar6 = CMessageInfo::data();
  local_80[0] = -1;
  local_78 = puVar1;
  local_70 = 0xffffffff;
  lVar6 = *(long *)(*(long *)(lVar6 + 0x40) + 0x10);
  lVar7 = 0;
  if (lVar6 == 0) {
LAB_10030227e:
    lVar14 = 0;
  }
  else {
    do {
      while (lVar14 = lVar6, iVar16 = *(int *)(lVar14 + 0x18), iVar16 < param_3) {
        lVar6 = *(long *)(lVar14 + 0x10);
        if (*(long *)(lVar14 + 0x10) == 0) {
          if (lVar7 == 0) goto LAB_10030227e;
          iVar16 = *(int *)(lVar7 + 0x18);
          lVar14 = lVar7;
          goto LAB_100302279;
        }
      }
      lVar6 = *(long *)(lVar14 + 8);
      lVar7 = lVar14;
    } while (*(long *)(lVar14 + 8) != 0);
LAB_100302279:
    if (param_3 < iVar16) goto LAB_10030227e;
  }
  piVar13 = local_80;
  if (lVar14 != 0) {
    piVar13 = (int *)(lVar14 + 0x20);
  }
  iVar16 = *piVar13;
  pQVar15 = *(QArrayData **)(piVar13 + 2);
  iVar3 = *(int *)pQVar15;
  if (1 < iVar3 + 1U) {
    LOCK();
    *(int *)pQVar15 = *(int *)pQVar15 + 1;
    local_31 = *(int *)pQVar15 != 0;
    UNLOCK();
    iVar3 = *(int *)pQVar15;
  }
  if (iVar3 != -1) {
    if (iVar3 != 0) {
      LOCK();
      *(int *)pQVar15 = *(int *)pQVar15 + -1;
      local_31 = *(int *)pQVar15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003022cf;
    }
    QArrayData::deallocate(pQVar15,2,8);
  }
LAB_1003022cf:
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_31 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100302302;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_100302302:
  if (iVar16 == 0xcf0a) {
    uVar9 = FUN_1006915d0();
    uVar11 = FUN_100152280();
    lVar6 = FUN_1001554a0(uVar11);
    uVar11 = 0x4f;
LAB_100302468:
    lVar6 = FUN_100691620(uVar9,uVar11,lVar6);
    if (lVar6 != 0) {
      QAction::activate(lVar6,0);
    }
    goto LAB_10030247c;
  }
  lVar6 = CMessageInfo::data();
  local_98[0] = -1;
  local_90 = puVar1;
  local_88 = 0xffffffff;
  lVar6 = *(long *)(*(long *)(lVar6 + 0x40) + 0x10);
  lVar7 = 0;
  if (lVar6 == 0) {
LAB_1003023a1:
    lVar14 = 0;
  }
  else {
    do {
      while (lVar14 = lVar6, iVar16 = *(int *)(lVar14 + 0x18), iVar16 < param_3) {
        lVar6 = *(long *)(lVar14 + 0x10);
        if (*(long *)(lVar14 + 0x10) == 0) {
          if (lVar7 == 0) goto LAB_1003023a1;
          iVar16 = *(int *)(lVar7 + 0x18);
          lVar14 = lVar7;
          goto LAB_10030239c;
        }
      }
      lVar6 = *(long *)(lVar14 + 8);
      lVar7 = lVar14;
    } while (*(long *)(lVar14 + 8) != 0);
LAB_10030239c:
    if (param_3 < iVar16) goto LAB_1003023a1;
  }
  piVar13 = local_98;
  if (lVar14 != 0) {
    piVar13 = (int *)(lVar14 + 0x20);
  }
  iVar16 = *piVar13;
  pQVar15 = *(QArrayData **)(piVar13 + 2);
  iVar3 = *(int *)pQVar15;
  if (1 < iVar3 + 1U) {
    LOCK();
    *(int *)pQVar15 = *(int *)pQVar15 + 1;
    local_31 = *(int *)pQVar15 != 0;
    UNLOCK();
    iVar3 = *(int *)pQVar15;
  }
  if (iVar3 != -1) {
    if (iVar3 != 0) {
      LOCK();
      *(int *)pQVar15 = *(int *)pQVar15 + -1;
      local_31 = *(int *)pQVar15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003023f5;
    }
    QArrayData::deallocate(pQVar15,2,8);
  }
LAB_1003023f5:
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_31 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100302428;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_100302428:
  if (iVar16 == 0xcf0b) {
    uVar9 = FUN_100152280();
    lVar6 = CMessageInfo::data();
    lVar6 = FUN_1001548f0(uVar9,lVar6 + 8);
    if (lVar6 != 0) {
      uVar9 = FUN_1006915d0();
      uVar11 = 0x35;
      goto LAB_100302468;
    }
    CMessageInfo::data();
    QString::toUtf8();
    pQVar15 = local_a0 + *(long *)(local_a0 + 0x10);
    puVar10 = (undefined4 *)CMessageInfo::data();
    uVar9 = FUN_100dddcf0(*puVar10);
    FUN_100df99c0("[MESSAGE_MNG]","prl_client_app",0,"Can\'t find VM %s for %s",pQVar15,uVar9);
    if (*(int *)local_a0 == -1) goto LAB_10030247c;
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      iVar16 = *(int *)local_a0;
      UNLOCK();
joined_r0x000100302963:
      local_31 = iVar16 != 0;
      if ((bool)local_31) goto LAB_10030247c;
    }
LAB_100302970:
    uVar17 = 1;
  }
  else {
    lVar6 = CMessageInfo::data();
    local_b8[0] = -1;
    local_b0 = puVar1;
    local_a8 = 0xffffffff;
    lVar6 = *(long *)(*(long *)(lVar6 + 0x40) + 0x10);
    lVar7 = 0;
    if (lVar6 == 0) {
LAB_100302511:
      lVar14 = 0;
    }
    else {
      do {
        while (lVar14 = lVar6, iVar16 = *(int *)(lVar14 + 0x18), iVar16 < param_3) {
          lVar6 = *(long *)(lVar14 + 0x10);
          if (*(long *)(lVar14 + 0x10) == 0) {
            if (lVar7 == 0) goto LAB_100302511;
            iVar16 = *(int *)(lVar7 + 0x18);
            lVar14 = lVar7;
            goto LAB_10030250c;
          }
        }
        lVar6 = *(long *)(lVar14 + 8);
        lVar7 = lVar14;
      } while (*(long *)(lVar14 + 8) != 0);
LAB_10030250c:
      if (param_3 < iVar16) goto LAB_100302511;
    }
    piVar13 = local_b8;
    if (lVar14 != 0) {
      piVar13 = (int *)(lVar14 + 0x20);
    }
    iVar16 = *piVar13;
    pQVar15 = *(QArrayData **)(piVar13 + 2);
    iVar3 = *(int *)pQVar15;
    if (1 < iVar3 + 1U) {
      LOCK();
      *(int *)pQVar15 = *(int *)pQVar15 + 1;
      local_31 = *(int *)pQVar15 != 0;
      UNLOCK();
      iVar3 = *(int *)pQVar15;
    }
    if (iVar3 != -1) {
      if (iVar3 != 0) {
        LOCK();
        *(int *)pQVar15 = *(int *)pQVar15 + -1;
        local_31 = *(int *)pQVar15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100302565;
      }
      QArrayData::deallocate(pQVar15,2,8);
    }
LAB_100302565:
    if (*(int *)puVar1 != -1) {
      if (*(int *)puVar1 != 0) {
        LOCK();
        *(int *)puVar1 = *(int *)puVar1 + -1;
        local_31 = *(int *)puVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100302598;
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
LAB_100302598:
    if (iVar16 == 0xcf0c) {
      uVar9 = FUN_100152280();
      lVar6 = CMessageInfo::data();
      lVar6 = FUN_1001548f0(uVar9,lVar6 + 8);
      if (lVar6 != 0) {
        pCVar12 = (CTaskGenericId *)CTaskManager::instance();
        FUN_1001884b0(&local_e0,lVar6);
        FUN_100188480(&local_e8,lVar6);
        FUN_10017cde0(local_d8,&local_e0,&local_e8);
        cVar2 = CTaskManager::isTaskRunning(pCVar12);
        CTaskGenericId::~CTaskGenericId(local_d8);
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_31 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10030265f;
          }
          QArrayData::deallocate(local_e8,2,8);
        }
LAB_10030265f:
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100302695;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
LAB_100302695:
        if (cVar2 != '\0') goto LAB_10030247c;
        piVar13 = (int *)CMessageInfo::data();
        uVar4 = 0;
        if (*piVar13 + 0x7ffd9affU < 5) {
          uVar4 = *(undefined4 *)(&DAT_100e18940 + (long)(int)(*piVar13 + 0x7ffd9affU) * 4);
        }
        pvVar5 = operator_new(0x40);
        FUN_100227250(pvVar5,lVar6,0,uVar4,0);
        goto LAB_1003020b9;
      }
      CMessageInfo::data();
      QString::toUtf8();
      pQVar15 = local_c0 + *(long *)(local_c0 + 0x10);
      puVar10 = (undefined4 *)CMessageInfo::data();
      uVar9 = FUN_100dddcf0(*puVar10);
      FUN_100df99c0("[MESSAGE_MNG]","prl_client_app",0,"Can\'t find VM %s for %s",pQVar15,uVar9);
      if (*(int *)local_c0 == -1) goto LAB_10030247c;
      local_a0 = local_c0;
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        iVar16 = *(int *)local_c0;
        UNLOCK();
        goto joined_r0x000100302963;
      }
      goto LAB_100302970;
    }
    lVar6 = CMessageInfo::data();
    local_100[0] = -1;
    local_f8 = puVar1;
    local_f0 = 0xffffffff;
    lVar6 = *(long *)(*(long *)(lVar6 + 0x40) + 0x10);
    lVar7 = 0;
    if (lVar6 == 0) {
LAB_1003027f8:
      lVar14 = 0;
    }
    else {
      do {
        while (lVar14 = lVar6, iVar16 = *(int *)(lVar14 + 0x18), iVar16 < param_3) {
          lVar6 = *(long *)(lVar14 + 0x10);
          if (*(long *)(lVar14 + 0x10) == 0) {
            if (lVar7 == 0) goto LAB_1003027f8;
            iVar16 = *(int *)(lVar7 + 0x18);
            lVar14 = lVar7;
            goto LAB_1003027f3;
          }
        }
        lVar6 = *(long *)(lVar14 + 8);
        lVar7 = lVar14;
      } while (*(long *)(lVar14 + 8) != 0);
LAB_1003027f3:
      if (param_3 < iVar16) goto LAB_1003027f8;
    }
    piVar13 = local_100;
    if (lVar14 != 0) {
      piVar13 = (int *)(lVar14 + 0x20);
    }
    iVar16 = *piVar13;
    pQVar15 = *(QArrayData **)(piVar13 + 2);
    iVar3 = *(int *)pQVar15;
    if (1 < iVar3 + 1U) {
      LOCK();
      *(int *)pQVar15 = *(int *)pQVar15 + 1;
      local_31 = *(int *)pQVar15 != 0;
      UNLOCK();
      iVar3 = *(int *)pQVar15;
    }
    if (iVar3 != -1) {
      if (iVar3 != 0) {
        LOCK();
        *(int *)pQVar15 = *(int *)pQVar15 + -1;
        local_31 = *(int *)pQVar15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10030284c;
      }
      QArrayData::deallocate(pQVar15,2,8);
    }
LAB_10030284c:
    if (*(int *)puVar1 != -1) {
      if (*(int *)puVar1 != 0) {
        LOCK();
        *(int *)puVar1 = *(int *)puVar1 + -1;
        local_31 = *(int *)puVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10030287f;
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
LAB_10030287f:
    if (iVar16 != 0x3ea4) goto LAB_10030247c;
    local_108.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("~",1);
    MacUtils::showInFinder(&local_108);
    if (*(int *)local_108.field0_0x0 == -1) goto LAB_10030247c;
    if (*(int *)local_108.field0_0x0 != 0) {
      LOCK();
      *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
      local_31 = *(int *)local_108.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10030247c;
    }
    uVar17 = 2;
    local_a0 = (QArrayData *)local_108.field0_0x0;
  }
  QArrayData::deallocate(local_a0,uVar17,8);
LAB_10030247c:
  CMessageProcessor::handleProcessedMessage(param_1,param_2,param_3);
  return;
}

