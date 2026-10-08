
void FUN_1002abc40(long *param_1,int param_2)

{
  undefined *puVar1;
  AnonymousUnion0 AVar2;
  char cVar3;
  int iVar4;
  Data *pDVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  int *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  Data *local_50;
  QArrayData *local_48;
  AnonymousUnion0 local_40 [2];
  
  if (((param_2 < 0) || (param_1[0xb] == 0)) ||
     (cVar3 = CAntivirusInfo::canUninstallUnattended(), cVar3 == '\0')) goto LAB_1002abe71;
  iVar4 = CMessageManager::instance();
  puVar1 = PTR_shared_null_1021e15e8;
  local_40[0].field1 = (Data *)PTR_shared_null_1021e15e8;
  CAntivirusInfo::productName();
  FUN_1000341d0(local_40,&local_48);
  local_50 = (Data *)puVar1;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0x80000000;
  local_68.field7 = 0;
  local_58 = 1;
  CMessageManager::showMessageBox
            (iVar4,(QWidget *)0x3b99,(QStringList *)0x0,(QStringList *)&local_40[0].field0,
             (CSlotInfo *)&local_50,SUB81(&local_88,0));
  QVariant::~QVariant((QVariant *)&local_68);
  if (local_88 != (int *)0x0) {
    LOCK();
    *local_88 = *local_88 + -1;
    local_40[1]._7_1_ = *local_88 != 0;
    UNLOCK();
    if ((!(bool)local_40[1]._7_1_) && (local_88 != (int *)0x0)) {
      operator_delete(local_88);
    }
  }
  pDVar6 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_40[1]._7_1_ = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_1002abdb1;
    }
    iVar4 = *(int *)(local_50 + 0xc);
    if (iVar4 != *(int *)(local_50 + 8)) {
      lVar8 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar4 * -8;
      pDVar5 = local_50 + (long)iVar4 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_1002abd90:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_40[1]._7_1_ = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_40[1]._7_1_) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_1002abd90;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_1002abdb1:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_40[1]._7_1_ = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_1002abde1;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002abde1:
  AVar2 = local_40[0];
  if (*(int *)local_40[0].field1 != -1) {
    if (*(int *)local_40[0].field1 != 0) {
      LOCK();
      *(int *)local_40[0].field1 = *(int *)local_40[0].field1 + -1;
      local_40[1]._7_1_ = *(int *)local_40[0].field1 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_1002abe71;
    }
    iVar4 = *(int *)(local_40[0].field1 + 0xc);
    if (iVar4 != *(int *)(local_40[0].field1 + 8)) {
      lVar8 = (long)*(int *)(local_40[0].field1 + 8) * 8 + (long)iVar4 * -8;
      pDVar6 = (Data *)(local_40[0].field1 + (long)iVar4 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1002abe50:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_40[1]._7_1_ = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_40[1]._7_1_) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1002abe50;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
LAB_1002abe71:
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

