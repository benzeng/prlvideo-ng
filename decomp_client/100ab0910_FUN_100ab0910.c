
undefined8 FUN_100ab0910(long *param_1)

{
  uint uVar1;
  uint uVar2;
  pthread_t p_Var3;
  __darwin_pthread_handler_rec local_30;
  
  p_Var3 = _pthread_self();
  local_30.__routine = FUN_100ab0a70;
  local_30.__next = p_Var3->__cleanup_stack;
  p_Var3->__cleanup_stack = &local_30;
  do {
    do {
      uVar1 = *(uint *)((long)param_1 + 0x1c);
    } while ((uVar1 & 1) != 0);
    local_30.__arg = param_1;
    if ((uVar1 & 2) == 0) goto LAB_100ab0976;
    LOCK();
    uVar2 = *(uint *)((long)param_1 + 0x1c);
    if (uVar1 == uVar2) {
      *(uint *)((long)param_1 + 0x1c) = uVar1 | 4;
      uVar2 = uVar1;
    }
    UNLOCK();
  } while (uVar2 != uVar1);
  (**(code **)(*param_1 + 0x10))(param_1);
LAB_100ab0976:
  p_Var3->__cleanup_stack = local_30.__next;
  (*local_30.__routine)(local_30.__arg);
  return 0;
}

