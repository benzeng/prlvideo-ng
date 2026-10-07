
undefined8 FUN_1003c0950(long param_1,long param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  byte bVar12;
  char *pcVar13;
  long lVar14;
  undefined1 local_ad8 [544];
  undefined1 local_8b8 [544];
  undefined1 local_698 [544];
  undefined1 local_478 [544];
  undefined1 local_258 [336];
  long local_108;
  long local_f8;
  long local_60;
  long local_50;
  char local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar5 = *(long *)(param_2 + 0x40);
  bVar1 = *(byte *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) +
                             (ulong)*(uint *)(lVar5 + 0xa8) * 8) + 0x22);
  uVar11 = bVar1 - 1;
  bVar12 = 8;
  if ((uVar11 < 8) && (bVar12 = bVar1, (0x8bU >> (uVar11 & 0x1f) & 1) == 0)) {
    bVar12 = 8;
  }
  FUN_1003b9a60(local_258,lVar5,bVar12,*(undefined1 *)(lVar5 + 0x30));
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar8 = FUN_1003ba9d0(local_258);
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  lVar14 = local_108;
  if (local_108 == 0) {
    lVar14 = local_f8;
  }
  plVar7 = *(long **)(param_1 + 0x10);
  lVar9 = (**(code **)(*plVar7 + 0x20))(plVar7);
  if (lVar9 == 0) {
    lVar9 = (**(code **)(*plVar7 + 0x10))(plVar7);
    if (lVar9 == 0) {
      lVar9 = (**(code **)(*plVar7 + 0x18))(plVar7);
      if (lVar9 == 0) {
        lVar9 = (**(code **)(*plVar7 + 0x28))(plVar7);
        if (lVar9 == 0) {
          lVar9 = (**(code **)(*plVar7 + 0x30))(plVar7);
          if (lVar9 == 0) {
            lVar9 = (**(code **)(*plVar7 + 0x38))(plVar7);
            pcVar13 = "cs";
            if (lVar9 == 0) {
              pcVar13 = "??";
            }
          }
          else {
            pcVar13 = "ds";
          }
        }
        else {
          pcVar13 = "hs";
        }
      }
      else {
        pcVar13 = "gs";
      }
    }
    else {
      pcVar13 = "vs";
    }
  }
  else {
    pcVar13 = "ps";
  }
  FUN_10038e8e0(uVar6,"%s = %s%s_",uVar8,lVar14,pcVar13);
  uVar2 = *(ushort *)(param_2 + 0x4c);
  if (uVar2 < 0x6d) {
    switch(uVar2) {
    case 0x45:
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"sample_");
      break;
    case 0x46:
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"sample_c_");
      break;
    case 0x47:
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"sample_c_lz_");
      break;
    case 0x48:
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"sample_l_");
      break;
    case 0x49:
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"sample_d_");
      break;
    case 0x4a:
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"sample_b_");
    }
  }
  else if (uVar2 == 0x6d) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"gather4_");
  }
  if ((*(ushort *)(param_2 + 0x54) & 1) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"offset_");
  }
  FUN_1003b9a60(local_478,lVar5 + 0x40,8,0xf);
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(lVar5 + 0xa8);
  uVar4 = *(undefined4 *)(lVar5 + 0xe8);
  uVar8 = FUN_1003ba9d0(local_478);
  FUN_10038e8e0(uVar6,"t%d_s%d(%s",uVar3,uVar4,uVar8);
  uVar2 = *(ushort *)(param_2 + 0x4c);
  if (2 < uVar2 - 0x46) {
    if (uVar2 == 0x49) {
      FUN_1003b9a60(local_8b8,*(long *)(param_2 + 0x40) + 0x100,8,0xf);
      FUN_1003b9a60(local_ad8,*(long *)(param_2 + 0x40) + 0x140,8,0xf);
      uVar6 = *(undefined8 *)(param_1 + 8);
      uVar8 = FUN_1003ba9d0(local_8b8);
      uVar10 = FUN_1003ba9d0(local_ad8);
      FUN_10038e8e0(uVar6,", %s, %s",uVar8,uVar10);
      FUN_1003b9b40(local_ad8);
      FUN_1003b9b40(local_8b8);
      goto LAB_1003c0cc5;
    }
    if (uVar2 != 0x4a) goto LAB_1003c0cc5;
  }
  FUN_1003b9a60(local_698,*(long *)(param_2 + 0x40) + 0x100,8,1);
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar8 = FUN_1003ba9d0(local_698);
  FUN_10038e8e0(uVar6,", %s",uVar8);
  FUN_1003b9b40(local_698);
LAB_1003c0cc5:
  uVar11 = (uint)*(uint3 *)(param_2 + 0x54);
  if ((*(uint3 *)(param_2 + 0x54) & 1) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),", ivec3(%d, %d, %d)",(int)(uVar11 << 0x1b) >> 0x1c,
                  (int)(uVar11 << 0x17) >> 0x1c,(int)(uVar11 << 0x13) >> 0x1c);
  }
  FUN_10038e8e0(*(undefined8 *)(param_1 + 8),")");
  FUN_1003b9900(*(undefined8 *)(param_1 + 8),lVar5 + 0x80,*(undefined1 *)(lVar5 + 0x30));
  uVar6 = *(undefined8 *)(param_1 + 8);
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  if (local_60 == 0) {
    local_60 = local_50;
  }
  FUN_10038e8e0(uVar6,"%s;\n",local_60);
  FUN_1003b9b40(local_478);
  FUN_1003b9b40(local_258);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

