
void _xmlMemFree(void *ptr)

{
  xmlGenericErrorFunc pxVar1;
  void *pvVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  int *piVar5;
  
  if (ptr == (void *)0xffffffffffffffff) {
    ppxVar3 = ___xmlGenericError();
    pxVar1 = *ppxVar3;
    ppvVar4 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar4,"trying to free pointer from freed area\n");
  }
  else {
    if (DAT_1023128b0 == ptr) {
      ppxVar3 = ___xmlGenericError();
      pvVar2 = DAT_1023128b0;
      pxVar1 = *ppxVar3;
      ppvVar4 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar4,"%p : Freed()\n",pvVar2);
      _xmlMallocBreakpoint();
    }
    piVar5 = (int *)((long)ptr + -0x28);
    if (*piVar5 == 0x5aa5) {
      if ((ulong)DAT_1023128ac == *(ulong *)((long)ptr + -0x20)) {
        _xmlMallocBreakpoint();
      }
      *piVar5 = -0x5aa6;
      _memset(ptr,-1,*(size_t *)((long)ptr + -0x18));
      _xmlMutexLock(DAT_1023128a0);
      DAT_102312888 = DAT_102312888 - *(long *)((long)ptr + -0x18);
      DAT_102312890 = DAT_102312890 + -1;
      _xmlMutexUnlock(DAT_1023128a0);
      _free(piVar5);
      return;
    }
    FUN_1008b07e2(piVar5);
  }
  ppxVar3 = ___xmlGenericError();
  pxVar1 = *ppxVar3;
  ppvVar4 = ___xmlGenericErrorContext();
  (*pxVar1)(*ppvVar4,"xmlMemFree(%lX) error\n",ptr);
  _xmlMallocBreakpoint();
  return;
}

