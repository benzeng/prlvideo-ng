
void FUN_100224d40(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  Data_conflict local_80;
  undefined4 local_78;
  QArrayData *local_70;
  int *local_68 [4];
  QVariant local_48 [2];
  Connection local_30 [15];
  undefined1 local_21;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar1 = FUN_100319390(uVar2);
  if (lVar1 != 0) {
    QObject::connect(local_30,lVar1,
                     "2vmStateChanged( VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE )",param_1,
                     "1onAfterVmStateChanged( VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE )",0);
    QMetaObject::Connection::~Connection(local_30);
    FUN_10018d490(lVar1);
    uVar2 = CSdkCommunicator::eventHandlers();
    local_70 = (QArrayData *)QString::fromAscii_helper("handleLowHostMemory",0x13);
    local_78 = 0x80000000;
    local_80.field7 = 0;
    FUN_100a1c6b0(local_68,&local_70,param_1,&local_80);
    CEventHandlerStorage::addHandler(uVar2,0x186e9,local_68);
    QVariant::~QVariant(local_48);
    if (local_68[0] != (int *)0x0) {
      LOCK();
      *local_68[0] = *local_68[0] + -1;
      local_21 = *local_68[0] != 0;
      UNLOCK();
      if ((!(bool)local_21) && (local_68[0] != (int *)0x0)) {
        operator_delete(local_68[0]);
      }
    }
    QVariant::~QVariant((QVariant *)&local_80);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        UNLOCK();
        if (*(int *)local_70 != 0) {
          return;
        }
        local_21 = 0;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
  return;
}

