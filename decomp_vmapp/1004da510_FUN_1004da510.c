
void FUN_1004da510(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long *local_48;
  long lStack_40;
  long local_38;
  
  *param_1 = &PTR_FUN_100bc3168;
  plVar2 = (long *)param_1[9];
  lStack_40 = param_1[10];
  local_38 = param_1[0xb];
  local_48 = &lStack_40;
  if (local_38 != 0) {
    *(long **)(lStack_40 + 0x10) = &lStack_40;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
    param_1[10] = 0;
    local_48 = plVar2;
    while (plVar2 != &lStack_40) {
      FUN_1004edeb0(*(undefined8 *)(*(long *)(param_1[2] + 0x50) + 0x30),plVar2[5]);
      FUN_1004ee070(plVar2[5],0xf0000000);
      plVar1 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) {
        do {
          plVar1 = (long *)plVar2[2];
          bVar3 = (long *)*plVar1 != plVar2;
          plVar2 = plVar1;
        } while (bVar3);
      }
      else {
        do {
          plVar2 = plVar1;
          plVar1 = (long *)*plVar2;
        } while ((long *)*plVar2 != (long *)0x0);
      }
    }
  }
  FUN_1004dc070(&local_48,lStack_40);
  FUN_1004dc070(param_1 + 9,param_1[10]);
  QMutex::~QMutex((QMutex *)(param_1 + 8));
  FUN_1004e5d70(param_1);
  return;
}

