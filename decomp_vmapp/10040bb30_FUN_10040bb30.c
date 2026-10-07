
undefined1 FUN_10040bb30(long param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 uVar5;
  char *pcVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  local_40 = 0x766d7663;
  local_3c = 0x6f757470;
  if (param_2 != '\0') {
    local_3c = 0x696e7074;
  }
  local_38 = 0;
  local_48 = 4;
  if (param_2 == '\0') {
    lVar4 = *(long *)(param_1 + 0x38);
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 == 0) {
      return 0;
    }
  }
  iVar1 = _AudioObjectGetPropertyData
                    (*(undefined4 *)(lVar4 + 0x40),&local_40,0,0,&local_48,&local_44);
  if (iVar1 == 0) {
    uVar3 = FUN_10040dc30(local_44);
    *param_3 = uVar3;
    FUN_10040dbf0(uVar3);
    *param_4 = extraout_XMM0_Da;
    uVar5 = 1;
  }
  else {
    iVar2 = FUN_1008e38f0(&DAT_101119ca8);
    uVar5 = 0;
    if ((iVar2 != 0) && (0 < DAT_1011b55f8)) {
      pcVar6 = "output";
      if (param_2 != '\0') {
        pcVar6 = "input";
      }
      uVar5 = 0;
      FUN_1008e3970("","PrlAudioCore",1,"Failed to obtain master volume for %s device (%d) ",pcVar6,
                    iVar1);
    }
  }
  return uVar5;
}

