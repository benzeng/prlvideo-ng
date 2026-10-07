
uint FUN_10086d1d0(void *param_1,int param_2,char *param_3,int param_4,int param_5)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if ((param_4 + 1 == param_5) && (*param_3 == '\x01')) {
    pcVar1 = param_3 + 1;
    iVar2 = 0;
    pcVar4 = pcVar1;
    if (1 < param_4) {
      do {
        if (*pcVar4 != -1) {
          if (*pcVar4 != '\0') {
            uVar3 = 0x66;
            uVar5 = 0x74;
            goto LAB_10086d240;
          }
          pcVar1 = param_3 + 2;
          break;
        }
        iVar2 = iVar2 + 1;
        pcVar1 = param_3 + 2;
        param_3 = pcVar4;
        pcVar4 = pcVar1;
      } while (iVar2 < param_4 + -1);
    }
    if (iVar2 == param_4 + -1) {
      uVar3 = 0x71;
      uVar5 = 0x7d;
    }
    else if (iVar2 < 8) {
      uVar3 = 0x67;
      uVar5 = 0x83;
    }
    else {
      uVar6 = (param_4 + -2) - iVar2;
      if ((int)uVar6 <= param_2) {
        _memcpy(param_1,pcVar1,(ulong)uVar6);
        return uVar6;
      }
      uVar3 = 0x6d;
      uVar5 = 0x89;
    }
  }
  else {
    uVar3 = 0x6a;
    uVar5 = 0x67;
  }
LAB_10086d240:
  FUN_100887ce0(4,0x70,uVar3,"rsa_pk1.c",uVar5);
  return 0xffffffff;
}

