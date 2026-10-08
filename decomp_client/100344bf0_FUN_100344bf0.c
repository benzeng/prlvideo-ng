
/* WARNING: Removing unreachable block (ram,0x000100344ccf) */
/* WARNING: Removing unreachable block (ram,0x000100344cdd) */
/* WARNING: Removing unreachable block (ram,0x000100344ce9) */

void FUN_100344bf0(long param_1)

{
  AnonymousUnion0 AVar1;
  int iVar2;
  Data *pDVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  long lVar6;
  uint in_stack_ffffffffffffff2c;
  Data_conflict local_98;
  undefined4 local_90;
  undefined1 local_88;
  int *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  Data_conflict local_58;
  undefined4 local_50;
  undefined1 local_48;
  Data *local_40;
  AnonymousUnion0 local_38;
  undefined1 local_29;
  
  iVar2 = CMessageManager::instance();
  local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0x80000000;
  local_58.field7 = 0;
  local_48 = 1;
  local_90 = 0x80000000;
  local_98.field7 = 0;
  local_88 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QString *)0x3b35,(QStringList *)(param_1 + 0x10),(QStringList *)&local_38.field0
             ,(CSlotInfo *)&local_40,SUB81(&local_78,0),
             (QWidget *)((ulong)in_stack_ffffffffffffff2c << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_98);
  QVariant::~QVariant((QVariant *)&local_58);
  if (local_78 != (int *)0x0) {
    LOCK();
    *local_78 = *local_78 + -1;
    local_29 = *local_78 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_78 != (int *)0x0)) {
      operator_delete(local_78);
    }
  }
  pDVar4 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100344da1;
    }
    iVar2 = *(int *)(local_40 + 0xc);
    if (iVar2 != *(int *)(local_40 + 8)) {
      lVar6 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar2 * -8;
      pDVar3 = local_40 + (long)iVar2 * 8 + 8;
      do {
        pQVar5 = *(QArrayData **)pDVar3;
        if (*(int *)pQVar5 == 0) {
LAB_100344d80:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar3;
            goto LAB_100344d80;
          }
        }
        pDVar3 = pDVar3 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar4);
  }
LAB_100344da1:
  AVar1 = local_38;
  if (*(int *)local_38.field1 != -1) {
    if (*(int *)local_38.field1 != 0) {
      LOCK();
      *(int *)local_38.field1 = *(int *)local_38.field1 + -1;
      UNLOCK();
      if (*(int *)local_38.field1 != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar2 = *(int *)(local_38.field1 + 0xc);
    if (iVar2 != *(int *)(local_38.field1 + 8)) {
      lVar6 = (long)*(int *)(local_38.field1 + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = (Data *)(local_38.field1 + (long)iVar2 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_100344e10:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_100344e10;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
  }
  return;
}

