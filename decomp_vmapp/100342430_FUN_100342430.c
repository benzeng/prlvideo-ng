
undefined8 FUN_100342430(undefined4 *param_1,undefined4 *param_2,long param_3)

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
  while ((((uVar3 = uVar4, piVar7[-9] != iVar1 && (uVar3 = uVar4 + 1, piVar7[-6] != iVar1)) &&
          (uVar3 = uVar4 + 2, piVar7[-3] != iVar1)) && (uVar3 = uVar4 + 3, *piVar7 != iVar1))) {
    uVar4 = uVar4 + 4;
    piVar7 = piVar7 + 0xc;
    if (0x73 < uVar4) {
LAB_100342499:
      param_1[5] = uVar8;
      cVar2 = FUN_10038e180();
      uVar5 = 1;
      if ((cVar2 != '\0') &&
         (((iVar1 = param_2[3], iVar1 == 5 || (iVar1 == 3)) || (uVar5 = 2, iVar1 == 2)))) {
        puVar6 = operator_new(0x18);
        *puVar6 = &PTR_FUN_100bbbd50;
        *(undefined4 *)(puVar6 + 1) = param_2[4];
        *(undefined4 *)((long)puVar6 + 0xc) = param_2[5];
        *(undefined4 *)(puVar6 + 2) = param_2[6];
        *(undefined8 **)(param_1 + 8) = puVar6;
        param_1[6] = iVar1;
        *(long *)(param_1 + 2) = param_3;
        *(int *)(param_3 + 0x80) = *(int *)(param_3 + 0x80) + 1;
        *param_1 = *param_2;
        uVar5 = 0;
      }
      return uVar5;
    }
  }
  uVar8 = (&DAT_100b3b630)[uVar3 * 3];
  goto LAB_100342499;
}

