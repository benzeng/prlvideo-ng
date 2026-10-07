
void FUN_100402e10(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    *(undefined1 *)(param_1 + 0x30) = 1;
    plVar3 = *(long **)(param_1 + 0x20);
    while (plVar3 != (long *)(param_1 + 0x20)) {
      lVar1 = *plVar3;
      plVar2 = (long *)plVar3[1];
      *(long **)(lVar1 + 8) = plVar2;
      *plVar2 = lVar1;
      *plVar3 = (long)plVar3;
      plVar3[1] = (long)plVar3;
      (*(code *)plVar3[-0x14])(plVar3 + -0x16);
      FUN_100402d70(param_1);
      do {
        FUN_100402c70(param_1,0xffffffff);
      } while ((int)plVar3[-3] != 0);
      plVar3 = *(long **)(param_1 + 0x20);
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}

