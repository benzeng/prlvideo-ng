
bool FUN_100356ac0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  CTaskGenericId local_48 [24];
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_1);
  if (lVar2 != 0) {
    uVar1 = CTaskManager::instance();
    FUN_1001d3460(local_48,param_1);
    CTaskManager::addTaskWatcher(uVar1,param_2,local_48,4);
    CTaskGenericId::~CTaskGenericId(local_48);
    uVar1 = FUN_10018c280(lVar2);
    FUN_10031a440(uVar1,0);
  }
  return lVar2 != 0;
}

