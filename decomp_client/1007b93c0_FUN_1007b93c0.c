
void FUN_1007b93c0(long param_1,long param_2,long param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  QObject *pQVar10;
  long lVar11;
  ulong uVar12;
  CTaskGenericId *pCVar13;
  void *pvVar14;
  long lVar15;
  int *piVar16;
  QObject *pQVar17;
  int *local_c8;
  QArrayData *local_b8;
  QArrayData *local_b0;
  CTaskGenericId local_a8 [24];
  int *local_90;
  QObject *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  int *local_58;
  QObject *local_50;
  int *local_48;
  QObject *local_40;
  bool local_31;
  
  if (param_2 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  uVar3 = FUN_1007bd980(param_3);
  uVar4 = FUN_1007bd990(param_3);
  uVar5 = FUN_1007bd9a0(param_3);
  uVar8 = FUN_100152280();
  lVar9 = FUN_1001548f0(uVar8);
  if (lVar9 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get vmwrap instance.");
    return;
  }
  pQVar10 = (QObject *)FUN_10018f120(lVar9,uVar3,uVar4);
  bVar1 = true;
  piVar16 = (int *)0x0;
  if (pQVar10 == (QObject *)0x0) {
LAB_1007b952a:
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get device instance.");
    local_c8 = piVar16;
    goto LAB_1007b9552;
  }
  local_c8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar10);
  piVar16 = (int *)0x0;
  if (((local_c8 == (int *)0x0) || (bVar1 = false, piVar16 = local_c8, pQVar10 == (QObject *)0x0))
     || (local_c8[1] == 0)) goto LAB_1007b952a;
  uVar4 = FUN_1007b57b0(param_2);
  bVar1 = false;
  switch(uVar4) {
  case 2:
    pQVar17 = (QObject *)0x0;
    if (local_c8[1] != 0) {
      pQVar17 = pQVar10;
    }
    FUN_100147630(pQVar17);
    break;
  case 3:
    pQVar17 = (QObject *)0x0;
    if (local_c8[1] != 0) {
      pQVar17 = pQVar10;
    }
    FUN_1001476d0(pQVar17);
    break;
  case 4:
    LOCK();
    *local_c8 = *local_c8 + 1;
    local_31 = *local_c8 != 0;
    UNLOCK();
    local_48 = local_c8;
    local_40 = pQVar10;
    FUN_1007b7720(param_1,&local_48,param_2);
    LOCK();
    *local_c8 = *local_c8 + -1;
    iVar7 = *local_c8;
    UNLOCK();
    goto LAB_1007b9887;
  case 5:
    LOCK();
    *local_c8 = *local_c8 + 1;
    local_31 = *local_c8 != 0;
    UNLOCK();
    local_58 = local_c8;
    local_50 = pQVar10;
    uVar3 = FUN_1007bd9b0(param_3);
    FUN_1007b7de0(param_1,param_2,&local_58,uVar3);
    if (local_58 != (int *)0x0) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_31 = *local_58 != 0;
      UNLOCK();
      if (!local_31) {
        operator_delete(local_58);
      }
    }
    break;
  case 6:
    lVar9 = ___dynamic_cast(param_2,&PTR_vtable_10222d910,&PTR_vtable_10222dac0,0);
    if (lVar9 == 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: wrong device action type");
    }
    else {
      pQVar17 = (QObject *)0x0;
      if (local_c8[1] != 0) {
        pQVar17 = pQVar10;
      }
      FUN_1007b5e90(&local_60,lVar9);
      uVar3 = FUN_1007b5ec0(lVar9);
      FUN_100149970(pQVar17,&local_60,uVar3,2);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          UNLOCK();
          if (*(int *)local_60 != 0) break;
          local_31 = false;
        }
        QArrayData::deallocate(local_60,2,8);
      }
    }
    break;
  case 7:
    iVar7 = local_c8[1];
    QAction::text();
    pQVar17 = (QObject *)0x0;
    if (iVar7 != 0) {
      pQVar17 = pQVar10;
    }
    FUN_100149970(pQVar17,&local_70,0xffffffff,0);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        UNLOCK();
        if (*(int *)local_70 != 0) break;
        local_31 = false;
      }
      QArrayData::deallocate(local_70,2,8);
    }
    break;
  case 8:
    iVar7 = local_c8[1];
    QAction::text();
    pQVar17 = (QObject *)0x0;
    if (iVar7 != 0) {
      pQVar17 = pQVar10;
    }
    FUN_100149970(pQVar17,&local_78,0xffffffff,1);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        UNLOCK();
        if (*(int *)local_78 != 0) break;
        local_31 = false;
      }
      QArrayData::deallocate(local_78,2,8);
    }
    break;
  case 9:
    lVar11 = ___dynamic_cast(param_2,&PTR_vtable_10222d910,&PTR_vtable_10222dac0,0);
    if (lVar11 == 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: wrong device action type");
      break;
    }
    uVar12 = FUN_1007b5ec0(lVar11);
    cVar2 = '\x02';
    if (((uVar12 & 0x10000000) != 0) && (lVar15 = FUN_10018d490(lVar9), lVar15 != 0)) {
      uVar8 = FUN_10018d490(lVar9);
      FUN_100175410(uVar8);
      uVar8 = CParallelsNetworkConfig::getVirtualNetworks();
      uVar6 = FUN_1007b5ec0(lVar11);
      uVar8 = FUN_100b3f210(uVar8,uVar6 & 0xfffffff);
      iVar7 = FUN_10012f780(uVar8);
      cVar2 = '\x01';
      if (iVar7 != 2) {
        cVar2 = (iVar7 != 1) * '\x02';
      }
    }
    pQVar17 = (QObject *)0x0;
    if (local_c8[1] != 0) {
      pQVar17 = pQVar10;
    }
    FUN_1007b5e90(&local_80,lVar11);
    uVar3 = FUN_1007b5ec0(lVar11);
    FUN_100149970(pQVar17,&local_80,uVar3,cVar2);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        UNLOCK();
        if (*(int *)local_80 != 0) goto LAB_1007b9552;
        local_31 = false;
      }
      QArrayData::deallocate(local_80,2,8);
    }
    goto LAB_1007b9552;
  case 10:
    lVar9 = ___dynamic_cast(param_2,&PTR_vtable_10222d910,&PTR_vtable_10222dac0,0);
    if (lVar9 == 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: wrong device action type");
    }
    else {
      iVar7 = local_c8[1];
      FUN_1007b5e90(&local_68,lVar9);
      pQVar17 = (QObject *)0x0;
      if (iVar7 != 0) {
        pQVar17 = pQVar10;
      }
      FUN_100149de0(pQVar17,&local_68);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          UNLOCK();
          if (*(int *)local_68 != 0) break;
          local_31 = false;
        }
        QArrayData::deallocate(local_68,2,8);
      }
    }
    break;
  case 0xb:
    LOCK();
    *local_c8 = *local_c8 + 1;
    local_31 = *local_c8 != 0;
    UNLOCK();
    local_90 = local_c8;
    local_88 = pQVar10;
    FUN_1007b89c0(param_1,&local_90);
    LOCK();
    *local_c8 = *local_c8 + -1;
    iVar7 = *local_c8;
    UNLOCK();
