
ulong FUN_10071e450(undefined4 param_1,int param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  long local_38;
  
  local_38 = 0;
  pcVar3 = (char *)FUN_100715020();
  if (pcVar3 == (char *)0x0) {
    uVar5 = 0xfffffffd;
    goto LAB_10071e4f2;
  }
  if (param_2 == 0) {
    if (*(int *)(pcVar3 + 0x54) != 0) goto LAB_10071e497;
  }
  else if (4 < *(int *)(pcVar3 + 0x54)) {
LAB_10071e497:
    if (*pcVar3 != '\0') {
      uVar2 = FUN_10071c310(pcVar3,param_1,&local_38);
      lVar1 = local_38;
      if (uVar2 != 0xfffffff4) {
        if (uVar2 == 0) {
          uVar2 = FUN_1007199e0(local_38,1);
          if (uVar2 != 0) {
            FUN_1007230c0(lVar1);
            return (ulong)uVar2;
          }
          FUN_10071de40(lVar1,pcVar3);
          if ((param_2 == 0) || (4 < *(int *)(pcVar3 + 0x54))) {
            *(byte *)(lVar1 + 0x1d4) = *(byte *)(lVar1 + 0x1d4) | 1;
            *param_3 = lVar1;
            return 0;
          }
          FUN_1007230c0(lVar1);
          uVar5 = 0xfffffff9;
          goto LAB_10071e4f2;
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
      goto LAB_10071e4f2;
    }
  }
  uVar5 = 0xfffffff9;
LAB_10071e4f2:
  uVar4 = FUN_10071e690(uVar5,0);
  return uVar4;
}

