
void FUN_1002c8930(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  if ((*(uint *)(param_1 + 0x8e) & 2) == 0) {
    plVar2 = &DAT_1011c5620;
  }
  else {
    plVar2 = &DAT_1011c5630;
  }
  lVar1 = *plVar2;
  *(long **)(lVar1 + 8) = param_1;
  *param_1 = lVar1;
  *plVar2 = (long)param_1;
  param_1[1] = (long)plVar2;
  return;
}

