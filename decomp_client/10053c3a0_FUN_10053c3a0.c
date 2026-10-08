
void FUN_10053c3a0(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 8);
  plVar3 = operator_new(8);
  *plVar3 = lVar2 + 0x10 + (long)iVar1 * 8;
  *param_2 = plVar3;
  return;
}

