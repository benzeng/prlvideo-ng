
ulong FUN_100284b10(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  
  lVar1 = *(long *)(param_1 + 0x10);
  iVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  uVar7 = 0;
  uVar6 = 0;
  if ((param_2 != 0) && (iVar2 != 0)) {
    do {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 8))(*(long **)(param_1 + 0x18),uVar7);
      if (param_2 < uVar3) {
        uVar3 = param_2;
      }
      uVar5 = (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18),uVar7)
      ;
      FUN_10008c9b0(DAT_1011c3688,uVar5,uVar6 + lVar1,uVar3);
      uVar6 = (ulong)((int)uVar6 + uVar3);
      uVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
      param_2 = param_2 - uVar3;
    } while ((param_2 != 0) && (uVar7 = uVar7 + 1, uVar7 < uVar4));
  }
  return uVar6;
}

