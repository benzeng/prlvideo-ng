
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
  if (DAT_102312880 == 0) {
    _xmlInitMemory();
  }
  puVar4 = _malloc(uVar7 + 0x28);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x5aa5;
    *(ulong *)(puVar4 + 4) = uVar7;
    puVar4[1] = 3;
    *(char **)(puVar4 + 6) = file;
    puVar4[8] = line;
    _xmlMutexLock(DAT_1023128a0);
    DAT_1023128a8 = DAT_1023128a8 + 1;
    *(ulong *)(puVar4 + 2) = (ulong)DAT_1023128a8;
    DAT_102312888 = DAT_102312888 + uVar7;
    DAT_102312890 = DAT_102312890 + 1;
    if (DAT_102312898 < DAT_102312888) {
      DAT_102312898 = DAT_102312888;
    }
    _xmlMutexUnlock(DAT_1023128a0);
    pcVar8 = (char *)(puVar4 + 10);
    if ((ulong)DAT_1023128ac == *(ulong *)(puVar4 + 2)) {
      _xmlMallocBreakpoint();
    }
    if (pcVar8 != (char *)0x0) {
      _strcpy(pcVar8,str);
      if (DAT_1023128b0 != pcVar8) {
        return pcVar8;
      }
      ppxVar5 = ___xmlGenericError();
      pcVar3 = DAT_1023128b0;
      pxVar2 = *ppxVar5;
      ppvVar6 = ___xmlGenericErrorContext();
      (*pxVar2)(*ppvVar6,"%p : Strdup() Ok\n",pcVar3);
      _xmlMallocBreakpoint();
      return pcVar8;
    }
  }
  return (char *)0x0;
}

