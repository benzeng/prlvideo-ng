
long FUN_100c59870(char *param_1,int param_2)

{
  size_t *psVar1;
  long lVar2;
  long lVar3;
  size_t sVar4;
  
  if (param_1 == (char *)0x0) {
    FUN_100c62ee0(0x20,0x7e,0x73,"bss_mem.c",0x65);
    lVar3 = 0;
  }
  else {
    if (param_2 < 0) {
      sVar4 = _strlen(param_1);
    }
    else {
      sVar4 = (size_t)param_2;
    }
    lVar2 = FUN_100c58530(&DAT_1023081f0);
    lVar3 = 0;
    if (lVar2 != 0) {
      psVar1 = *(size_t **)(lVar2 + 0x30);
      psVar1[1] = (size_t)param_1;
      *psVar1 = sVar4;
      psVar1[2] = sVar4;
      *(byte *)(lVar2 + 0x21) = *(byte *)(lVar2 + 0x21) | 2;
      *(undefined4 *)(lVar2 + 0x28) = 0;
      lVar3 = lVar2;
    }
  }
  return lVar3;
}

