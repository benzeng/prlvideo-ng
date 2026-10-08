
int FUN_100b9b0f0(char *param_1,int param_2,long *param_3)

{
  long ***ppplVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  long ****pppplVar5;
  int local_54;
  long local_50;
  undefined *local_48;
  long ***local_40;
  long ***local_38;
  
  *param_3 = 0;
  local_40 = (long ***)&local_40;
  local_38 = (long ***)&local_40;
  iVar2 = FUN_100b9dbb0(param_1,&local_48,&local_50);
  if (iVar2 == 0) {
    if ((local_50 == 0) && (local_48 == PTR_s__1022cfcf0)) {
      sVar4 = _strlen(param_1);
      iVar2 = FUN_100b99010(&local_40,param_1,sVar4 & 0xffffffff,param_2,0,&local_54);
      if ((param_2 == 3) && (local_54 == 1)) {
        iVar2 = FUN_100b9d470(1,"license of class %s %s %s",3,param_1,
                              "is for Desktop/Workstation/old versions of Server");
      }
    }
    else {
      iVar2 = FUN_100b97f00(&local_40,local_48,local_50,param_2);
    }
    if (iVar2 == 0) {
      iVar2 = -7;
      for (pppplVar5 = (long ****)local_40; pppplVar5 != &local_40;
          pppplVar5 = (long ****)*pppplVar5) {
        if (((*(byte *)((long)pppplVar5 + 0x1d4) & 0x10) == 0) &&
           (iVar3 = _strncmp((char *)((long)pppplVar5 + 0x184),param_1,0x50), iVar3 == 0)) {
          ppplVar1 = pppplVar5[1];
          *ppplVar1 = (long **)*pppplVar5;
          (*pppplVar5)[1] = (long **)ppplVar1;
          *param_3 = (long)pppplVar5;
          iVar2 = 0;
          break;
        }
      }
      if (local_48 != PTR_s__1022cfcf0) {
        _free(local_48);
      }
      FUN_100b98100(&local_40);
      if (*param_3 == 0) {
        FUN_100b9d470(iVar2,0);
      }
    }
    else if (local_48 != PTR_s__1022cfcf0) {
      _free(local_48);
    }
  }
  return iVar2;
}

