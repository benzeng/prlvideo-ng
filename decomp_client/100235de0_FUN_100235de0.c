
undefined8 * FUN_100235de0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  
  if (param_3 == 10) {
    pcVar3 = "WaitForChangeVmStateTaskFinished";
    iVar2 = 0x20;
  }
  else if (param_3 == 9) {
    pcVar3 = "PerformVmActionOnClose";
    iVar2 = 0x16;
  }
  else {
    if (param_3 != 8) {
      FUN_1002304a0(param_1);
      return param_1;
    }
    pcVar3 = "ConfirmSwitchWithVm";
    iVar2 = 0x13;
  }
  uVar1 = QString::fromAscii_helper(pcVar3,iVar2);
  *param_1 = uVar1;
  return param_1;
}

