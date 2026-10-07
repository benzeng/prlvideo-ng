
undefined8 FUN_1003c2540(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined1 local_258 [336];
  long local_108;
  long local_f8;
  long local_60;
  long local_50;
  char local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar1 = *(long *)(param_2 + 0x40);
  FUN_1003b9a60(local_258,lVar1,*(undefined1 *)(param_2 + 0x4e),*(undefined1 *)(lVar1 + 0x30));
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar4 = FUN_1003ba9d0(local_258);
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  lVar7 = local_108;
  if (local_108 == 0) {
    lVar7 = local_f8;
  }
  plVar3 = *(long **)(param_1 + 0x10);
  lVar5 = (**(code **)(*plVar3 + 0x20))(plVar3);
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if (lVar5 == 0) {
      lVar5 = (**(code **)(*plVar3 + 0x18))(plVar3);
      if (lVar5 == 0) {
        lVar5 = (**(code **)(*plVar3 + 0x28))(plVar3);
        if (lVar5 == 0) {
          lVar5 = (**(code **)(*plVar3 + 0x30))(plVar3);
          if (lVar5 == 0) {
            lVar5 = (**(code **)(*plVar3 + 0x38))(plVar3);
            pcVar6 = "cs";
            if (lVar5 == 0) {
              pcVar6 = "??";
            }
          }
          else {
            pcVar6 = "ds";
          }
        }
        else {
          pcVar6 = "hs";
        }
      }
      else {
        pcVar6 = "gs";
      }
    }
    else {
      pcVar6 = "vs";
    }
  }
  else {
    pcVar6 = "ps";
  }
  FUN_10038e8e0(uVar2,"%s = %s%s_sampleinfo_",uVar4,lVar7,pcVar6);
  if (*(char *)(param_2 + 0x4e) == '\x01') {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"uint_");
  }
  if (*(char *)(lVar1 + 0x78) == '\a') {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"t%d()",*(undefined4 *)(lVar1 + 0x68));
  }
  else if (*(char *)(lVar1 + 0x78) == '\x0e') {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"rasterizer()");
  }
  FUN_1003b9900(*(undefined8 *)(param_1 + 8),lVar1 + 0x40,*(undefined1 *)(lVar1 + 0x30));
  uVar2 = *(undefined8 *)(param_1 + 8);
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  if (local_60 == 0) {
    local_60 = local_50;
  }
  FUN_10038e8e0(uVar2,"%s;\n",local_60);
  FUN_1003b9b40(local_258);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

