
void FUN_10026ce80(long param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x68))();
    if (iVar1 == 0) {
      (**(code **)(**(long **)(param_1 + 0x28) + 0x58))();
    }
    else {
      (**(code **)(**(long **)(param_1 + 0x28) + 0x60))();
      iVar3 = iVar1;
    }
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    pcVar2 = "No action";
  }
  else {
    pcVar2 = "Action completed";
  }
  FUN_1008e3970("","LocalDevices",0,"[DVDROM] Eject key pressed. Tray status %d %s",iVar3,pcVar2);
  return;
}

