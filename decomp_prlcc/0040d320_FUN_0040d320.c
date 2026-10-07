
void FUN_0040d320(void)

{
  undefined *puVar1;
  __pid_t _Var2;
  int *piVar3;
  undefined8 *puVar4;
  int __pid;
  void *local_20;
  
  DAT_0061da40 = 0;
  local_20 = (void *)0x0;
  if (DAT_0061da48 != 0) {
    pthread_join(DAT_0061da48,&local_20);
  }
  puVar1 = PTR___log_level_0061bd30;
  puVar4 = &DAT_0061d9c0;
  do {
    __pid = *(int *)(puVar4 + 3);
    if (0 < __pid) {
      if (1 < *(int *)puVar1) {
        FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Stopping subtool by pid %u",__pid);
        __pid = *(int *)(puVar4 + 3);
      }
      kill(__pid,0xf);
    }
    puVar4 = puVar4 + 4;
  } while (puVar4 != (undefined8 *)&DAT_0061da40);
  do {
    _Var2 = waitpid(-1,(int *)0x0,0);
    if (_Var2 == 0) {
      return;
    }
    piVar3 = __errno_location();
  } while (*piVar3 != 10);
  return;
}

