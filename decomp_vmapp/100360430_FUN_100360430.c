
ulong FUN_100360430(long param_1,long param_2,char param_3,char param_4)

{
  int iVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  uint *puVar17;
  bool bVar18;
  uint local_6c;
  long local_68;
  
  lVar11 = *(long *)(param_1 + 0x98);
  uVar12 = 0xffffffff;
  lVar16 = 0;
  uVar14 = 0;
  uVar8 = 0xffffffff;
  do {
    lVar10 = lVar16 * 0x20;
    puVar17 = (uint *)(lVar11 + 0x50 + lVar10);
    uVar6 = *(uint *)(param_2 + 0x164 + lVar16 * 4);
    if (uVar6 == 0) {
      *puVar17 = 0;
      *(undefined8 *)(lVar11 + 0x60 + lVar10) = 0;
      *(undefined8 *)(lVar11 + 0x58 + lVar10) = 0;
    }
    else {
      iVar1 = *(int *)(param_2 + 0x174 + lVar16 * 4);
      if ((uVar6 == *puVar17) &&
         ((iVar5 = *(int *)(lVar11 + 0x68 + lVar10), iVar1 == 0x10 || (iVar1 == iVar5)))) {
        uVar15 = *(undefined8 *)(lVar11 + 0x58 + lVar10);
        local_68 = *(long *)(lVar11 + 0x60 + lVar10);
        local_6c = *(uint *)(lVar11 + 0x6c + lVar10);
      }
      else {
        puVar9 = *(uint **)(*(long *)(param_1 + 0x30) + 0x8068 +
                           (ulong)((uVar6 >> 0xc ^ uVar6) & 0xfff ^ uVar6 >> 0x18) * 8);
        if (puVar9 == (uint *)0x0) {
          return 0;
        }
        while (*puVar9 != uVar6) {
          puVar9 = *(uint **)(puVar9 + 4);
          if (puVar9 == (uint *)0x0) {
            return 0;
          }
        }
        lVar2 = *(long *)(puVar9 + 2);
        if (lVar2 == 0) {
          return 0;
        }
        uVar13 = (ulong)*(uint *)(lVar2 + 4);
        local_68 = *(long *)(lVar2 + 8);
        if ((*(ushort *)(local_68 + 0xb0) & 0x10) == 0) {
          return 0;
        }
        iVar5 = iVar1;
        if (iVar1 == 0x10) {
          iVar5 = FUN_10032df00(local_68,uVar13);
        }
        local_6c = FUN_10032dee0(local_68,uVar13);
        if ((*(ushort *)(local_68 + 0xb0) & 1) != 0) {
          uVar13 = 0;
        }
        uVar15 = 0;
        if (uVar13 < (ulong)(*(long *)(local_68 + 0x48) - *(long *)(local_68 + 0x40) >> 3)) {
          uVar15 = *(undefined8 *)(*(long *)(local_68 + 0x40) + uVar13 * 8);
        }
        *puVar17 = uVar6;
        *(long *)(lVar11 + 0x60 + lVar10) = local_68;
        *(int *)(lVar11 + 0x68 + lVar10) = iVar5;
        *(uint *)(lVar11 + 0x6c + lVar10) = local_6c;
        *(undefined8 *)(lVar11 + 0x58 + lVar10) = uVar15;
      }
      uVar6 = FUN_100380dc0(uVar15,iVar5);
      uVar7 = FUN_100380de0(uVar15,iVar5);
      if (uVar6 <= uVar12) {
        uVar12 = uVar6;
      }
      if (uVar7 <= uVar8) {
        uVar8 = uVar7;
      }
      uVar14 = uVar14 | 1 << ((byte)lVar16 & 0x1f);
      if (param_3 != '\0') {
        uVar6 = 1 << ((byte)local_6c & 0x1f);
        if ((*(ushort *)(local_68 + 0xb0) & 1) != 0) {
          uVar6 = 1;
        }
        *(uint *)(local_68 + 0xa8) = *(uint *)(local_68 + 0xa8) | uVar6;
        puVar17 = (uint *)(*(long *)(local_68 + 0x90) + (ulong)local_6c * 4);
        *puVar17 = *puVar17 & ~(1 << ((byte)iVar5 & 0x1f));
        if ((*(ushort *)(local_68 + 0xb0) & 2) != 0) {
          *(undefined1 *)(local_68 + 0xac) = 1;
        }
      }
    }
    lVar16 = lVar16 + 1;
    lVar11 = *(long *)(param_1 + 0x98);
  } while ((int)lVar16 < 4);
  puVar17 = (uint *)(lVar11 + 0xf0);
  uVar6 = *(uint *)(param_2 + 0x184);
  if (uVar6 == 0) {
    *(undefined4 *)(lVar11 + 0xf0) = 0;
    *(undefined8 *)(lVar11 + 0x100) = 0;
    *(undefined8 *)(lVar11 + 0xf8) = 0;
  }
  else if (*puVar17 != uVar6) {
    puVar9 = *(uint **)(*(long *)(param_1 + 0x30) + 0x8068 +
                       (ulong)((uVar6 >> 0xc ^ uVar6) & 0xfff ^ uVar6 >> 0x18) * 8);
    if (puVar9 == (uint *)0x0) {
      return 0;
    }
    while (*puVar9 != uVar6) {
      puVar9 = *(uint **)(puVar9 + 4);
      if (puVar9 == (uint *)0x0) {
        return 0;
      }
    }
    if (*(long *)(puVar9 + 2) == 0) {
      return 0;
    }
    lVar16 = *(long *)(*(long *)(puVar9 + 2) + 8);
    if ((*(ushort *)(lVar16 + 0xb0) & 0x40) == 0) {
      return 0;
    }
    *(uint *)(lVar11 + 0xf0) = uVar6;
    *(long *)(lVar11 + 0x100) = lVar16;
    puVar4 = *(undefined8 **)(lVar16 + 0x40);
    uVar15 = 0;
    lVar10 = *(long *)(lVar16 + 0x48) - (long)puVar4;
    if (lVar10 != 0) {
      uVar15 = *puVar4;
    }
    *(undefined8 *)(lVar11 + 0xf8) = uVar15;
    if (*(int *)(lVar16 + 8) == 0x23) {
      *(uint *)(lVar11 + 0xd0) = uVar6;
      *(long *)(lVar11 + 0xe0) = lVar16;
      *(undefined8 *)(lVar11 + 0xe8) = 0;
      uVar15 = 0;
      if (1 < (ulong)(lVar10 >> 3)) {
        uVar15 = puVar4[1];
      }
      puVar17 = (uint *)(lVar11 + 0xd0);
      *(undefined8 *)(lVar11 + 0xd8) = uVar15;
    }
  }
  if (*(long *)(puVar17 + 4) != 0) {
    uVar6 = FUN_100380de0(*(undefined8 *)(puVar17 + 2),0);
    if ((((uVar6 < uVar8) || (uVar8 = FUN_100380dc0(*(undefined8 *)(puVar17 + 2),0), uVar8 < uVar12)
         ) && (*(int *)(param_2 + 0x82a8) == 0)) && (*(int *)(param_2 + 0x828c) == 0)) {
      bVar18 = *(int *)(param_2 + 0x8340) != 0;
      lVar11 = *(long *)(param_1 + 0x98);
      if (bVar18 != (*(char *)(lVar11 + 0x118) != '\0')) {
LAB_100360848:
        puVar3 = *(ulong **)(param_1 + 0xa0);
        *puVar3 = *puVar3 | *(ulong *)(*(long *)puVar3[1] + 0x3010);
      }
    }
    else {
      lVar11 = *(long *)(param_1 + 0x98);
      bVar18 = true;
      if (*(char *)(lVar11 + 0x118) == '\0') goto LAB_100360848;
    }
    *(bool *)(lVar11 + 0x118) = bVar18;
    lVar16 = *(long *)(puVar17 + 4);
    if (param_4 != '\0') {
      puVar17 = *(uint **)(lVar16 + 0x90);
      *puVar17 = *puVar17 & 0xfffffffe;
    }
    if (((*(int *)(lVar16 + 8) == 0x23) && (*(int *)(param_2 + 0x82a8) != 0)) &&
       (*(int *)(param_2 + 0x828c) != 0)) {
      uVar14 = uVar14 | 0x10;
    }
  }
  if (*(long *)(lVar11 + 0xf8) == 0) {
    if (*(int *)(lVar11 + 0x23c) == 0) goto LAB_1003608f7;
  }
  else if (*(int *)(*(long *)(lVar11 + 0xf8) + 0x18) == *(int *)(lVar11 + 0x23c))
  goto LAB_1003608f7;
  if (((*(float *)(param_2 + 0x857c) != 0.0) || (NAN(*(float *)(param_2 + 0x857c)))) ||
     ((*(float *)(param_2 + 0x852c) != 0.0 || (NAN(*(float *)(param_2 + 0x852c)))))) {
    puVar3 = *(ulong **)(param_1 + 0xa0);
    *puVar3 = *puVar3 | *(ulong *)(*(long *)puVar3[1] + 0x618);
  }
LAB_1003608f7:
  if ((uVar14 & 0x10) >> 4 != (uint)((*(byte *)(lVar11 + 0x110) & 0x10) >> 4)) {
    puVar3 = *(ulong **)(param_1 + 0xa0);
    *puVar3 = *puVar3 | *(ulong *)(*(long *)puVar3[1] + 0x3010);
  }
  uVar14 = (1 << (*(byte *)(DAT_1011c8478 + 0xc) & 0x1f)) - 1U & uVar14;
  *(uint *)(lVar11 + 0x110) = uVar14;
  uVar13 = CONCAT71((uint7)(uint3)(uVar14 >> 8),1);
  if (uVar14 == 0) {
    uVar13 = (ulong)(*(long *)(lVar11 + 0x100) != 0);
  }
  return uVar13;
}

