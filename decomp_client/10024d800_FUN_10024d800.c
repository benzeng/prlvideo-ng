
/* WARNING: Removing unreachable block (ram,0x00010024da02) */
/* WARNING: Removing unreachable block (ram,0x00010024da10) */
/* WARNING: Removing unreachable block (ram,0x00010024da1c) */

undefined8 FUN_10024d800(long param_1)

{
  AnonymousUnion0 AVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  Data *pDVar5;
  Data *pDVar6;
  undefined8 uVar7;
  QArrayData *pQVar8;
  uint uVar9;
  long lVar10;
  uint in_stack_ffffffffffffff0c;
  Data_conflict local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  Data_conflict local_98;
  undefined4 local_90;
  QArrayData *local_88;
  int *local_80 [4];
  QVariant local_60 [2];
  Data *local_48;
  AnonymousUnion0 local_40;
  AnonymousUnion0 local_38 [2];
  
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_10018f890(uVar7);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar3 = FUN_10018f5b0(uVar7);
  uVar9 = uVar2 >> 8;
  if (uVar9 == 7) {
    uVar9 = 0x3aae;
    if ((uVar3 != 1) && (uVar9 = 0x3b29, (uVar3 & 0xfffffffd) != 0)) {
      uVar2 = 0x3b2d;
LAB_10024d8f3:
      uVar9 = 0x3ae3;
      if (uVar3 == 3) {
        uVar9 = uVar2;
      }
    }
  }
  else if (uVar9 == 9) {
    uVar9 = 0x3aaf;
    if ((uVar3 != 1) && (uVar9 = 0x3b2a, (uVar3 & 0xfffffffd) != 0)) {
      uVar2 = 0x3b2e;
      goto LAB_10024d8f3;
    }
  }
  else if (uVar9 == 8) {
    if (uVar3 == 1) {
      uVar9 = 0x3aad;
      if (uVar2 < 0x806) {
        uVar9 = 0x3ae3;
      }
    }
    else if ((uVar3 & 0xfffffffd) == 0) {
      uVar9 = (-(uint)(uVar2 < 0x806) & 1) * 3 + 0x3b28;
    }
    else {
      uVar9 = 0x3ae3;
      if (uVar3 == 3) {
        uVar9 = (-(uint)(uVar2 < 0x806) & 1) * 3 + 0x3b2c;
      }
    }
  }
  else {
    uVar9 = 0x3ae3;
    if ((uVar3 != 1) && (uVar9 = 0x3b2b, (uVar3 & 0xfffffffd) != 0)) {
      uVar2 = 0x3b2f;
      goto LAB_10024d8f3;
    }
  }
  iVar4 = CMessageManager::instance();
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(local_38,uVar7);
  local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  local_88 = (QArrayData *)
             QString::fromAscii_helper("1onMessageAnswered(PRL_RESULT, Messaging::ButtonID)",0x33);
  local_90 = 0x80000000;
  local_98.field7 = 0;
  FUN_100a1c600(local_80,param_1,&local_88,&local_98);
  local_b0 = 0x80000000;
  local_b8.field7 = 0;
  local_a8 = 1;
  CMessageManager::showMessageBox
            (iVar4,(QString *)(ulong)uVar9,(QStringList *)&local_38[0].field0,
             (QStringList *)&local_40.field0,(CSlotInfo *)&local_48,SUB81(local_80,0),
             (QWidget *)((ulong)in_stack_ffffffffffffff0c << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_b8);
  QVariant::~QVariant(local_60);
  if (local_80[0] != (int *)0x0) {
    LOCK();
    *local_80[0] = *local_80[0] + -1;
    local_38[1]._7_1_ = *local_80[0] != 0;
    UNLOCK();
    if ((!(bool)local_38[1]._7_1_) && (local_80[0] != (int *)0x0)) {
      operator_delete(local_80[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_98);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_38[1]._7_1_ = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_10024da8b;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10024da8b:
  pDVar6 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_38[1]._7_1_ = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_10024db21;
    }
    iVar4 = *(int *)(local_48 + 0xc);
    if (iVar4 != *(int *)(local_48 + 8)) {
      lVar10 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar4 * -8;
      pDVar5 = local_48 + (long)iVar4 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar8 == 0) {
LAB_10024db00:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_38[1]._7_1_ = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar8 = *(QArrayData **)pDVar5;
            goto LAB_10024db00;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_10024db21:
  AVar1 = local_40;
  if (*(int *)local_40.field1 != -1) {
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      local_38[1]._7_1_ = *(int *)local_40.field1 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_10024dbb1;
    }
    iVar4 = *(int *)(local_40.field1 + 0xc);
    if (iVar4 != *(int *)(local_40.field1 + 8)) {
      lVar10 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar4 * -8;
      pDVar6 = (Data *)(local_40.field1 + (long)iVar4 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar8 == 0) {
LAB_10024db90:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_38[1]._7_1_ = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar8 = *(QArrayData **)pDVar6;
            goto LAB_10024db90;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
  }
LAB_10024dbb1:
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

