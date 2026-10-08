
undefined8 FUN_100b25850(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
  lVar3 = *(long *)(*param_1 + -0x118);
  if (*(long *)(lVar3 + 0x68 + (long)param_1) == lVar3 + 0x68 + (long)param_1) {
    uVar7 = 0;
  }
  else {
    plVar4 = *(long **)(lVar3 + 0x70 + (long)param_1);
    *param_2 = (int)plVar4[2];
    *param_3 = *(undefined4 *)((long)plVar4 + 0x14);
    lVar1 = lVar3 + 0x78 + (long)param_1;
    lVar5 = *plVar4;
    plVar6 = (long *)plVar4[1];
    *(long **)(lVar5 + 8) = plVar6;
    *plVar6 = lVar5;
    lVar5 = *(long *)(lVar3 + 0x78 + (long)param_1);
    *(long **)(lVar5 + 8) = plVar4;
    *plVar4 = lVar5;
    plVar4[1] = lVar1;
    *(long **)(lVar3 + 0x78 + (long)param_1) = plVar4;
    piVar2 = (int *)(lVar3 + 0x88 + (long)param_1);
    *piVar2 = *piVar2 + -1;
    uVar7 = CONCAT71((int7)((ulong)lVar1 >> 8),1);
  }
  return uVar7;
}

