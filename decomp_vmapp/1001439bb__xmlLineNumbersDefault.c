
int _xmlLineNumbersDefault(int val)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = ___xmlLineNumbersDefaultValue();
  iVar1 = *piVar2;
  piVar2 = ___xmlLineNumbersDefaultValue();
  *piVar2 = val;
  return iVar1;
}