LAB_1007b9887:
    local_31 = iVar7 != 0;
    if (!local_31) {
      operator_delete(local_c8);
    }
    break;
  case 0xc:
    pCVar13 = (CTaskGenericId *)CTaskManager::instance();
    FUN_1001884b0(&local_b0,lVar9);
    FUN_100188480(&local_b8,lVar9);
    FUN_10017cde0(local_a8,&local_b0,&local_b8);
    cVar2 = CTaskManager::isTaskRunning(pCVar13);
    CTaskGenericId::~CTaskGenericId(local_a8);
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if (local_31) goto LAB_1007b9956;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_1007b9956:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if (local_31) goto LAB_1007b998c;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_1007b998c:
    if (cVar2 == '\0') {
      pvVar14 = operator_new(0x40);
      uVar3 = FUN_1003b71b0(uVar3);
      FUN_100227250(pvVar14,lVar9,0,uVar3,uVar5);
      CAbstractTask::execute();
    }
LAB_1007b9552:
    if (bVar1) {
      return;
    }
    break;
  case 0xe:
    pQVar17 = (QObject *)0x0;
    if (local_c8[1] != 0) {
      pQVar17 = pQVar10;
    }
    FUN_1001496b0(pQVar17,5);
    break;
  case 0xf:
    pQVar17 = (QObject *)0x0;
    if (local_c8[1] != 0) {
      pQVar17 = pQVar10;
    }
    FUN_10014a230(pQVar17,1);
    break;
  case 0x10:
    pQVar17 = (QObject *)0x0;
    if (local_c8[1] != 0) {
      pQVar17 = pQVar10;
    }
    FUN_10014a230(pQVar17,0);
    break;
  case 0x11:
    uVar8 = FUN_100370280();
    uVar8 = FUN_1003704b0(uVar8,param_1 + 0x10,DAT_100e152b8);
    FUN_100197290(lVar9,uVar8,1);
  }
  LOCK();
  *local_c8 = *local_c8 + -1;
  local_31 = *local_c8 != 0;
  UNLOCK();
  if (!local_31) {
    operator_delete(local_c8);
  }
  return;
}

