
void FUN_100a3a790(long param_1,QString *param_2)

{
  int iVar1;
  undefined8 uVar2;
  CTaskGenericId local_90 [24];
  QVariant local_78;
  QArrayData *local_68;
  int *local_60 [4];
  QVariant local_40 [2];
  undefined1 local_21;
  
  if (*(char *)(param_1 + 0x70) != '\0') {
    uVar2 = FUN_100152280();
    uVar2 = FUN_100154930(uVar2,param_2 + 1,param_2);
    iVar1 = FUN_10018f860(uVar2);
    if (iVar1 == 8) {
      FUN_1000341d0(param_1 + 0x78,param_2);
      uVar2 = CTaskManager::instance();
      local_68 = (QArrayData *)QString::fromAscii_helper("onVmDesktopOpening",0x12);
      QVariant::QVariant(&local_78,param_2);
      FUN_100a1c6b0(local_60,&local_68,param_1,&local_78);
      FUN_1001d3460(local_90,param_2);
      CTaskManager::addTaskWatcher(uVar2,local_60,local_90,0x22);
      CTaskGenericId::~CTaskGenericId(local_90);
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
      QVariant::~QVariant(&local_78);
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
    }
  }
  return;
}

