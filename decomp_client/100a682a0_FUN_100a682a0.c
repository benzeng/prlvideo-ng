
undefined8 FUN_100a682a0(int *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar1 = param_1[2];
  uVar4 = (ulong)uVar1;
  lVar2 = *(long *)(param_1 + 4);
  uVar5 = param_1[1] + 0xcU + *(int *)(lVar2 + (ulong)(uint)param_1[1]);
  uVar3 = 0xfffffff9;
  if ((((uVar1 != uVar5) && (uVar3 = 0xfffffff8, uVar1 <= uVar5)) &&
      (uVar3 = 0xfffffffb, *param_1 == *(int *)(uVar4 + 8 + lVar2))) &&
     (uVar3 = 0xfffffffc, uVar4 + 0xc + (ulong)*(uint *)(lVar2 + uVar4) <= (ulong)uVar5)) {
    uVar3 = 0;
  }
  return uVar3;
}

