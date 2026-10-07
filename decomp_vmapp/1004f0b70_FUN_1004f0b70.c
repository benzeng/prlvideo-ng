
undefined4 FUN_1004f0b70(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  size_t sVar4;
  undefined4 uVar5;
  
  iVar1 = _open(param_2,0xb29,0x1a4);
  uVar5 = 0xffffffff;
  if (iVar1 != -1) {
    sVar2 = _strlen(param_1);
    pcVar3 = _malloc(sVar2 + 0x2b);
    uVar5 = 0xffffffff;
    if (pcVar3 != (char *)0x0) {
      _snprintf(pcVar3,sVar2 + 0x2b,"%s\r\n%s\r\n","{EC3517F2-CD97-4b20-A2F9-C8F326BB206A}",param_1)
      ;
      sVar4 = _write(iVar1,pcVar3,sVar2 + 0x2a);
      _free(pcVar3);
      uVar5 = 0xffffffff;
      if (sVar4 == sVar2 + 0x2a) {
        uVar5 = 0;
      }
    }
    _close(iVar1);
  }
  return uVar5;
}

