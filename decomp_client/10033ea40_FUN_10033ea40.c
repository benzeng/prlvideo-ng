
void FUN_10033ea40(long param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  CTaskGenericId *pCVar8;
  long lVar9;
  char *pcVar10;
  bool bVar11;
  int local_8c;
  QArrayData *local_88;
  QArrayData *local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  CTaskGenericId local_60 [28];
  int local_44;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    pcVar10 = " Failed to switch VM desktop view mode. VM desktop object does not exist!";
LAB_10033ebcb:
    FUN_100df99c0("","prl_client_app",0,pcVar10);
    return;
  }
  lVar6 = FUN_100319390();
  if (lVar6 == 0) {
    pcVar10 = " Failed to switch VM desktop view mode. VM object does not exist!";
    goto LAB_10033ebcb;
  }
  FUN_100188480(&local_40,lVar6);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
  }
  iVar3 = FUN_100319ae0(uVar7);
  if (iVar3 == 2) {
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar7 = FUN_100319960(uVar7);
    cVar1 = FUN_100327830(uVar7);
    if (cVar1 != '\0') goto LAB_10033f0c4;
  }
  cVar1 = FUN_10018ff50(lVar6);
  iVar5 = 1;
  if (cVar1 == '\0') {
    iVar5 = iVar3;
  }
  if (iVar3 == 0) {
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
    }
    cVar1 = FUN_10031b5a0(uVar7,&local_44);
    iVar5 = 1;
    if (cVar1 != '\0') {
      iVar5 = local_44;
    }
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
    }
    cVar1 = FUN_10031bab0(uVar7);
    if (cVar1 != '\0') {
      iVar5 = 3;
    }
  }
  iVar4 = FUN_10018a9d0(lVar6);
  bVar11 = true;
  if ((iVar4 != 0x30000003) &&
     ((iVar4 = FUN_10018d460(lVar6), iVar4 != 0x30000003 ||
      (iVar4 = FUN_10018a9d0(lVar6), iVar4 != 0x30000002)))) {
    iVar4 = FUN_10018d460(lVar6);
    if (iVar4 == 0x30000003) {
      iVar4 = FUN_10018a9d0(lVar6);
      bVar11 = iVar4 == 0x30000004;
    }
    else {
      bVar11 = false;
    }
  }
  iVar4 = 3;
  if ((iVar5 != 3) && (cVar1 = FUN_10018ff50(lVar6), iVar4 = iVar5, !bVar11 && cVar1 == '\0')) {
    iVar5 = FUN_10018d460(lVar6);
    if (((iVar5 == 0x30000002) ||
        ((iVar5 = FUN_10018d460(lVar6), iVar5 == 0x30000010 ||
         (iVar5 = FUN_10018d460(lVar6), iVar5 == 0x3000000b)))) ||
       ((iVar5 = FUN_10018d460(lVar6), iVar3 == 0 && (iVar5 == 0x3000000d)))) {
LAB_10033eca3:
      FUN_10018c2b0(lVar6);
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmStartupOptions();
      iVar5 = CVmStartupOptionsBase::getWindowMode();
      cVar1 = FUN_1001b81d0(lVar6);
      if (cVar1 == '\0') {
        pCVar8 = (CTaskGenericId *)CTaskManager::instance();
        FUN_100191030(local_60,&local_40);
        lVar9 = CTaskManager::getTaskById(pCVar8);
        CTaskGenericId::~CTaskGenericId(local_60);
        iVar4 = 1;
        if (lVar9 == 0 || iVar5 != 2 && iVar5 != 4) goto LAB_10033ed35;
      }
      else {
        iVar4 = 1;
        if ((iVar5 != 2) && (iVar5 != 4)) {
LAB_10033ed35:
          iVar5 = FUN_100358ab0(lVar6);
          iVar4 = iVar5;
          if (iVar5 == 0) {
            iVar4 = iVar3;
          }
          if (iVar3 == 0) {
            iVar4 = iVar5;
          }
        }
      }
    }
    else {
      iVar5 = FUN_10018d460(lVar6);
      if (iVar5 == 0x3000000a) {
        FUN_10018c2b0(lVar6);
        CVmConfiguration::getVmSettings();
        CVmSettings::getVmRuntimeOptions();
        iVar5 = CVmRunTimeOptions::getUndoDisksModeEx();
        if (iVar5 != 0) goto LAB_10033eca3;
      }
    }
  }
  local_78 = 3;
  local_70 = 0;
  local_74 = 0;
  local_6c = 0xffff;
  local_68 = 0;
  local_64 = 0;
  iVar5 = FUN_10018d460(lVar6);
  if (iVar5 != 0x3000000d) {
    iVar5 = FUN_10018d460(lVar6);
    if (iVar5 == 0x3000000a) {
      FUN_10018c2b0(lVar6);
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmRuntimeOptions();
      iVar5 = CVmRunTimeOptions::getUndoDisksModeEx();
      if (iVar5 == 0) goto LAB_10033f01d;
    }
    iVar5 = FUN_10018d460(lVar6);
    if (iVar5 != 0x3000000f) {
      uVar7 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar7 = *(undefined8 *)(param_1 + 0x18);
      }
      uVar7 = FUN_100319c50(uVar7);
      cVar1 = FUN_100330be0(uVar7);
      if (cVar1 == '\0') {
        iVar5 = FUN_10018d460(lVar6);
        uVar7 = 0;
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
          uVar7 = *(undefined8 *)(param_1 + 0x18);
        }
        uVar7 = FUN_100319c50(uVar7);
        FUN_100330c70(uVar7,iVar4 == 3,iVar5 != 0x3000000b);
      }
      if (iVar4 == 3) {
        if ((iVar3 == 0) || (iVar3 == 3)) {
          uVar7 = 0;
          if ((*(long *)(param_1 + 0x10) != 0) &&
             (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
            uVar7 = *(undefined8 *)(param_1 + 0x18);
          }
          uVar7 = FUN_100319c50(uVar7);
          cVar1 = FUN_100330be0(uVar7);
          if (((cVar1 != '\0') && (iVar3 = FUN_10018f860(lVar6), iVar3 == 8)) &&
             (*(int *)(param_1 + 0x40) < 3)) {
            local_74 = CONCAT31(local_74._1_3_,1);
            uVar7 = 0;
            if ((*(long *)(param_1 + 0x10) != 0) &&
               (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
              uVar7 = *(undefined8 *)(param_1 + 0x18);
            }
            QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,
                            (int)PTR_s_Starting____102270ad0);
            FUN_10031c280(uVar7,&local_80);
            iVar4 = 3;
            if (*(int *)local_80 != -1) {
              if (*(int *)local_80 != 0) {
                LOCK();
                *(int *)local_80 = *(int *)local_80 + -1;
                local_31 = *(int *)local_80 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10033f01d;
              }
              QArrayData::deallocate(local_80,2,8);
            }
            goto LAB_10033f01d;
          }
        }
        iVar4 = 1;
        if (2 < *(int *)(param_1 + 0x40)) {
          uVar7 = 0;
          if ((*(long *)(param_1 + 0x10) != 0) &&
             (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
            uVar7 = *(undefined8 *)(param_1 + 0x18);
          }
          uVar7 = FUN_100319c50(uVar7);
          FUN_100330c70(uVar7,0,1);
          uVar7 = 0;
          if ((*(long *)(param_1 + 0x10) != 0) &&
             (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
            uVar7 = *(undefined8 *)(param_1 + 0x18);
          }
          uVar7 = FUN_100319c50(uVar7);
          FUN_100331200(uVar7,1);
          uVar7 = FUN_100370280();
          FUN_100188480(&local_88,lVar6);
          FUN_100375300(uVar7,&local_88,1);
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10033eff5;
            }
            QArrayData::deallocate(local_88,2,8);
          }
LAB_10033eff5:
          iVar4 = 1;
          FUN_100df99c0("","prl_client_app",0,
                        "Too many reboots in Coherence mode %d, switch to Window mode",
                        *(undefined4 *)(param_1 + 0x40));
        }
      }
    }
  }
LAB_10033f01d:
  uVar7 = FUN_10018d490(lVar6);
  cVar1 = FUN_1001754c0(uVar7,0x10);
  if (cVar1 == '\0') {
LAB_10033f05b:
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
    }
    bVar2 = FUN_10031b620(uVar7,&local_8c,0);
    if ((local_8c == iVar4 & bVar2) == 0) {
      uVar7 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar7 = *(undefined8 *)(param_1 + 0x18);
      }
      FUN_10031bef0(uVar7,iVar4,&local_78);
    }
  }
  else {
    FUN_10018c2b0(lVar6);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmStartupOptions();
    iVar3 = CVmStartupOptionsBase::getWindowMode();
    if (iVar3 != 5) goto LAB_10033f05b;
  }
  if (2 < *(int *)(param_1 + 0x40)) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
LAB_10033f0c4:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

