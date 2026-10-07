
void FUN_1000fb420(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *local_38;
  
  QMutex::lock();
  *(undefined1 *)(param_1 + 0x48) = 1;
  QWaitCondition::wakeOne();
  while( true ) {
    while( true ) {
      uVar3 = 0;
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
      }
      lVar2 = FUN_100797860(uVar3,(long *)(param_1 + 0x28));
      if (lVar2 == 0) break;
      FUN_1008e3970("","vm",0,"handle new job");
      FUN_1000fb340(param_1,lVar2);
      uVar3 = 0;
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
      }
      local_38 = *(long **)(param_1 + 0x28);
      if (local_38 != (long *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      FUN_1007978e0(uVar3,&local_38,lVar2);
      if (local_38 != (long *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*local_38 + 0x10))();
        }
      }
    }
    if (*(char *)(param_1 + 0x48) == '\0') break;
    FUN_1008e3970("","vm",0,"I\'m alive");
    QWaitCondition::wait((QMutex *)(param_1 + 0x50),param_1 + 0x58);
  }
  FUN_1008e3970("","vm",0,"Goodbye");
  QMutex::unlock();
  return;
}

