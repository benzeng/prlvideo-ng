
void FUN_100396e20(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined1 local_a8 [8];
  long local_a0;
  long local_90;
  int local_7c;
  undefined1 local_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar5 = *(uint *)(*(long *)(param_1 + 0xa0) + (ulong)(param_3 * 0x40 + 0x118) * 4);
  uVar4 = (ulong)(param_3 * 0x40 + 0x10b);
  uVar1 = *(uint *)(*(long *)(param_1 + 0xa0) + uVar4 * 4);
  local_7c = param_3;
  FUN_10038e870(local_a8,local_78,0x40);
  if ((uVar1 & 0xffff0000) == 0) {
    FUN_100397cd0(param_1,local_a8,uVar5,*(undefined2 *)(*(long *)(param_1 + 0xa0) + uVar4 * 4));
  }
  else {
    FUN_100397e70(param_1,local_a8);
  }
  FUN_10038e8e0(param_2,"vec4 out_tex_%u",param_3);
  if (uVar5 == 0) {
    if (local_a0 == 0) {
      local_a0 = local_90;
    }
    FUN_10038e8e0(param_2," = %s;\n",local_a0);
  }
  else {
    FUN_10038e8e0(param_2,";\n");
    lVar3 = *(long *)(param_1 + 0xb0);
    piVar2 = *(int **)(lVar3 + 0xb0);
    if (piVar2 == *(int **)(lVar3 + 0xb8)) {
      FUN_10027f110(lVar3 + 0xa8,&local_7c);
    }
    else {
      *piVar2 = param_3;
      *(int **)(lVar3 + 0xb0) = piVar2 + 1;
    }
    FUN_10038e8e0(param_2,"out_tex_%u.%c = ",param_3,0x73);
    uVar5 = uVar5 & 0xfffffeff;
    if (uVar5 == 0) {
      FUN_10038e8e0(param_2,"%u.0",0);
    }
    else {
      lVar3 = local_a0;
      if (local_a0 == 0) {
        lVar3 = local_90;
      }
      FUN_10038e8e0(param_2,"dot(c[OFF_MAT_TEX + %u*4 + %u], %s)",param_3,0,lVar3);
    }
    FUN_10038e8e0(param_2,";\n");
    FUN_10038e8e0(param_2,"out_tex_%u.%c = ",param_3,0x74);
    if (uVar5 < 2) {
      FUN_10038e8e0(param_2,"%u.0",0);
    }
    else {
      lVar3 = local_a0;
      if (local_a0 == 0) {
        lVar3 = local_90;
      }
      FUN_10038e8e0(param_2,"dot(c[OFF_MAT_TEX + %u*4 + %u], %s)",param_3,1,lVar3);
    }
    FUN_10038e8e0(param_2,";\n");
    FUN_10038e8e0(param_2,"out_tex_%u.%c = ",param_3,0x70);
    if (uVar5 < 3) {
      FUN_10038e8e0(param_2,"%u.0",0);
    }
    else {
      lVar3 = local_a0;
      if (local_a0 == 0) {
        lVar3 = local_90;
      }
      FUN_10038e8e0(param_2,"dot(c[OFF_MAT_TEX + %u*4 + %u], %s)",param_3,2,lVar3);
    }
    FUN_10038e8e0(param_2,";\n");
    FUN_10038e8e0(param_2,"out_tex_%u.%c = ",param_3,0x71);
    if (uVar5 < 4) {
      FUN_10038e8e0(param_2,"%u.0",1);
    }
    else {
      if (local_a0 == 0) {
        local_a0 = local_90;
      }
      FUN_10038e8e0(param_2,"dot(c[OFF_MAT_TEX + %u*4 + %u], %s)",param_3,3,local_a0);
    }
    FUN_10038e8e0(param_2,";\n");
  }
  FUN_10038e8c0(local_a8);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

