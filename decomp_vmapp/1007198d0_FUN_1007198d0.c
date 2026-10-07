
int FUN_1007198d0(undefined8 *param_1,char *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  for (puVar2 = (undefined8 *)*param_1; puVar2 != param_1; puVar2 = (undefined8 *)*puVar2) {
    iVar1 = _strcmp((char *)puVar2[2],param_2);
    iVar3 = iVar3 + (uint)(iVar1 == 0);
  }
  return iVar3;
}

