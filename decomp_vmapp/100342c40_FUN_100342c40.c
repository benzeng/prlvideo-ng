
void FUN_100342c40(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  int *piVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  iVar1 = param_2[2];
  piVar5 = &DAT_100b3b65c;
  uVar3 = 0;
  while ((((uVar2 = uVar3, piVar5[-9] != iVar1 && (uVar2 = uVar3 + 1, piVar5[-6] != iVar1)) &&
          (uVar2 = uVar3 + 2, piVar5[-3] != iVar1)) && (uVar2 = uVar3 + 3, *piVar5 != iVar1))) {
    uVar3 = uVar3 + 4;
    piVar5 = piVar5 + 0xc;
    uVar4 = 0x8e;
    if (0x73 < uVar3) {
LAB_100342ca2:
      param_1[2] = uVar4;
      param_1[3] = param_2[3];
      param_1[4] = param_2[4];
      param_1[5] = param_2[5];
      return;
    }
  }
  uVar4 = (&DAT_100b3b630)[uVar2 * 3];
  goto LAB_100342ca2;
}

