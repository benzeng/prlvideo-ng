
undefined8 FUN_100559170(long *param_1,uint param_2,undefined1 param_3)

{
  ulong uVar1;
  
  QMutex::lock();
  if (param_1[2] == 0) {
    FUN_1008e3970("","TransMem",0,"CSnapshotEngineCompressed::process_block() stopped");
  }
  else {
    uVar1 = (ulong)param_2 / (ulong)*(uint *)(param_1[2] + 0x24);
    if ((*(uint *)(param_1[0xf] + (uVar1 >> 5) * 4) >> ((byte)uVar1 & 0x1f) & 1) == 0) {
      (**(code **)(*param_1 + 0x50))(param_1,uVar1,param_3);
      QWaitCondition::wakeAll();
      while ((param_1[2] != 0 &&
             ((*(uint *)(param_1[0xf] + (uVar1 >> 5) * 4) & 1 << ((byte)uVar1 & 0x1f)) == 0))) {
        QWaitCondition::wait((QMutex *)(param_1 + 0xe),(ulong)(param_1 + 10) & 0xfffffffffffffffe);
      }
    }
  }
  QMutex::unlock();
  return 1;
}

