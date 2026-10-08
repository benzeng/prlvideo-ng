
void FUN_10041c490(long *param_1,uint *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  
  plVar5 = (long *)*param_1;
  if (*(uint *)(plVar5 + 4) != 0) {
    uVar6 = *(uint *)((long)plVar5 + 0x24) ^ *param_2;
    uVar2 = (ulong)uVar6 % (ulong)*(uint *)(plVar5 + 4);
    plVar3 = *(long **)(plVar5[1] + uVar2 * 8);
    param_1 = (long *)(plVar5[1] + uVar2 * 8);
    while ((plVar4 = plVar3, plVar4 != plVar5 &&
           ((*(uint *)(plVar4 + 1) != uVar6 || (*param_2 != *(uint *)((long)plVar4 + 0xc)))))) {
      param_1 = plVar4;
      plVar3 = (long *)*plVar4;
    }
  }
  lVar1 = *param_1;
  plVar5 = operator_new(8);
  *plVar5 = lVar1;
  *param_3 = plVar5;
  return;
}

