
long FUN_10079cbf0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_100613ce0(param_1 + 0x10);
  lVar2 = 0;
  if ((*plVar1 != 0) && (lVar2 = 0, *(int *)(*plVar1 + 4) != 0)) {
    lVar2 = plVar1[1];
  }
  return lVar2;
}

