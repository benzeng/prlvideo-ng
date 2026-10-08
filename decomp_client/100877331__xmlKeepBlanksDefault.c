
int _xmlKeepBlanksDefault(int val)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  
  piVar2 = ___xmlKeepBlanksDefaultValue();
  iVar1 = *piVar2;
  piVar2 = ___xmlKeepBlanksDefaultValue();
  *piVar2 = val;
  puVar3 = (uint *)___xmlIndentTreeOutput();
  *puVar3 = (uint)(val == 0);
  return iVar1;
}

