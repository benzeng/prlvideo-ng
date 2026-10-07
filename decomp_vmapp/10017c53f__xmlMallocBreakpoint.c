
void _xmlMallocBreakpoint(void)

{
  xmlGenericErrorFunc pxVar1;
  uint uVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  
  ppxVar3 = ___xmlGenericError();
  uVar2 = DAT_1011b7b2c;
  pxVar1 = *ppxVar3;
  ppvVar4 = ___xmlGenericErrorContext();
  (*pxVar1)(*ppvVar4,"xmlMallocBreakpoint reached on block %d\n",(ulong)uVar2);
  return;
}

