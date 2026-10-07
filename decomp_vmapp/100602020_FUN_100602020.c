
int FUN_100602020(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_1005fd1f0();
  if (iVar1 < 0) {
    pcVar2 = "init failed, err = 0x%X";
  }
  else {
    uVar3 = 0;
    if ((param_3 & 4) != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x28);
    }
    iVar1 = FUN_1005b37b0(uVar3,*param_1);
    if (-1 < iVar1) {
      if ((param_3 & 4) == 0) {
        return 0;
      }
      iVar1 = FUN_100602140(param_1,param_2);
      if (-1 < iVar1) {
        iVar1 = FUN_100602440(param_1,param_2 + 0x38,*(ulong *)(param_2 + 0x28) ^ 0xff);
        if (-1 < iVar1) {
          return 0;
        }
        FUN_1008e3970("Backup","vdisk",0,"Building of absent caches failed, err = 0x%X",iVar1);
        return iVar1;
      }
      FUN_1008e3970("Backup","vdisk",0,"Dirty bit clearing failed, err = 0x%X",iVar1);
      return iVar1;
    }
    pcVar2 = "Merging \'current\' and \'backup\' failed, err = 0x%X";
  }
  FUN_1008e3970("Backup","vdisk",0,pcVar2,iVar1);
  return iVar1;
}

