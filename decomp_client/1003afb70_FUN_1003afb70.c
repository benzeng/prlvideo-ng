
void FUN_1003afb70(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (*(long *)(lVar2 + 0x10) == 0) {
    lVar2 = lVar2 + 8;
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  plVar1 = operator_new(8);
  *plVar1 = lVar2;
  *param_2 = plVar1;
  return;
}

