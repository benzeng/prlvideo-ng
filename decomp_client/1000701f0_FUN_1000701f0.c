
void FUN_1000701f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = _GetEventClass(param_2);
  if (iVar1 == 0x6d656e75) {
    iVar1 = _GetEventKind(param_2);
    if (iVar1 == 1) {
      if (param_3 != 0) {
        *(int *)(param_3 + 0x30) = *(int *)(param_3 + 0x30) + 1;
        FUN_100850c20(param_3);
      }
    }
    else {
      iVar1 = _GetEventKind(param_2);
      if ((iVar1 == 2) && (param_3 != 0)) {
        if (0 < *(int *)(param_3 + 0x30)) {
          *(int *)(param_3 + 0x30) = *(int *)(param_3 + 0x30) + -1;
        }
        FUN_100850c40(param_3);
      }
    }
  }
  _CallNextEventHandler(param_1,param_2);
  return;
}

