
int _xmlPedanticParserDefault(int val)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = ___xmlPedanticParserDefaultValue();
  iVar1 = *piVar2;
  piVar2 = ___xmlPedanticParserDefaultValue();
  *piVar2 = val;
  return iVar1;
}

