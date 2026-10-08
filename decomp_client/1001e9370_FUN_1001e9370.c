
int FUN_1001e9370(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  char *pcVar2;
  int local_1c;
  
  iVar1 = _PrlJob_Wait(param_2,*param_1);
  if (iVar1 < 0) {
    pcVar2 = "PrlJob_Wait() failed with error  %#x";
  }
  else {
    iVar1 = _PrlJob_GetRetCode(param_2,&local_1c);
    if (iVar1 == 0) {
      return local_1c;
    }
    pcVar2 = "PrlJob_GetRetCode() failed with error  %#x";
  }
  FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,pcVar2,iVar1);
  return iVar1;
}

