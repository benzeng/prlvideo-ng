
undefined8 FUN_0040b490(pthread_t *param_1,int param_2)

{
  undefined8 uVar1;
  sigaction sStack_158;
  sigaction local_b8;
  void *local_20;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    DAT_0061d868 = 1;
    local_20 = (void *)0x0;
    if (param_2 == 0) {
      pthread_join(*param_1,&local_20);
      *param_1 = 0;
      uVar1 = 1;
    }
    else {
      memset(&local_b8,0,0x98);
      memset(&sStack_158,0,0x98);
      local_b8.__sigaction_handler.sa_handler = FUN_0040b3b0;
      sigemptyset(&local_b8.sa_mask);
      local_b8.sa_flags = 0;
      sigaction(2,&local_b8,&sStack_158);
      pthread_kill(*param_1,2);
      pthread_join(*param_1,&local_20);
      *param_1 = 0;
      sigaction(2,&sStack_158,(sigaction *)0x0);
      uVar1 = 1;
    }
  }
  return uVar1;
}

