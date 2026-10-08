
/* WARNING: Removing unreachable block (ram,0x000100351d55) */
/* WARNING: Removing unreachable block (ram,0x000100351d63) */
/* WARNING: Removing unreachable block (ram,0x000100351d6f) */

void FUN_100351b30(long param_1,int param_2,int param_3)

{
  AnonymousUnion0 AVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Data *pDVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  uint in_stack_ffffffffffffff0c;
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
  QArrayData *local_58;
  Data *local_50;
  AnonymousUnion0 local_48;
  AnonymousUnion0 local_40 [2];
  
  if (param_2 == 0x30000003) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    bVar9 = false;
LAB_100351c12:
    FUN_100350790(param_1,0);
  }
  else {
    bVar9 = param_2 == 0x30000004;
    if ((!bVar9) || (param_3 != 0x30000002)) goto LAB_100351c12;
    FUN_10018c2b0(*(undefined8 *)(param_1 + 0x10));
    CVmConfiguration::getVmSettings();
    CVmSettings::getTravelOptions();
    cVar2 = CVmTravelOptions::isEnabled();
    bVar9 = true;
    if (cVar2 == '\0') goto LAB_100351c12;
    FUN_10018c2b0(*(undefined8 *)(param_1 + 0x10));
    CVmConfiguration::getVmSettings();
    CVmSettings::getTravelOptions();
    CVmTravelOptions::getCondition();
    iVar3 = CVmTravelCondition::getEnter();
    if ((iVar3 != 1) || (bVar9 = true, *(int *)(param_1 + 0x18) != 1)) {
      iVar3 = CVmTravelCondition::getQuit();
      bVar10 = true;
      if (iVar3 != 0) {
        iVar3 = CVmTravelCondition::getQuit();
        if (iVar3 == 1) {
          bVar10 = *(int *)(param_1 + 0x18) == 1;
        }
        else {
          bVar10 = false;
        }
      }
      iVar3 = CVmTravelCondition::getEnter();
      if (iVar3 == 2) {
        iVar3 = *(int *)(param_1 + 0x1c);
        iVar4 = CVmTravelCondition::getEnterBetteryThreshold();
        bVar9 = true;
        if ((bool)(iVar3 <= iVar4 & bVar10)) goto LAB_100351c1c;
      }
      FUN_100350950(param_1,1);
      bVar9 = true;
    }
  }
LAB_100351c1c:
  if ((param_3 != 0x30000010) || (!bVar9)) goto LAB_100351f21;
  FUN_10018c2b0(*(undefined8 *)(param_1 + 0x10));
  CVmConfiguration::getVmSettings();
  CVmSettings::getTravelOptions();
  cVar2 = CVmTravelOptions::isEnabled();
  if (cVar2 == '\0') goto LAB_100351f21;
  iVar3 = CMessageManager::instance();
  local_40[0].field1 = (Data *)PTR_shared_null_1021e1288;
  local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_50 = (Data *)PTR_shared_null_1021e15e8;
  FUN_10018d830(&local_58,*(undefined8 *)(param_1 + 0x10));
  FUN_1000341d0(&local_50,&local_58);
  local_98 = (int *)0x0;
  uStack_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0x80000000;
  local_78.field7 = 0;
  local_68 = 1;
  local_b0 = 0x80000000;
  local_b8.field7 = 0;
  local_a8 = 1;
  CMessageManager::showMessageBox
            (iVar3,(QString *)0x3c85,(QStringList *)&local_40[0].field0,
             (QStringList *)&local_48.field0,(CSlotInfo *)&local_50,SUB81(&local_98,0),
             (QWidget *)((ulong)in_stack_ffffffffffffff0c << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_b8);
  QVariant::~QVariant((QVariant *)&local_78);
  if (local_98 != (int *)0x0) {
    LOCK();
    *local_98 = *local_98 + -1;
    local_40[1]._7_1_ = *local_98 != 0;
    UNLOCK();
    if ((!(bool)local_40[1]._7_1_) && (local_98 != (int *)0x0)) {
      operator_delete(local_98);
    }
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_40[1]._7_1_ = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_100351dd7;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100351dd7:
  pDVar6 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_40[1]._7_1_ = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_100351e61;
    }
    iVar3 = *(int *)(local_50 + 0xc);
    if (iVar3 != *(int *)(local_50 + 8)) {
      lVar8 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = local_50 + (long)iVar3 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_100351e40:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_40[1]._7_1_ = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_40[1]._7_1_) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_100351e40;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_100351e61:
  AVar1 = local_48;
  if (*(int *)local_48.field1 != -1) {
    if (*(int *)local_48.field1 != 0) {
      LOCK();
      *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
      local_40[1]._7_1_ = *(int *)local_48.field1 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_100351ef1;
    }
    iVar3 = *(int *)(local_48.field1 + 0xc);
    if (iVar3 != *(int *)(local_48.field1 + 8)) {
      lVar8 = (long)*(int *)(local_48.field1 + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = (Data *)(local_48.field1 + (long)iVar3 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100351ed0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_40[1]._7_1_ = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_40[1]._7_1_) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100351ed0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
  }
LAB_100351ef1:
  if (*(int *)local_40[0].field1 != -1) {
    if (*(int *)local_40[0].field1 != 0) {
      LOCK();
      *(int *)local_40[0].field1 = *(int *)local_40[0].field1 + -1;
      local_40[1]._7_1_ = *(int *)local_40[0].field1 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_100351f21;
    }
    QArrayData::deallocate((QArrayData *)local_40[0].field1,2,8);
  }
LAB_100351f21:
  if (!bVar9) {
    QTimer::stop();
  }
  return;
}

