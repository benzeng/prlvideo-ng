
void FUN_1002c16f0(long *param_1,int param_2)

{
  undefined *puVar1;
  AnonymousUnion0 AVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  Data *pDVar4;
  Data *pDVar5;
  undefined8 uVar6;
  QArrayData *pQVar7;
  long lVar8;
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
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
      uVar6 = 0;
      goto LAB_1002c19b0;
    }
    if (param_2 != 3) {
      return;
    }
  }
  if ((int)param_1[3] == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar6 = 0x80015470;
LAB_1002c19b0:
                    /* WARNING: Could not recover jumptable at 0x0001002c19c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar6);
    return;
  }
  iVar3 = CMessageManager::instance();
  puVar1 = PTR_shared_null_1021e15e8;
  local_38[0].field1 = (Data *)PTR_shared_null_1021e15e8;
  QMetaObject::tr((char *)&local_40,(char *)&PTR_staticMetaObject_102208850,0x1de4237);
  FUN_1000341d0(local_38,&local_40);
  local_48 = (Data *)puVar1;
  local_88 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
  local_90 = 0x80000000;
  local_98.field7 = 0;
  FUN_100a1c600(local_80,param_1,&local_88,&local_98);
  CMessageManager::showMessageBox
            (iVar3,(QWidget *)0x80015470,(QStringList *)0x0,(QStringList *)&local_38[0].field0,
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
      if ((bool)local_38[1]._7_1_) goto LAB_1002c1842;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1002c1842:
  pDVar5 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_38[1]._7_1_ = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002c18d1;
    }
    iVar3 = *(int *)(local_48 + 0xc);
    if (iVar3 != *(int *)(local_48 + 8)) {
      lVar8 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar3 * -8;
      pDVar4 = local_48 + (long)iVar3 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar7 == 0) {
LAB_1002c18b0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_38[1]._7_1_ = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar7 = *(QArrayData **)pDVar4;
            goto LAB_1002c18b0;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_1002c18d1:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_38[1]._7_1_ = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002c1901;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002c1901:
  AVar2 = local_38[0];
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
    iVar3 = *(int *)(local_38[0].field1 + 0xc);
    if (iVar3 != *(int *)(local_38[0].field1 + 8)) {
      lVar8 = (long)*(int *)(local_38[0].field1 + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = (Data *)(local_38[0].field1 + (long)iVar3 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_1002c1970:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_38[1]._7_1_ = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_1002c1970;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
  return;
}

