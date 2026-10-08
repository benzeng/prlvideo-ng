
void FUN_100270ca0(long *param_1,undefined8 param_2)

{
  AnonymousUnion0 AVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  code *UNRECOVERED_JUMPTABLE;
  Data *pDVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  Data_conflict local_90;
  undefined4 local_88;
  QArrayData *local_80;
  int *local_78 [4];
  QVariant local_58 [2];
  Data *local_40;
  AnonymousUnion0 local_38;
  undefined1 local_29;
  
  iVar3 = (int)param_2;
  if (iVar3 < -0x7ffeab89) {
    if (iVar3 != -0x7fffffed) {
      if (iVar3 != -0x7ffffd8b) {
LAB_100270f57:
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
        goto LAB_100270f61;
      }
      goto LAB_100270ef6;
    }
    CAbstractTask::clearSubTaskList();
  }
  else {
    if (iVar3 != 0) {
      if (iVar3 != -0x7ffeab89) goto LAB_100270f57;
      iVar3 = CMessageManager::instance();
      local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
      local_40 = (Data *)PTR_shared_null_1021e15e8;
      local_80 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
      local_88 = 0x80000000;
      local_90.field7 = 0;
      FUN_100a1c600(local_78,param_1,&local_80,&local_90);
      CMessageManager::showMessageBox
                (iVar3,(QWidget *)0x80015477,(QStringList *)0x0,(QStringList *)&local_38.field0,
                 (CSlotInfo *)&local_40,SUB81(local_78,0));
      QVariant::~QVariant(local_58);
      if (local_78[0] != (int *)0x0) {
        LOCK();
        *local_78[0] = *local_78[0] + -1;
        local_29 = *local_78[0] != 0;
        UNLOCK();
        if ((!(bool)local_29) && (local_78[0] != (int *)0x0)) {
          operator_delete(local_78[0]);
        }
      }
      QVariant::~QVariant((QVariant *)&local_90);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_29 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100270dc8;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100270dc8:
      pDVar6 = local_40;
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_29 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100270e51;
        }
        iVar3 = *(int *)(local_40 + 0xc);
        if (iVar3 != *(int *)(local_40 + 8)) {
          lVar8 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar3 * -8;
          pDVar5 = local_40 + (long)iVar3 * 8 + 8;
          do {
            pQVar7 = *(QArrayData **)pDVar5;
            if (*(int *)pQVar7 == 0) {
LAB_100270e30:
              QArrayData::deallocate(pQVar7,2,8);
            }
            else if (*(int *)pQVar7 != -1) {
              LOCK();
              *(int *)pQVar7 = *(int *)pQVar7 + -1;
              local_29 = *(int *)pQVar7 != 0;
              UNLOCK();
              if (!(bool)local_29) {
                pQVar7 = *(QArrayData **)pDVar5;
                goto LAB_100270e30;
              }
            }
            pDVar5 = pDVar5 + -8;
            lVar8 = lVar8 + 8;
          } while (lVar8 != 0);
        }
        QListData::dispose(pDVar6);
      }
LAB_100270e51:
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
        iVar3 = *(int *)(local_38.field1 + 0xc);
        if (iVar3 != *(int *)(local_38.field1 + 8)) {
          lVar8 = (long)*(int *)(local_38.field1 + 8) * 8 + (long)iVar3 * -8;
          pDVar6 = (Data *)(local_38.field1 + (long)iVar3 * 8 + 8);
          do {
            pQVar7 = *(QArrayData **)pDVar6;
            if (*(int *)pQVar7 == 0) {
LAB_100270ec0:
              QArrayData::deallocate(pQVar7,2,8);
            }
            else if (*(int *)pQVar7 != -1) {
              LOCK();
              *(int *)pQVar7 = *(int *)pQVar7 + -1;
              local_29 = *(int *)pQVar7 != 0;
              UNLOCK();
              if (!(bool)local_29) {
                pQVar7 = *(QArrayData **)pDVar6;
                goto LAB_100270ec0;
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
LAB_100270ef6:
    cVar2 = FUN_100d80680();
    if (cVar2 != '\0') {
      if (DAT_102310930 == (void *)0x0) {
        pvVar4 = operator_new(0x18);
        FUN_1001e5440(pvVar4);
        DAT_102273630 = 1;
        DAT_102310930 = pvVar4;
      }
      FUN_1001e5610(DAT_102310930,5,0);
    }
    CAbstractTask::removeSubTask((int)param_1);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
  param_2 = 0;
LAB_100270f61:
                    /* WARNING: Could not recover jumptable at 0x000100270f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}

