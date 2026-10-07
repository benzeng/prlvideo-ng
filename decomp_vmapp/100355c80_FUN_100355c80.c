
undefined8 FUN_100355c80(long param_1,short param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 local_370;
  undefined4 local_368 [2];
  undefined4 local_360;
  int local_348 [2];
  undefined1 *local_340;
  undefined1 *local_330;
  undefined1 local_1a8 [184];
  undefined4 local_f0 [46];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar1 = param_1 + 0x78;
  FUN_1003a2020(local_f0,lVar1);
  local_f0[0] = *(undefined4 *)(param_1 + 0x5c);
  FUN_1003a2020(local_1a8,lVar1);
  local_f0[0] = *(undefined4 *)(param_1 + 0x60);
  local_370 = FUN_1003a23f0(local_f0);
  uVar5 = FUN_1003a23f0(local_1a8);
  if (*(int *)(param_1 + 0x5c) == *(int *)(param_1 + 0x60)) {
    cVar4 = FUN_1003a20f0(local_f0);
    if (cVar4 != '\0') {
      FUN_1003a2430(local_f0,"src0",*(undefined8 *)(param_1 + 0x30));
    }
    uVar5 = FUN_1003a23f0(local_f0);
    local_370 = uVar5;
  }
  uVar8 = *(uint *)(param_1 + 0x4c) & 0x7ff;
  uVar9 = *(uint *)(param_1 + 0x50) & 0x7ff;
  if (param_2 == 0x54) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),
                  "dst.w = dot(texcoord[%d].xyz, %s.xyz);\ngl_FragDepth = (dst.w == 0.0) ? 1.0 : clamp(dot(texcoord[%d].xyz, %s.xyz)/dst.w, 0.0, 1.0);\n"
                  ,uVar9,uVar5,uVar8,local_370);
  }
  else if (param_2 == 0x48) {
    FUN_1003a25c0(local_368,lVar1);
    local_368[0] = *(undefined4 *)(param_1 + 0x50);
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"src1.x = dot(texcoord[%d].xyz, %s.xyz);\n",uVar8,
                  local_370);
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"src1.y = dot(texcoord[%d].xyz, %s.xyz);\n",uVar9,
                  uVar5);
    cVar4 = FUN_1003a2990(local_368);
    if (cVar4 != '\0') {
      if (local_340 == (undefined1 *)0x0) {
        local_340 = local_330;
      }
      *local_340 = 0;
      local_348[0] = 0;
      FUN_10038e8e0(local_348,"dst");
      local_360 = 0;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x28) + (ulong)(uVar9 * 0x40 + 0x118) * 4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = FUN_1003a2680(local_368);
    uVar7 = FUN_10036bd80(uVar9);
    FUN_100399db0(uVar5,uVar9,uVar3,uVar2,uVar6,uVar7,"vec4(src1.xy, 0.0, 1.0)");
    if (local_348[0] != 0) {
      FUN_1003a29e0(local_368,*(undefined8 *)(param_1 + 0x30));
    }
    FUN_1003a2670(local_368);
  }
  FUN_1003a20d0(local_1a8);
  FUN_1003a20d0(local_f0);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

