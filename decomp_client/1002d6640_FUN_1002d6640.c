
/* WARNING: Removing unreachable block (ram,0x0001002d6771) */
/* WARNING: Removing unreachable block (ram,0x0001002d677f) */
/* WARNING: Removing unreachable block (ram,0x0001002d6788) */

undefined1 FUN_1002d6640(undefined8 param_1,bool param_2)

{
  AnonymousUnion0 AVar1;
  char cVar2;
  int iVar3;
  Data *pDVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  long lVar7;
  uint in_stack_ffffffffffffff5c;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  Data *local_48;
  AnonymousUnion0 local_40;
  AnonymousUnion0 local_38 [2];
  
  iVar3 = FUN_10018f860();
  if (iVar3 != 8) {
    return 1;
  }
  FUN_10018c2b0(param_1);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  CVmSharing::getGuestSharing();
  cVar2 = CVmGuestSharing::isEnabled();
  if (cVar2 == '\0') {
    return 1;
  }
  FUN_10018c2b0(param_1);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  CVmSharing::getHostSharing();
  cVar2 = CVmHostSharing::isEnabled();
  if (cVar2 == '\0') {
    return 1;
  }
  iVar3 = CMessageManager::instance();
  FUN_100188480(local_38,param_1);
  local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  local_60 = 0x80000000;
  local_68.field7 = 0;
  local_58 = 1;
  CMessageManager::showMessageBox
            (iVar3,(QString *)0x36d4,(QStringList *)&local_38[0].field0,
             (QStringList *)&local_40.field0,(CSlotInfo *)&local_48,param_2,
             (QWidget *)((ulong)in_stack_ffffffffffffff5c << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_68);
  pDVar5 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_38[1]._7_1_ = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002d6821;
    }
    iVar3 = *(int *)(local_48 + 0xc);
    if (iVar3 != *(int *)(local_48 + 8)) {
      lVar7 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar3 * -8;
      pDVar4 = local_48 + (long)iVar3 * 8 + 8;
      do {
        pQVar6 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar6 == 0) {
LAB_1002d6800:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_38[1]._7_1_ = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar6 = *(QArrayData **)pDVar4;
            goto LAB_1002d6800;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_1002d6821:
  AVar1 = local_40;
  if (*(int *)local_40.field1 != -1) {
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      local_38[1]._7_1_ = *(int *)local_40.field1 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002d68b1;
    }
    iVar3 = *(int *)(local_40.field1 + 0xc);
    if (iVar3 != *(int *)(local_40.field1 + 8)) {
      lVar7 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = (Data *)(local_40.field1 + (long)iVar3 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_1002d6890:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_38[1]._7_1_ = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_1002d6890;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
  }
LAB_1002d68b1:
  if (*(int *)local_38[0].field1 != -1) {
    if (*(int *)local_38[0].field1 != 0) {
      LOCK();
      *(int *)local_38[0].field1 = *(int *)local_38[0].field1 + -1;
      UNLOCK();
      if (*(int *)local_38[0].field1 != 0) {
        return 0;
      }
      local_38[1]._7_1_ = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38[0].field1,2,8);
  }
  return 0;
}

