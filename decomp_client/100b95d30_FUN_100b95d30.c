
ulong FUN_100b95d30(char *param_1,undefined4 *param_2)

{
  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 local_30;
  
  if (((param_1 == (char *)0x0) || (param_2 == (undefined4 *)0x0)) || (param_2[1] != 1)) {
    uVar4 = 0xfffffffd;
  }
  else {
    if (*(long *)(param_2 + 0x12) != 0) {
      uVar1 = FUN_100bc1030(DAT_1022cf508);
      uVar2 = (ulong)uVar1;
      if (uVar1 == 0) {
        uVar1 = FUN_100b9b0f0(param_1,0,&local_30);
        uVar2 = (ulong)uVar1;
        if (uVar1 == 0) {
          uVar1 = FUN_100b95ad0(param_2,local_30);
          uVar2 = (ulong)uVar1;
          if (uVar1 == 0) {
            FUN_100ba1ea0(local_30);
            pcVar3 = _strdup(param_1);
            *(char **)(param_2 + 6) = pcVar3;
            if (pcVar3 == (char *)0x0) {
              uVar1 = FUN_100b9d470(0xfffffffe,0);
              FUN_100bc10f0(DAT_1022cf508);
              if (uVar1 != 0) {
                return (ulong)uVar1;
              }
            }
            else {
              *param_2 = 5;
              FUN_100bc10f0(DAT_1022cf508);
            }
            uVar1 = FUN_100b95260(param_2);
            return (ulong)uVar1;
          }
          FUN_100b9d470(uVar2,0);
          FUN_100ba1ea0(local_30);
        }
        FUN_100bc10f0(DAT_1022cf508);
      }
      return uVar2;
    }
    uVar4 = 0xfffffffe;
  }
  uVar2 = FUN_100b9d470(uVar4,0);
  return uVar2;
}

