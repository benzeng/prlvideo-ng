
undefined8 FUN_1008e38f0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  piVar3 = ___error();
  iVar1 = *piVar3;
  uVar4 = FUN_1007d88c0();
  uVar2 = FUN_1007d8840();
  uVar5 = 0;
  uVar2 = (uint)(uVar4 / uVar2);
  if ((param_1[1] == 0xffffffff) || (*param_1 < uVar2 - param_1[1])) {
    param_1[1] = uVar2;
    uVar5 = 1;
  }
  piVar3 = ___error();
  *piVar3 = iVar1;
  return uVar5;
}

