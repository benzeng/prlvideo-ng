
void FUN_10027d110(undefined4 *param_1,ulong param_2,uint param_3,undefined2 param_4,
                  undefined4 param_5)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  plVar1 = (long *)(param_1 + 0x120c);
  if (*(long *)(param_1 + 0x120c) != 0) {
    FUN_10008d3f0(plVar1);
    param_1[2] = 0;
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    if (param_1[0x1214] == -1) {
      FUN_1008e3970("","LocalDevices",0,"queue_tag is not valid!");
    }
    uVar5 = (ulong)param_3 * 0x10;
    uVar4 = uVar5 + 0x1005 + (ulong)(param_3 - 1) * 2 & 0x1ffffff000;
    FUN_10008d2d0(plVar1,param_2,(param_3 * 8 + 0xfff & 0xfffff000) + (int)uVar4);
    lVar3 = *plVar1;
    if (lVar3 != 0) {
      uVar2 = param_1[0x1214];
      ___bzero(param_1,0x4830);
      *param_1 = uVar2;
      param_1[1] = param_3;
      *(long *)(param_1 + 4) = lVar3;
      *(ulong *)(param_1 + 6) = lVar3 + uVar5;
      *(ulong *)(param_1 + 8) = uVar4 + lVar3;
      param_1[2] = (int)(param_2 >> 0xc);
      *(undefined2 *)(param_1 + 10) = param_4;
      *(undefined2 *)((long)param_1 + 0x2a) = *(undefined2 *)(lVar3 + (uVar5 | 2));
      param_1[3] = param_5;
      *(undefined1 *)((long)param_1 + 0x2e) = 0;
    }
  }
  return;
}

