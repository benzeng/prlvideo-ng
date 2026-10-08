
void FUN_100b261c0(long *param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined4 param_6,uint param_7)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  
  pvVar5 = _valloc(0x4000);
  param_1[1] = (long)pvVar5;
  *(undefined4 *)(param_1 + 2) = 0x4000;
  *(undefined4 *)((long)param_1 + 0x14) = 4;
  *(undefined4 *)(param_1 + 3) = 0x1000;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = param_2;
  *param_1 = (long)&PTR_FUN_10223e0a0;
  param_1[6] = param_3;
  param_1[7] = param_4;
  param_1[0x113] = param_2;
  param_1[0x114] = (ulong)param_7;
  param_1[0x115] = 0x1000;
  if (pvVar5 != (void *)0x0) {
    FUN_100db5f90(param_1 + 8);
    *(undefined4 *)((long)param_1 + 0x94) = 1;
    *(int *)(param_1 + 0x14) = (int)param_1[2];
    *(int *)(param_1 + 0x12) = (int)param_1[2];
    param_1[0x13] = param_1[1];
    param_1[10] = (long)param_1;
    param_1[0x11] = (long)FUN_100b26360;
    param_1[0xb] = param_1[0x113];
    param_1[0xe] = param_5;
    *(undefined4 *)((long)param_1 + 0x1c) = param_6;
    lVar2 = *(long *)(param_1[0x113] + 0x20);
    iVar4 = (**(code **)(*param_1 + 8))(param_1);
    uVar3 = *(ulong *)(lVar2 + 0x18);
    uVar1 = *(uint *)(lVar2 + 8);
    uVar6 = (iVar4 * uVar1 + uVar3 & 0xfffffffffffff000) /
            *(ulong *)(*(long *)(*(long *)param_1[0x113] + -0x18) + 0x38 + param_1[0x113]);
    param_1[8] = uVar6;
    if (uVar6 == 0) {
      uVar6 = param_1[0x115] - uVar3 / uVar1;
      param_1[0x115] = uVar6;
      *(int *)(param_1 + 4) = (int)uVar3;
      *(int *)(param_1 + 3) = (int)uVar6;
    }
    else {
      uVar6 = param_1[0x115];
    }
    uVar3 = param_1[0x114];
    if (uVar3 < uVar6) {
      param_1[0x115] = uVar3;
      *(int *)(param_1 + 3) = (int)uVar3;
    }
    return;
  }
  FUN_100df99c0("CountReclaimed","dimg",0,"No memory for buffer");
  return;
}

