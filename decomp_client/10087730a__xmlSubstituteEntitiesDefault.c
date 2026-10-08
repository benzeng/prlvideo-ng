
int _xmlSubstituteEntitiesDefault(int val)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = ___xmlSubstituteEntitiesDefaultValue();
  iVar1 = *piVar2;
  piVar2 = ___xmlSubstituteEntitiesDefaultValue();
  *piVar2 = val;
  return iVar1;
}

