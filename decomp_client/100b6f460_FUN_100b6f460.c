
int FUN_100b6f460(undefined8 param_1,int param_2,undefined4 param_3,char *param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  char *pcVar4;
  long ***ppplVar5;
  long **local_40;
  long **local_38;
  
  local_40 = (long **)&local_40;
  local_38 = (long **)&local_40;
  if (2 < DAT_10230ffd0) {
    pcVar4 = "installed";
    if (param_2 != 0) {
      pcVar4 = "active";
    }
    FUN_100df99c0("","License",3,"Searching for %s licenses...",pcVar4);
  }
  if (param_2 == 0) {
    iVar1 = FUN_100b9b560(&local_40,param_3);
  }
  else {
    iVar1 = FUN_100b9b280(&local_40,param_3);
  }
  if ((iVar1 == -7) || (iVar1 == 0)) {
    ppplVar5 = (long ***)local_40;
    if ((long ***)local_40 == &local_40) {
      if (param_2 == 0) {
        if (DAT_10230ffd0 < 3) goto LAB_100b6f5e0;
        uVar3 = FUN_100ba1750(param_3);
        pcVar4 = "No licenses of class %s found.";
      }
      else {
        if (DAT_10230ffd0 < 3) goto LAB_100b6f5e0;
        uVar3 = FUN_100ba1750(param_3);
        pcVar4 = "No active licenses of class %s found.";
      }
      FUN_100df99c0("","License",3,pcVar4,uVar3);
    }
    else {
      do {
        FUN_100b91b20(ppplVar5);
        iVar1 = FUN_100b91c30(ppplVar5,param_5,param_6);
        if (iVar1 != 0) break;
        if (param_4 != (char *)0x0) {
          sVar2 = _strlen(param_4);
          _snprintf(param_4,sVar2 - 1,"%s",(long)ppplVar5 + 0x184);
        }
        ppplVar5 = (long ***)*ppplVar5;
        iVar1 = 0;
      } while (ppplVar5 != &local_40);
      FUN_100b98100(&local_40);
    }
  }
LAB_100b6f5e0:
  if ((iVar1 != 0) && (2 < DAT_10230ffd0)) {
    uVar3 = FUN_100b9d570();
    FUN_100df99c0("","License",3,"Process failed: %s.",uVar3);
  }
  return iVar1;
}

