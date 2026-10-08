
void FUN_1002c3210(long *param_1,int param_2)

{
  AnonymousUnion0 AVar1;
  int iVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  Data *pDVar4;
  Data *pDVar5;
  undefined8 uVar6;
  QArrayData *pQVar7;
  QStringList *pQVar8;
  Data_conflict local_98;
  undefined4 local_90;
  QArrayData *local_88;
  int *local_80 [4];
  QVariant local_60 [2];
  Data *local_48;
  QArrayData *local_40;
  AnonymousUnion0 local_38 [2];
  
  if (param_2 == -0x7ffffd8b) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar6 = 0x80000275;
LAB_1002c32b8:
                    /* WARNING: Could not recover jumptable at 0x0001002c32ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar6);
    return;
  }
  if (-1 < param_2) {
    DLCItemInfo::load();
    QObject::sender();
    lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102205db0);
    if (lVar3 == 0) {
      (**(code **)(*param_1 + 0xb0))(param_1,0x80000001);
    }
    if (*(char *)(lVar3 + 0x71) == '\0') {
      uVar6 = FUN_100152280();
      lVar3 = FUN_1001554a0(uVar6);
      if (lVar3 != 0) {
        FUN_100173e70(lVar3,DAT_100e15318);
      }
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar6 = 0;
    goto LAB_1002c32b8;
  }
  iVar2 = CMessageManager::instance();
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  pQVar8 = (QStringList *)0x0;
  if ((param_1[3] != 0) && (pQVar8 = (QStringList *)0x0, *(int *)(param_1[3] + 4) != 0)) {
    pQVar8 = (QStringList *)param_1[4];
  }
  local_38[0].field1 = (Data *)PTR_shared_null_1021e15e8;
  QMetaObject::tr((char *)&local_40,(char *)&PTR_staticMetaObject_102208970,0x1de4237);
  FUN_1000341d0(local_38,&local_40);
  local_88 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
  local_90 = 0x80000000;
  local_98.field7 = 0;
  FUN_100a1c600(local_80,param_1,&local_88,&local_98);
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x80015471,pQVar8,(QStringList *)&local_38[0].field0,
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
      if ((bool)local_38[1]._7_1_) goto LAB_1002c33f8;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1002c33f8:
  pDVar5 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_38[1]._7_1_ = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002c3481;
    }
    iVar2 = *(int *)(local_48 + 0xc);
    if (iVar2 != *(int *)(local_48 + 8)) {
      lVar3 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = local_48 + (long)iVar2 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar7 == 0) {
LAB_1002c3460:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_38[1]._7_1_ = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar7 = *(QArrayData **)pDVar4;
            goto LAB_1002c3460;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_1002c3481:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_38[1]._7_1_ = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002c34b1;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002c34b1:
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
      lVar3 = (long)*(int *)(local_38[0].field1 + 8) * 8 + (long)iVar2 * -8;
      pDVar5 = (Data *)(local_38[0].field1 + (long)iVar2 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_1002c3520:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_38[1]._7_1_ = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_1002c3520;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
  }
  return;
}

