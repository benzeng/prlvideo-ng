
int FUN_100581e70(long param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_100582620();
  if (iVar1 < 0) {
    pcVar2 = "Commit failed! 0x%x";
  }
  else {
    if (*(int *)(param_1 + 0x60) == 1) {
      (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x10) + 0xe8))();
    }
    iVar1 = (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x10) + 0x18))();
    if (-1 < iVar1) {
      *(undefined1 *)(param_1 + 100) = 1;
      return 0;
    }
    pcVar2 = "SaveXML failed with code 0x%x";
  }
  FUN_1008e3970("","vdisk",0,pcVar2,iVar1);
  return iVar1;
}

