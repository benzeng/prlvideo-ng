
undefined8 FUN_1009d1bd0(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  
  piVar7 = (int *)*param_1;
  if (*piVar7 == -0x1120531) {
    uVar1 = piVar7[4];
    piVar7 = piVar7 + 8;
    uVar8 = 0xffffffff;
    bVar4 = false;
    bVar5 = false;
    do {
      uVar8 = uVar8 + 1;
      if (uVar1 <= uVar8) {
        return 0;
      }
      if (((!bVar5) && (*piVar7 == 0x19)) &&
         (iVar6 = _strcmp((char *)(piVar7 + 2),"__TEXT"), iVar6 == 0)) {
        lVar2 = *(long *)(piVar7 + 6);
        uVar3 = *(undefined8 *)(piVar7 + 8);
        param_1[5] = lVar2;
        param_1[6] = uVar3;
        param_1[7] = 0;
        bVar5 = true;
        if ((*(long *)(piVar7 + 10) == 0) && (*(long *)(piVar7 + 0xc) != 0)) {
          param_1[7] = param_1[4] - lVar2;
        }
      }
      if ((!bVar4) && (*piVar7 == 0xd)) {
        *(int *)(param_1 + 8) = piVar7[4];
        bVar4 = true;
      }
      if ((bool)(bVar5 & bVar4)) {
        return 1;
      }
      piVar7 = (int *)((long)piVar7 + (ulong)(uint)piVar7[1]);
    } while (piVar7 != (int *)0x0);
  }
  return 0;
}

