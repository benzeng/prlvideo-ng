
int FUN_100273810(long param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x188);
  iVar2 = 0;
  if (plVar4 != (long *)0x0) {
    bVar1 = false;
    if ((*(int *)(param_1 + 0x1b8) == 1) &&
       (piVar3 = *(int **)(param_1 + 0x160), bVar1 = false, *piVar3 != 0)) {
      do {
        *piVar3 = 0;
        FUN_1002effe0(*(undefined8 *)(param_1 + 0x180));
        piVar3 = *(int **)(param_1 + 0x160);
      } while (*piVar3 != 0);
      plVar4 = *(long **)(param_1 + 0x188);
      bVar1 = true;
    }
    iVar2 = (**(code **)(*plVar4 + 0x18))();
    if ((*(uint *)(param_1 + 0x1b8) & 0xfffffffe) == 2) {
      (**(code **)(**(long **)(param_1 + 0x188) + 0x40))();
    }
    if (iVar2 != 0) {
      (**(code **)(**(long **)(param_1 + 0x188) + 0x18))();
      plVar4 = (long *)(*(long *)(param_1 + 0xb8) + 0xf0);
      *plVar4 = *plVar4 + 1;
      FUN_10025b2f0(param_1 + 0x68,1);
    }
    if (bVar1) {
      FUN_1007d8b40(param_1 + 0x1ec);
      iVar2 = 1;
    }
  }
  return iVar2;
}

