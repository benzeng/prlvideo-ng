
void FUN_100661ba0(QObject *param_1,undefined8 param_2,QObject *param_3)

{
  int iVar1;
  undefined *puVar2;
  Data *pDVar3;
  char cVar4;
  void *pvVar5;
  QArrayData *pQVar6;
  QArrayData *pQVar7;
  QArrayData *pQVar8;
  QArrayData *pQVar9;
  Data *pDVar10;
  QArrayData *pQVar11;
  long lVar12;
  long local_88;
  long local_80;
  long local_78;
  Data *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  Data *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_1021f52a0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  pvVar5 = operator_new(0x18);
  local_40 = (QArrayData *)QString::fromAscii_helper("LICENSEKEY",10);
  puVar2 = PTR_shared_null_1021e15e8;
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  pQVar6 = (QArrayData *)QString::fromAscii_helper("PURCHASEID",10);
  local_50 = pQVar6;
  FUN_1000341d0(&local_48,&local_50);
  pQVar7 = (QArrayData *)QString::fromAscii_helper("ORDERTOTAL",10);
  local_58 = pQVar7;
  FUN_1000341d0(&local_48,&local_58);
  pQVar8 = (QArrayData *)QString::fromAscii_helper("CURRENCY",8);
  local_60 = pQVar8;
  FUN_1000341d0(&local_48,&local_60);
  pQVar9 = (QArrayData *)QString::fromAscii_helper("LICENSEKEY",10);
  local_68 = pQVar9;
  FUN_1000341d0(&local_48,&local_68);
  local_70 = (Data *)puVar2;
  FUN_10074a390(pvVar5,param_1,&local_40,&local_48,&local_70);
  pDVar3 = local_70;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100661d64;
    }
    iVar1 = *(int *)(local_70 + 0xc);
    if (iVar1 != *(int *)(local_70 + 8)) {
      lVar12 = (long)*(int *)(local_70 + 8) * 8 + (long)iVar1 * -8;
      pDVar10 = local_70 + (long)iVar1 * 8 + 8;
      do {
        pQVar11 = *(QArrayData **)pDVar10;
        if (*(int *)pQVar11 == 0) {
LAB_100661d40:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar10;
            goto LAB_100661d40;
          }
        }
        pDVar10 = pDVar10 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_100661d64:
  if (*(int *)pQVar9 != -1) {
    if (*(int *)pQVar9 != 0) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + -1;
      local_31 = *(int *)pQVar9 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100661d94;
    }
    QArrayData::deallocate(pQVar9,2,8);
  }
LAB_100661d94:
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100661dcd;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_100661dcd:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100661dff;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_100661dff:
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100661e2d;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_100661e2d:
  pDVar3 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100661ec1;
    }
    iVar1 = *(int *)(local_48 + 0xc);
    if (iVar1 != *(int *)(local_48 + 8)) {
      lVar12 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
      pDVar10 = local_48 + (long)iVar1 * 8 + 8;
      do {
        pQVar6 = *(QArrayData **)pDVar10;
        if (*(int *)pQVar6 == 0) {
LAB_100661ea0:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_31 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar6 = *(QArrayData **)pDVar10;
            goto LAB_100661ea0;
          }
        }
        pDVar10 = pDVar10 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_100661ec1:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100661ef1;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100661ef1:
  *(void **)(param_1 + 0x18) = pvVar5;
  QObject::connect(&local_78,pvVar5,"2pageLoading(bool)",param_1,"1onPageLoading(bool)",0);
  if (local_78 == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  QObject::connect(&local_80,*(undefined8 *)(param_1 + 0x18),"2waitingForOsPurchaseCompletion()",
                   param_1,"1onWaitingForOsPurchaseCompletion()",0);
  if (cVar4 == '\0') {
    cVar4 = '\0';
  }
  else if (local_80 == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  QObject::connect(&local_88,*(undefined8 *)(param_1 + 0x18),
                   "2purchaseResultReceived(int,PurchaseResultHash)",param_1,
                   "1onPurchaseResultReceived(int,PurchaseResultHash)",0);
  if ((cVar4 != '\0') && (local_88 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  return;
}

