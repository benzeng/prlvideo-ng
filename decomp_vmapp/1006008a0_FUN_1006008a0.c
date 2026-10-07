
int FUN_1006008a0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  
  if (*(char *)(param_2 + 0x1c) == '\0') {
    iVar1 = FUN_100600e60();
    if (-1 < iVar1) {
      return iVar1;
    }
    pcVar2 = "Diff processing failed, err = 0x%X";
  }
  else {
    iVar1 = FUN_100600910(param_1,param_3,param_4);
    if (-1 < iVar1) {
      return iVar1;
    }
    pcVar2 = "Add all storages failed, err = 0x%X";
  }
  FUN_1008e3970("Backup","vdisk",0,pcVar2,iVar1);
  return iVar1;
}

