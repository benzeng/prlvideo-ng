
void FUN_10036c5a0(long param_1,long *param_2,long *param_3)

{
  undefined2 *puVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  bool bVar10;
  undefined2 local_38;
  char local_36;
  
  lVar5 = *param_2;
  lVar8 = param_2[1];
  if (lVar8 != lVar5) {
    lVar3 = *param_3;
    lVar6 = param_3[1];
    uVar7 = 0;
    do {
      bVar10 = lVar6 != lVar3;
      lVar6 = lVar3;
      if (bVar10) {
        lVar8 = uVar7 * 3;
        uVar4 = 0;
        uVar9 = 1;
        do {
          lVar6 = uVar4 * 3;
          if (((*(char *)(lVar5 + lVar8) == *(char *)(lVar3 + lVar6)) &&
              (local_36 = *(char *)(lVar5 + 1 + lVar8), local_36 == *(char *)(lVar3 + 1 + lVar6)))
             && (bVar2 = *(byte *)(lVar3 + 2 + lVar6) & *(byte *)(lVar5 + 2 + lVar8),
                local_38 = CONCAT11(bVar2,*(char *)(lVar5 + lVar8)), bVar2 != 0)) {
            puVar1 = *(undefined2 **)(param_1 + 8);
            if (puVar1 == *(undefined2 **)(param_1 + 0x10)) {
              FUN_10036c740(param_1,&local_38);
            }
            else {
              *(char *)(puVar1 + 1) = local_36;
              *puVar1 = local_38;
              *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 3;
            }
          }
          lVar3 = *param_3;
          bVar10 = uVar9 < (ulong)((param_3[1] - lVar3) * -0x5555555555555555);
          uVar4 = uVar9;
          uVar9 = (ulong)((int)uVar9 + 1);
        } while (bVar10);
        lVar5 = *param_2;
        lVar8 = param_2[1];
        lVar6 = param_3[1];
      }
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 < (ulong)((lVar8 - lVar5) * -0x5555555555555555));
  }
  return;
}

