
void FUN_10042ad10(long param_1,uint param_2)

{
  int *piVar1;
  ulong uVar2;
  AnonymousUnion0 AVar3;
  int iVar4;
  Data *pDVar5;
  Data *pDVar6;
  undefined8 uVar7;
  QArrayData *pQVar8;
  long lVar9;
  int *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  Data *local_50;
  AnonymousUnion0 local_48;
  undefined1 local_40 [8];
  int *local_38;
  undefined1 local_29;
  
  if (-1 < (int)param_2) {
    if (*(long *)(param_1 + 0xf8) == 0) {
      return;
    }
    if (*(int *)(*(long *)(param_1 + 0xf8) + 4) == 0) {
      return;
    }
    uVar2 = *(ulong *)(param_1 + 0x100);
    if (uVar2 == 0) {
      return;
    }
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x108) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x108) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x110);
    }
    FUN_100228800(local_40,uVar7);
    CVmHardDisk::getSize();
    CVmHardDisk::setSize(uVar2);
    if (local_38 != (int *)0x0) {
      LOCK();
      piVar1 = local_38 + 1;
      *piVar1 = *piVar1 + -1;
      local_29 = *piVar1 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        (**(code **)(local_38 + 2))(local_38);
      }
      LOCK();
      *local_38 = *local_38 + -1;
      local_29 = *local_38 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(local_38);
      }
    }
    FUN_10042dd60(param_1);
    uVar7 = 4;
    goto LAB_10042af96;
  }
  if (param_2 != 0x80000275) {
    iVar4 = CMessageManager::instance();
    local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_50 = (Data *)PTR_shared_null_1021e15e8;
    local_88 = (int *)0x0;
    uStack_80 = 0;
    local_70 = 0;
    local_78 = 0;
    local_60 = 0x80000000;
    local_68.field7 = 0;
    local_58 = 1;
    CMessageManager::showMessageBox
              (iVar4,(QWidget *)(ulong)param_2,*(QStringList **)(param_1 + 0x10),
               (QStringList *)&local_48.field0,(CSlotInfo *)&local_50,SUB81(&local_88,0));
    QVariant::~QVariant((QVariant *)&local_68);
    if (local_88 != (int *)0x0) {
      LOCK();
      *local_88 = *local_88 + -1;
      local_29 = *local_88 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_88 != (int *)0x0)) {
        operator_delete(local_88);
      }
    }
    pDVar6 = local_50;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10042af01;
      }
      iVar4 = *(int *)(local_50 + 0xc);
      if (iVar4 != *(int *)(local_50 + 8)) {
        lVar9 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar4 * -8;
        pDVar5 = local_50 + (long)iVar4 * 8 + 8;
        do {
          pQVar8 = *(QArrayData **)pDVar5;
          if (*(int *)pQVar8 == 0) {
LAB_10042aee0:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_29 = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar8 = *(QArrayData **)pDVar5;
              goto LAB_10042aee0;
            }
          }
          pDVar5 = pDVar5 + -8;
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0);
      }
      QListData::dispose(pDVar6);
    }
LAB_10042af01:
    AVar3 = local_48;
    if (*(int *)local_48.field1 != -1) {
      if (*(int *)local_48.field1 != 0) {
        LOCK();
        *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
        local_29 = *(int *)local_48.field1 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10042af91;
      }
      iVar4 = *(int *)(local_48.field1 + 0xc);
      if (iVar4 != *(int *)(local_48.field1 + 8)) {
        lVar9 = (long)*(int *)(local_48.field1 + 8) * 8 + (long)iVar4 * -8;
        pDVar6 = (Data *)(local_48.field1 + (long)iVar4 * 8 + 8);
        do {
          pQVar8 = *(QArrayData **)pDVar6;
          if (*(int *)pQVar8 == 0) {
LAB_10042af70:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_29 = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar8 = *(QArrayData **)pDVar6;
              goto LAB_10042af70;
            }
          }
          pDVar6 = pDVar6 + -8;
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0);
      }
      QListData::dispose((Data *)AVar3.field1);
    }
  }
LAB_10042af91:
  uVar7 = 2;
LAB_10042af96:
  FUN_10042d570(param_1,uVar7);
  CAbstractTask::execute();
  return;
}

