
void FUN_100405200(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  FUN_1004047e0();
  plVar2 = _malloc(0x30);
  if (plVar2 != (long *)0x0) {
    plVar4 = plVar2 + 2;
    plVar2[2] = (long)plVar4;
    plVar2[3] = (long)plVar4;
    lVar1 = *param_2;
    lVar3 = (**(code **)(*(long *)*param_1 + 0x2e0))();
    *plVar2 = lVar3 * lVar1;
    *(int *)(plVar2 + 1) = (int)param_2[10];
    plVar2[4] = param_2[2];
    plVar2[5] = param_2[9];
    param_2[2] = (long)plVar2;
    param_2[9] = (long)FUN_100405300;
    lVar1 = param_1[4];
    *(long **)(lVar1 + 8) = plVar4;
    plVar2[2] = lVar1;
    plVar2[3] = (long)(param_1 + 4);
    param_1[4] = plVar4;
                    /* WARNING: Could not recover jumptable at 0x0001004052b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_1 + 0x100))((long *)*param_1,param_2);
    return;
  }
  FUN_1008e3970("","PCache",0,"PCACHE: can\'t alloc memory for node!");
  *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 8;
  *(undefined4 *)(param_2 + 5) = 0xc;
  FUN_10070aed0(param_2);
  return;
}

