
void FUN_1002c8590(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  lVar1 = param_2[0x8b];
  *(undefined4 *)(lVar1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x148c) = *(undefined4 *)(param_1 + 0x1488);
  if (*(long *)(lVar1 + 0x18) == lVar1 + 0x18) {
    plVar2 = *(long **)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = lVar1 + 0x80;
    *(long *)(lVar1 + 0x80) = param_1 + 0x28;
    *(long **)(lVar1 + 0x88) = plVar2;
    *plVar2 = lVar1 + 0x80;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0x20);
  *(long **)(lVar1 + 0x20) = param_2;
  *param_2 = lVar1 + 0x18;
  param_2[1] = (long)puVar3;
  *puVar3 = param_2;
  *(int *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + 1;
  FUN_1002d7ce0();
  plVar2 = (long *)(*(long *)(param_1 + 0x14b8) + 0xf0);
  *plVar2 = *plVar2 + 1;
  return;
}

