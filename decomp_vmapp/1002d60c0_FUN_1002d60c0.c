
void FUN_1002d60c0(long *param_1,int param_2)

{
  void *pvVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  if (0 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] device reset, bHardware = %u",param_1 + 0x107,param_2);
  }
  lVar4 = FUN_1000b3d20(DAT_1011c3698);
  param_1[0x10a] = lVar4;
  lVar4 = 9;
  if ((param_2 == 0) && (lVar4 = 9, *(int *)((long)param_1 + 0xc) == 0)) {
    lVar4 = 0;
    do {
      if (param_1[lVar4 + 8] != 0) {
        FUN_1002d7b20(param_1[lVar4 + 8],0);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0xff);
  }
  else {
    do {
      pvVar1 = (void *)param_1[lVar4];
      if (pvVar1 != (void *)0x0) {
        FUN_1002d7cd0(pvVar1);
        operator_delete(pvVar1);
        param_1[lVar4] = 0;
      }
      uVar5 = lVar4 - 7;
      lVar4 = lVar4 + 1;
    } while (uVar5 < 0xff);
    *(undefined4 *)(param_1 + 0x10b) = 0xffffffff;
    if ((long *)*param_1 != (long *)0x0) {
      (**(code **)(*(long *)*param_1 + 0x40))();
    }
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
    plVar2 = (long *)param_1[5];
    if (((int)plVar2[0x292] == 2) &&
       (uVar3 = (**(code **)(*plVar2 + 0x80))(plVar2,param_1 + 4), uVar3 != 0xffffffff)) {
      lVar4 = plVar2[8];
      *(undefined2 *)(lVar4 + 0x2278 + (ulong)uVar3 * 4) = 0;
      *(undefined2 *)(lVar4 + 0x227a + (ulong)uVar3 * 4) = 0;
    }
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  return;
}

