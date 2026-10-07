
undefined8 FUN_100760850(undefined8 param_1,undefined8 param_2,long param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulong uStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar5 = 1;
  local_38 = lVar3;
  if (param_4 != (ulong *)0x0) {
    do {
      local_78 = 0;
      uStack_80 = 0;
      local_88 = 0x4800000019;
      uStack_50 = 0x100000001;
      local_48 = 0;
      uVar1 = *param_4;
      uStack_70 = uVar1 | 0xffff000000000000;
      if ((uVar1 & 0x800000000000) == 0) {
        uStack_70 = uVar1;
      }
      uVar2 = param_4[1];
      local_68 = (uVar2 - uVar1) + 1;
      lStack_60 = param_3;
      local_58 = local_68;
      if (2 < DAT_1011b55f8) {
        uVar4 = uVar1 | 0xffff000000000000;
        if ((uVar1 & 0x800000000000) == 0) {
          uVar4 = uVar1;
        }
        FUN_1008e3970("","dbgdump",3,"Writing segment 0x%llx",uVar4);
      }
      lVar3 = FUN_100761880(param_2,FUN_100761810,0,&local_88,0x48);
      if (lVar3 != 0x48) {
        uVar5 = 0;
        FUN_1008e3970("","dbgdump",0,"Write to dump file failed");
        lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
        goto LAB_1007609c0;
      }
      param_3 = (param_3 + 1 + uVar2) - uVar1;
      param_4 = (ulong *)param_4[2];
    } while (param_4 != (ulong *)0x0);
    lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
    uVar5 = 1;
  }
LAB_1007609c0:
  if (lVar3 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return CONCAT71((int7)((ulong)lVar3 >> 8),uVar5);
}

