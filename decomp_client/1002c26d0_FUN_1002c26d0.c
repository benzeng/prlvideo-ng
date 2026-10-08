
void FUN_1002c26d0(long *param_1,int param_2)

{
  AnonymousUnion0 AVar1;
  int iVar2;
  Data *pDVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  QStringList *pQVar6;
  long lVar7;
  Data_conflict local_98;
  undefined4 local_90;
  QArrayData *local_88;
  int *local_80 [4];
  QVariant local_60 [2];
  Data *local_48;
  QArrayData *local_40;
  AnonymousUnion0 local_38 [2];
  
  if (param_2 != 0) {
    if (param_2 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0001002c270c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb0))(param_1,0);
      return;
    }
    if (param_2 != 3) {
      return;
    }
  }
  iVar2 = CMessageManager::instance();
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  pQVar6 = (QStringList *)0x0;
  if ((param_1[3] != 0) && (pQVar6 = (QStringList *)0x0, *(int *)(param_1[3] + 4) != 0)) {
    pQVar6 = (QStringList *)param_1[4];
  }
  local_38[0].field1 = (Data *)PTR_shared_null_1021e15e8;
  QMetaObject::tr((char *)&local_40,(char *)&PTR_staticMetaObject_102208970,0x1de4237);
  FUN_1000341d0(local_38,&local_40);
  local_88 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
  local_90 = 0x80000000;
  local_98.field7 = 0;
  FUN_100a1c600(local_80,param_1,&local_88,&local_98);
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x80015470,pQVar6,(QStringList *)&local_38[0].field0,
             (CSlotInfo *)&local_48,SUB81(local_80,0));
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
      if ((bool)local_38[1]._7_1_) goto LAB_1002c2841;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1002c2841:
  pDVar4 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_38[1]._7_1_ = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002c28d1;
    }
    iVar2 = *(int *)(local_48 + 0xc);
    if (iVar2 != *(int *)(local_48 + 8)) {
      lVar7 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar2 * -8;
      pDVar3 = local_48 + (long)iVar2 * 8 + 8;
      do {
        pQVar5 = *(QArrayData **)pDVar3;
        if (*(int *)pQVar5 == 0) {
LAB_1002c28b0:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_38[1]._7_1_ = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar5 = *(QArrayData **)pDVar3;
            goto LAB_1002c28b0;
          }
        }
        pDVar3 = pDVar3 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar4);
  }
LAB_1002c28d1:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_38[1]._7_1_ = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002c2901;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002c2901:
  AVar1 = local_38[0];
  if (*(int *)local_38[0].field1 != -1) {
    if (*(int *)local_38[0].field1 != 0) {
      LOCK();
      *(int *)local_38[0].field1 = *(int *)local_38[0].field1 + -1;
      UNLOCK();
      if (*(int *)local_38[0].field1 != 0) {
        return;
      }
      local_38[1]._7_1_ = 0;
    }
    iVar2 = *(int *)(local_38[0].field1 + 0xc);
    if (iVar2 != *(int *)(local_38[0].field1 + 8)) {
      lVar7 = (long)*(int *)(local_38[0].field1 + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = (Data *)(local_38[0].field1 + (long)iVar2 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_1002c2970:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_38[1]._7_1_ = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_1002c2970;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
  }
  return;
}

