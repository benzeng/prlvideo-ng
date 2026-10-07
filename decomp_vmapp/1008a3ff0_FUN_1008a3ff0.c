
undefined4 FUN_1008a3ff0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  uVar6 = 0;
  pcVar3 = (char *)FUN_1008b7550(param_2,0,0);
  if (pcVar3 != (char *)0x0) {
    if (*pcVar3 != '\0') {
      pcVar7 = pcVar3 + 1;
      pcVar8 = pcVar3;
      pcVar9 = pcVar7;
      do {
        cVar1 = *pcVar9;
        if (cVar1 == '\0') {
LAB_1008a4090:
          iVar5 = (int)pcVar9 - (int)pcVar7;
          iVar2 = FUN_10087d780(param_1,pcVar7,iVar5);
          if (iVar2 != iVar5) {
LAB_1008a40f0:
            FUN_100887ce0(0xb,0x75,7,"t_x509.c",0x218);
            uVar6 = 0;
LAB_1008a4113:
            FUN_10081e1a0(pcVar3);
            return uVar6;
          }
          pcVar7 = pcVar9 + 1;
          if (*pcVar9 == '\0') {
            cVar1 = '\0';
          }
          else {
            iVar2 = FUN_10087d780(param_1,", ",2);
            if (iVar2 != 2) goto LAB_1008a40f0;
            cVar1 = *pcVar9;
          }
LAB_1008a40d2:
          uVar6 = 1;
          if (cVar1 == '\0') goto LAB_1008a4113;
        }
        else {
          if (cVar1 != '/') goto LAB_1008a40d2;
          if (((byte)(pcVar9[1] + 0xbfU) < 0x1a) &&
             ((pcVar9[2] == '=' || (((byte)(pcVar9[2] + 0xbfU) < 0x1a && (pcVar9[3] == '='))))))
          goto LAB_1008a4090;
        }
        pcVar4 = pcVar8 + 2;
        pcVar8 = pcVar9;
        pcVar9 = pcVar4;
      } while( true );
    }
    FUN_10081e1a0(pcVar3);
    uVar6 = 1;
  }
  return uVar6;
}

