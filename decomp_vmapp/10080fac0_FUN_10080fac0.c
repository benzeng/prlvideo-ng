
long FUN_10080fac0(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = 0;
  if (param_2 == 0) {
    plVar2 = (long *)(param_1 + 0x1e0);
    if ((*(long *)(param_1 + 0x130) != 0) && (*plVar2 == 0)) {
      plVar2 = (long *)(*(long *)(param_1 + 0x130) + 0x118);
    }
    lVar1 = *plVar2;
  }
  return lVar1;
}

