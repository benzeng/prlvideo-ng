
void FUN_100259380(QObject *param_1,int param_2)

{
  ExternalRefCountData *pEVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  QObject *pQVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  Data_conflict local_160;
  undefined4 local_158;
  QArrayData *local_150;
  int *local_148 [4];
  QVariant local_128 [2];
  CSlotInfo local_110 [2];
  undefined1 local_b8 [8];
  long local_b0;
  char local_78 [64];
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar4 = FUN_100748240();
  local_38 = (QArrayData *)QString::fromAscii_helper("updates",7);
  pQVar5 = (QObject *)FUN_100748290(uVar4,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002593f4;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002593f4:
  if (param_2 != 0) {
    if (param_2 == 2) {
      FUN_100746ae0(local_78,pQVar5);
      if (local_78[0] == '\0') {
        FUN_100746ae0(local_b8,pQVar5);
        iVar3 = *(int *)(local_b0 + 4);
        FUN_10012ac30(local_b8);
        FUN_10012ac30(local_78);
        if (iVar3 != 0) {
          FUN_100746ae0(&local_110[0].field1_0x10.field1_0x8,pQVar5);
          QString::operator=((QString *)(param_1 + 0x38),
                             (QString *)((long)&local_110[0].field2_0x1c.field0_0x0.field0_0x0 + 4))
          ;
          FUN_10012ac30(&local_110[0].field1_0x10.field1_0x8);
          QString::toUtf8();
          FUN_100df99c0("","prl_client_app",0,"Updates URL %s",
                        (QArrayData *)
                        (local_110[0].field1_0x10.field0_0x0 +
                        *(long *)(local_110[0].field1_0x10.field0_0x0 + 0x10)));
          if (*(int *)local_110[0].field1_0x10.field0_0x0 != -1) {
            if (*(int *)local_110[0].field1_0x10.field0_0x0 != 0) {
              LOCK();
              *(int *)local_110[0].field1_0x10.field0_0x0 =
                   *(int *)local_110[0].field1_0x10.field0_0x0 + -1;
              local_29 = *(int *)local_110[0].field1_0x10.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_100259504;
            }
            QArrayData::deallocate((QArrayData *)local_110[0].field1_0x10.field0_0x0,1,8);
          }
LAB_100259504:
          (**(code **)(*(long *)param_1 + 0xb0))(param_1,0);
          QObject::disconnect(pQVar5,"2stateChanged(WebStore::CCatalogModel::State)",param_1,
                              "1onWebStoreCatalogStateChanged(WebStore::CCatalogModel::State)");
          return;
        }
      }
      else {
        FUN_10012ac30(local_78);
      }
    }
    else if (param_2 != 3) {
      return;
    }
  }
  QObject::disconnect(pQVar5,"2stateChanged(WebStore::CCatalogModel::State)",param_1,
                      "1onWebStoreCatalogStateChanged(WebStore::CCatalogModel::State)");
  if (((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
     (*(long *)(param_1 + 0x28) != 0)) {
    QWidget::hide();
  }
  cVar2 = CTaskCheckForProductUpdate::isCheckInBackground();
  if (cVar2 != '\0') {
    (**(code **)(*(long *)param_1 + 0xb0))(param_1,0x80015210);
    return;
  }
  iVar3 = CMessageManager::instance();
  local_110[0].field0_0x0.field0_0x0.field1_0x8 = (QObject *)PTR_shared_null_1021e15e8;
  local_110[0].field0_0x0.field0_0x0.field0_0x0 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
  local_150 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
  local_158 = 0x80000000;
  local_160.field7 = 0;
  FUN_100a1c600(local_148,param_1,&local_150,&local_160);
  CMessageManager::showMessageBox
            (iVar3,(QWidget *)0x80015210,(QStringList *)0x0,
             (QStringList *)&local_110[0].field0_0x0.field0_0x0.field1_0x8,local_110,
             SUB81(local_148,0));
  QVariant::~QVariant(local_128);
  if (local_148[0] != (int *)0x0) {
    LOCK();
    *local_148[0] = *local_148[0] + -1;
    local_29 = *local_148[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_148[0] != (int *)0x0)) {
      operator_delete(local_148[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_160);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_29 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100259693;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100259693:
  pEVar1 = local_110[0].field0_0x0.field0_0x0.field0_0x0;
  if (*(int *)local_110[0].field0_0x0.field0_0x0.field0_0x0 != -1) {
    if (*(int *)local_110[0].field0_0x0.field0_0x0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_110[0].field0_0x0.field0_0x0.field0_0x0 =
           *(int *)local_110[0].field0_0x0.field0_0x0.field0_0x0 + -1;
      local_29 = *(int *)local_110[0].field0_0x0.field0_0x0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100259731;
    }
    iVar3 = *(int *)(local_110[0].field0_0x0.field0_0x0.field0_0x0 + 0xc);
    if (iVar3 != *(int *)(local_110[0].field0_0x0.field0_0x0.field0_0x0 + 8)) {
      lVar8 = (long)*(int *)(local_110[0].field0_0x0.field0_0x0.field0_0x0 + 8) * 8 +
              (long)iVar3 * -8;
      pDVar6 = (Data *)(local_110[0].field0_0x0.field0_0x0.field0_0x0 + (long)iVar3 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100259710:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100259710;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)pEVar1);
  }
LAB_100259731:
  pQVar5 = local_110[0].field0_0x0.field0_0x0.field1_0x8;
  if (*(int *)local_110[0].field0_0x0.field0_0x0.field1_0x8 != -1) {
    if (*(int *)local_110[0].field0_0x0.field0_0x0.field1_0x8 != 0) {
      LOCK();
      *(int *)local_110[0].field0_0x0.field0_0x0.field1_0x8 =
           *(int *)local_110[0].field0_0x0.field0_0x0.field1_0x8 + -1;
      UNLOCK();
      if (*(int *)local_110[0].field0_0x0.field0_0x0.field1_0x8 != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar3 = *(int *)(local_110[0].field0_0x0.field0_0x0.field1_0x8 + 0xc);
    if (iVar3 != *(int *)(local_110[0].field0_0x0.field0_0x0.field1_0x8 + 8)) {
      lVar8 = (long)*(int *)(local_110[0].field0_0x0.field0_0x0.field1_0x8 + 8) * 8 +
              (long)iVar3 * -8;
      pDVar6 = (Data *)(local_110[0].field0_0x0.field0_0x0.field1_0x8 + (long)iVar3 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1002597a0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1002597a0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)pQVar5);
  }
  return;
}

