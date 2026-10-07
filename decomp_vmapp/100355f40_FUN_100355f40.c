
undefined8 FUN_100355f40(long param_1,ushort param_2)

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
  uint uVar10;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined4 local_4d8 [46];
  undefined4 local_420 [46];
  undefined4 local_368 [46];
  undefined4 local_2b0 [46];
  undefined4 local_1f8 [2];
  undefined4 local_1f0;
  int local_1d8 [2];
  undefined1 *local_1d0;
  undefined1 *local_1c0;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar1 = param_1 + 0x78;
  FUN_1003a25c0(local_1f8,lVar1);
  local_1f8[0] = *(undefined4 *)(param_1 + 0x54);
  FUN_1003a2020(local_2b0,lVar1);
  local_2b0[0] = *(undefined4 *)(param_1 + 0x5c);
  FUN_1003a2020(local_368,lVar1);
  local_368[0] = *(undefined4 *)(param_1 + 0x60);
  FUN_1003a2020(local_420,lVar1);
  local_420[0] = *(undefined4 *)(param_1 + 100);
  local_4e0 = FUN_1003a23f0(local_2b0);
  local_4e8 = FUN_1003a23f0(local_368);
  local_4f0 = FUN_1003a23f0(local_420);
  if ((*(int *)(param_1 + 0x5c) == *(int *)(param_1 + 0x60)) &&
     (*(int *)(param_1 + 0x5c) == *(int *)(param_1 + 100))) {
    cVar4 = FUN_1003a20f0(local_2b0);
    if (cVar4 != '\0') {
      FUN_1003a2430(local_2b0,"src0",*(undefined8 *)(param_1 + 0x30));
    }
    local_4f0 = FUN_1003a23f0(local_2b0);
    local_4e8 = local_4f0;
    local_4e0 = local_4f0;
  }
  cVar4 = FUN_1003a2990(local_1f8);
  if (cVar4 != '\0') {
    if (local_1d0 == (undefined1 *)0x0) {
      local_1d0 = local_1c0;
    }
    *local_1d0 = 0;
    local_1d8[0] = 0;
    FUN_10038e8e0(local_1d8,"dst");
    local_1f0 = 0;
  }
  uVar9 = *(uint *)(param_1 + 0x4c) & 0x7ff;
  uVar8 = *(uint *)(param_1 + 0x50) & 0x7ff;
  uVar10 = *(uint *)(param_1 + 0x54) & 0x7ff;
  if ((param_2 - 0x4c < 2) || (param_2 == 0x4a)) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"src1.x = dot(texcoord[%d].xyz, %s.xyz);\n",uVar9,
                  local_4e0);
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"src1.y = dot(texcoord[%d].xyz, %s.xyz);\n",uVar8,
                  local_4e8);
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"src1.z = dot(texcoord[%d].xyz, %s.xyz);\n",uVar10
                  ,local_4f0);
    if (param_2 == 0x4d) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),
                    "src2.xyz = vec3(texcoord[%d].w, texcoord[%d].w, texcoord[%d].w);\n",uVar9,uVar8
                    ,uVar10);
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),
                    "src1.xyz = -reflect(src2.xyz, normalize(src1.xyz));\n");
    }
    else if (param_2 == 0x4c) {
      FUN_1003a2020(local_4d8,lVar1);
      local_4d8[0] = *(undefined4 *)(param_1 + 0x68);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      uVar5 = FUN_1003a23f0(local_4d8);
      FUN_10038e8e0(uVar3,"src1.xyz = -reflect(%s.xyz, normalize(src1.xyz));\n",uVar5);
      FUN_1003a20d0(local_4d8);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x28) + (ulong)(uVar10 * 0x40 + 0x118) * 4);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = FUN_1003a2680(local_1f8);
    uVar7 = FUN_10036bd80(uVar10);
    FUN_100399db0(uVar3,uVar10,uVar5,uVar2,uVar6,uVar7,"vec4(src1.xyz, 1.0)");
  }
  else if (param_2 == 0x56) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = FUN_1003a2680(local_1f8);
    FUN_10038e8e0(uVar3,"%s.x = dot(texcoord[%d].xyz, %s.xyz);\n",uVar5,uVar9,local_4e0);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = FUN_1003a2680(local_1f8);
    FUN_10038e8e0(uVar3,"%s.y = dot(texcoord[%d].xyz, %s.xyz);\n",uVar5,uVar8,local_4e8);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = FUN_1003a2680(local_1f8);
    FUN_10038e8e0(uVar3,"%s.z = dot(texcoord[%d].xyz, %s.xyz);\n",uVar5,uVar10,local_4f0);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = FUN_1003a2680(local_1f8);
    FUN_10038e8e0(uVar3,"%s.w = 1.0;\n",uVar5);
  }
  if (local_1d8[0] != 0) {
    FUN_1003a29e0(local_1f8,*(undefined8 *)(param_1 + 0x30));
  }
  FUN_1003a20d0(local_420);
  FUN_1003a20d0(local_368);
  FUN_1003a20d0(local_2b0);
  FUN_1003a2670(local_1f8);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

