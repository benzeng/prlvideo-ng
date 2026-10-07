
int FUN_100544b80(undefined8 *param_1,ulong param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined1 local_a8 [96];
  ulong local_48;
  
  if (*(char *)((long)param_1 + 0x11) == '\0') {
    if (param_3 != '\0') {
      return 0;
    }
    iVar1 = _ftruncate(*(int *)*param_1,param_2);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = ___error();
    iVar1 = *piVar2;
    pcVar3 = "Failed to reserve swap file disk space (%d)";
  }
  else {
    iVar1 = _fstat_INODE64(*(undefined4 *)*param_1,local_a8);
    if (iVar1 == 0) {
      if (local_48 < param_2) {
        FUN_1008e3970("","TransMem",0,
                      "File size is less than requested %llu < %llu (using %zu byte filesize)",
                      local_48,param_2,8);
        return 0x54;
      }
      return 0;
    }
    piVar2 = ___error();
    iVar1 = *piVar2;
    pcVar3 = "Failed to query file info (%d)";
  }
  FUN_1008e3970("","TransMem",0,pcVar3,iVar1);
  piVar2 = ___error();
  return *piVar2;
}

