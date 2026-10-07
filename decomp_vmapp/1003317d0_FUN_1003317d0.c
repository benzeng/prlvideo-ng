
undefined8 FUN_1003317d0(long param_1,ulong *param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  if (param_3 < 0x55) {
    return 0;
  }
  if ((ulong)param_3 != (ulong)*(uint *)((long)param_2 + 0x2c) * 0x14 + 0x54) {
    return 0xf0000003;
  }
  uVar4 = FUN_10032e4f0(*(undefined8 *)(param_1 + 0x38),param_2);
  uVar2 = *param_2;
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x28);
    plVar7 = (long *)(param_1 + 0x28);
    do {
      while (plVar6 = plVar3, (ulong)plVar6[4] < uVar2) {
        plVar1 = plVar6 + 1;
        plVar6 = plVar7;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_100331861;
      }
      plVar3 = (long *)*plVar6;
      plVar7 = plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
LAB_100331861:
    if (((plVar6 != (long *)(param_1 + 0x28)) && ((ulong)plVar6[4] <= uVar2)) &&
       (lVar5 = plVar6[5], lVar5 != 0)) goto LAB_100331886;
  }
  lVar5 = FUN_1003312e0(param_1,uVar2,0);
  if (lVar5 == 0) {
    return 0;
  }
LAB_100331886:
  FUN_10035a240(lVar5,uVar4,(long)param_2 + 0x54);
  return 0;
}

