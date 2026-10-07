
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10043c120(undefined8 param_1,int *param_2,undefined8 param_3,undefined4 param_4,int param_5,
             long *param_6)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  iVar6 = (param_2[2] + 1) - *param_2;
  iVar8 = (param_2[3] + 1) - param_2[1];
  uVar3 = *(uint *)((long)param_6 + 0xc);
  uVar2 = uVar3;
  if (*(uint *)(param_6 + 2) < uVar3 + 4) {
    uVar4 = (ulong)((double)(uVar3 + 4) * _DAT_100b42cf8);
    pvVar5 = operator_new__(uVar4 & 0xffffffff);
    pvVar1 = (void *)*param_6;
    _memcpy(pvVar5,pvVar1,(ulong)*(uint *)(param_6 + 1));
    if ((pvVar1 != (void *)0x0) && (*(char *)((long)param_6 + 0x14) != '\0')) {
      operator_delete__(pvVar1);
      uVar2 = *(uint *)((long)param_6 + 0xc);
    }
    *param_6 = (long)pvVar5;
    *(int *)(param_6 + 2) = (int)uVar4;
    *(undefined1 *)((long)param_6 + 0x14) = 1;
  }
  if (*(uint *)(param_6 + 1) < uVar2 + 4) {
    *(uint *)(param_6 + 1) = uVar2 + 4;
    uVar2 = *(uint *)((long)param_6 + 0xc);
  }
  *(undefined1 *)(*param_6 + (ulong)uVar2) = 0;
  *(undefined1 *)(*param_6 + (ulong)(*(int *)((long)param_6 + 0xc) + 1)) = 0;
  *(undefined1 *)(*param_6 + (ulong)(*(int *)((long)param_6 + 0xc) + 2)) = 0;
  *(undefined1 *)(*param_6 + (ulong)(*(int *)((long)param_6 + 0xc) + 3)) = 0;
  *(int *)((long)param_6 + 0xc) = *(int *)((long)param_6 + 0xc) + 4;
  if (param_5 < 0x20) {
    if (param_5 - 0xfU < 2) {
      iVar6 = FUN_10043c930(param_3,param_4,iVar6,iVar8,param_6);
    }
    else if (param_5 == 8) {
      iVar6 = FUN_10043cba0(param_3,param_4,iVar6,iVar8,param_6);
    }
    else {
      if (param_5 != 0x18) goto LAB_10043c323;
      iVar6 = FUN_10043c6c0(param_3,param_4,iVar6,iVar8,param_6);
    }
  }
  else {
    if (param_5 != 0x20) {
LAB_10043c323:
      FUN_1008e3970("","IOEncoders",0,"Can\'t encode for depth %d");
      return 0;
    }
    iVar6 = FUN_10043c480(param_3,param_4,iVar6,iVar8,param_6);
  }
  if (iVar6 < 0) {
    return 0;
  }
  uVar2 = *(uint *)(param_6 + 1);
  uVar7 = *(uint *)((long)param_6 + 0xc);
  uVar9 = uVar7;
  if (uVar3 <= uVar2) {
    *(uint *)((long)param_6 + 0xc) = uVar3;
    uVar9 = uVar3;
  }
  if (*(uint *)(param_6 + 2) < uVar9 + 4) {
    uVar4 = (ulong)((double)(uVar9 + 4) * _DAT_100b42cf8);
    pvVar5 = operator_new__(uVar4 & 0xffffffff);
    pvVar1 = (void *)*param_6;
    _memcpy(pvVar5,pvVar1,(ulong)uVar2);
    if ((pvVar1 != (void *)0x0) && (*(char *)((long)param_6 + 0x14) != '\0')) {
      operator_delete__(pvVar1);
      uVar2 = *(uint *)(param_6 + 1);
      uVar9 = *(uint *)((long)param_6 + 0xc);
    }
    *param_6 = (long)pvVar5;
    *(int *)(param_6 + 2) = (int)uVar4;
    *(undefined1 *)((long)param_6 + 0x14) = 1;
  }
  if (uVar2 < uVar9 + 4) {
    *(uint *)(param_6 + 1) = uVar9 + 4;
  }
  *(char *)(*param_6 + (ulong)uVar9) = (char)((uint)iVar6 >> 0x18);
  *(char *)(*param_6 + (ulong)(*(int *)((long)param_6 + 0xc) + 1)) = (char)((uint)iVar6 >> 0x10);
  *(char *)(*param_6 + (ulong)(*(int *)((long)param_6 + 0xc) + 2)) = (char)((uint)iVar6 >> 8);
  uVar3 = *(int *)((long)param_6 + 0xc) + 3;
  *(char *)(*param_6 + (ulong)uVar3) = (char)iVar6;
  if (*(uint *)(param_6 + 1) < uVar7) {
    uVar7 = *(int *)((long)param_6 + 0xc) + 4;
  }
  *(uint *)((long)param_6 + 0xc) = uVar7;
  return CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
}

