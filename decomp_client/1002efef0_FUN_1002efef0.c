
void FUN_1002efef0(long param_1,QString *param_2,int param_3,int param_4)

{
  AnonymousUnion0 AVar1;
  char cVar2;
  int iVar3;
  Data *pDVar4;
  Data *pDVar5;
  undefined8 uVar6;
  QArrayData *pQVar7;
  long *plVar8;
  long lVar9;
  Data_conflict local_98;
  undefined4 local_90;
  QArrayData *local_88;
  int *local_80 [4];
  QVariant local_60 [2];
  Data *local_48;
  AnonymousUnion0 local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  cVar2 = CTaskDownloadFile::isCanceled();
  if (cVar2 != '\0') {
    FUN_100df99c0("","prl_client_app",0,"Downloading the package was canceled");
                    /* WARNING: Could not recover jumptable at 0x0001002eff6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0xb0))
              (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x8c));
    return;
  }
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",0,"Downloading the package finished, \'%s\', %d, %d",
                local_38 + *(long *)(local_38 + 0x10),param_3,param_4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002effdd;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1002effdd:
  if (param_4 == 0 && param_3 == 0) {
    QString::operator=((QString *)(param_1 + 0x50),param_2);
    plVar8 = *(long **)(param_1 + 0x10);
    lVar9 = *plVar8;
    uVar6 = 0;
LAB_1002f0226:
    (**(code **)(lVar9 + 0xb0))(plVar8,uVar6);
    return;
  }
  *(undefined4 *)(param_1 + 0x60) = 0x80000009;
  if ((*(byte *)(param_1 + 0x18) & 2) != 0) {
    plVar8 = *(long **)(param_1 + 0x10);
    lVar9 = *plVar8;
    uVar6 = 0x80000009;
    goto LAB_1002f0226;
  }
  iVar3 = CMessageManager::instance();
  local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  local_88 = (QArrayData *)QString::fromAscii_helper("1onErrorMsgClosed()",0x13);
  local_90 = 0x80000000;
  local_98.field7 = 0;
  FUN_100a1c600(local_80,param_1,&local_88,&local_98);
  CMessageManager::showMessageBox
            (iVar3,(QWidget *)0x80015438,(QStringList *)0x0,(QStringList *)&local_40.field0,
             (CSlotInfo *)&local_48,SUB81(local_80,0));
  QVariant::~QVariant(local_60);
  if (local_80[0] != (int *)0x0) {
    LOCK();
    *local_80[0] = *local_80[0] + -1;
    local_29 = *local_80[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_80[0] != (int *)0x0)) {
      operator_delete(local_80[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_98);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f00db;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1002f00db:
  pDVar5 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f0171;
    }
    iVar3 = *(int *)(local_48 + 0xc);
    if (iVar3 != *(int *)(local_48 + 8)) {
      lVar9 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar3 * -8;
      pDVar4 = local_48 + (long)iVar3 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar7 == 0) {
LAB_1002f0150:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar4;
            goto LAB_1002f0150;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_1002f0171:
  AVar1 = local_40;
  if (*(int *)local_40.field1 == -1) {
    return;
  }
  if (*(int *)local_40.field1 != 0) {
    LOCK();
    *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
    UNLOCK();
    if (*(int *)local_40.field1 != 0) {
      return;
    }
    local_29 = 0;
  }
  iVar3 = *(int *)(local_40.field1 + 0xc);
  if (iVar3 != *(int *)(local_40.field1 + 8)) {
    lVar9 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar3 * -8;
    pDVar5 = (Data *)(local_40.field1 + (long)iVar3 * 8 + 8);
    do {
      pQVar7 = *(QArrayData **)pDVar5;
      if (*(int *)pQVar7 == 0) {
LAB_1002f01e0:
        QArrayData::deallocate(pQVar7,2,8);
      }
      else if (*(int *)pQVar7 != -1) {
        LOCK();
        *(int *)pQVar7 = *(int *)pQVar7 + -1;
        local_29 = *(int *)pQVar7 != 0;
        UNLOCK();
        if (!(bool)local_29) {
          pQVar7 = *(QArrayData **)pDVar5;
          goto LAB_1002f01e0;
        }
      }
      pDVar5 = pDVar5 + -8;
      lVar9 = lVar9 + 8;
    } while (lVar9 != 0);
  }
  QListData::dispose((Data *)AVar1.field1);
  return;
}

