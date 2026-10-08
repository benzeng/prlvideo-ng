
ulong FUN_100c8dbd0(char *param_1,ulong param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  
  uVar6 = param_2 & 0xffffffff;
  if (param_4 == (char *)0x0) {
    pcVar3 = (char *)FUN_100c67270();
    pcVar5 = "Enter PEM pass phrase:";
    if (pcVar3 != (char *)0x0) {
      pcVar5 = pcVar3;
    }
    while (iVar1 = FUN_100c672b0(param_1,4,uVar6,pcVar5,param_3), iVar1 == 0) {
      uVar4 = _strlen(param_1);
      if (3 < (int)uVar4) goto LAB_100c8dcac;
      _fprintf(*(FILE **)PTR____stderrp_1021e1848,
               "phrase is too short, needs to be at least %d chars\n",4);
    }
    FUN_100c62ee0(9,100,0x6d,"pem_lib.c",0x6e);
    ___bzero(param_1,uVar6);
    uVar4 = 0xffffffff;
  }
  else {
    sVar2 = _strlen(param_4);
    uVar4 = sVar2 & 0xffffffff;
    if ((int)param_2 < (int)sVar2) {
      uVar4 = uVar6;
    }
    _memcpy(param_1,param_4,(long)(int)uVar4);
  }
LAB_100c8dcac:
  return uVar4 & 0xffffffff;
}

