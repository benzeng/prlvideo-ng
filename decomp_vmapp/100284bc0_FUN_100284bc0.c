
uint FUN_100284bc0(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint local_34;
  
  lVar1 = *(long *)(param_1 + 0x10);
  iVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  uVar6 = 0;
  if (param_2 == 0) {
    local_34 = 0;
  }
  else if (iVar2 == 0) {
    local_34 = 0;
  }
  else {
    local_34 = 0;
    do {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 8))(*(long **)(param_1 + 0x18),uVar6);
      if (param_2 < uVar3) {
        uVar3 = param_2;
      }
      uVar5 = (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18),uVar6)
      ;
      FUN_10008cba0(DAT_1011c3688,(ulong)local_34 + lVar1,uVar5,uVar3);
      local_34 = local_34 + uVar3;
      uVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
      param_2 = param_2 - uVar3;
    } while ((param_2 != 0) && (uVar6 = uVar6 + 1, uVar6 < uVar4));
  }
  return local_34;
}

