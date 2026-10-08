
void FUN_100080660(long param_1,QString *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  CTaskGenericId local_98 [24];
  QVariant local_80;
  QArrayData *local_70;
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  pvVar2 = operator_new(0x18);
  FUN_10008b800(pvVar2,param_2);
  FUN_10007f510(uVar1,pvVar2);
  uVar3 = CTaskManager::instance();
  local_70 = (QArrayData *)QString::fromAscii_helper("onVmRegistrationFailed",0x16);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  QVariant::QVariant(&local_80,param_2);
  FUN_100a1c6b0(local_68,&local_70,uVar1,&local_80);
  FUN_100081140(local_98,param_2 + 2);
  CTaskManager::addTaskWatcher(uVar3,local_68,local_98,0x10);
  CTaskGenericId::~CTaskGenericId(local_98);
  QVariant::~QVariant(local_48);
  if (local_68[0] != (int *)0x0) {
    LOCK();
    *local_68[0] = *local_68[0] + -1;
    local_29 = *local_68[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_68[0] != (int *)0x0)) {
      operator_delete(local_68[0]);
    }
  }
  QVariant::~QVariant(&local_80);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_70,2,8);
  }
  return;
}

