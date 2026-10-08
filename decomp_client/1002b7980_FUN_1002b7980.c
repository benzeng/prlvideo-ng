
/* WARNING: Removing unreachable block (ram,0x0001002b7afc) */
/* WARNING: Removing unreachable block (ram,0x0001002b7b0a) */
/* WARNING: Removing unreachable block (ram,0x0001002b7b16) */

undefined8 FUN_1002b7980(long param_1)

{
  AnonymousUnion0 AVar1;
  int iVar2;
  Data *pDVar3;
  Data *pDVar4;
  undefined8 uVar5;
  QArrayData *pQVar6;
  long lVar7;
  uint in_stack_fffffffffffffefc;
  Data_conflict local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  Data_conflict local_b0;
  undefined4 local_a8;
  QArrayData *local_a0;
  int *local_98 [4];
  QVariant local_78 [2];
  QLocale local_60 [8];
  QArrayData *local_58;
  QArrayData *local_50;
  Data *local_48;
  AnonymousUnion0 local_40;
  AnonymousUnion0 local_38 [2];
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    return 0x3bfa;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  iVar2 = CMessageManager::instance();
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(local_38,uVar5);
  local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  local_58 = (QArrayData *)
             QString::fromAscii_helper
                       ("http://www.parallels.com/products/desktop/pdfm12-kb-116716-@LOCALE@",0x43);
  QLocale::QLocale(local_60);
  FUN_100d3f730(&local_50,&local_58,local_60);
  FUN_1000341d0(&local_48,&local_50);
  local_a0 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onConfirmInstallationQuestionClosed(PRL_RESULT, Messaging::ButtonID)",0x45
                       );
  local_a8 = 0x80000000;
  local_b0.field7 = 0;
  FUN_100a1c600(local_98,param_1,&local_a0,&local_b0);
  local_c0 = 0x80000000;
  local_c8.field7 = 0;
  local_b8 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QString *)0x3c59,(QStringList *)&local_38[0].field0,
             (QStringList *)&local_40.field0,(CSlotInfo *)&local_48,SUB81(local_98,0),
             (QWidget *)((ulong)in_stack_fffffffffffffefc << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_c8);
  QVariant::~QVariant(local_78);
  if (local_98[0] != (int *)0x0) {
    LOCK();
    *local_98[0] = *local_98[0] + -1;
    local_38[1]._7_1_ = *local_98[0] != 0;
    UNLOCK();
    if ((!(bool)local_38[1]._7_1_) && (local_98[0] != (int *)0x0)) {
      operator_delete(local_98[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_b0);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_38[1]._7_1_ = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002b7b91;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1002b7b91:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38[1]._7_1_ = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002b7bc1;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002b7bc1:
  QLocale::~QLocale(local_60);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38[1]._7_1_ = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002b7bfa;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1002b7bfa:
  pDVar4 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_38[1]._7_1_ = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002b7c81;
    }
    iVar2 = *(int *)(local_48 + 0xc);
    if (iVar2 != *(int *)(local_48 + 8)) {
      lVar7 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar2 * -8;
      pDVar3 = local_48 + (long)iVar2 * 8 + 8;
      do {
        pQVar6 = *(QArrayData **)pDVar3;
        if (*(int *)pQVar6 == 0) {
LAB_1002b7c60:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_38[1]._7_1_ = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar6 = *(QArrayData **)pDVar3;
            goto LAB_1002b7c60;
          }
        }
        pDVar3 = pDVar3 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar4);
  }
LAB_1002b7c81:
  AVar1 = local_40;
  if (*(int *)local_40.field1 != -1) {
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      local_38[1]._7_1_ = *(int *)local_40.field1 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002b7d11;
    }
    iVar2 = *(int *)(local_40.field1 + 0xc);
    if (iVar2 != *(int *)(local_40.field1 + 8)) {
      lVar7 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = (Data *)(local_40.field1 + (long)iVar2 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar6 == 0) {
LAB_1002b7cf0:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_38[1]._7_1_ = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar6 = *(QArrayData **)pDVar4;
            goto LAB_1002b7cf0;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
  }
LAB_1002b7d11:
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

