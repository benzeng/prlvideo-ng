
/* WARNING: Removing unreachable block (ram,0x000100068ded) */
/* WARNING: Removing unreachable block (ram,0x000100068dfb) */
/* WARNING: Removing unreachable block (ram,0x000100068e07) */

void FUN_100068ca0(long *param_1,char param_2)

{
  AnonymousUnion0 AVar1;
  int iVar2;
  Data *pDVar3;
  Data *pDVar4;
  undefined8 uVar5;
  QArrayData *pQVar6;
  long lVar7;
  uint in_stack_ffffffffffffff1c;
  Data_conflict local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  int *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  Data *local_48;
  AnonymousUnion0 local_40;
  undefined1 local_31;
  
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2);
  }
  QObject::disconnect((QObject *)(param_1 + 0xc),(char *)0x0,(QObject *)0x0,(char *)0x0);
  if (((param_1[10] != 0) && (*(int *)(param_1[10] + 4) != 0)) && (param_1[0xb] != 0)) {
    QWidget::close();
  }
  if (param_2 != '\0') goto LAB_100068f61;
  iVar2 = CMessageManager::instance();
  local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0x80000000;
  local_68.field7 = 0;
  local_58 = 1;
  local_a0 = 0x80000000;
  local_a8.field7 = 0;
  local_98 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QString *)0x80010020,(QStringList *)(param_1 + 3),
             (QStringList *)&local_40.field0,(CSlotInfo *)&local_48,SUB81(&local_88,0),
             (QWidget *)((ulong)in_stack_ffffffffffffff1c << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_a8);
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
  pDVar4 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100068ed1;
    }
    iVar2 = *(int *)(local_48 + 0xc);
    if (iVar2 != *(int *)(local_48 + 8)) {
      lVar7 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar2 * -8;
      pDVar3 = local_48 + (long)iVar2 * 8 + 8;
      do {
        pQVar6 = *(QArrayData **)pDVar3;
        if (*(int *)pQVar6 == 0) {
LAB_100068eb0:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_31 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar6 = *(QArrayData **)pDVar3;
            goto LAB_100068eb0;
          }
        }
        pDVar3 = pDVar3 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar4);
  }
LAB_100068ed1:
  AVar1 = local_40;
  if (*(int *)local_40.field1 != -1) {
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      local_31 = *(int *)local_40.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100068f61;
    }
    iVar2 = *(int *)(local_40.field1 + 0xc);
    if (iVar2 != *(int *)(local_40.field1 + 8)) {
      lVar7 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = (Data *)(local_40.field1 + (long)iVar2 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar6 == 0) {
LAB_100068f40:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_31 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar6 = *(QArrayData **)pDVar4;
            goto LAB_100068f40;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
  }
LAB_100068f61:
  uVar5 = 0x80000009;
  if (param_2 != '\0') {
    uVar5 = 0;
  }
  (**(code **)(*param_1 + 0xb0))(param_1,uVar5);
  return;
}

