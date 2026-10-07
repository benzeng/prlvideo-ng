
void FUN_10025ab50(long *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  
  QTime::start();
  if ((param_1 != (long *)0x0) &&
     (plVar5 = (long *)___dynamic_cast(param_1,&PTR_vtable_100baea70,&PTR_vtable_100bae8f0,
                                       0xfffffffffffffffe), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
    (**(code **)(*plVar5 + 0x38))(plVar5);
    FUN_100257ee0(plVar5);
  }
  QMutex::lock();
  plVar5 = (long *)param_1[3];
  if (plVar5 != (long *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  QMutex::unlock();
  QMutex::lock();
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  plVar6 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar6 = (long *)plVar5[2];
  }
  uVar2 = (**(code **)(*plVar6 + 0x68))();
  if (uVar2 < 0x15) {
    pcVar7 = (&PTR_s_GENERIC_100baea80)[uVar2];
  }
  else {
    pcVar7 = "UNKNOWN";
  }
  iVar3 = CVmDevice::getIndex();
  uVar4 = QTime::elapsed();
  if (iVar3 == -1) {
    FUN_1008e3970("","LocalDevices",0,"[Profile] %s termination time is %u msecs",pcVar7);
  }
  else {
    FUN_1008e3970("","LocalDevices",0,"[Profile] %s %u termination time is %u msecs",pcVar7,iVar3,
                  uVar4);
  }
  QMutex::unlock();
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    lVar1 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return;
}

