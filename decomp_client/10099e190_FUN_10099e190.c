
undefined8 FUN_10099e190(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  QObject *pQVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  long lVar11;
  char *in_stack_ffffffffffffff58;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar12;
  Connection local_90 [8];
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  int local_58;
  int local_54;
  int local_50;
  undefined1 local_49;
  code *local_48;
  undefined8 local_40;
  code *local_38;
  undefined8 local_30;
  
  uVar12 = (undefined4)((ulong)in_stack_ffffffffffffff60 >> 0x20);
  lVar4 = FUN_1009983c0();
  lVar4 = *(long *)(lVar4 + 0x30);
  lVar11 = 0;
  if (lVar4 != 0) {
    (*DAT_102310a48)(lVar4);
    lVar11 = lVar4;
  }
  local_58 = 1;
  iVar2 = (*DAT_102310c00)(lVar11,&local_58);
  if (iVar2 < 0) {
    in_stack_ffffffffffffff58 = "../Includes/AgentAPIWrap/PTACallUtils.h";
    uVar6 = CONCAT44(uVar12,0x61);
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc","(hHandle, &val)"
                  ,"../Includes/AgentAPIWrap/PTACallUtils.h",uVar6,"GetVal");
    uVar12 = (undefined4)((ulong)uVar6 >> 0x20);
  }
  if (local_58 == 0) {
    uVar6 = FUN_1009983a0(param_1);
    bVar1 = FUN_100990a80(uVar6);
    iVar2 = (*DAT_102310db8)(lVar11,bVar1 ^ 1);
    if (iVar2 < 0) {
      in_stack_ffffffffffffff58 = "Pages/WPPrepareForMigrate.cpp";
      uVar6 = CONCAT44(uVar12,0x34);
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                    "PrlPTAMigration_TurnAppListsUpdate","(hMigration, !bAppStoreMode)",
                    "Pages/WPPrepareForMigrate.cpp",uVar6,"Commit");
      uVar12 = (undefined4)((ulong)uVar6 >> 0x20);
    }
    local_50 = 0;
    iVar3 = (*DAT_102310dc8)(lVar11,&local_50);
    iVar2 = local_50;
    if (iVar3 < 0) {
      in_stack_ffffffffffffff58 = "../Includes/AgentAPIWrap/PTACallUtils.h";
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                    "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",
                    CONCAT44(uVar12,0x61),"GetVal");
      iVar2 = local_50;
    }
  }
  else {
    local_54 = 0;
    iVar3 = (*DAT_102310dc0)(lVar11,&local_54);
    iVar2 = local_54;
    if (iVar3 < 0) {
      in_stack_ffffffffffffff58 = "../Includes/AgentAPIWrap/PTACallUtils.h";
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                    "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",
                    CONCAT44(uVar12,0x61),"GetVal");
      iVar2 = local_54;
    }
  }
  if (iVar2 == 0x8000000) {
    pQVar5 = operator_new(0x40);
    uVar6 = FUN_1009983c0(param_1);
    uVar7 = FUN_100998580(param_1);
    FUN_10098e800(pQVar5,uVar6,uVar7);
    piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
    piVar9 = *(int **)(param_1 + 0x50);
    if (piVar9 != piVar8) {
      if (piVar8 != (int *)0x0) {
        LOCK();
        *piVar8 = *piVar8 + 1;
        local_49 = *piVar8 != 0;
        UNLOCK();
        piVar9 = *(int **)(param_1 + 0x50);
      }
      if (piVar9 != (int *)0x0) {
        LOCK();
        *piVar9 = *piVar9 + -1;
        local_49 = *piVar9 != 0;
        UNLOCK();
        if ((!(bool)local_49) && (*(void **)(param_1 + 0x50) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x50));
        }
      }
      *(int **)(param_1 + 0x50) = piVar8;
      *(QObject **)(param_1 + 0x58) = pQVar5;
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_49 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_49) {
        operator_delete(piVar8);
      }
    }
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x58);
    }
    local_38 = FUN_1009bda70;
    local_30 = 0;
    local_48 = FUN_10099e8f0;
    local_40 = 0;
    puVar10 = operator_new(0x20);
    *puVar10 = 1;
    *(code **)(puVar10 + 2) = FUN_10099e940;
    *(code **)(puVar10 + 4) = FUN_10099e8f0;
    *(undefined8 *)(puVar10 + 6) = 0;
    QObject::connectImpl
              (local_90,uVar6,&local_38,param_1,&local_48,puVar10,
               (ulong)in_stack_ffffffffffffff58 & 0xffffffff00000000,0,
               &PTR_staticMetaObject_1022339b0);
    QMetaObject::Connection::~Connection(local_90);
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x58);
    }
    FUN_10098e890(uVar6);
    goto LAB_10099e736;
  }
  FUN_100df99c0("","TransporterWizardModel",0,"Failed to prepare for the migration, 0x%x",iVar2);
  if (iVar2 != 0x8b52003) {
    uVar6 = FUN_100998580(param_1);
    FUN_100998560(&local_78,param_1);
    QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Unable_to_start_the_migration_pr_10227e1b0);
    QMetaObject::tr((char *)&local_88,PTR_staticMetaObject_1021e1520,(int)PTR_s__10227e1b8);
    FUN_100a08530(uVar6,&local_78,&local_80,&local_88);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_49 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10099e6d6;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_10099e6d6:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_49 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10099e706;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_10099e706:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_49 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10099e736;
      }
      QArrayData::deallocate(local_78,2,8);
    }
    goto LAB_10099e736;
  }
  uVar6 = FUN_100998580(param_1);
  FUN_100998560(&local_60,param_1);
  QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_The_destination_folder_for_the_r_10227e1a0);
  QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Make_sure_you_have_the_rights_to_10227e1a8);
  FUN_100a08530(uVar6,&local_60,&local_68,&local_70);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_49 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10099e5ca;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10099e5ca:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_49 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10099e5fa;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10099e5fa:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_49 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10099e736;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10099e736:
  if (lVar11 != 0) {
    (*DAT_102310a50)(lVar11);
  }
  return 0;
}

