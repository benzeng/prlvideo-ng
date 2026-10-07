
int FUN_1008510c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  bool bVar11;
  
  FUN_10084ca60(param_3);
  puVar4 = (undefined8 *)FUN_10084cc20(param_3);
  puVar5 = (undefined8 *)FUN_10084cc20(param_3);
  bVar11 = false;
  iVar2 = -2;
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = FUN_10084b950(puVar4,param_1);
    if (lVar6 == 0) {
      bVar11 = true;
      iVar2 = -2;
    }
    else {
      lVar6 = FUN_10084b950(puVar5,param_2);
      bVar11 = lVar6 == 0;
      if (bVar11) {
        iVar2 = -2;
      }
      else if (*(int *)(puVar5 + 1) == 0) {
        if ((*(int *)(puVar4 + 1) != 1) || (iVar2 = 1, *(long *)*puVar4 != 1)) {
          iVar2 = 0;
        }
      }
      else {
        piVar10 = (int *)(puVar4 + 1);
        if ((*(int *)(puVar4 + 1) < 1) || (uVar9 = 0xffffffff, (*(byte *)*puVar4 & 1) == 0)) {
          iVar2 = 0;
          if ((*(int *)(puVar5 + 1) < 1) ||
             (uVar9 = 0xffffffff, iVar2 = 0, (*(byte *)*puVar5 & 1) == 0)) goto LAB_100851356;
        }
        do {
          uVar9 = uVar9 + 1;
          iVar2 = FUN_10084c160(puVar5,uVar9);
        } while (iVar2 == 0);
        iVar2 = FUN_100850250(puVar5,puVar5,uVar9);
        bVar11 = iVar2 == 0;
        if (bVar11) {
          iVar2 = -2;
        }
        else {
          iVar2 = 1;
          if ((uVar9 & 1) != 0) {
            uVar7 = 0;
            if (*piVar10 != 0) {
              uVar7 = *(ulong *)*puVar4 & 7;
            }
            iVar2 = *(int *)((long)&PTR___mh_execute_header_100b55880 + uVar7 * 4);
          }
          if ((*(int *)(puVar5 + 2) != 0) &&
             (*(undefined4 *)(puVar5 + 2) = 0, *(int *)(puVar4 + 2) != 0)) {
            iVar2 = -iVar2;
          }
          iVar3 = *piVar10;
          while (puVar1 = puVar4, iVar3 != 0) {
            uVar9 = 0xffffffff;
            do {
              uVar9 = uVar9 + 1;
              iVar3 = FUN_10084c160(puVar1,uVar9);
            } while (iVar3 == 0);
            iVar3 = FUN_100850250(puVar1,puVar1,uVar9);
            if (iVar3 == 0) {
              bVar11 = true;
              goto LAB_100851356;
            }
            iVar3 = iVar2;
            if ((uVar9 & 1) != 0) {
              uVar7 = 0;
              if (*(int *)(puVar5 + 1) != 0) {
                uVar7 = *(ulong *)*puVar5;
              }
              iVar3 = iVar2 * *(int *)((long)&PTR___mh_execute_header_100b55880 + (uVar7 & 7) * 4);
            }
            if (*(int *)(puVar1 + 2) == 0) {
              uVar9 = 0;
              if (*piVar10 != 0) {
                uVar9 = (uint)*(undefined8 *)*puVar1;
              }
            }
            else {
              uVar9 = 0;
              if (*piVar10 != 0) {
                uVar9 = (uint)*(undefined8 *)*puVar1;
              }
              uVar9 = ~uVar9;
            }
            uVar8 = 0;
            if (*(int *)(puVar5 + 1) != 0) {
              uVar8 = (uint)*(undefined8 *)*puVar5;
            }
            iVar2 = -iVar3;
            if ((uVar9 & uVar8 & 2) == 0) {
              iVar2 = iVar3;
            }
            iVar3 = FUN_10084e8b0(puVar5,puVar5,puVar1,param_3);
            bVar11 = iVar3 == 0;
            if (bVar11) goto LAB_100851356;
            piVar10 = (int *)(puVar5 + 1);
            *(undefined4 *)(puVar1 + 2) = 0;
            puVar4 = puVar5;
            puVar5 = puVar1;
            iVar3 = *piVar10;
          }
          if (*(int *)(puVar5 + 1) == 1) {
            if (*(long *)*puVar5 != 1) {
              iVar2 = 0;
            }
          }
          else {
            iVar2 = 0;
          }
        }
      }
    }
  }
LAB_100851356:
  FUN_10084cb40(param_3);
  iVar3 = -2;
  if (!bVar11) {
    iVar3 = iVar2;
  }
  return iVar3;
}

