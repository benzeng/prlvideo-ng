
void FUN_1002ad090(long *param_1)

{
  long *plVar1;
  int *piVar2;
  
  if (((param_1[6] != 0) && (*(int *)(param_1[6] + 4) != 0)) && (param_1[7] != 0)) {
    plVar1 = param_1 + 6;
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",2,"Precached license activate online timeout.");
    }
    CSdkRequest::cancel();
    piVar2 = (int *)*plVar1;
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((*piVar2 == 0) && ((void *)*plVar1 != (void *)0x0)) {
        operator_delete((void *)*plVar1);
      }
      param_1[7] = 0;
      *plVar1 = 0;
    }
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
  }
  return;
}

