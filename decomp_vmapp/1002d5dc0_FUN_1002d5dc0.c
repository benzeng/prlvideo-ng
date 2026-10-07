
undefined8 FUN_1002d5dc0(long *param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  
  if (2 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] dev close",param_1 + 0x107);
  }
  if ((int)param_1[3] != 0) {
    if ((long *)*param_1 != (long *)0x0) {
      (**(code **)(*(long *)*param_1 + 0x20))();
      (**(code **)(*(long *)*param_1 + 0x38))();
    }
    if ((void *)param_1[6] != (void *)0x0) {
      operator_delete((void *)param_1[6]);
      param_1[6] = 0;
      if (*param_1 != 0) {
        *(undefined4 *)(*param_1 + 0x20) = 0xffffffff;
      }
    }
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
    plVar1 = (long *)param_1[5];
    if ((int)plVar1[0x292] == 2) {
      uVar3 = (**(code **)(*plVar1 + 0x80))(plVar1,param_1 + 4);
      if (uVar3 != 0xffffffff) {
        lVar2 = plVar1[8];
        *(undefined2 *)(lVar2 + 0x2278 + (ulong)uVar3 * 4) = 0;
        *(undefined2 *)(lVar2 + 0x227a + (ulong)uVar3 * 4) = 0;
      }
    }
    *(undefined4 *)(param_1 + 3) = 0;
    if (2 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] dev close, finished",param_1 + 0x107);
    }
  }
  return 1;
}

