
undefined8 FUN_100342a70(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  int *piVar8;
  undefined4 uVar9;
  
  iVar1 = param_2[2];
  piVar8 = &DAT_100b3b65c;
  uVar4 = 0;
  uVar9 = 0x8e;
  do {
    uVar3 = uVar4;
    if ((((piVar8[-9] == iVar1) || (uVar3 = uVar4 + 1, piVar8[-6] == iVar1)) ||
        (uVar3 = uVar4 + 2, piVar8[-3] == iVar1)) || (uVar3 = uVar4 + 3, *piVar8 == iVar1)) {
      uVar9 = (&DAT_100b3b630)[uVar3 * 3];
      break;
    }
    uVar4 = uVar4 + 4;
    piVar8 = piVar8 + 0xc;
  } while (uVar4 < 0x74);
  param_1[4] = uVar9;
  cVar2 = FUN_10038e180();
  uVar5 = 1;
  if (cVar2 != '\0') {
    uVar9 = param_2[3];
    uVar5 = 2;
    switch(uVar9) {
    case 1:
      puVar6 = operator_new(0x18);
      ppuVar7 = &PTR_FUN_100bbbd10;
      break;
    case 2:
    case 3:
    case 4:
      puVar6 = operator_new(0x18);
      ppuVar7 = &PTR_FUN_100bbbd50;
      break;
    default:
      goto switchD_100342b0e_default;
    }
    *puVar6 = ppuVar7;
    *(undefined4 *)(puVar6 + 1) = param_2[4];
    *(undefined4 *)((long)puVar6 + 0xc) = param_2[5];
    *(undefined4 *)(puVar6 + 2) = param_2[6];
    *(undefined8 **)(param_1 + 6) = puVar6;
    param_1[5] = uVar9;
    *param_1 = *param_2;
    *(long *)(param_1 + 2) = param_3;
    *(int *)(param_3 + 0x80) = *(int *)(param_3 + 0x80) + 1;
    uVar5 = 0;
  }
switchD_100342b0e_default:
  return uVar5;
}

