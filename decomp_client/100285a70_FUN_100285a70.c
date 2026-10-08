
void FUN_100285a70(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
  QFutureInterfaceBase::waitForResult((int)param_1 + 0xa0);
  lVar2 = QFutureInterfaceBase::mutex();
  if (lVar2 != 0) {
    QMutex::lock();
  }
  iVar1 = QFutureInterfaceBase::resultStoreBase();
  auVar4 = QtPrivate::ResultStoreBase::resultAt(iVar1);
  plVar3 = *(long **)(auVar4._0_8_ + 0x28);
  if (*(int *)(auVar4._0_8_ + 0x20) != 0) {
    plVar3 = (long *)(*plVar3 + *(long *)(*plVar3 + 0x10) + (long)auVar4._8_4_ * 4);
  }
  if (lVar2 != 0) {
    QMutex::unlock();
  }
                    /* WARNING: Could not recover jumptable at 0x000100285b01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,(int)*plVar3);
  return;
}

