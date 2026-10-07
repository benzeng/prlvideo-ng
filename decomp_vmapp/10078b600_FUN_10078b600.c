
void FUN_10078b600(long param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  ushort *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  ushort uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  uint uVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong *puVar16;
  char *pcVar17;
  undefined2 uVar18;
  uint uVar19;
  uint uVar20;
  undefined *puVar21;
  char *pcVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar29;
  undefined8 uVar28;
  undefined8 uVar30;
  undefined4 local_54;
  
  uVar29 = (undefined4)((ulong)in_stack_ffffffffffffff78 >> 0x20);
  uVar25 = (ulong)param_2;
  lVar26 = uVar25 * 0x30;
  uVar7 = *(ushort *)(param_1 + 0xa0 + lVar26);
  *(ushort *)(param_1 + 0x5c1 + lVar26) = uVar7;
  if (*(int *)(param_1 + 0xa4 + lVar26) != 0) {
    *(undefined8 *)(param_1 + 0x5c3 + lVar26) = *(undefined8 *)(param_1 + 0xa8 + lVar26);
    *(undefined8 *)(param_1 + 0x5d3 + lVar26) = *(undefined8 *)(param_1 + 0xb8 + lVar26);
    *(undefined8 *)(param_1 + 0x5cb + lVar26) = *(undefined8 *)(param_1 + 0xb0 + lVar26);
    puVar1 = (undefined4 *)(param_1 + 0xc0 + lVar26);
    uVar29 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
    puVar2 = (undefined4 *)(param_1 + 0x5e0 + lVar26);
    *puVar2 = *puVar1;
    puVar2[1] = uVar29;
    puVar2[2] = uVar10;
    puVar2[3] = uVar11;
    *(undefined1 *)(param_1 + 0x5c0 + lVar26) = 1;
    if ((param_2 & 0xfffffffe) != 6) {
      return;
    }
    if ((uVar7 & 4) == 0) {
      return;
    }
    goto LAB_10078b78f;
  }
  pbVar3 = (byte *)(param_1 + 0x5c1 + lVar26);
  if (((*(byte *)(param_1 + 0x230) & 1) == 0) || ((*(byte *)(param_1 + 0x8a) & 2) != 0)) {
    if (param_2 < 6) {
      *(undefined8 *)(param_1 + 0x5e8 + lVar26) = 0xffff;
      lVar23 = (ulong)uVar7 << 4;
      *(long *)(param_1 + 0x5e0 + lVar26) = lVar23;
      *(undefined1 *)(param_1 + 0x5c0 + lVar26) = 1;
      uVar18 = 0x92;
      if ((*(uint *)(param_1 + 0x88) & 0x20000) != 0) {
        uVar18 = 0xf2;
      }
      *(undefined2 *)(param_1 + 0x5c3 + lVar26) = 0xffff;
      *(short *)(param_1 + 0x5c5 + lVar26) = (short)lVar23;
      *(byte *)(param_1 + 0x5c7 + lVar26) = (byte)(uVar7 >> 0xc);
      *(undefined2 *)(param_1 + 0x5c8 + lVar26) = uVar18;
      *(undefined1 *)(param_1 + 0x5ca + lVar26) = 0;
    }
    goto LAB_10078b76d;
  }
  if (uVar7 < 8) goto LAB_10078b76d;
  if ((uVar7 & 4) != 0) {
    if (*(char *)(param_1 + 0x6e0) != '\0') {
      plVar14 = (long *)(param_1 + 0x700);
      puVar16 = (ulong *)(param_1 + 0x708);
      pcVar22 = "LDT";
      goto LAB_10078b7e8;
    }
    if (DAT_1011b55f8 < 1) goto LAB_10078b76d;
    uVar29 = *(undefined4 *)(param_1 + 0x5b8);
    pcVar22 = (&PTR_s_ES_100bcf150)[uVar25];
    uVar24 = (ulong)(uint)uVar7;
    pcVar17 = "vcpu %u LDT selector %s (%hx) is invalid";
    uVar15 = 1;
LAB_10078ba28:
    FUN_1008e3970("","gueststate",uVar15,pcVar17,uVar29,pcVar22,uVar24);
    goto LAB_10078b76d;
  }
  plVar14 = (long *)(param_1 + 0x240);
  puVar16 = (ulong *)(param_1 + 0x248);
  pcVar22 = "GDT";
LAB_10078b7e8:
  uVar8 = *puVar16;
  uVar24 = (ulong)uVar7 & 0xfff8;
  if (uVar8 <= uVar24 + 8) {
LAB_10078b974:
    uVar29 = *(undefined4 *)(param_1 + 0x5b8);
    pcVar17 = "vcpu %u read %s exceeds limit offset: %llu size: %u dt_limit: %llu";
    uVar15 = 0;
    goto LAB_10078ba28;
  }
  puVar4 = (ushort *)(param_1 + 0x5c3 + lVar26);
  lVar9 = *plVar14;
  lVar23 = lVar9 + uVar24;
  uVar15 = (**(code **)(param_1 + 0x760))(param_1 + 0x740,*(undefined8 *)(param_1 + 0x90),lVar23,1);
  local_54 = 8;
  cVar12 = (**(code **)(param_1 + 0x748))(puVar4,8,uVar15);
  if (cVar12 == '\0') {
LAB_10078b9a7:
    FUN_1008e3970("","gueststate",0,"vcpu %u couldn\'t read %s base: %llu offset: %llu size: %u",
                  *(undefined4 *)(param_1 + 0x5b8),pcVar22,lVar9,uVar24,CONCAT44(uVar29,local_54));
    goto LAB_10078b76d;
  }
  uVar7 = *(ushort *)((long)puVar4 + 5);
  uVar13 = (uint)uVar7;
  if ((((uVar7 & 0x10) == 0) && ((*(byte *)(param_1 + 0x229) & 4) != 0)) &&
     ((0xb < (uVar7 & 0x1f) ||
      (((0xa04U >> (uVar7 & 0x1f) & 1) == 0 || ((*(byte *)(param_1 + 0x5f9) & 0x20) != 0)))))) {
    if (uVar8 <= uVar24 + 0x10) goto LAB_10078b974;
    uVar15 = (**(code **)(param_1 + 0x760))
                       (param_1 + 0x740,*(undefined8 *)(param_1 + 0x90),lVar23,1);
    local_54 = 0x10;
    cVar12 = (**(code **)(param_1 + 0x748))(puVar4,0x10,uVar15);
    if (cVar12 == '\0') goto LAB_10078b9a7;
    uVar13 = (uint)*(ushort *)((long)puVar4 + 5);
  }
  puVar5 = (undefined1 *)(param_1 + 0x5c0 + lVar26);
  uVar24 = *(ulong *)(param_1 + 0x228) & 0x400;
  if ((uVar13 & 0x10) != 0) {
    if ((uVar24 == 0) || ((*(byte *)(param_1 + 0x5f9) & 0x20) == 0)) {
      if ((short)uVar13 < 0) {
        uVar19 = ((uint)*puVar4 | (uVar13 & 0xff00) << 8) * 0x1000;
        uVar20 = uVar19 + 0xfff;
        if ((uVar13 & 0xc) == 4) {
          uVar20 = uVar19;
        }
      }
      else {
        uVar20 = (uint)*puVar4 | (uVar13 >> 8 & 0xf) << 0x10;
      }
      *(ulong *)(param_1 + 0x5e8 + lVar26) = (ulong)uVar20;
      uVar24 = (ulong)CONCAT13(*(undefined1 *)((long)puVar4 + 7),*(undefined3 *)(puVar4 + 1));
    }
    else {
      *(undefined8 *)(param_1 + 0x5e8 + lVar26) = 0xffffffffffffffff;
      if (param_2 == 5) {
        uVar24 = *(ulong *)(param_1 + 0x268);
      }
      else {
        if (param_2 != 4) {
          *(undefined8 *)(param_1 + 0x5e0 + lVar26) = 0;
          *puVar5 = 1;
          goto LAB_10078b76d;
        }
        uVar24 = *(ulong *)(param_1 + 0x260);
      }
    }
    *(ulong *)(param_1 + 0x5e0 + lVar26) = uVar24;
    *puVar5 = 1;
    goto LAB_10078b76d;
  }
  uVar20 = uVar13 & 0x1f;
  if (uVar24 != 0) {
    if (0xf < uVar20) {
LAB_10078bca6:
      pcVar22 = "Invalid descriptor type %x.";
LAB_10078bcbb:
      FUN_1008e3970("","gueststate",0,pcVar22);
      puVar21 = (&PTR_s_ES_100bcf150)[uVar25];
      uVar18 = *(undefined2 *)pbVar3;
      uVar15 = *(undefined8 *)(param_1 + 0x5c3 + lVar26);
      uVar27 = *(undefined8 *)(param_1 + 0x5d3 + lVar26);
      uVar28 = *(undefined8 *)(param_1 + 0x5e0 + lVar26);
      uVar30 = *(undefined8 *)(param_1 + 0x5e8 + lVar26);
      uVar6 = *(undefined1 *)(param_1 + 0x5c0 + lVar26);
      goto LAB_10078bd32;
    }
    if ((0xd000U >> uVar20 & 1) != 0) {
      pcVar22 = "Not implemented descriptor type %x.";
      goto LAB_10078bcbb;
    }
    if ((0xa00U >> uVar20 & 1) != 0) {
      uVar13 = CONCAT13(*(undefined1 *)(param_1 + 0x5d2 + lVar26),
                        CONCAT12(*(undefined1 *)(param_1 + 0x5cf + lVar26),
                                 *(undefined2 *)(param_1 + 0x5cd + lVar26)));
      uVar24 = (ulong)uVar13;
      if ((*(byte *)(param_1 + 0x5f9) & 0x20) != 0) {
        uVar24 = CONCAT44(*(undefined4 *)(param_1 + 0x5d3 + lVar26),uVar13);
      }
      *(ulong *)(param_1 + 0x5e0 + lVar26) = uVar24;
      uVar7 = *(ushort *)(param_1 + 0x5d0 + lVar26);
      uVar13 = (uint)*(ushort *)(param_1 + 0x5cb + lVar26);
      if ((short)uVar7 < 0) {
        uVar13 = ((uVar7 & 0xff00) << 8 | uVar13) * 0x1000;
        uVar20 = uVar13 + 0xfff;
        if ((uVar7 & 0xc) == 4) {
          uVar20 = uVar13;
        }
      }
      else {
        uVar20 = (uVar7 >> 8 & 0xf) << 0x10 | uVar13;
      }
      goto LAB_10078be04;
    }
    if (uVar20 != 2) goto LAB_10078bca6;
    uVar13 = CONCAT13(*(undefined1 *)(param_1 + 0x5d2 + lVar26),
                      CONCAT12(*(undefined1 *)(param_1 + 0x5cf + lVar26),
                               *(undefined2 *)(param_1 + 0x5cd + lVar26)));
    uVar24 = (ulong)uVar13;
    if ((*(byte *)(param_1 + 0x5f9) & 0x20) != 0) {
      uVar24 = CONCAT44(*(undefined4 *)(param_1 + 0x5d3 + lVar26),uVar13);
    }
    *(ulong *)(param_1 + 0x5e0 + lVar26) = uVar24;
    uVar7 = *(ushort *)(param_1 + 0x5cb + lVar26);
    goto LAB_10078bdca;
  }
  switch(uVar20) {
  case 1:
  case 3:
    uVar24 = (ulong)puVar4[1];
    break;
  case 2:
    uVar24 = (ulong)CONCAT13(*(undefined1 *)((long)puVar4 + 7),*(undefined3 *)(puVar4 + 1));
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 0xc:
  case 0xe:
  case 0xf:
    pcVar22 = "Not implemented descriptor type %x.";
    goto LAB_10078bafa;
  default:
    pcVar22 = "Invalid descriptor type %x.";
LAB_10078bafa:
    FUN_1008e3970("","gueststate",0,pcVar22);
    puVar21 = (&PTR_s_ES_100bcf150)[uVar25];
    uVar18 = *(undefined2 *)pbVar3;
    uVar15 = *(undefined8 *)(param_1 + 0x5c3 + lVar26);
    uVar27 = *(undefined8 *)(param_1 + 0x5d3 + lVar26);
    uVar28 = *(undefined8 *)(param_1 + 0x5e0 + lVar26);
    uVar30 = *(undefined8 *)(param_1 + 0x5e8 + lVar26);
    uVar6 = *(undefined1 *)(param_1 + 0x5c0 + lVar26);
LAB_10078bd32:
    FUN_1008e3970("","gueststate",0,
                  "%s: sel %.4x  descr %.16llx descr64_high %.16llx base %.16llx  limit %.16llx valid %u"
                  ,puVar21,uVar18,uVar15,uVar27,uVar28,uVar30,uVar6);
    *puVar5 = 0;
    goto LAB_10078b76d;
  case 9:
  case 0xb:
    *(ulong *)(param_1 + 0x5e0 + lVar26) =
         (ulong)CONCAT13(*(undefined1 *)((long)puVar4 + 7),*(undefined3 *)(puVar4 + 1));
    if ((short)uVar13 < 0) {
      uVar19 = ((uint)*puVar4 | (uVar13 & 0xff00) << 8) * 0x1000;
      uVar20 = uVar19 + 0xfff;
      if ((uVar13 & 0xc) == 4) {
        uVar20 = uVar19;
      }
    }
    else {
      uVar20 = (uint)*puVar4 | (uVar13 >> 8 & 0xf) << 0x10;
    }
LAB_10078be04:
    *(ulong *)(param_1 + 0x5e8 + lVar26) = (ulong)uVar20;
    *puVar5 = 1;
    goto LAB_10078b76d;
  }
  *(ulong *)(param_1 + 0x5e0 + lVar26) = uVar24;
  uVar7 = *puVar4;
LAB_10078bdca:
  *(ulong *)(param_1 + 0x5e8 + lVar26) = (ulong)uVar7;
  *puVar5 = 1;
LAB_10078b76d:
  if (((param_2 & 0xfffffffe) != 6) || ((*pbVar3 & 4) == 0)) {
    return;
  }
LAB_10078b78f:
  FUN_1008e3970("","gueststate",0,"%s segment selector points to LDT",(&PTR_s_ES_100bcf150)[uVar25])
  ;
  return;
}

