
void FUN_10077b3a0(QObject *param_1)

{
  long lVar1;
  char cVar2;
  QTimer *this;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  QObject *pQVar8;
  long local_a0;
  long local_98;
  long local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  undefined4 local_70;
  QDateTime local_68;
  void *local_60;
  void *local_58;
  void *local_50;
  void *local_48;
  void *local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10222a460;
  this = operator_new(0x20);
  QTimer::QTimer(this,param_1);
  *(QTimer **)(param_1 + 0x10) = this;
  pQVar8 = param_1 + 0x18;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_1021e15e8;
  pvVar3 = operator_new(0x40);
  FUN_1007763e0(pvVar3,param_1);
  local_40 = pvVar3;
  FUN_10077dbd0(pQVar8,&local_40);
  pvVar3 = operator_new(0x20);
  FUN_100777af0(pvVar3,param_1);
  local_48 = pvVar3;
  FUN_10077dbd0(pQVar8,&local_48);
  pvVar3 = operator_new(0x20);
  FUN_100777ef0(pvVar3,param_1);
  local_50 = pvVar3;
  FUN_10077dbd0(pQVar8,&local_50);
  pvVar3 = operator_new(0x20);
  FUN_1007781a0(pvVar3,param_1);
  local_58 = pvVar3;
  FUN_10077dbd0(pQVar8,&local_58);
  pvVar3 = operator_new(0x20);
  FUN_100778b90(pvVar3,param_1);
  local_60 = pvVar3;
  FUN_10077dbd0(pQVar8,&local_60);
  FUN_10077b7d0(&local_68);
  QDateTime::~QDateTime(&local_68);
  local_88 = *(Data **)pQVar8;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 == 0) {
      QListData::detach((int)&local_88);
      lVar5 = (long)*(int *)(local_88 + 8);
      lVar1 = *(long *)pQVar8;
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_88 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_88 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_88 + 0xc))
         ) {
        _memcpy(local_88 + lVar5 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + 1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
    }
  }
  local_80 = local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10;
  local_78 = local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10;
  cVar2 = '\x01';
  if (*(int *)(local_88 + 8) != *(int *)(local_88 + 0xc)) {
    cVar2 = '\x01';
    do {
      local_70 = 1;
      QObject::connect((Connection *)&local_90,*(undefined8 *)local_80,"2dataRequested()",param_1,
                       "1checkPromoDataRequested()",2,pQVar8);
      bVar7 = cVar2 != '\0';
      cVar2 = '\0';
      if ((bVar7) && (local_90 != 0)) {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_90);
      local_80 = local_80 + 8;
    } while (local_80 != local_78);
  }
  local_70 = 1;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10077b607;
    }
    QListData::dispose(local_88);
  }
LAB_10077b607:
  QObject::connect(&local_98,*(undefined8 *)(param_1 + 0x10),"2timeout()",param_1,
                   "1requestPromoData()",0,pQVar8);
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else if (local_98 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  uVar4 = FUN_100152280();
  QObject::connect(&local_a0,uVar4,"2afterServerAdded(CServerWrap&)",param_1,
                   "1onServerAdded(CServerWrap&)",0);
  if ((cVar2 != '\0') && (local_a0 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  *(byte *)(*(long *)(param_1 + 0x10) + 0x1c) = *(byte *)(*(long *)(param_1 + 0x10) + 0x1c) | 1;
  FUN_100df99c0("[HOST_PROMO]","prl_client_app",0,"Logic is inited");
  FUN_10077bd00(param_1,60000);
  return;
}

