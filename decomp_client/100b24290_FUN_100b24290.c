
void FUN_100b24290(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 8) != param_1 + 8) {
    do {
      plVar1 = *(long **)(param_1 + 0x10);
      *(undefined4 *)(plVar1 + 2) = 0xffffffff;
      *(undefined4 *)((long)plVar1 + 0x14) = 0;
      lVar2 = *plVar1;
      plVar3 = (long *)plVar1[1];
      *(long **)(lVar2 + 8) = plVar3;
      *plVar3 = lVar2;
      lVar2 = *(long *)(param_1 + 0x18);
      *(long **)(lVar2 + 8) = plVar1;
      *plVar1 = lVar2;
      plVar1[1] = param_1 + 0x18;
      *(long **)(param_1 + 0x18) = plVar1;
    } while (*(long *)(param_1 + 8) != param_1 + 8);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

