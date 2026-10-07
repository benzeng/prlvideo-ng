
undefined8 FUN_1003306f0(long param_1,ulong *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  
  uVar2 = *param_2;
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x28);
    plVar7 = (long *)(param_1 + 0x28);
    do {
      while (plVar6 = plVar3, (ulong)plVar6[4] < uVar2) {
        plVar1 = plVar6 + 1;
        plVar6 = plVar7;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_100330750;
      }
      plVar3 = (long *)*plVar6;
      plVar7 = plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
LAB_100330750:
    if (((plVar6 != (long *)(param_1 + 0x28)) && ((ulong)plVar6[4] <= uVar2)) &&
       (lVar4 = plVar6[5], lVar4 != 0)) goto LAB_100330771;
  }
  lVar4 = FUN_1003312e0(param_1,uVar2,*(undefined4 *)((long)param_2 + 0x14));
  if (lVar4 == 0) {
    return 0;
  }
LAB_100330771:
  uVar5 = FUN_100359c40(lVar4,param_2,param_3,param_4);
  return uVar5;
}

