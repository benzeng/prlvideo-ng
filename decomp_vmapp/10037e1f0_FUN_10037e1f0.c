
void FUN_10037e1f0(long *param_1,undefined8 param_2,ulong *param_3)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  sbyte sVar5;
  ulong uVar6;
  bool bVar7;
  
  uVar6 = *param_3;
  uVar3 = 0;
  if ((uVar6 & 4) != 0) {
    uVar3 = (**(code **)(**(long **)(*param_1 + 0x10) + 0x18))(*(long **)(*param_1 + 0x10),param_2);
  }
  if ((((uint)uVar3 | (uint)uVar6) & 8) != 0) {
    (**(code **)(**(long **)(*param_1 + 0x18) + 0x18))(*(long **)(*param_1 + 0x18),param_2);
  }
  uVar4 = (**(code **)(**(long **)(*param_1 + 0x20) + 0x18))(*(long **)(*param_1 + 0x20),param_2);
  uVar4 = uVar4 | uVar3;
  if ((uVar6 & 0x20) != 0) {
    uVar3 = (**(code **)(**(long **)(*param_1 + 0x28) + 0x18))(*(long **)(*param_1 + 0x28),param_2);
    uVar4 = uVar4 | uVar3;
  }
  if ((uVar6 & 0x40) != 0) {
    uVar3 = (**(code **)(**(long **)(*param_1 + 0x30) + 0x18))(*(long **)(*param_1 + 0x30),param_2);
    uVar4 = uVar4 | uVar3;
  }
  uVar4 = uVar4 | uVar6;
  uVar6 = uVar4 >> 7;
  if (uVar6 != 0) {
    uVar3 = 7;
    do {
      if ((uVar6 & 1) != 0) {
        plVar1 = *(long **)(*param_1 + uVar3 * 8);
        (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      }
      bVar7 = (char)uVar6 != '\0';
      iVar2 = 8;
      if (bVar7) {
        iVar2 = 1;
      }
      sVar5 = 1;
      if (!bVar7) {
        sVar5 = 8;
      }
      uVar6 = uVar6 >> sVar5;
      uVar3 = (ulong)(uint)((int)uVar3 + iVar2);
    } while (uVar6 != 0);
  }
  if ((uVar4 & 1) != 0) {
    (**(code **)(**(long **)*param_1 + 0x18))(*(long **)*param_1,param_2);
  }
  if ((uVar4 & 2) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010037e332. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*param_1 + 8) + 0x18))(*(long **)(*param_1 + 8),param_2);
  return;
}

