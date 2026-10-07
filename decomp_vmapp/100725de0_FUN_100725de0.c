
int * FUN_100725de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   undefined8 param_13,undefined8 param_14)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  char in_AL;
  size_t sVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  void *pvVar11;
  char *pcVar12;
  char *pcVar13;
  int *piVar14;
  int *piVar15;
  long lVar16;
  size_t sVar17;
  ulong uVar18;
  void *local_128;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  uint local_58;
  uint uStack_54;
  int *local_50;
  undefined1 *local_48;
  long local_38;
  
  if (in_AL != '\0') {
    local_d8 = param_1;
    local_c8 = param_2;
    local_b8 = param_3;
    local_a8 = param_4;
    local_98 = param_5;
    local_88 = param_6;
    local_78 = param_7;
    local_68 = param_8;
  }
  lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_100 = param_10;
  local_f8 = param_11;
  local_f0 = param_12;
  local_e8 = param_13;
  local_e0 = param_14;
  local_38 = lVar16;
  sVar7 = _strlen(param_9);
  piVar8 = _malloc(0x30);
  piVar14 = (int *)0x0;
  if (piVar8 != (int *)0x0) {
    piVar8[6] = 0;
    piVar8[7] = 0;
    piVar8[4] = 0;
    piVar8[5] = 0;
    piVar8[2] = 0;
    piVar8[3] = 0;
    piVar8[0] = 0;
    piVar8[1] = 0;
    piVar8[6] = 1;
    *piVar8 = 7;
    piVar14 = piVar8 + 8;
    *(int **)(piVar8 + 10) = piVar14;
    *(int **)(piVar8 + 8) = piVar14;
    local_48 = local_108;
    local_50 = (int *)&stack0x00000008;
    uStack_54 = 0x30;
    local_58 = 8;
    if (sVar7 != 0) {
      uVar18 = 0;
      puVar10 = (undefined8 *)0x0;
      do {
        if (local_58 < 0x29) {
          lVar16 = (long)(int)local_58;
          local_58 = local_58 + 8;
          piVar15 = (int *)(local_48 + lVar16);
        }
        else {
          piVar15 = local_50;
          local_50 = local_50 + 2;
        }
        pcVar13 = *(char **)piVar15;
        cVar2 = param_9[uVar18];
        if (cVar2 != 'v') {
          if (cVar2 < 'b') {
            if (cVar2 != '6') goto LAB_100726320;
            if (local_58 < 0x29) {
              uVar1 = local_58 + 8;
              local_128 = *(void **)(local_48 + (int)local_58);
              if (0x28 < uVar1) goto LAB_100726073;
              local_58 = local_58 + 0x10;
              piVar15 = (int *)(local_48 + (int)uVar1);
            }
            else {
              local_128 = *(void **)local_50;
              uVar1 = local_58;
              local_50 = local_50 + 2;
LAB_100726073:
              local_58 = uVar1;
              piVar15 = local_50;
              local_50 = local_50 + 2;
            }
            sVar17 = (size_t)*piVar15;
            puVar10 = _malloc(0x30);
            if (puVar10 == (undefined8 *)0x0) break;
            puVar10[5] = 0;
            puVar10[4] = 0;
            puVar10[3] = 0;
            puVar10[2] = 0;
            puVar10[1] = 0;
            *puVar10 = 0;
            *(undefined4 *)(puVar10 + 3) = 1;
            *(undefined4 *)puVar10 = 5;
            pvVar11 = _malloc(sVar17);
            puVar10[4] = pvVar11;
            if (pvVar11 != (void *)0x0) {
              puVar10[1] = sVar17;
              _memcpy(pvVar11,local_128,sVar17);
              goto LAB_100726329;
            }
          }
          else {
            if (cVar2 < 'i') {
              if (cVar2 == 'b') {
                if (local_58 < 0x29) {
                  lVar16 = (long)(int)local_58;
                  local_58 = local_58 + 8;
                  piVar15 = (int *)(local_48 + lVar16);
                }
                else {
                  piVar15 = local_50;
                  local_50 = local_50 + 2;
                }
                iVar3 = *piVar15;
                puVar10 = _malloc(0x30);
                if (puVar10 == (undefined8 *)0x0) goto LAB_100726320;
                puVar10[5] = 0;
                puVar10[4] = 0;
                puVar10[3] = 0;
                puVar10[2] = 0;
                puVar10[1] = 0;
                *puVar10 = 0;
                *(undefined4 *)(puVar10 + 3) = 1;
                *(undefined4 *)puVar10 = 4;
                *(int *)(puVar10 + 4) = iVar3;
                goto LAB_100726329;
              }
              if (cVar2 == 'd') {
                if (uStack_54 < 0xa1) {
                  lVar16 = (long)(int)uStack_54;
                  uStack_54 = uStack_54 + 0x10;
                  piVar15 = (int *)(local_48 + lVar16);
                }
                else {
                  piVar15 = local_50;
                  local_50 = local_50 + 2;
                }
                uVar4 = *(undefined8 *)piVar15;
                puVar10 = _malloc(0x30);
                if (puVar10 != (undefined8 *)0x0) {
                  puVar10[5] = 0;
                  puVar10[4] = 0;
                  puVar10[3] = 0;
                  puVar10[2] = 0;
                  puVar10[1] = 0;
                  *puVar10 = 0;
                  *(undefined4 *)(puVar10 + 3) = 1;
                  *(undefined4 *)puVar10 = 9;
                  puVar10[4] = uVar4;
                  goto LAB_100726329;
                }
              }
            }
            else if (cVar2 == 'i') {
              if (local_58 < 0x29) {
                lVar16 = (long)(int)local_58;
                local_58 = local_58 + 8;
                piVar15 = (int *)(local_48 + lVar16);
              }
              else {
                piVar15 = local_50;
                local_50 = local_50 + 2;
              }
              iVar3 = *piVar15;
              puVar10 = _malloc(0x30);
              if (puVar10 != (undefined8 *)0x0) {
                puVar10[5] = 0;
                puVar10[4] = 0;
                puVar10[3] = 0;
                puVar10[2] = 0;
                puVar10[1] = 0;
                *puVar10 = 0;
                *(undefined4 *)(puVar10 + 3) = 1;
                *(undefined4 *)puVar10 = 1;
                *(int *)(puVar10 + 4) = iVar3;
                goto LAB_100726329;
              }
            }
            else if (cVar2 == 's') {
              if (local_58 < 0x29) {
                lVar16 = (long)(int)local_58;
                local_58 = local_58 + 8;
                piVar15 = (int *)(local_48 + lVar16);
              }
              else {
                piVar15 = local_50;
                local_50 = local_50 + 2;
              }
              pcVar5 = *(char **)piVar15;
              puVar10 = _malloc(0x30);
              if (puVar10 != (undefined8 *)0x0) {
                puVar10[5] = 0;
                puVar10[4] = 0;
                puVar10[3] = 0;
                puVar10[2] = 0;
                puVar10[1] = 0;
                *puVar10 = 0;
                *(undefined4 *)(puVar10 + 3) = 1;
                *(undefined4 *)puVar10 = 3;
                pcVar12 = _strdup(pcVar5);
                puVar10[4] = pcVar12;
                if (pcVar12 == (char *)0x0) {
                  FUN_100724b70(puVar10);
                }
                else {
                  sVar17 = _strlen(pcVar5);
                  puVar10[1] = sVar17;
                }
                goto LAB_100726329;
              }
            }
LAB_100726320:
            if (puVar10 == (undefined8 *)0x0) break;
LAB_100726329:
            if ((*piVar8 == 7) && (puVar9 = _malloc(0x20), puVar9 != (undefined8 *)0x0))
            goto LAB_100726342;
          }
          FUN_100724b70(puVar10);
          break;
        }
        if (local_58 < 0x29) {
          lVar16 = (long)(int)local_58;
          local_58 = local_58 + 8;
          piVar15 = (int *)(local_48 + lVar16);
        }
        else {
          piVar15 = local_50;
          local_50 = local_50 + 2;
        }
        if (*piVar8 != 7) break;
        puVar10 = *(undefined8 **)piVar15;
        puVar9 = _malloc(0x20);
        if (puVar9 == (undefined8 *)0x0) break;
LAB_100726342:
        puVar9[3] = 0;
        puVar9[2] = 0;
        puVar9[1] = 0;
        *puVar9 = 0;
        puVar9[1] = puVar9;
        *puVar9 = puVar9;
        pcVar13 = _strdup(pcVar13);
        puVar9[2] = pcVar13;
        puVar9[3] = puVar10;
        puVar6 = *(undefined8 **)(piVar8 + 10);
        puVar9[1] = puVar6;
        *puVar9 = piVar14;
        *puVar6 = puVar9;
        *(undefined8 **)(piVar8 + 10) = puVar9;
        uVar18 = uVar18 + 1;
      } while (uVar18 < sVar7);
    }
    lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
    piVar14 = piVar8;
  }
  if (lVar16 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return piVar14;
}

