
undefined8 FUN_100422630(undefined8 *param_1,long param_2)

{
  int *piVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  undefined4 extraout_var;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  param_1[2] = param_2;
  piVar1 = (int *)*param_1;
  uVar6 = param_2 + 7U & 0xfffffffffffffff8;
  uVar5 = piVar1[2];
  uVar4 = uVar5 + uVar6;
  uVar2 = *(ulong *)(piVar1 + 4);
  if (uVar2 < uVar4) {
    iVar3 = _getpagesize();
    uVar4 = (long)iVar3;
    if ((ulong)(long)iVar3 <= uVar6) {
      uVar4 = uVar6;
    }
    lVar7 = uVar4 + uVar2;
    iVar3 = _ftruncate(*piVar1,lVar7);
    uVar4 = CONCAT44(extraout_var,iVar3);
    uVar5 = 0xffffffff;
    if (iVar3 != 0) goto LAB_1004226a0;
    *(long *)(piVar1 + 4) = lVar7;
    uVar5 = piVar1[2];
  }
  piVar1[2] = (int)uVar6 + uVar5;
LAB_1004226a0:
  *(uint *)(param_1 + 1) = uVar5;
  return CONCAT71((int7)(uVar4 >> 8),uVar5 != 0xffffffff);
}

