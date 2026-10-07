
byte FUN_100853e00(long param_1,long param_2,long param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  bool bVar7;
  
  bVar5 = 0;
  if (0 < (int)param_4) {
    bVar7 = false;
    lVar6 = 0;
    do {
      uVar2 = *(ulong *)(param_2 + lVar6 * 8);
      puVar1 = (ulong *)(param_3 + lVar6 * 8);
      uVar3 = (ulong)bVar7;
      uVar4 = uVar2 + *puVar1;
      bVar7 = CARRY8(uVar2,*puVar1) || CARRY8(uVar4,uVar3);
      *(ulong *)(param_1 + lVar6 * 8) = uVar4 + uVar3;
      lVar6 = lVar6 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
    bVar5 = -bVar7 & 1;
  }
  return bVar5;
}

