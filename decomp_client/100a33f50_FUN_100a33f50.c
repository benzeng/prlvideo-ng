
void FUN_100a33f50(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  AnonymousUnion0 AVar2;
  int iVar3;
  undefined4 uVar4;
  QStringList *pQVar5;
  long lVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  long lVar9;
  Data *pDVar10;
  int *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  Data_conflict local_78;
  undefined4 local_70;
  undefined1 local_68;
  Data *local_58;
  AnonymousUnion0 local_50;
  QMetaObject *local_48;
  QMetaObject *local_40 [2];
  
  if (param_4 < 0x10) {
    return;
  }
  if (4 < *(int *)(param_3 + 4) - 9U) {
    return;
  }
  lVar9 = param_3 + 0x10;
  lVar6 = param_4 - 0x10;
  switch(*(int *)(param_3 + 4)) {
  case 9:
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FUN_1003193b0(&local_48,param_2);
    local_40[0] = local_48;
    FUN_100a352a0(uVar1,local_40,lVar9,lVar6);
    if (local_48 != (QMetaObject *)0x0) {
      _PrlHandle_Free();
    }
    break;
  case 10:
    FUN_100a35460(*(undefined8 *)(param_1 + 0x18),param_2,lVar9,lVar6);
    return;
  case 0xc:
    lVar6 = FUN_100319960(param_2);
    pQVar5 = (QStringList *)0x0;
    if (lVar6 != 0) {
      pQVar5 = (QStringList *)FUN_100326190(lVar6);
    }
    iVar3 = CMessageManager::instance();
    local_50.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_58 = (Data *)PTR_shared_null_1021e15e8;
    local_98 = (int *)0x0;
    uStack_90 = 0;
    local_80 = 0;
    local_88 = 0;
    local_70 = 0x80000000;
    local_78.field7 = 0;
    local_68 = 1;
    uVar4 = CMessageManager::showMessageBox
                      (iVar3,(QWidget *)0x36dd,pQVar5,(QStringList *)&local_50.field0,
                       (CSlotInfo *)&local_58,SUB81(&local_98,0));
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
    pDVar7 = local_58;
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_40[1]._7_1_ = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_40[1]._7_1_) goto LAB_100a34175;
      }
      iVar3 = *(int *)(local_58 + 0xc);
      if (iVar3 != *(int *)(local_58 + 8)) {
        lVar6 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar3 * -8;
        pDVar10 = local_58 + (long)iVar3 * 8 + 8;
        do {
          pQVar8 = *(QArrayData **)pDVar10;
          if (*(int *)pQVar8 == 0) {
LAB_100a3414e:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_40[1]._7_1_ = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_40[1]._7_1_) {
              pQVar8 = *(QArrayData **)pDVar10;
              goto LAB_100a3414e;
            }
          }
          pDVar10 = pDVar10 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose(pDVar7);
    }
LAB_100a34175:
    AVar2 = local_50;
    if (*(int *)local_50.field1 != -1) {
      if (*(int *)local_50.field1 != 0) {
        LOCK();
        *(int *)local_50.field1 = *(int *)local_50.field1 + -1;
        local_40[1]._7_1_ = *(int *)local_50.field1 != 0;
        UNLOCK();
        if ((bool)local_40[1]._7_1_) goto LAB_100a34226;
      }
      iVar3 = *(int *)(local_50.field1 + 0xc);
      if (iVar3 != *(int *)(local_50.field1 + 8)) {
        lVar6 = (long)*(int *)(local_50.field1 + 8) * 8 + (long)iVar3 * -8;
        pDVar7 = (Data *)(local_50.field1 + (long)iVar3 * 8 + 8);
        do {
          pQVar8 = *(QArrayData **)pDVar7;
          if (*(int *)pQVar8 == 0) {
LAB_100a341ff:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_40[1]._7_1_ = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_40[1]._7_1_) {
              pQVar8 = *(QArrayData **)pDVar7;
              goto LAB_100a341ff;
            }
          }
          pDVar7 = pDVar7 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose((Data *)AVar2.field1);
    }
LAB_100a34226:
    FUN_100a356a0(*(undefined8 *)(param_1 + 0x18),param_2,uVar4);
    break;
  case 0xd:
    FUN_100a35880(*(undefined8 *)(param_1 + 0x18),lVar9,lVar6);
    return;
  }
  return;
}

