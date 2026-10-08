
ulong FUN_100b9d230(undefined4 param_1,int param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  long local_38;
  
  local_38 = 0;
  pcVar3 = (char *)FUN_100b93e00();
  if (pcVar3 == (char *)0x0) {
    uVar5 = 0xfffffffd;
    goto LAB_100b9d2d2;
  }
  if (param_2 == 0) {
    if (*(int *)(pcVar3 + 0x54) != 0) goto LAB_100b9d277;
  }
  else if (4 < *(int *)(pcVar3 + 0x54)) {
LAB_100b9d277:
    if (*pcVar3 != '\0') {
      uVar2 = FUN_100b9b0f0(pcVar3,param_1,&local_38);
      lVar1 = local_38;
      if (uVar2 != 0xfffffff4) {
        if (uVar2 == 0) {
          uVar2 = FUN_100b987c0(local_38,1);
          if (uVar2 != 0) {
            FUN_100ba1ea0(lVar1);
            return (ulong)uVar2;
          }
          FUN_100b9cc20(lVar1,pcVar3);
          if ((param_2 == 0) || (4 < *(int *)(pcVar3 + 0x54))) {
            *(byte *)(lVar1 + 0x1d4) = *(byte *)(lVar1 + 0x1d4) | 1;
            *param_3 = lVar1;
            return 0;
          }
          FUN_100ba1ea0(lVar1);
          uVar5 = 0xfffffff9;
          goto LAB_100b9d2d2;
        }
        if (uVar2 != 0xfffffff9) {
          return (ulong)uVar2;
        }
      }
      pcVar3[0x54] = '\0';
      pcVar3[0x55] = '\0';
      pcVar3[0x56] = '\0';
      pcVar3[0x57] = '\0';
      uVar5 = 0xfffffff9;
      goto LAB_100b9d2d2;
    }
  }
  uVar5 = 0xfffffff9;
LAB_100b9d2d2:
  uVar4 = FUN_100b9d470(uVar5,0);
  return uVar4;
}

