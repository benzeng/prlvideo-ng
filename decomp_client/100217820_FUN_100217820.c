
void FUN_100217820(long param_1,int param_2)

{
  AnonymousUnion0 AVar1;
  char cVar2;
  int iVar3;
  Data *pDVar4;
  Data *pDVar5;
  undefined8 uVar6;
  QArrayData *pQVar7;
  long lVar8;
  int *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  QArrayData *local_50;
  Data *local_48;
  AnonymousUnion0 local_40;
  undefined1 local_31;
  
  FUN_100217ca0();
  if ((((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
      (*(long *)(param_1 + 0x20) == 0)) ||
     ((cVar2 = COsInstallationInfo::isUnattanded(), param_2 < 0 || (cVar2 == '\0'))))
  goto LAB_100217a81;
  iVar3 = CMessageManager::instance();
  local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018f8c0(&local_50,uVar6);
  FUN_1000341d0(&local_48,&local_50);
  local_88 = (int *)0x0;
  uStack_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0x80000000;
  local_68.field7 = 0;
  local_58 = 1;
  CMessageManager::showMessageBox
            (iVar3,(QWidget *)0x3c23,(QStringList *)0x0,(QStringList *)&local_40.field0,
             (CSlotInfo *)&local_48,SUB81(&local_88,0));
  QVariant::~QVariant((QVariant *)&local_68);
  if (local_88 != (int *)0x0) {
    LOCK();
    *local_88 = *local_88 + -1;
    local_31 = *local_88 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_88 != (int *)0x0)) {
      operator_delete(local_88);
    }
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10021796b;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10021796b:
  pDVar5 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002179f1;
    }
    iVar3 = *(int *)(local_48 + 0xc);
    if (iVar3 != *(int *)(local_48 + 8)) {
      lVar8 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar3 * -8;
      pDVar4 = local_48 + (long)iVar3 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar7 == 0) {
LAB_1002179d0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar4;
            goto LAB_1002179d0;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_1002179f1:
  AVar1 = local_40;
  if (*(int *)local_40.field1 != -1) {
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      local_31 = *(int *)local_40.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100217a81;
    }
    iVar3 = *(int *)(local_40.field1 + 0xc);
    if (iVar3 != *(int *)(local_40.field1 + 8)) {
      lVar8 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = (Data *)(local_40.field1 + (long)iVar3 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_100217a60:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_100217a60;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
  }
LAB_100217a81:
  CAbstractTask::finish((int)param_1);
  return;
}

