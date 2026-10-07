
void FUN_1004c05a0(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x108) != param_2) {
    *(int *)(param_1 + 0x108) = param_2;
    lVar2 = 0;
    do {
      plVar1 = *(long **)(param_1 + 8 + lVar2 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x20);
  }
  return;
}

