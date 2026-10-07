
undefined1
FUN_100370e30(long param_1,undefined8 param_2,long *param_3,int param_4,undefined4 *param_5)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  lVar3 = FUN_100373d80(param_1 + 0x1298);
  uVar6 = 0;
  uVar5 = 0;
  if (lVar3 == param_1 + 0x12a0) goto LAB_100370f05;
  puVar2 = *(undefined4 **)(lVar3 + 0x1a0);
  puVar2[1] = puVar2[1] + 1;
  if (param_4 == 0) {
    bVar9 = param_3[1] == 0;
    uVar4 = (ulong)((uint)bVar9 + (uint)bVar9 * 8);
    uVar7 = (uint)bVar9 << 4;
LAB_100370eac:
    if ((uint)uVar4 < uVar7) {
      lVar3 = uVar4 * 0x18 + 8;
      iVar8 = uVar7 - (uint)uVar4;
      do {
        lVar1 = param_3[0x1e] + -8 + lVar3;
        if ((long)puVar2 + lVar3 != lVar1) {
          FUN_1002f29d0(lVar1,*(undefined8 *)((long)puVar2 + lVar3),
                        *(undefined8 *)((long)puVar2 + lVar3 + 8));
        }
        lVar3 = lVar3 + 0x18;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  else if (param_4 == 1) {
    uVar7 = 9;
    if (*param_3 != 0) {
      uVar7 = 0;
    }
    uVar4 = 0;
    goto LAB_100370eac;
  }
  uVar6 = *puVar2;
  uVar5 = 1;
LAB_100370f05:
  *param_5 = uVar6;
  return uVar5;
}

