
undefined8 FUN_100342150(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  
  iVar1 = param_2[2];
  piVar7 = &DAT_100b3b65c;
  uVar4 = 0;
  uVar8 = 0x8e;
  do {
    uVar3 = uVar4;
    if ((((piVar7[-9] == iVar1) || (uVar3 = uVar4 + 1, piVar7[-6] == iVar1)) ||
        (uVar3 = uVar4 + 2, piVar7[-3] == iVar1)) || (uVar3 = uVar4 + 3, *piVar7 == iVar1)) {
      uVar8 = (&DAT_100b3b630)[uVar3 * 3];
      break;
    }
    uVar4 = uVar4 + 4;
    piVar7 = piVar7 + 0xc;
  } while (uVar4 < 0x74);
  param_1[5] = uVar8;
  cVar2 = FUN_10038e180();
  uVar5 = 1;
  if (cVar2 != '\0') {
    uVar8 = param_2[3];
    uVar5 = 2;
    switch(uVar8) {
    case 1:
      puVar6 = operator_new(0x18);
      *puVar6 = &PTR_FUN_100bbbd10;
      *(undefined4 *)(puVar6 + 1) = param_2[4];
      *(undefined4 *)((long)puVar6 + 0xc) = param_2[5];
      *(undefined4 *)(puVar6 + 2) = 0;
      break;
    case 2:
    case 3:
    case 4:
    case 5:
      puVar6 = operator_new(0x18);
      *puVar6 = &PTR_FUN_100bbbd50;
      *(undefined4 *)(puVar6 + 1) = param_2[4];
      *(undefined4 *)((long)puVar6 + 0xc) = param_2[5];
      *(undefined4 *)(puVar6 + 2) = param_2[6];
      break;
    default:
      goto switchD_1003421f2_default;
    }
    *(undefined8 **)(param_1 + 8) = puVar6;
    param_1[6] = uVar8;
    *param_1 = *param_2;
    *(long *)(param_1 + 2) = param_3;
    *(int *)(param_3 + 0x80) = *(int *)(param_3 + 0x80) + 1;
    uVar5 = 0;
  }
switchD_1003421f2_default:
  return uVar5;
}

