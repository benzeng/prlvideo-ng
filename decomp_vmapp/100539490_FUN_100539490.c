
bool FUN_100539490(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  long *local_50;
  QMutex local_48;
  QMutex local_40;
  char local_38;
  
  plVar3 = operator_new(0x18);
  *(undefined4 *)(plVar3 + 1) = 1;
  plVar3[2] = param_2;
  *plVar3 = (long)&PTR_FUN_10111d788;
  QMutex::QMutex(&local_48,0);
  QWaitCondition::QWaitCondition((QWaitCondition *)&local_40);
  QMutex::lock();
  if (plVar3 != (long *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_50 = plVar3;
  lVar4 = FUN_100536ff0(param_1,&local_50,FUN_100539fe0,&local_48);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  bVar6 = false;
  lVar5 = 0;
  if (lVar4 != 0) {
    cVar2 = QWaitCondition::wait(&local_40,(ulong)&local_48);
    if (cVar2 == '\0') {
      bVar6 = false;
      lVar5 = lVar4;
    }
    else {
      bVar6 = local_38 != '\0';
      lVar5 = 0;
    }
  }
  QMutex::unlock();
  if (lVar5 != 0) {
    FUN_100537230(param_1,lVar5);
  }
  QWaitCondition::~QWaitCondition((QWaitCondition *)&local_40);
  QMutex::~QMutex(&local_48);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return bVar6;
}

