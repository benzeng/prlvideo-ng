
undefined8 FUN_10086d570(undefined2 *param_1,int param_2,void *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = (param_2 + -0xb) - param_4;
  if (param_2 + -0xb < (int)param_4) {
    FUN_100887ce0(4,0x6e,0x6e,"rsa_ssl.c",0x49);
    uVar3 = 0;
  }
  else {
    *param_1 = 0x200;
    pcVar4 = (char *)(param_1 + 1);
    iVar1 = FUN_100886f00(pcVar4,iVar5);
    uVar3 = 0;
    if (0 < iVar1) {
      if (iVar5 < 1) {
LAB_10086d607:
        builtin_strncpy(pcVar4,"\x03\x03\x03\x03\x03\x03\x03\x03",9);
        _memcpy(pcVar4 + 9,param_3,(ulong)param_4);
        uVar3 = 1;
      }
      else {
        iVar1 = 0;
        do {
          while (*pcVar4 != '\0') {
            pcVar4 = pcVar4 + 1;
            iVar1 = iVar1 + 1;
            if (iVar5 <= iVar1) goto LAB_10086d607;
          }
          iVar2 = FUN_100886f00(pcVar4,1);
          uVar3 = 0;
        } while (0 < iVar2);
      }
    }
  }
  return uVar3;
}

