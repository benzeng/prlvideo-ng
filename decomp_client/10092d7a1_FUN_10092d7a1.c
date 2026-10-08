
undefined8 FUN_10092d7a1(void)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  
  ppxVar2 = ___xmlGenericError();
  pxVar1 = *ppxVar2;
  ppvVar3 = ___xmlGenericErrorContext();
  (*pxVar1)(*ppvVar3,"Unimplemented block at %s:%d\n","xmlschemas.c",0x2818);
  return 0;
}

