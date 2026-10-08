
void FUN_1006b2d80(long param_1)

{
  AnonymousUnion0 AVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
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
  Data *local_48;
  AnonymousUnion0 local_40;
  QKeySequence local_38 [16];
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar4 = FUN_10018c280(uVar4);
  uVar4 = FUN_100319d40(uVar4);
  FUN_10035c150(uVar4,(QKeySequence *)(param_1 + 0x20));
  QKeySequence::QKeySequence(local_38,0x19000007,0,0,0);
  cVar2 = QKeySequence::operator==(local_38,(QKeySequence *)(param_1 + 0x20));
  QKeySequence::~QKeySequence(local_38);
  if (cVar2 == '\0') {
    return;
  }
  iVar3 = CMessageManager::instance();
  local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0x80000000;
  local_68.field7 = 0;
  local_58 = 1;
  CMessageManager::showMessageBox
            (iVar3,(QWidget *)0x3c19,(QStringList *)0x0,(QStringList *)&local_40.field0,
             (CSlotInfo *)&local_48,SUB81(&local_88,0));
  QVariant::~QVariant((QVariant *)&local_68);
  if (local_88 != (int *)0x0) {
    LOCK();
    *local_88 = *local_88 + -1;
    local_38[0xf] = (QKeySequence)(*local_88 != 0);
    UNLOCK();
    if ((!(bool)local_38[0xf]) && (local_88 != (int *)0x0)) {
      operator_delete(local_88);
    }
  }
  pDVar6 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_38[0xf] = (QKeySequence)(*(int *)local_48 != 0);
      UNLOCK();
      if ((bool)local_38[0xf]) goto LAB_1006b2f11;
    }
    iVar3 = *(int *)(local_48 + 0xc);
    if (iVar3 != *(int *)(local_48 + 8)) {
      lVar8 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = local_48 + (long)iVar3 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_1006b2ef0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_38[0xf] = (QKeySequence)(*(int *)pQVar7 != 0);
          UNLOCK();
          if (!(bool)local_38[0xf]) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_1006b2ef0;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_1006b2f11:
  AVar1 = local_40;
  if (*(int *)local_40.field1 != -1) {
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      UNLOCK();
      if (*(int *)local_40.field1 != 0) {
        return;
      }
      local_38[0xf] = (QKeySequence)0x0;
    }
    iVar3 = *(int *)(local_40.field1 + 0xc);
    if (iVar3 != *(int *)(local_40.field1 + 8)) {
      lVar8 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = (Data *)(local_40.field1 + (long)iVar3 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1006b2f80:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_38[0xf] = (QKeySequence)(*(int *)pQVar7 != 0);
          UNLOCK();
          if (!(bool)local_38[0xf]) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1006b2f80;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
  }
  return;
}

