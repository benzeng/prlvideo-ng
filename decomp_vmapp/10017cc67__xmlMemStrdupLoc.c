
char * _xmlMemStrdupLoc(char *str,char *file,int line)

{
  char cVar1;
  xmlGenericErrorFunc pxVar2;
  char *pcVar3;
  undefined4 *puVar4;
  xmlGenericErrorFunc *ppxVar5;
  void **ppvVar6;
  ulong uVar7;
  char *pcVar8;
  
  uVar7 = 0xffffffffffffffff;
  pcVar8 = str;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  if (DAT_1011b7b00 == 0) {
    _xmlInitMemory();
  }
  puVar4 = _malloc(uVar7 + 0x28);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x5aa5;
    *(ulong *)(puVar4 + 4) = uVar7;
    puVar4[1] = 3;
    *(char **)(puVar4 + 6) = file;
    puVar4[8] = line;
    _xmlMutexLock(DAT_1011b7b20);
    DAT_1011b7b28 = DAT_1011b7b28 + 1;
    *(ulong *)(puVar4 + 2) = (ulong)DAT_1011b7b28;
    DAT_1011b7b08 = DAT_1011b7b08 + uVar7;
    DAT_1011b7b10 = DAT_1011b7b10 + 1;
    if (DAT_1011b7b18 < DAT_1011b7b08) {
      DAT_1011b7b18 = DAT_1011b7b08;
    }
    _xmlMutexUnlock(DAT_1011b7b20);
    pcVar8 = (char *)(puVar4 + 10);
    if ((ulong)DAT_1011b7b2c == *(ulong *)(puVar4 + 2)) {
      _xmlMallocBreakpoint();
    }
    if (pcVar8 != (char *)0x0) {
      _strcpy(pcVar8,str);
      if (DAT_1011b7b30 != pcVar8) {
        return pcVar8;
      }
      ppxVar5 = ___xmlGenericError();
      pcVar3 = DAT_1011b7b30;
      pxVar2 = *ppxVar5;
      ppvVar6 = ___xmlGenericErrorContext();
      (*pxVar2)(*ppvVar6,"%p : Strdup() Ok\n",pcVar3);
      _xmlMallocBreakpoint();
      return pcVar8;
    }
  }
  return (char *)0x0;
}

