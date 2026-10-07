
void FUN_1002c8620(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_2 + 0x18);
  if (plVar1 != (long *)(param_2 + 0x18)) {
    lVar2 = *plVar1;
    plVar3 = (long *)plVar1[1];
    *(long **)(lVar2 + 8) = plVar3;
    *plVar3 = lVar2;
    *plVar1 = 0x112233;
    plVar1[1] = (long)&DAT_00445566;
    *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + -1;
    if (*(long **)(param_2 + 0x18) != (long *)(param_2 + 0x18)) goto LAB_1002c8681;
  }
  lVar2 = *(long *)(param_2 + 0x80);
  plVar1 = *(long **)(param_2 + 0x88);
  *(long **)(lVar2 + 8) = plVar1;
  *plVar1 = lVar2;
  *(long *)(param_2 + 0x80) = param_2 + 0x80;
  *(long *)(param_2 + 0x88) = param_2 + 0x80;
LAB_1002c8681:
  *(undefined4 *)(param_1 + 0x148c) = *(undefined4 *)(param_1 + 0x1488);
  return;
}

