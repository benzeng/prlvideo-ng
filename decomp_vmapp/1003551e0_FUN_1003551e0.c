
undefined8 FUN_1003551e0(long param_1,short param_2,uint *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 local_80 [8];
  long local_78;
  long local_68;
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  cVar3 = FUN_1003a2990(param_3);
  if (cVar3 != '\0') {
    puVar4 = *(undefined1 **)(param_3 + 10);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = *(undefined1 **)(param_3 + 0xe);
    }
    *puVar4 = 0;
    param_3[8] = 0;
    FUN_10038e8e0(param_3 + 8,"dst");
    param_3[2] = 0;
  }
  uVar8 = *param_3 & 0x7ff;
  pcVar9 = (char *)0x0;
  if (param_2 == 0x52) {
    pcVar9 = "vec4(%s.xyz, 1.0)";
  }
  else if (param_2 == 0x46) {
    pcVar9 = "vec4(%s.yz, 0.0, 1.0)";
  }
  else if (param_2 == 0x45) {
    pcVar9 = "vec4(%s.wx, 0.0, 1.0)";
  }
  FUN_10038e870(local_80,local_58,0x20);
  uVar5 = FUN_1003a23f0(param_4);
  FUN_10038e8e0(local_80,pcVar9,uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x28) + (ulong)(uVar8 * 0x40 + 0x118) * 4);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = FUN_1003a2680(param_3);
  uVar7 = FUN_10036bd80(uVar8);
  if (local_78 == 0) {
    local_78 = local_68;
  }
  FUN_100399db0(uVar5,uVar8,uVar2,uVar1,uVar6,uVar7,local_78);
  FUN_10038e8c0(local_80);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

