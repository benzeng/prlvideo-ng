
undefined8 FUN_10080cd50(char *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  size_t sVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  char *pcVar8;
  
  lVar3 = FUN_100884e10();
  if (lVar3 == 0) {
    FUN_100887ce0(0x14,0x135,0x16a,"d1_srtp.c",0xb1);
    uVar6 = 1;
  }
  else {
    do {
      pcVar4 = _strchr(param_1,0x3a);
      if (pcVar4 == (char *)0x0) {
        sVar5 = _strlen(param_1);
        uVar1 = (uint)sVar5;
      }
      else {
        uVar1 = (int)pcVar4 - (int)param_1;
      }
      if (PTR_s_SRTP_AES128_CM_SHA1_80_1011a92a0 == (undefined *)0x0) {
LAB_10080ce2f:
        FUN_100887ce0(0x14,0x135,0x16c,"d1_srtp.c",0xc4);
LAB_10080ce54:
        FUN_100884dd0(lVar3);
        return 1;
      }
      ppuVar7 = &PTR_s_SRTP_AES128_CM_SHA1_80_1011a92a0;
      pcVar8 = PTR_s_SRTP_AES128_CM_SHA1_80_1011a92a0;
      while ((sVar5 = _strlen(pcVar8), uVar1 != sVar5 ||
             (iVar2 = _strncmp(pcVar8,param_1,(ulong)uVar1), iVar2 != 0))) {
        pcVar8 = ppuVar7[2];
        ppuVar7 = ppuVar7 + 2;
        if (pcVar8 == (char *)0x0) goto LAB_10080ce2f;
      }
      iVar2 = FUN_100885160(lVar3,ppuVar7);
      if (-1 < iVar2) {
        FUN_100887ce0(0x14,0x135,0x161,"d1_srtp.c",0xbc);
        goto LAB_10080ce54;
      }
      FUN_1008852e0(lVar3,ppuVar7);
      param_1 = pcVar4 + 1;
    } while (pcVar4 != (char *)0x0);
    *param_2 = lVar3;
    uVar6 = 0;
  }
  return uVar6;
}

