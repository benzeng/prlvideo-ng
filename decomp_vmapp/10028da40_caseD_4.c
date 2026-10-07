
undefined8 switchD_10028dcf2::caseD_4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  uVar2 = 0;
  for (puVar3 = *(undefined8 **)(param_1 + 0x3a0d0); puVar3 != (undefined8 *)(param_1 + 0x3a0d0);
      puVar3 = (undefined8 *)*puVar3) {
    *(undefined4 *)(puVar3 + 8) = 1;
    uVar2 = (ulong)((int)uVar2 + 1);
  }
  for (puVar3 = *(undefined8 **)(param_1 + 0x3a0e0); puVar3 != (undefined8 *)(param_1 + 0x3a0e0);
      puVar3 = (undefined8 *)*puVar3) {
    *(undefined4 *)(puVar3 + 8) = 1;
    uVar2 = (ulong)((int)uVar2 + 1);
  }
  for (puVar3 = *(undefined8 **)(param_1 + 0x3a0c0); puVar3 != (undefined8 *)(param_1 + 0x3a0c0);
      puVar3 = (undefined8 *)*puVar3) {
    *(undefined4 *)(puVar3 + 8) = 1;
    uVar2 = (ulong)((int)uVar2 + 1);
  }
  plVar4 = *(long **)(param_1 + 0x3a0f0);
  if (plVar4 != (long *)(param_1 + 0x3a0f0)) {
    plVar1 = *(long **)(param_1 + 0x3a0a8);
    do {
      if (plVar4 + -0x13 != plVar1) {
        *(undefined4 *)(plVar4 + 8) = 1;
        *(undefined2 *)((long)plVar4 + -0x82) = 0x48;
      }
      uVar2 = (ulong)((int)uVar2 + 1);
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)(param_1 + 0x3a0f0));
  }
  *param_3 = 8;
  return CONCAT71((int7)(uVar2 >> 8),(int)uVar2 == 0);
}

