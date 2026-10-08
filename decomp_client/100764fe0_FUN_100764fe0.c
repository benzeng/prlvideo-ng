
void FUN_100764fe0(QObject *param_1,QObject *param_2,QObject *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  QArrayData *local_98;
  CTaskGenericId local_90 [24];
  Data_conflict local_78;
  undefined4 local_70;
  QArrayData *local_68;
  int *local_60 [4];
  QVariant local_40 [2];
  undefined1 local_21;
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_1021f66a0;
  uVar1 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(QObject **)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar2 = CTaskManager::instance();
  local_68 = (QArrayData *)QString::fromAscii_helper("1update()",9);
  local_70 = 0x80000000;
  local_78.field7 = 0;
  FUN_100a1c600(local_60,param_1,&local_68,&local_78);
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_100188480(&local_98,uVar1);
  FUN_10019a8f0(local_90,&local_98);
  CTaskManager::addTaskWatcher(uVar2,local_60,local_90,4);
  CTaskGenericId::~CTaskGenericId(local_90);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007650f4;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1007650f4:
  QVariant::~QVariant(local_40);
  if (local_60[0] != (int *)0x0) {
    LOCK();
    *local_60[0] = *local_60[0] + -1;
    local_21 = *local_60[0] != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_60[0] != (int *)0x0)) {
      operator_delete(local_60[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_78);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
  return;
}

