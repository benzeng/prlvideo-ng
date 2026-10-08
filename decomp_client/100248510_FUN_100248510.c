
void FUN_100248510(long *param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  QArrayData *pQVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  Data_conflict local_80;
  undefined4 local_78;
  char local_69;
  undefined4 local_68 [2];
  undefined *local_60;
  undefined4 local_58;
  QArrayData *local_50;
  QMapNodeBase *local_48;
  int local_40;
  undefined4 local_3c;
  bool local_31;
  
  iVar4 = MessageUtils::getMessageType(param_2);
  local_3c = (undefined4)param_1[0x26];
  local_40 = param_2;
  if ((iVar4 == 3) && (0 < *(int *)(param_1[0x27] + 4))) {
    plVar7 = (long *)CMessageDataProvider::instance();
    puVar3 = PTR_shared_null_1021e1288;
    local_50 = (QArrayData *)PTR_shared_null_1021e1288;
    (**(code **)(*plVar7 + 0x90))(&local_48,plVar7,param_2);
    local_68[0] = 0xffffffff;
    local_60 = puVar3;
    local_58 = 0xffffffff;
    lVar8 = *(long *)(local_48 + 0x10);
    lVar12 = 0;
    if (*(long *)(local_48 + 0x10) == 0) {
LAB_1002485f4:
      lVar11 = 0;
    }
    else {
      do {
        while (lVar11 = lVar8, iVar4 = *(int *)(lVar11 + 0x18), iVar4 < param_3) {
          lVar8 = *(long *)(lVar11 + 0x10);
          if (*(long *)(lVar11 + 0x10) == 0) {
            if (lVar12 == 0) goto LAB_1002485f4;
            iVar4 = *(int *)(lVar12 + 0x18);
            lVar11 = lVar12;
            goto LAB_1002485f0;
          }
        }
        lVar8 = *(long *)(lVar11 + 8);
        lVar12 = lVar11;
      } while (*(long *)(lVar11 + 8) != 0);
LAB_1002485f0:
      if (param_3 < iVar4) goto LAB_1002485f4;
    }
    puVar9 = local_68;
    if (lVar11 != 0) {
      puVar9 = (undefined4 *)(lVar11 + 0x20);
    }
    pQVar2 = *(QArrayData **)(puVar9 + 2);
    iVar4 = *(int *)pQVar2;
    if (1 < iVar4 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      UNLOCK();
      local_31 = *(int *)pQVar2 != 0;
      iVar4 = *(int *)pQVar2;
    }
    iVar1 = puVar9[4];
    if (iVar4 != -1) {
      if (iVar4 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_31 = *(int *)pQVar2 != 0;
        UNLOCK();
        if (local_31) goto LAB_100248647;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
LAB_100248647:
    if (*(int *)puVar3 != -1) {
      if (*(int *)puVar3 != 0) {
        LOCK();
        *(int *)puVar3 = *(int *)puVar3 + -1;
        local_31 = *(int *)puVar3 != 0;
        UNLOCK();
        if (local_31) goto LAB_10024867a;
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
LAB_10024867a:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if (local_31) goto LAB_1002486c6;
      }
      if (*(long *)(local_48 + 0x10) != 0) {
        FUN_1001f3f70();
        QMapDataBase::freeTree(local_48,(int)*(undefined8 *)(local_48 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)local_48);
    }
LAB_1002486c6:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if (local_31) goto LAB_1002486f6;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1002486f6:
    if ((iVar1 == 1) || (iVar1 == 6)) {
      (**(code **)(*param_1 + 0xb0))(param_1,0x80000275);
      goto LAB_100248718;
    }
    FUN_100248b90(param_1 + 0x27,&local_40);
    if (*(int *)(param_1[0x27] + 4) != 0) {
      CAbstractTask::prependSubTask((int)param_1);
    }
    if (param_2 == -0x7ffd8da0) {
      lVar8 = param_1[0x22];
      lVar12 = 0;
      if (param_3 == 1) {
        if ((lVar8 != 0) && (lVar12 = 0, *(int *)(lVar8 + 4) != 0)) {
          lVar12 = param_1[0x23];
        }
        FUN_1001248e0(lVar12);
      }
      else {
        if ((lVar8 != 0) && (lVar12 = 0, *(int *)(lVar8 + 4) != 0)) {
          lVar12 = param_1[0x23];
        }
        uVar10 = FUN_10018d490(lVar12);
        FUN_10015a330(uVar10);
        CDispCommonPreferences::getMemoryPreferences();
        CDispMemoryPreferences::getRecommendedMaxVmMemory();
      }
      lVar8 = 0;
      if ((param_1[0x22] != 0) && (lVar8 = 0, *(int *)(param_1[0x22] + 4) != 0)) {
        lVar8 = param_1[0x23];
      }
      uVar10 = FUN_10018d490(lVar8);
      uVar10 = FUN_1001766b0(uVar10);
      FUN_100615d30(uVar10,2,&local_69);
      if (local_69 == '\0') {
        FUN_100df99c0("","prl_client_app",0,"No license restriction PLRK_VM_MEMORY_LIMIT.");
      }
      CVmConfiguration::getVmHardwareList();
      uVar6 = CVmHardware::getMemory();
      CVmMemory::setRamSize(uVar6);
    }
    lVar8 = *param_1;
    iVar4 = 0;
  }
  else {
    lVar8 = *param_1;
    iVar4 = param_2;
  }
  (**(code **)(lVar8 + 0xb0))(param_1,iVar4);
LAB_100248718:
  local_78 = 0x80000000;
  local_80.field7 = 0;
  uVar5 = FUN_1002474e0(param_2,param_1 + 3,&local_80);
  FUN_100816490(param_1,param_2,uVar5,(int)param_1[0x26],param_4);
  QVariant::~QVariant((QVariant *)&local_80);
  return;
}

