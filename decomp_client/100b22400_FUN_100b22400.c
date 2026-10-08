
int FUN_100b22400(long param_1,int param_2,ulong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  iVar3 = FUN_100b224b0(param_1 + 0x18098,
                        (ulong)(uint)(*(int *)(*(long *)(param_1 + 0x20) + 8) * param_2) +
                        *(long *)(*(long *)(param_1 + 0x20) + 0x18) & 0xfffffffffffff000);
  if (iVar3 == 0) {
    iVar3 = 0;
    uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 0xc);
    iVar4 = (**(code **)(*(long *)(param_1 + 0x18098) + 8))(param_1 + 0x18098);
    lVar5 = (ulong)*(uint *)(param_1 + 0x180b8) + *(long *)(param_1 + 0x180a0);
    uVar2 = *(undefined4 *)(lVar5 + (ulong)(uint)(param_2 - iVar4) * 4);
    iVar6 = (int)((param_3 & 0xffffffff) / (ulong)uVar1);
    *(int *)(lVar5 + (ulong)(uint)(param_2 - iVar4) * 4) = iVar6;
    *(undefined1 *)(param_1 + 0x180d8) = 1;
    if (iVar6 == 0) {
      FUN_100b22670(param_1,uVar2);
    }
  }
  return iVar3;
}

