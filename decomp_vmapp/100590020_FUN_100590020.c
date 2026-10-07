
undefined4 FUN_100590020(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_48 [24];
  
  FUN_1006a8e60(local_48);
  uVar3 = 0x80021021;
  if ((*(char *)(param_1 + 0x7c) != '\0') && (*(long *)(param_1 + 0x60) != 0)) {
    uVar5 = FUN_100575a30(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 8));
    uVar6 = FUN_100575a30(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x10));
    uVar7 = (**(code **)(**(long **)(param_1 + 0x70) + 0x328))();
    uVar3 = (**(code **)(**(long **)(param_1 + 0x70) + 0x300))();
    cVar2 = FUN_1006a8f40(local_48,param_2,param_3,uVar5,uVar6,uVar7,uVar3,
                          *(int *)(*(long *)(param_1 + 0x70) + 0x1158) != 0);
    uVar3 = 0x80000002;
    if (cVar2 != '\0') {
      uVar4 = (int)*(undefined8 *)(param_1 + 0x60) - 1;
      plVar1 = *(long **)(*(long *)(*(long *)(param_1 + 0x40) +
                                   ((ulong)uVar4 + *(long *)(param_1 + 0x58) >> 9) * 8) +
                         ((ulong)((int)*(long *)(param_1 + 0x58) + uVar4) & 0x1ff) * 8);
      uVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,local_48,*(undefined4 *)(param_1 + 0x18),param_4)
      ;
    }
  }
  FUN_1006a8f00(local_48);
  return uVar3;
}

