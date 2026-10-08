
void FUN_1003afbb0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  plVar2 = operator_new(8);
  *plVar2 = lVar1 + 8;
  *param_2 = plVar2;
  return;
}

