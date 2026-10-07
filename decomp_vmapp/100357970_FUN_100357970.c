
void FUN_100357970(long param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long local_2c0;
  long local_2b8;
  undefined1 local_2a8 [8];
  long local_2a0;
  long local_290;
  undefined1 local_280 [8];
  long local_278;
  long local_268;
  undefined1 local_258 [32];
  undefined1 local_238 [512];
  long local_38;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar9;
  if (param_3 == (long *)0x0) {
    FUN_10038e8e0(param_2,"vec4 in_color = gl_Color;\n");
    if ((*(int *)(*(long *)(param_1 + 0x38) + 0x74) != 0) ||
       (*(int *)(*(long *)(param_1 + 0x40) + 0x98) != 0)) {
      FUN_10038e8e0(param_2,"vec4 in_specular = gl_SecondaryColor;\n");
    }
    uVar8 = 0;
    do {
      bVar1 = (byte)uVar8 & 0x1f;
      if (*(uint *)(param_1 + 8) >> bVar1 == 0) break;
      if ((*(uint *)(param_1 + 8) >> bVar1 & 1) != 0) {
        FUN_10038e8e0(param_2,"in_tex_coord[%u] = ",uVar8);
        if (*(int *)(*(long *)(param_1 + 0x40) + 0x60) == 0) {
          FUN_10038e8e0(param_2,"gl_TexCoord[%u];\n",uVar8);
        }
        else {
          FUN_10038e8e0(param_2,"vec4(gl_PointCoord, 0.0, 1.0);\n");
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 8);
  }
  else {
    FUN_10038e870(local_280,local_238,0x200);
    lVar6 = *param_3;
    lVar3 = param_3[1];
    uVar5 = (lVar3 - lVar6) * -0x5555555555555555;
    local_2c0 = 0;
    local_2b8 = 0;
    if ((int)uVar5 != 0) {
      lVar9 = 0;
      uVar7 = 0;
      local_2c0 = 0;
      local_2b8 = 0;
      while( true ) {
        uVar4 = (lVar3 - lVar6) * -0x5555555555555555;
        if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
          std::__vector_base_common<true>::__throw_out_of_range();
          lVar6 = *param_3;
        }
        lVar3 = lVar6 + lVar9;
        lVar2 = local_2b8;
        if (*(char *)(lVar6 + lVar9) == '\x05') {
          FUN_10038e870(local_2a8,local_258,0x20);
          FUN_10038e8e0(local_2a8,"in_tex_coord[%d]",*(undefined1 *)(lVar6 + 2 + lVar9));
          lVar6 = local_2a0;
          if (local_2a0 == 0) {
            lVar6 = local_290;
          }
          FUN_10038e8e0(param_2,lVar6);
          if (*(int *)(*(long *)(param_1 + 0x40) + 0x60) == 0) {
            FUN_10038e8e0(param_2," = vec4(0.0, 0.0, 0.0, 1.0);\n");
            lVar6 = local_2a0;
            if (local_2a0 == 0) {
              lVar6 = local_290;
            }
            FUN_10036c470(local_280,lVar3,lVar6);
          }
          else {
            FUN_10038e8e0(param_2," = vec4(gl_PointCoord, 0.0, 1.0);\n");
          }
          FUN_10038e8c0(local_2a8);
        }
        else if ((*(char *)(lVar6 + lVar9) == '\n') &&
                (lVar2 = lVar3, *(char *)(lVar6 + 2 + lVar9) == '\0')) {
          local_2c0 = lVar3;
          lVar2 = local_2b8;
        }
        local_2b8 = lVar2;
        uVar7 = uVar7 + 1;
        if ((uVar5 & 0xffffffff) <= uVar7) break;
        lVar6 = *param_3;
        lVar3 = param_3[1];
        lVar9 = lVar9 + 3;
      }
      lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
    FUN_10038e8e0(param_2,"vec4 in_color = vec4(0.0, 0.0, 0.0, 1.0);\n");
    if (local_2c0 != 0) {
      FUN_10036c470(local_280,local_2c0,"in_color");
    }
    if (((*(int *)(*(long *)(param_1 + 0x38) + 0x74) != 0) ||
        (*(int *)(*(long *)(param_1 + 0x40) + 0x98) != 0)) &&
       (FUN_10038e8e0(param_2,"vec4 in_specular = vec4(0.0, 0.0, 0.0, 1.0);\n"), local_2b8 != 0)) {
      FUN_10036c470(local_280,local_2b8,"in_specular");
    }
    if (local_278 == 0) {
      local_278 = local_268;
    }
    FUN_10038e8e0(param_2,"\n%s\n",local_278);
    FUN_10038e8c0(local_280);
  }
  FUN_10038e8e0(param_2,"\n");
  if (lVar9 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

