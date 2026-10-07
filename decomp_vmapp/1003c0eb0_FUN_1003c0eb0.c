
undefined8 FUN_1003c0eb0(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  undefined1 local_478 [544];
  undefined1 local_258 [336];
  long local_108;
  long local_f8;
  long local_60;
  long local_50;
  char local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar2 = *(long *)(param_2 + 0x40);
  FUN_1003b9a60(local_258,lVar2,*(undefined1 *)(param_2 + 0x4e),*(undefined1 *)(lVar2 + 0x30));
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar5 = FUN_1003ba9d0(local_258);
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  lVar7 = local_108;
  if (local_108 == 0) {
    lVar7 = local_f8;
  }
  plVar4 = *(long **)(param_1 + 0x10);
  lVar6 = (**(code **)(*plVar4 + 0x20))(plVar4);
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*plVar4 + 0x10))(plVar4);
    if (lVar6 == 0) {
      lVar6 = (**(code **)(*plVar4 + 0x18))(plVar4);
      if (lVar6 == 0) {
        lVar6 = (**(code **)(*plVar4 + 0x28))(plVar4);
        if (lVar6 == 0) {
          lVar6 = (**(code **)(*plVar4 + 0x30))(plVar4);
          if (lVar6 == 0) {
            lVar6 = (**(code **)(*plVar4 + 0x38))(plVar4);
            pcVar8 = "cs";
            if (lVar6 == 0) {
              pcVar8 = "??";
            }
          }
          else {
            pcVar8 = "ds";
          }
        }
        else {
          pcVar8 = "hs";
        }
      }
      else {
        pcVar8 = "gs";
      }
    }
    else {
      pcVar8 = "vs";
    }
  }
  else {
    pcVar8 = "ps";
  }
  FUN_10038e8e0(uVar3,"%s = %s%s_resinfo",uVar5,lVar7,pcVar8);
  if ((*(ushort *)(param_2 + 0x54) & 0x8000) == 0) {
    if (*(char *)(param_2 + 0x4e) == '\x01') {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"_uint");
    }
  }
  else {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"_rcpFloat");
  }
  FUN_1003b9a60(local_478,lVar2 + 0x40,2,1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(lVar2 + 0xa8);
  uVar5 = FUN_1003ba9d0(local_478);
  FUN_10038e8e0(uVar3,"_t%d(%s)",uVar1,uVar5);
  FUN_1003b9900(*(undefined8 *)(param_1 + 8),lVar2 + 0x80,*(undefined1 *)(lVar2 + 0x30));
  uVar3 = *(undefined8 *)(param_1 + 8);
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  if (local_60 == 0) {
    local_60 = local_50;
  }
  FUN_10038e8e0(uVar3,"%s;\n",local_60);
  FUN_1003b9b40(local_478);
  FUN_1003b9b40(local_258);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

