
uint FUN_10086d640(void *param_1,int param_2,char *param_3,int param_4,int param_5)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if (param_4 < 10) {
    uVar3 = 0x6f;
    uVar5 = 0x70;
  }
  else if ((param_4 + 1 == param_5) && (*param_3 == '\x02')) {
    iVar2 = 0;
    pcVar1 = param_3 + 1;
    do {
      pcVar4 = param_3;
      param_3 = pcVar1;
      if (*param_3 == '\0') break;
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar4 + 2;
    } while (iVar2 < param_4 + -1);
    if ((iVar2 == param_4 + -1) || (iVar2 < 8)) {
      uVar3 = 0x71;
      uVar5 = 0x80;
    }
    else if (((((pcVar4[-7] == '\x03') && (pcVar4[-6] == '\x03')) && (pcVar4[-5] == '\x03')) &&
             ((pcVar4[-4] == '\x03' && (pcVar4[-3] == '\x03')))) &&
            ((pcVar4[-2] == '\x03' && ((pcVar4[-1] == '\x03' && (*pcVar4 == '\x03')))))) {
      uVar3 = 0x73;
      uVar5 = 0x88;
    }
    else {
      uVar6 = (param_4 + -2) - iVar2;
      if ((int)uVar6 <= param_2) {
        _memcpy(param_1,pcVar4 + 2,(ulong)uVar6);
        return uVar6;
      }
      uVar3 = 0x6d;
      uVar5 = 0x8f;
    }
  }
  else {
    uVar3 = 0x6b;
    uVar5 = 0x74;
  }
  FUN_100887ce0(4,0x72,uVar3,"rsa_ssl.c",uVar5);
  return 0xffffffff;
}

