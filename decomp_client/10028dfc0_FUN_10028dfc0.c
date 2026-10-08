
void FUN_10028dfc0(long *param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  
  if (((param_1[8] != 0) && (*(int *)(param_1[8] + 4) != 0)) && (param_1[9] != 0)) {
    plVar1 = param_1 + 8;
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("[LICENSE]","prl_client_app",2,"Activate online timeout.");
    }
    CSdkRequest::cancel();
    cVar3 = FUN_10061c5c0(param_1[3]);
    if (cVar3 != '\0') {
      *(undefined1 *)(param_1 + 7) = 1;
    }
    piVar2 = (int *)*plVar1;
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((*piVar2 == 0) && ((void *)*plVar1 != (void *)0x0)) {
        operator_delete((void *)*plVar1);
      }
      param_1[9] = 0;
      *plVar1 = 0;
    }
    (**(code **)(*param_1 + 0xb0))(param_1,0);
  }
  return;
}

