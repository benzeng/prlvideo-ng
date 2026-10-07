
undefined8 FUN_10069d190(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x68) == param_1 + 0x68) {
    uVar4 = 0;
  }
  else {
    plVar1 = *(long **)(param_1 + 0x70);
    *param_2 = (int)plVar1[2];
    *param_3 = *(undefined4 *)((long)plVar1 + 0x14);
    lVar2 = *plVar1;
    plVar3 = (long *)plVar1[1];
    *(long **)(lVar2 + 8) = plVar3;
    *plVar3 = lVar2;
    lVar2 = *(long *)(param_1 + 0x78);
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    plVar1[1] = param_1 + 0x78;
    *(long **)(param_1 + 0x78) = plVar1;
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + -1;
    uVar4 = CONCAT71((int7)((ulong)plVar1 >> 8),1);
  }
  return uVar4;
}

