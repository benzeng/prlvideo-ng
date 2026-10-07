
undefined8 FUN_10078cda0(int *param_1,long param_2,int param_3,undefined4 param_4,long *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long local_40;
  uint local_38;
  ulong uVar4;
  
  if (param_5 != (long *)0x0) {
    *param_5 = 0;
  }
  uVar8 = param_3 + 0xc;
  uVar3 = param_1[2];
  uVar1 = param_1[6];
  if (uVar1 - uVar3 < uVar8) {
    if (param_1[7] == 0) {
      uVar7 = uVar1;
      do {
        uVar7 = uVar7 * 2;
      } while (uVar7 < uVar3 + uVar8);
      local_40 = *(long *)(param_1 + 4);
      local_38 = uVar1;
      iVar2 = FUN_10078cba0(&local_40);
      if (iVar2 != 0) {
        *(long *)(param_1 + 4) = local_40;
        param_1[6] = local_38;
        uVar3 = param_1[2];
        lVar6 = local_40;
        goto LAB_10078ce29;
      }
    }
    uVar5 = 0xfffffffe;
  }
  else {
    lVar6 = *(long *)(param_1 + 4);
LAB_10078ce29:
    uVar4 = (ulong)uVar3;
    *(int *)(lVar6 + uVar4) = param_3;
    *(undefined4 *)(lVar6 + 4 + uVar4) = param_4;
    iVar2 = *param_1;
    *param_1 = iVar2 + 1;
    *(int *)(lVar6 + 8 + uVar4) = iVar2;
    lVar6 = lVar6 + 0xc + uVar4;
    if (param_2 != 0) {
      FUN_10078cc10(lVar6,param_2,param_3);
    }
    if (param_5 != (long *)0x0) {
      *param_5 = lVar6;
    }
    param_1[2] = param_1[2] + uVar8;
    *(int *)(*(long *)(param_1 + 4) + (ulong)(uint)param_1[1]) =
         *(int *)(*(long *)(param_1 + 4) + (ulong)(uint)param_1[1]) + uVar8;
    uVar5 = 0;
  }
  return uVar5;
}

