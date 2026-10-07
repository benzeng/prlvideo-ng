
bool FUN_1005f4600(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar5 = FUN_100575a90(*(undefined8 *)(param_1 + 0x20));
  if (uVar5 == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    plVar1 = *(long **)(param_1 + 0x20);
    uVar3 = (**(code **)(*plVar1 + 0x300))(plVar1);
    uVar2 = FUN_100575a30(plVar1,uVar3);
    uVar5 = 0;
    uVar7 = (ulong)uVar2;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x300))();
    uVar7 = uVar2 + uVar5;
    uVar6 = (**(code **)(**(long **)(param_1 + 0x20) + 0x328))();
    if (uVar6 < uVar7) {
      uVar7 = (**(code **)(**(long **)(param_1 + 0x20) + 0x328))();
    }
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = uVar7 & 0xffffffff;
    uVar5 = uVar5 & 0xffffffff;
  }
  iVar4 = FUN_1007dbe40(uVar8,uVar7,uVar5);
  return iVar4 != 0;
}

