
undefined8 FUN_100761b20(undefined8 param_1,uint *param_2,char param_3,undefined1 *param_4)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 local_b8 [4];
  ushort local_b4;
  
  if (param_3 == '\0') {
    iVar1 = _lstat_INODE64(param_1,local_b8);
  }
  else {
    iVar1 = _stat_INODE64();
  }
  if (iVar1 == 0) {
    *param_2 = (uint)local_b4;
    uVar4 = CONCAT71((uint7)(byte)(local_b4 >> 8),1);
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 1;
    }
  }
  else {
    piVar2 = ___error();
    if (*piVar2 != 2) {
      piVar2 = ___error();
      if (*piVar2 != 0x14) {
        iVar1 = FUN_1008e38f0(&DAT_1011a5700);
        if (iVar1 != 0) {
          pcVar5 = "lstat";
          if (param_3 != '\0') {
            pcVar5 = "stat";
          }
          piVar2 = ___error();
          pcVar3 = _strerror(*piVar2);
          FUN_1008e3970("","HostFile",0,"CHostFile::get_mode(%s) %s failed: %s",param_1,pcVar5,
                        pcVar3);
        }
      }
    }
    if (param_4 == (undefined1 *)0x0) {
      uVar4 = 0;
    }
    else {
      piVar2 = ___error();
      *param_4 = *piVar2 != 0x14;
      uVar4 = 0;
    }
  }
  return uVar4;
}

