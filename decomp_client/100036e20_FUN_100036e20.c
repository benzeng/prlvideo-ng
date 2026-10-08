
void FUN_100036e20(QObject *param_1,QObject *param_2,QObject *param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  QTimer *this;
  CRingListModel *pCVar3;
  long local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  CRingListModel *local_40;
  CRingListModel *local_38;
  undefined1 local_29;
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_10222f380;
  uVar1 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(QObject **)(param_1 + 0x18) = param_2;
  pvVar2 = operator_new(0x18);
  FUN_1007333f0(pvVar2,param_1);
  *(void **)(param_1 + 0x20) = pvVar2;
  *(undefined **)(param_1 + 0x28) = PTR_shared_null_1021e15d0;
  this = operator_new(0x20);
  QTimer::QTimer(this,param_1);
  *(QTimer **)(param_1 + 0x30) = this;
  FUN_1007334c0(*(undefined8 *)(param_1 + 0x20),param_2);
  local_48 = (QArrayData *)QString::fromAscii_helper("cpu",3);
  pCVar3 = operator_new(0x18);
  CRingListModel::CRingListModel(pCVar3,param_1);
  local_40 = pCVar3;
  CRingListModel::setMaxSize((int)pCVar3);
  FUN_100037b80(param_1 + 0x28,&local_48,&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100036f3b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100036f3b:
  local_50 = (QArrayData *)QString::fromAscii_helper("ram",3);
  pCVar3 = operator_new(0x18);
  CRingListModel::CRingListModel(pCVar3,param_1);
  local_38 = pCVar3;
  CRingListModel::setMaxSize((int)pCVar3);
  FUN_100037b80(param_1 + 0x28,&local_50,&local_38);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100036fb9;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100036fb9:
  QObject::connect(&local_58,*(undefined8 *)(param_1 + 0x30),"2timeout()",param_1,
                   "1onUpdateHistory()",0);
  if (local_58 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  QTimer::start((int)*(undefined8 *)(param_1 + 0x30));
  return;
}

