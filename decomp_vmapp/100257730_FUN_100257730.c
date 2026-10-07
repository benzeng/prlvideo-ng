
void FUN_100257730(undefined8 param_1,int param_2)

{
  int iVar1;
  pthread_t p_Var2;
  sched_param local_20;
  int local_14;
  
  QThread::setPriority();
  if (5 < param_2) {
    p_Var2 = _pthread_self();
    iVar1 = _pthread_getschedparam(p_Var2,&local_14,&local_20);
    if (iVar1 == 0) {
      do {
        local_20.sched_priority = local_20.sched_priority + 1;
        p_Var2 = _pthread_self();
        iVar1 = _pthread_setschedparam(p_Var2,local_14,&local_20);
      } while (iVar1 == 0);
    }
    else {
      FUN_1008e3970("","LocalDevices",0,"Get thread parameters failed.");
    }
  }
  return;
}

