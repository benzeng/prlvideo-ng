
ulong FUN_100335350(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  byte bVar19;
  ulong uVar20;
  uint *puVar21;
  int iVar22;
  uint local_80;
  uint local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int iStack_64;
  int local_60;
  int local_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined4 local_38;
  
  uVar20 = (ulong)*(ushort *)(param_2 + 2);
  lVar15 = uVar20 * 0x24 + 4;
  if ((param_2 < *(ulong *)(param_1 + 0xbbf8)) ||
     (uVar8 = lVar15 + param_2, *(ulong *)(param_1 + 0xbc00) < uVar8)) {
    puVar6 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar6 = param_2;
    *(int *)(puVar6 + 1) = (int)lVar15;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar6,&PTR_vtable_101117a68,0);
  }
  if (*(ushort *)(param_2 + 2) == 0) {
    return uVar8;
  }
  puVar21 = (uint *)(param_2 + 4);
  iVar5 = 0;
LAB_1003353c0:
  uVar12 = puVar21[1];
  lVar15 = 0;
  if (uVar12 != 0) {
    for (puVar13 = *(uint **)(*(long *)(param_1 + 0xbb88) + 0x8068 +
                             (ulong)((uVar12 >> 0xc ^ uVar12) & 0xfff ^ uVar12 >> 0x18) * 8);
        lVar15 = 0, puVar13 != (uint *)0x0; puVar13 = *(uint **)(puVar13 + 4)) {
      if (*puVar13 == uVar12) {
        lVar15 = *(long *)(puVar13 + 2);
        break;
      }
    }
  }
  uVar12 = *puVar21;
  if (uVar12 != 0) {
    for (puVar13 = *(uint **)(*(long *)(param_1 + 0xbb88) + 0x8068 +
                             (ulong)((uVar12 >> 0xc ^ uVar12) & 0xfff ^ uVar12 >> 0x18) * 8);
        puVar13 != (uint *)0x0; puVar13 = *(uint **)(puVar13 + 4)) {
      if (*puVar13 == uVar12) {
        lVar1 = *(long *)(puVar13 + 2);
        if (lVar1 != 0) {
          lVar2 = *(long *)(lVar1 + 8);
          uVar3 = FUN_10032dee0(lVar2,*(undefined4 *)(lVar1 + 4));
          if (lVar15 == 0) {
            local_80 = puVar21[2];
            local_7c = puVar21[3];
            local_78 = (puVar21[6] + local_80) - puVar21[4];
            local_74 = (puVar21[7] + local_7c) - puVar21[5];
            local_70 = 0;
            local_6c = 1;
            FUN_10035e790(*(undefined8 *)(param_1 + 48000),lVar2,&local_80,uVar3);
            goto LAB_1003356de;
          }
          local_48 = 1;
          local_38 = 0;
          local_44 = 0;
          local_40 = 0x8e;
          lVar1 = *(long *)(lVar15 + 8);
          uVar4 = FUN_10032dee0(lVar1,*(undefined4 *)(lVar15 + 4));
          uVar12 = *(uint *)(lVar1 + 0x1c);
          uVar11 = 0;
          if (uVar12 == 0) goto LAB_10033558e;
          uVar10 = 0;
          uVar14 = 0xffffffff;
          uVar17 = 0;
          goto LAB_100335500;
        }
        break;
      }
    }
  }
  goto LAB_100335700;
LAB_100335500:
  uVar7 = uVar14 + 1;
  bVar19 = (byte)uVar7 & 0x1f;
  uVar9 = *(uint *)(lVar1 + 0xc) >> bVar19;
  if (*(uint *)(lVar1 + 0xc) >> bVar19 == 0) {
    uVar9 = 1;
  }
  uVar11 = uVar10;
  if (uVar9 < *(uint *)(lVar2 + 0xc)) goto LAB_10033558e;
  bVar19 = (byte)uVar7 & 0x1f;
  uVar10 = *(uint *)(lVar1 + 0x10) >> bVar19;
  if (*(uint *)(lVar1 + 0x10) >> bVar19 == 0) {
    uVar10 = 1;
  }
  if ((uVar10 < *(uint *)(lVar2 + 0x10)) ||
     (uVar9 = uVar14 + 2, uVar10 = uVar17, uVar14 = uVar7, uVar17 = uVar17 + 1, uVar11 = uVar7,
     uVar12 <= uVar9)) goto LAB_10033558e;
  goto LAB_100335500;
LAB_10033558e:
  if ((*(int *)(lVar2 + 0x1c) != 0) && (uVar11 < uVar12)) {
    uVar10 = -*(int *)(lVar2 + 0x1c);
    if (uVar10 <= uVar11 - uVar12) {
      uVar10 = uVar11 - uVar12;
    }
    iVar22 = 0;
    do {
      bVar19 = (byte)(uVar11 + iVar22);
      iVar16 = (1 << (bVar19 & 0x1f)) + -1;
      uVar14 = puVar21[6] + iVar16 >> (bVar19 & 0x1f);
      uVar12 = (int)puVar21[4] >> (bVar19 & 0x1f);
      local_50 = uVar12 + 1;
      if (uVar14 != uVar12) {
        local_50 = uVar14;
      }
      uVar17 = iVar16 + puVar21[7] >> (bVar19 & 0x1f);
      uVar14 = (int)puVar21[5] >> (bVar19 & 0x1f);
      _local_58 = CONCAT44(uVar14,uVar12);
      local_4c = uVar14 + 1;
      if (uVar17 != uVar14) {
        local_4c = uVar17;
      }
      iVar16 = (int)puVar21[2] >> ((byte)iVar22 & 0x1f);
      iVar18 = (int)puVar21[3] >> ((byte)iVar22 & 0x1f);
      _local_68 = CONCAT44(iVar18,iVar16);
      local_60 = (iVar16 + local_50) - uVar12;
      local_5c = (iVar18 + local_4c) - uVar14;
      FUN_10035f410(*(undefined8 *)(param_1 + 48000),lVar1,&local_58,uVar4,uVar11 + iVar22,lVar2,
                    &local_68,uVar3,iVar22,&local_48);
      iVar22 = iVar22 + 1;
    } while (-uVar10 != iVar22);
  }
LAB_1003356de:
  puVar21 = puVar21 + 9;
  uVar20 = (ulong)*(ushort *)(param_2 + 2);
LAB_100335700:
  iVar5 = iVar5 + 1;
  if ((int)uVar20 <= iVar5) {
    return uVar8;
  }
  goto LAB_1003353c0;
}

