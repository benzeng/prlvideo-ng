
void FUN_100748a60(QObject *param_1,QObject *param_2,undefined8 *param_3,long *param_4,long *param_5
                  )

{
  int iVar1;
  int *piVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  QTimer *this;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  long local_48;
  long local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f63a0;
  *(QObject **)(param_1 + 0x10) = param_2;
  piVar2 = (int *)*param_4;
  *(int **)(param_1 + 0x18) = piVar2;
  if (*piVar2 != -1) {
    if (*piVar2 == 0) {
      QListData::detach((int)(param_1 + 0x18));
      lVar4 = *(long *)(param_1 + 0x18);
      iVar1 = *(int *)(lVar4 + 8);
      if (iVar1 != *(int *)(lVar4 + 0xc)) {
        puVar6 = (undefined8 *)(*param_4 + 0x10 + (long)*(int *)(*param_4 + 8) * 8);
        puVar7 = (undefined8 *)(lVar4 + 0x10 + (long)iVar1 * 8);
        lVar4 = (long)*(int *)(lVar4 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar6;
          *puVar7 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          puVar7 = puVar7 + 1;
          puVar6 = puVar6 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_31 = *piVar2 != 0;
      UNLOCK();
    }
  }
  piVar2 = (int *)*param_5;
  *(int **)(param_1 + 0x20) = piVar2;
  if (*piVar2 != -1) {
    if (*piVar2 == 0) {
      QListData::detach((int)(param_1 + 0x20));
      lVar4 = *(long *)(param_1 + 0x20);
      iVar1 = *(int *)(lVar4 + 8);
      if (iVar1 != *(int *)(lVar4 + 0xc)) {
        puVar6 = (undefined8 *)(*param_5 + 0x10 + (long)*(int *)(*param_5 + 8) * 8);
        puVar7 = (undefined8 *)(lVar4 + 0x10 + (long)iVar1 * 8);
        lVar4 = (long)*(int *)(lVar4 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar6;
          *puVar7 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          puVar7 = puVar7 + 1;
          puVar6 = puVar6 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_31 = *piVar2 != 0;
      UNLOCK();
    }
  }
  piVar2 = (int *)*param_3;
  *(int **)(param_1 + 0x28) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    local_31 = *piVar2 != 0;
    UNLOCK();
  }
  pvVar5 = operator_new(0x10);
  FUN_10073fe30(pvVar5,param_1);
  *(void **)(param_1 + 0x30) = pvVar5;
  param_1[0x38] = (QObject)0x0;
  auVar8._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar8._0_8_ = PTR_shared_null_1021e1288;
  auVar8._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar8;
  this = operator_new(0x20);
  QTimer::QTimer(this,param_1);
  *(QTimer **)(param_1 + 0x50) = this;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  (this->field5_0x1c).bitField0_1 = (this->field5_0x1c).bitField0_1 | 1;
  QObject::connect(&local_40,*(undefined8 *)(param_1 + 0x30),
                   "2purchaseResultReceived(int, const PurchaseResultHash&)",
                   *(undefined8 *)(param_1 + 0x10),
                   "2purchaseResultReceived(int, const PurchaseResultHash&)",0);
  if (local_40 == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  QObject::connect(&local_48,*(undefined8 *)(param_1 + 0x50),"2timeout()",param_1,
                   "1onPurchaseCompletionTimeout()",0);
  if ((cVar3 != '\0') && (local_48 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  return;
}

