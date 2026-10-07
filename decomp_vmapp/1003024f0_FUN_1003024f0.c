
void FUN_1003024f0(long param_1,int param_2,void *param_3,char param_4)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  long lVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_50;
  long local_48;
  uint *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar8 = *(uint *)(param_1 + 0x15ac);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2058);
  uVar11 = uVar8;
  if (uVar1 < 0x20) {
    uVar7 = 0x20;
    do {
      uVar7 = uVar7 >> 1;
      uVar11 = uVar11 ^ uVar11 >> (sbyte)uVar7;
    } while (uVar1 < uVar7);
  }
  puVar9 = *(uint **)(*(long *)(param_1 + 0x30) + 0x1858 + (ulong)(uVar11 & 0xff) * 8);
  lVar16 = 0;
  if (puVar9 != (uint *)0x0) {
    lVar16 = 0;
    do {
      if (*puVar9 == uVar8) {
        lVar16 = *(long *)(puVar9 + 2);
        break;
      }
      puVar9 = *(uint **)(puVar9 + 4);
    } while (puVar9 != (uint *)0x0);
  }
  lVar15 = (long)param_2;
  lVar5 = -(lVar15 * 8 + 0xfU & 0xfffffffffffffff0);
  local_48 = param_1;
  local_40 = (uint *)((long)&local_48 + lVar5);
  *(undefined8 *)((long)&uStack_50 + lVar5) = 0x1003025b2;
  _memcpy((uint *)((long)&local_48 + lVar5),param_3,lVar15 * 4);
  puVar9 = local_40;
  if ((param_3 != (void *)0x0) && (0 < param_2)) {
    puVar6 = (uint *)(lVar16 + 0x198);
    lVar14 = 0;
    lVar10 = 1;
    puVar13 = local_40;
    do {
      if (((param_4 == '\0') && (uVar8 = *puVar13, uVar8 != 0)) &&
         (((0xc < uVar8 - 0x400 && (*(int *)(local_48 + 0x15a4) == 0)) ||
          (((uVar8 & 0xfffffff0) != 0x8ce0 && (*(int *)(local_48 + 0x15a4) != 0)))))) {
        uVar8 = *puVar6;
        *puVar13 = uVar8;
        puVar12 = puVar6;
LAB_100302644:
        *puVar12 = uVar8;
        uVar8 = *puVar13;
        if ((uVar8 != 0) && (*(int *)(local_48 + 0x15a4) == 0)) {
          if ((*(char *)(local_48 + 0x38) == '\0') ||
             ((uVar8 - 0x400 < 5 && ((0x13U >> (uVar8 - 0x400 & 0x1f) & 1) != 0)))) {
            puVar12 = (uint *)(*(long *)(local_48 + 0x28) + 0x2c);
          }
          else {
            puVar12 = (uint *)(*(long *)(local_48 + 0x28) + 0x30);
          }
          uVar8 = *puVar12;
        }
        *puVar13 = uVar8;
LAB_100302681:
        puVar6[0x10] = uVar8;
      }
      else if (lVar16 != 0) {
        uVar8 = *puVar13;
        if (param_4 == '\0') {
          puVar12 = (uint *)(lVar16 + 0x198 + lVar14 * 4);
          goto LAB_100302644;
        }
        goto LAB_100302681;
      }
      if (lVar15 <= lVar10) break;
      lVar14 = lVar14 + 1;
      puVar6 = puVar6 + 1;
      puVar13 = puVar13 + 1;
      bVar4 = lVar10 < 0x10;
      lVar10 = lVar10 + 1;
    } while (bVar4);
  }
  if (lVar16 != 0) {
    uVar2 = *DAT_1011c4a88;
    pcVar3 = (code *)DAT_1011c4a88[0x28f];
    *(undefined8 *)((long)&uStack_50 + lVar5) = 0x1003026be;
    (*pcVar3)(uVar2,param_2,puVar9);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&uStack_50 + lVar5) = &UNK_1003026e2;
    ___stack_chk_fail();
  }
  return;
}

