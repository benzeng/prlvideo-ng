
undefined8 FUN_100528210(long param_1,uint *param_2)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *local_48;
  long *local_40;
  undefined1 local_38 [8];
  
  uVar7 = *param_2;
  if (uVar7 != 0) {
    uVar6 = uVar7 >> 0x10 ^ uVar7;
    uVar5 = (ulong)((uVar6 >> 8 ^ uVar6) & 0xff);
    plVar14 = *(long **)(param_1 + 8 + uVar5 * 8);
    if (plVar14 == (long *)0x0) {
      return 0;
    }
    plVar10 = (long *)(param_1 + 8 + uVar5 * 8);
    while (*(uint *)(plVar14 + 1) != uVar7) {
      plVar2 = (long *)*plVar14;
      plVar10 = plVar14;
      plVar14 = plVar2;
      if (plVar2 == (long *)0x0) {
        return 0;
      }
    }
    local_40 = plVar14;
    FUN_1004dc0c0(param_1 + 0x828,param_2,local_38);
    FUN_100529630(param_1 + 0x830,&local_40);
    FUN_100529630(param_1 + 0x838,&local_40);
    FUN_100529630(param_1 + 0x840,&local_40);
    *(undefined1 *)(param_1 + 0x820) = 1;
    FUN_100528500(param_1,plVar14);
    *plVar10 = *plVar14;
    _free(local_40);
    uVar7 = *(uint *)(param_1 + 0x818);
    if ((ulong)uVar7 == 0) {
      return 0;
    }
    uVar6 = *param_2;
    uVar5 = 0;
    puVar9 = *(uint **)(param_1 + 0x810);
    while (*puVar9 != uVar6) {
      uVar5 = uVar5 + 1;
      puVar9 = puVar9 + 1;
      if (uVar7 <= uVar5) {
        return 0;
      }
    }
    if ((int)uVar5 != uVar7 - 1) {
      uVar3 = (int)uVar5 + 1;
      _memmove(puVar9,*(uint **)(param_1 + 0x810) + uVar3,(ulong)(uVar7 - uVar3) << 2);
      uVar7 = *(uint *)(param_1 + 0x818);
    }
    *(uint *)(param_1 + 0x818) = uVar7 - 1;
    if (*(uint *)(param_1 + 0x808) != uVar6) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x808) = 0;
    *(undefined4 *)(param_1 + 0x824) = 0;
    return 0;
  }
  lVar4 = 0;
  do {
    puVar11 = *(undefined8 **)(param_1 + 8 + lVar4 * 8);
    if (puVar11 != (undefined8 *)0x0) {
      puVar13 = (undefined8 *)(param_1 + 8 + lVar4 * 8);
      do {
        if (*(uint *)((long)puVar11 + 0xc) == param_2[1]) {
          local_48 = puVar11;
          FUN_1004dc0c0(param_1 + 0x828,puVar11 + 1,local_38);
          FUN_100529630(param_1 + 0x830,&local_48);
          FUN_100529630(param_1 + 0x838,&local_48);
          FUN_100529630(param_1 + 0x840,&local_48);
          *(undefined1 *)(param_1 + 0x820) = 1;
          uVar7 = *(uint *)(param_1 + 0x818);
          if ((ulong)uVar7 != 0) {
            iVar1 = *(int *)(puVar11 + 1);
            uVar5 = 0;
            piVar8 = *(int **)(param_1 + 0x810);
            do {
              if (*piVar8 == iVar1) {
                if ((int)uVar5 != uVar7 - 1) {
                  uVar6 = (int)uVar5 + 1;
                  _memmove(piVar8,*(int **)(param_1 + 0x810) + uVar6,(ulong)(uVar7 - uVar6) << 2);
                  uVar7 = *(uint *)(param_1 + 0x818);
                }
                *(uint *)(param_1 + 0x818) = uVar7 - 1;
                if (*(int *)(param_1 + 0x808) == iVar1) {
                  *(undefined4 *)(param_1 + 0x808) = 0;
                  *(undefined4 *)(param_1 + 0x824) = 0;
                }
                break;
              }
              uVar5 = uVar5 + 1;
              piVar8 = piVar8 + 1;
            } while (uVar5 < uVar7);
          }
          FUN_100528500(param_1,puVar11);
          *puVar13 = *puVar11;
          _free(local_48);
          puVar12 = (undefined8 *)*puVar13;
        }
        else {
          puVar12 = (undefined8 *)*puVar11;
          puVar13 = puVar11;
        }
        puVar11 = puVar12;
      } while (puVar12 != (undefined8 *)0x0);
    }
    lVar4 = lVar4 + 1;
    if (lVar4 == 0x100) {
      return 0;
    }
  } while( true );
}

