
void FUN_10027ded0(long param_1,int *param_2,uint *param_3,uint param_4)

{
  short *psVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = *param_3;
  if (uVar7 != param_4) {
    if (*param_2 != 0) {
      plVar3 = *(long **)(*(long *)(param_1 + 8) + 0x170);
      (**(code **)(*plVar3 + 0xa0))(plVar3,param_2);
      FUN_10008d470(param_1 + 0x90c8);
      *param_2 = 0;
    }
    do {
      if ((*(int *)(param_1 + 0x20) != 0) && (*(uint *)(param_1 + 0x1c) != 0)) {
        uVar2 = *(undefined4 *)(param_1 + 0x98f4 + (ulong)(uVar7 & 0x1ff) * 8);
        lVar4 = *(long *)(param_1 + 0x38);
        uVar5 = (ulong)*(ushort *)(lVar4 + 2) % (ulong)*(uint *)(param_1 + 0x1c);
        *(undefined4 *)(lVar4 + 4 + uVar5 * 8) =
             *(undefined4 *)(param_1 + 0x98f0 + (ulong)(uVar7 & 0x1ff) * 8);
        *(undefined4 *)(lVar4 + 8 + uVar5 * 8) = uVar2;
        psVar1 = (short *)(*(long *)(param_1 + 0x38) + 2);
        *psVar1 = *psVar1 + 1;
      }
      uVar7 = uVar7 + 1;
    } while (param_4 != uVar7);
    *param_3 = param_4;
    iVar6 = FUN_10027e9e0(param_1 + 0x18);
    if ((iVar6 != 0) && (*(long *)(param_1 + 0x4860) != 0)) {
      FUN_1002effe0();
      return;
    }
  }
  return;
}

