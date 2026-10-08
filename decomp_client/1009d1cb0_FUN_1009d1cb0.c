
undefined8 FUN_1009d1cb0(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  
  piVar6 = (int *)*param_1;
  if (*piVar6 == -0x1120532) {
    uVar1 = piVar6[4];
    piVar6 = piVar6 + 7;
    uVar7 = 0xffffffff;
    bVar3 = false;
    bVar4 = false;
    do {
      uVar7 = uVar7 + 1;
      if (uVar1 <= uVar7) {
        return 0;
      }
      if (((!bVar4) && (*piVar6 == 1)) &&
         (iVar5 = _strcmp((char *)(piVar6 + 2),"__TEXT"), iVar5 == 0)) {
        uVar2 = piVar6[6];
        param_1[5] = (ulong)uVar2;
        param_1[6] = (ulong)(uint)piVar6[7];
        param_1[7] = 0;
        bVar4 = true;
        if ((piVar6[8] == 0) && (piVar6[9] != 0)) {
          param_1[7] = param_1[4] - (ulong)uVar2;
        }
      }
      if ((!bVar3) && (*piVar6 == 0xd)) {
        *(int *)(param_1 + 8) = piVar6[4];
        bVar3 = true;
      }
      if ((bool)(bVar4 & bVar3)) {
        return 1;
      }
      piVar6 = (int *)((long)piVar6 + (ulong)(uint)piVar6[1]);
    } while (piVar6 != (int *)0x0);
  }
  return 0;
}

