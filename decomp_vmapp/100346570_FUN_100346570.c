
undefined8 FUN_100346570(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  int *piVar7;
  undefined8 uVar8;
  
  uVar3 = 9;
  if (0x13 < *(uint *)(param_2 + 4)) {
    uVar1 = *(uint *)(param_2 + 8);
    uVar8 = 0;
    if (uVar1 == 0) {
LAB_1003465da:
      iVar2 = *(int *)(param_2 + 0xc);
      piVar7 = &DAT_100b3b65c;
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        if ((((piVar7[-9] == iVar2) || (uVar4 = uVar5 + 1, piVar7[-6] == iVar2)) ||
            (uVar4 = uVar5 + 2, piVar7[-3] == iVar2)) || (uVar4 = uVar5 + 3, *piVar7 == iVar2)) {
          FUN_1003444c0(param_1,uVar8,(&DAT_100b3b630)[uVar4 * 3],*(undefined4 *)(param_2 + 0x10));
          return 0;
        }
        uVar5 = uVar5 + 4;
        piVar7 = piVar7 + 0xc;
        uVar3 = 4;
      } while (uVar5 < 0x74);
    }
    else {
      uVar3 = 7;
      for (puVar6 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                              (ulong)((uVar1 >> 0xc ^ uVar1) & 0xfff ^ uVar1 >> 0x18) * 8);
          puVar6 != (uint *)0x0; puVar6 = *(uint **)(puVar6 + 4)) {
        if (*puVar6 == uVar1) {
          if (*(long *)(puVar6 + 2) == 0) {
            return 7;
          }
          uVar8 = *(undefined8 *)(*(long *)(puVar6 + 2) + 8);
          goto LAB_1003465da;
        }
      }
    }
  }
  return uVar3;
}

