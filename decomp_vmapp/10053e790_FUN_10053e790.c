
undefined1 FUN_10053e790(undefined8 *param_1,undefined4 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined1 local_34 [4];
  
  QMutex::lock();
  if (*(char *)(param_1 + 4) == '\0') {
    cVar3 = FUN_10053e980(param_1,param_2,param_3);
    if (cVar3 == '\0') {
      plVar4 = operator_new(0x80);
      FUN_10053a020(plVar4,param_1,*(undefined8 *)*param_1,param_2);
      plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      bVar7 = plVar5 == (long *)0x0;
      if (bVar7) {
        plVar5 = (long *)0x0;
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
      else {
        *(undefined4 *)(plVar5 + 1) = 1;
        plVar5[2] = (long)plVar4;
        *plVar5 = (long)&PTR_FUN_10111d7c8;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      plVar4 = (long *)*param_3;
      *param_3 = (long)plVar5;
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      if (!bVar7) {
        LOCK();
        plVar4 = plVar5 + 1;
        lVar2 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      if (*param_3 == 0) {
        uVar6 = 0;
      }
      else if (*(long *)(*param_3 + 0x10) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
        FUN_1005412d0(param_1 + 2,local_34,param_3);
      }
    }
    else {
      cVar3 = QThread::isRunning();
      uVar6 = 1;
      if (cVar3 != '\0') {
        uVar6 = 0;
        FUN_1008e3970("","InvSharingHost",0,"worker with id = %u already exists and is running",
                      param_2);
      }
    }
  }
  else {
    uVar6 = 0;
  }
  QMutex::unlock();
  return uVar6;
}

