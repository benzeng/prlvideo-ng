
int FUN_100b73b20(long param_1,long param_2,char *param_3,long param_4,uint param_5,int param_6,
                 char param_7)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  undefined1 local_98 [4];
  int local_94;
  
  if (param_5 == 1) {
    pcVar5 = "update";
    if (param_2 == 0) {
      pcVar5 = "upgrade";
    }
  }
  else if (param_5 == 2) {
    pcVar5 = "reset";
  }
  else if (param_5 == 3) {
    pcVar5 = "report";
  }
  else {
    pcVar5 = (char *)0x0;
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "!\"Invalid InstalledLicOperation\"","VzLicense.cpp",0x7cd,"convertToCString");
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  FUN_100b94d10(local_98,0,0,FUN_100b73130);
  if ((param_4 != 0) && (iVar1 = FUN_100b73220(), iVar1 != 0)) goto LAB_100b73d3c;
  if (*(int *)(param_1 + 0x128) == 0) {
    if ((param_5 & 0xfffffffe) == 2) {
      if (param_2 == 0) {
        FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","serial","VzLicense.cpp",
                      0x7f2,"start_installed_lic_operation");
        iVar1 = -1;
        goto LAB_100b73d3c;
      }
      if (param_5 == 2) {
        iVar1 = FUN_100b95830();
      }
      else {
        iVar1 = FUN_100b95d30(param_2,local_98);
      }
    }
    else if (param_2 == 0) {
      iVar1 = FUN_100b94f80(param_3,local_98,0,0,param_6);
    }
    else {
      iVar1 = FUN_100b95810(param_2);
    }
    if (iVar1 == 0) {
      do {
        iVar1 = 0;
        if (local_94 == 6) break;
        if (*(int *)(param_1 + 0x128) != 0) goto LAB_100b73d19;
        iVar1 = FUN_100b95e60(local_98);
        _usleep(50000);
      } while (iVar1 == 0);
    }
    if (*(int *)(param_1 + 0x128) == 0) {
      if (local_94 == 6) {
        if ((param_3 == (char *)0x0) || (param_6 == 0)) {
          if (param_5 == 2) goto LAB_100b73e83;
          if (DAT_10230ffd0 < 3) goto LAB_100b73d3c;
LAB_100b73f3f:
          pcVar3 = "License was %s successfully.";
        }
        else {
          if (DAT_10230ffd0 < 3) goto LAB_100b73d3c;
          pcVar3 = "Upgrade for license %s is allowed.";
          pcVar5 = param_3;
        }
        FUN_100df99c0("","License",3,pcVar3,pcVar5);
      }
      else {
        if ((iVar1 == 1) && (local_94 == 5)) {
          uVar2 = FUN_100b9d570();
          FUN_100df99c0("","License",0,"Operation failed: %s.",uVar2);
          FUN_100b738e0();
          iVar1 = 1;
        }
        else {
          iVar1 = FUN_100b73760();
        }
        if ((param_5 != 2) || (param_7 == '\0')) goto LAB_100b73d3c;
        FUN_100df99c0("","License",0,"Error will be skipped by user request.");
LAB_100b73e83:
        cVar4 = '\x05';
        if (*(int *)(param_1 + 0x120) != 7) {
          cVar4 = (*(int *)(param_1 + 0x120) == 8) * '\x04' + '\x01';
        }
        iVar1 = FUN_100b9c480(param_2,cVar4);
        if (iVar1 == 0) {
          iVar1 = FUN_100b93c20();
          if (iVar1 == 0) {
            iVar1 = 0;
            if (DAT_10230ffd0 < 3) goto LAB_100b73d3c;
            iVar1 = 0;
            goto LAB_100b73f3f;
          }
          pcVar5 = "Unable to reinit shared memory storage.";
        }
        else {
          pcVar5 = "Unable to remove license file.";
        }
        FUN_100df99c0("","License",0,pcVar5);
        FUN_100df99c0("","License",0,"Unable to remove license file.");
      }
      goto LAB_100b73d3c;
    }
  }
LAB_100b73d19:
  FUN_100df99c0("","License",0,"Operation cancelled.");
  iVar1 = -0x11;
LAB_100b73d3c:
  FUN_100b94ef0(local_98);
  return iVar1;
}

