
void FUN_100afc010(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + 0x18);
  lVar3 = **(long **)(lVar2 + 0x160);
  uVar4 = (ulong)*(uint *)(lVar3 + 8);
  lVar5 = 0;
  if ((int)*(uint *)(lVar3 + 8) < *(int *)(lVar3 + 0xc)) {
    do {
      plVar1 = *(long **)(lVar3 + 0x10 + ((int)uVar4 + lVar5) * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x88))();
        lVar2 = *(long *)(param_1 + 0x18);
      }
      lVar5 = lVar5 + 1;
      lVar3 = **(long **)(lVar2 + 0x160);
      uVar4 = (ulong)*(int *)(lVar3 + 8);
    } while (lVar5 < (long)((long)*(int *)(lVar3 + 0xc) - uVar4));
  }
  FUN_100af8c90();
  return;
}

