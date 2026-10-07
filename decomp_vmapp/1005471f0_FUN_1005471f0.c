
void FUN_1005471f0(long param_1,undefined8 param_2,ulong param_3,undefined4 param_4)

{
  int iVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  uint uVar5;
  
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_4);
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 - 1U < 2) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_3;
    auVar3 = auVar3 / ZEXT416(*(uint *)(param_1 + 0x3c));
    uVar4 = (ulong)(auVar3._0_4_ >> 5);
    uVar5 = ~(1 << (auVar3[0] & 0x1f)) & *(uint *)(*(long *)(param_1 + 0x30) + uVar4 * 4);
    *(uint *)(*(long *)(param_1 + 0x30) + uVar4 * 4) = uVar5;
    if (uVar5 == 0) {
      FUN_1005470b0(param_1,uVar4,iVar1);
      return;
    }
  }
  return;
}

