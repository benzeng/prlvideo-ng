
void * _xmlMallocLoc(size_t size,char *file,int line)

{
  xmlGenericErrorFunc pxVar1;
  undefined4 *puVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  undefined4 *local_48;
  
  if (DAT_102312880 == 0) {
    _xmlInitMemory();
  }
  local_48 = _malloc(size + 0x28);
  if (local_48 == (undefined4 *)0x0) {
    ppxVar3 = ___xmlGenericError();
    pxVar1 = *ppxVar3;
    ppvVar4 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar4,"xmlMallocLoc : Out of free space\n");
    _xmlMemoryDump();
    local_48 = (undefined4 *)0x0;
  }
  else {
    *local_48 = 0x5aa5;
    *(size_t *)(local_48 + 4) = size;
    local_48[1] = 1;
    *(char **)(local_48 + 6) = file;
    local_48[8] = line;
    _xmlMutexLock(DAT_1023128a0);
    DAT_1023128a8 = DAT_1023128a8 + 1;
    *(ulong *)(local_48 + 2) = (ulong)DAT_1023128a8;
    DAT_102312888 = DAT_102312888 + size;
    DAT_102312890 = DAT_102312890 + 1;
    if (DAT_102312898 < DAT_102312888) {
      DAT_102312898 = DAT_102312888;
    }
    _xmlMutexUnlock(DAT_1023128a0);
    if ((ulong)DAT_1023128ac == *(ulong *)(local_48 + 2)) {
      _xmlMallocBreakpoint();
    }
    local_48 = local_48 + 10;
    if (DAT_1023128b0 == local_48) {
      ppxVar3 = ___xmlGenericError();
      puVar2 = DAT_1023128b0;
      pxVar1 = *ppxVar3;
      ppvVar4 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar4,"%p : Malloc(%d) Ok\n",puVar2,size);
      _xmlMallocBreakpoint();
    }
  }
  return local_48;
}

