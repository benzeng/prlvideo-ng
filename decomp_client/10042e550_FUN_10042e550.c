
void FUN_10042e550(CBaseDialog *param_1,undefined8 param_2,QObject *param_3,undefined8 *param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  QArrayData *local_48;
  Connection local_40 [8];
  Connection local_38 [8];
  Connection local_30 [15];
  undefined1 local_21;
  
  CBaseDialog::CBaseDialog(param_1,param_2,0,0);
  *(undefined ***)param_1 = &PTR_FUN_102211510;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102211700;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102211750;
  pvVar1 = operator_new(0x70);
  *(void **)(param_1 + 0x60) = pvVar1;
  uVar2 = 0;
  if (param_3 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(QObject **)(param_1 + 0x70) = param_3;
  local_48 = (QArrayData *)*param_4;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_21 = *(int *)local_48 != 0;
    UNLOCK();
  }
  FUN_10042e720(param_1,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10042e60b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10042e60b:
  QObject::connect(local_30,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x58),"2stateChanged(int)",
                   param_1,"1onShowPassword(int)",0);
  QMetaObject::Connection::~Connection(local_30);
  QObject::connect(local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x50),
                   "2textChanged(const QString&)",param_1,"1onPasswordChanged(const QString&)",0);
  QMetaObject::Connection::~Connection(local_38);
  QObject::connect(local_40,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x40),
                   "2textChanged(const QString&)",param_1,"1onUserChanged(const QString&)",0);
  QMetaObject::Connection::~Connection(local_40);
  return;
}

