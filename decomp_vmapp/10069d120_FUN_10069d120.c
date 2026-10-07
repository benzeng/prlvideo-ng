
undefined8 FUN_10069d120(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 8) == param_1 + 8) {
    uVar4 = 0;
  }
  else {
    plVar1 = *(long **)(param_1 + 0x10);
    *param_2 = (int)plVar1[2];
    *param_3 = *(undefined4 *)((long)plVar1 + 0x14);
    lVar2 = *plVar1;
    plVar3 = (long *)plVar1[1];
    *(long **)(lVar2 + 8) = plVar3;
    *plVar3 = lVar2;
    lVar2 = *(long *)(param_1 + 0x18);
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    plVar1[1] = param_1 + 0x18;
    *(long **)(param_1 + 0x18) = plVar1;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    uVar4 = CONCAT71((int7)((ulong)plVar1 >> 8),1);
  }
  return uVar4;
}

