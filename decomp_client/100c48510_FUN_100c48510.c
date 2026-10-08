
undefined8 FUN_100c48510(undefined2 *param_1,int param_2,void *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  int iVar5;
  
  if (param_2 + -0xb < (int)param_4) {
    FUN_100c62ee0(4,0x6d,0x6e,"rsa_pk1.c",0x99);
    uVar3 = 0;
  }
  else {
    *param_1 = 0x200;
    pcVar4 = (char *)(param_1 + 1);
    iVar5 = (param_2 + -3) - param_4;
    iVar1 = FUN_100c62100(pcVar4,iVar5);
    uVar3 = 0;
    if (0 < iVar1) {
      if (iVar5 < 1) {
LAB_100c485b7:
        *pcVar4 = '\0';
        _memcpy(pcVar4 + 1,param_3,(ulong)param_4);
        uVar3 = 1;
      }
      else {
        iVar1 = 0;
        do {
          while (*pcVar4 != '\0') {
            pcVar4 = pcVar4 + 1;
            iVar1 = iVar1 + 1;
            if (iVar5 <= iVar1) goto LAB_100c485b7;
          }
          iVar2 = FUN_100c62100(pcVar4,1);
          uVar3 = 0;
        } while (0 < iVar2);
      }
    }
  }
  return uVar3;
}

