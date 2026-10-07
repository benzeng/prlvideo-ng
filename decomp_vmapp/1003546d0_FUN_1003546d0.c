
undefined8 FUN_1003546d0(long param_1,undefined8 param_2,uint *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 local_70 [8];
  long local_68;
  long local_58;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  cVar4 = FUN_1003a2990(param_3);
  if (cVar4 != '\0') {
    puVar5 = *(undefined1 **)(param_3 + 10);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = *(undefined1 **)(param_3 + 0xe);
    }
    *puVar5 = 0;
    param_3[8] = 0;
    FUN_10038e8e0(param_3 + 8,"dst");
    param_3[2] = 0;
  }
  uVar8 = *param_3 & 0x7ff;
  FUN_10038e870(local_70,local_48,0x10);
  FUN_10038e8e0(local_70,"texcoord[%d]",uVar8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x28) + (ulong)(uVar8 * 0x40 + 0x118) * 4);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = FUN_1003a2680(param_3);
  uVar7 = FUN_10036bd80(uVar8);
  if (local_68 == 0) {
    local_68 = local_58;
  }
  FUN_100399db0(uVar2,uVar8,uVar3,uVar1,uVar6,uVar7,local_68);
  FUN_10038e8c0(local_70);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

