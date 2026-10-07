
void FUN_100342ce0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 uVar12;
  int *piVar13;
  
  *param_1 = *param_2;
  uVar9 = (ulong)(uint)param_2[1];
  param_1[1] = param_2[1];
  puVar8 = operator_new__(uVar9 * 0x18 + 8);
  *puVar8 = uVar9;
  puVar8 = puVar8 + 1;
  if (uVar9 == 0) {
    *(ulong **)(param_1 + 2) = puVar8;
    ___bzero(param_1 + 4,0x100);
    return;
  }
  ___bzero(puVar8,((uVar9 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18);
  *(ulong **)(param_1 + 2) = puVar8;
  ___bzero(param_1 + 4,0x100);
  uVar7 = 0;
  do {
    uVar9 = (ulong)uVar7;
    lVar6 = uVar9 * 0x18;
    uVar1 = param_2[uVar9 * 6 + 3];
    iVar2 = param_2[uVar9 * 6 + 4];
    piVar13 = &DAT_100b3b65c;
    uVar11 = 0;
    do {
      uVar10 = uVar11;
      if ((((piVar13[-9] == iVar2) || (uVar10 = uVar11 + 1, piVar13[-6] == iVar2)) ||
          (uVar10 = uVar11 + 2, piVar13[-3] == iVar2)) || (uVar10 = uVar11 + 3, *piVar13 == iVar2))
      {
        uVar12 = (&DAT_100b3b630)[uVar10 * 3];
        break;
      }
      uVar11 = uVar11 + 4;
      piVar13 = piVar13 + 0xc;
      uVar12 = 0x8e;
    } while (uVar11 < 0x74);
    uVar3 = param_2[uVar9 * 6 + 5];
    uVar4 = param_2[uVar9 * 6 + 6];
    uVar5 = param_2[uVar9 * 6 + 7];
    *(undefined4 *)(puVar8 + uVar9 * 3) = param_2[uVar9 * 6 + 2];
    *(undefined4 *)((long)puVar8 + lVar6 + 4) = uVar1;
    *(undefined4 *)(puVar8 + uVar9 * 3 + 1) = uVar12;
    *(undefined4 *)((long)puVar8 + lVar6 + 0xc) = uVar3;
    *(undefined4 *)(puVar8 + uVar9 * 3 + 2) = uVar4;
    *(uint *)((long)puVar8 + lVar6 + 0x14) = uVar5;
    *(ulong **)(param_1 + (ulong)uVar5 * 2 + 4) = puVar8 + uVar9 * 3;
    uVar7 = uVar7 + 1;
    if ((uint)param_1[1] <= uVar7) {
      return;
    }
    puVar8 = *(ulong **)(param_1 + 2);
  } while( true );
}

