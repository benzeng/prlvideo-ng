
undefined8 FUN_1003c2060(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  char *pcVar10;
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
  FUN_1003b9a60(local_258,lVar3,8,*(undefined1 *)(lVar3 + 0x30));
  FUN_1003b9a60(local_478,lVar3 + 0x40,8,0xf);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar6 = FUN_1003ba9d0(local_258);
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  lVar7 = local_108;
  if (local_108 == 0) {
    lVar7 = local_f8;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  lVar8 = (**(code **)(*plVar5 + 0x20))(plVar5);
  if (lVar8 == 0) {
    lVar8 = (**(code **)(*plVar5 + 0x10))(plVar5);
    if (lVar8 == 0) {
      lVar8 = (**(code **)(*plVar5 + 0x18))(plVar5);
      if (lVar8 == 0) {
        lVar8 = (**(code **)(*plVar5 + 0x28))(plVar5);
        if (lVar8 == 0) {
          lVar8 = (**(code **)(*plVar5 + 0x30))(plVar5);
          if (lVar8 == 0) {
            lVar8 = (**(code **)(*plVar5 + 0x38))(plVar5);
            pcVar10 = "cs";
            if (lVar8 == 0) {
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
  uVar1 = *(undefined4 *)(lVar3 + 0xa8);
  uVar2 = *(undefined4 *)(lVar3 + 0xe8);
  uVar9 = FUN_1003ba9d0(local_478);
  FUN_10038e8e0(uVar4,"%s = %s%s_lod_t%d_s%d(%s)",uVar6,lVar7,pcVar10,uVar1,uVar2,uVar9);
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
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

