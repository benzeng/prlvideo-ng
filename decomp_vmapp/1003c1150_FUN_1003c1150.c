
undefined8 FUN_1003c1150(long param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  byte bVar9;
  char *pcVar10;
  long lVar11;
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
  lVar3 = *(long *)(param_2 + 0x40);
  bVar1 = *(byte *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) +
                             (ulong)*(uint *)(lVar3 + 0xa8) * 8) + 0x22);
  uVar8 = bVar1 - 1;
  bVar9 = 8;
  if ((uVar8 < 8) && (bVar9 = bVar1, (0x8bU >> (uVar8 & 0x1f) & 1) == 0)) {
    bVar9 = 8;
  }
  FUN_1003b9a60(local_258,lVar3,bVar9,*(undefined1 *)(lVar3 + 0x30));
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar6 = FUN_1003ba9d0(local_258);
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  lVar11 = local_108;
  if (local_108 == 0) {
    lVar11 = local_f8;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  lVar7 = (**(code **)(*plVar5 + 0x20))(plVar5);
  if (lVar7 == 0) {
    lVar7 = (**(code **)(*plVar5 + 0x10))(plVar5);
    if (lVar7 == 0) {
      lVar7 = (**(code **)(*plVar5 + 0x18))(plVar5);
      if (lVar7 == 0) {
        lVar7 = (**(code **)(*plVar5 + 0x28))(plVar5);
        if (lVar7 == 0) {
          lVar7 = (**(code **)(*plVar5 + 0x30))(plVar5);
          if (lVar7 == 0) {
            lVar7 = (**(code **)(*plVar5 + 0x38))(plVar5);
            pcVar10 = "cs";
            if (lVar7 == 0) {
              pcVar10 = "??";
            }
          }
          else {
            pcVar10 = "ds";
          }
        }
        else {
          pcVar10 = "hs";
        }
      }
      else {
        pcVar10 = "gs";
      }
    }
    else {
      pcVar10 = "vs";
    }
  }
  else {
    pcVar10 = "ps";
  }
  FUN_10038e8e0(uVar4,"%s = %s%s_",uVar6,lVar11,pcVar10);
  if (*(short *)(param_2 + 0x4c) == 0x2d) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"ld_");
  }
  else if (*(short *)(param_2 + 0x4c) == 0x2e) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"ld_ms_");
  }
  if ((*(ushort *)(param_2 + 0x54) & 1) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"offset_");
  }
  FUN_1003b9a60(local_478,lVar3 + 0x40,2,0xf);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(lVar3 + 0xa8);
  uVar6 = FUN_1003ba9d0(local_478);
  FUN_10038e8e0(uVar4,"t%d(%s",uVar2,uVar6);
  if (*(short *)(param_2 + 0x4c) == 0x2e) {
    FUN_1003b9a60(local_698,*(long *)(param_2 + 0x40) + 0xc0,2,1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar6 = FUN_1003ba9d0(local_698);
    FUN_10038e8e0(uVar4,", %s",uVar6);
    FUN_1003b9b40(local_698);
  }
  uVar8 = (uint)*(uint3 *)(param_2 + 0x54);
  if ((*(uint3 *)(param_2 + 0x54) & 1) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),", ivec3(%d, %d, %d)",(int)(uVar8 << 0x1b) >> 0x1c,
                  (int)(uVar8 << 0x17) >> 0x1c,(int)(uVar8 << 0x13) >> 0x1c);
  }
  FUN_10038e8e0(*(undefined8 *)(param_1 + 8),")");
  FUN_1003b9900(*(undefined8 *)(param_1 + 8),lVar3 + 0x80,*(undefined1 *)(lVar3 + 0x30));
  uVar4 = *(undefined8 *)(param_1 + 8);
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  if (local_60 == 0) {
    local_60 = local_50;
  }
  FUN_10038e8e0(uVar4,"%s;\n",local_60);
  FUN_1003b9b40(local_478);
  FUN_1003b9b40(local_258);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

