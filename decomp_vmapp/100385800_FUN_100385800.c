
undefined4
FUN_100385800(long *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar9;
  ulong uVar8;
  
  uVar4 = *(uint *)(param_1 + 0x11);
  uVar9 = 0xffffffff;
  if (uVar4 < 0xfffffffc) {
    uVar1 = uVar4 + 4;
    do {
      uVar7 = uVar4 & 3;
      uVar8 = (ulong)uVar7;
      if ((((*(int *)((long)param_1 + uVar8 * 0x14 + 0x3c) == param_2) &&
           (*(int *)((long)param_1 + uVar8 * 0x14 + 0x40) == param_3)) &&
          (*(int *)((long)param_1 + uVar8 * 0x14 + 0x44) == param_4)) &&
         (*(int *)((long)param_1 + uVar8 * 0x14 + 0x48) == param_5)) {
        *(uint *)(param_1 + 0x11) = uVar7;
        goto LAB_10038597c;
      }
      iVar2 = *(int *)((long)param_1 + uVar8 * 0x14 + 0x44);
      if ((iVar2 == 0) || ((uVar9 == 0xffffffff && (iVar2 == param_4)))) {
        uVar9 = uVar7;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  (**(code **)(*param_1 + 0x30))(param_1);
  if (uVar9 == 0xffffffff) {
    uVar4 = (int)param_1[0x11] + 1U & 3;
    uVar8 = (ulong)uVar4;
    *(uint *)(param_1 + 0x11) = uVar4;
    (*DAT_1011c5b80)(1);
    (*DAT_1011c5e90)(1,(long)param_1 + uVar8 * 0x14 + 0x38);
  }
  else {
    *(uint *)(param_1 + 0x11) = uVar9;
    uVar8 = (ulong)uVar9;
  }
  (*DAT_1011c5768)(param_4,*(undefined4 *)((long)param_1 + uVar8 * 0x14 + 0x38));
  *(int *)((long)param_1 + uVar8 * 0x14 + 0x3c) = param_2;
  *(int *)((long)param_1 + uVar8 * 0x14 + 0x40) = param_3;
  *(int *)((long)param_1 + uVar8 * 0x14 + 0x44) = param_4;
  *(int *)((long)param_1 + uVar8 * 0x14 + 0x48) = param_5;
  pcVar3 = DAT_1011c6c98;
  uVar5 = FUN_10038e1d0(param_6);
  uVar6 = FUN_10038e1f0(param_6);
  (*pcVar3)(param_4,0,param_5,param_2,param_3,0,uVar5,uVar6,0);
  (*DAT_1011c5768)(param_4,0);
LAB_10038597c:
  return *(undefined4 *)((long)param_1 + uVar8 * 0x14 + 0x38);
}

