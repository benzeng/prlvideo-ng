
uint FUN_10056c8b0(long *param_1,long *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(param_1 + 0x22b);
  lVar1 = *param_2;
  uVar5 = *(uint *)(param_1 + 0x224);
  iVar3 = (**(code **)(*param_1 + 0x2e0))();
  lVar2 = param_1[0x224];
  iVar4 = (**(code **)(*param_1 + 0x2e0))(param_1);
  uVar5 = FUN_1005ad310(param_1 + 2,(ulong)uVar7 + lVar1,
                        (int)lVar2 * iVar4 - iVar3 * (int)(((ulong)uVar7 + lVar1) % (ulong)uVar5));
  uVar6 = uVar5 - *(uint *)(param_2 + 10);
  uVar7 = 0;
  if ((*(uint *)(param_2 + 10) <= uVar5 && uVar6 != 0) && (uVar7 = uVar6, param_3 < uVar6)) {
    uVar7 = param_3;
  }
  return uVar7;
}

