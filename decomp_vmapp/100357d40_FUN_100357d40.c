
undefined8 FUN_100357d40(long param_1,undefined8 param_2,int param_3,byte param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 in_stack_fffffffffffffe88;
  undefined4 uVar13;
  uint local_15c;
  undefined1 local_158 [8];
  long local_150;
  long local_140;
  undefined1 local_130 [8];
  long local_128;
  long local_118;
  undefined1 local_108 [8];
  long local_100;
  long local_f0;
  undefined1 local_e0 [8];
  long local_d8;
  long local_c8;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  long local_38;
  
  uVar13 = (undefined4)((ulong)in_stack_fffffffffffffe88 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  FUN_10038e870(local_e0,local_58,0x20);
  FUN_10038e870(local_108,local_78,0x20);
  FUN_10038e870(local_130,local_98,0x20);
  FUN_10038e870(local_158,local_b8,0x20);
  iVar11 = param_3 * 0x40;
  uVar1 = *(uint *)(*(long *)(param_1 + 0x38) + (ulong)(iVar11 + 0x11c) * 4);
  if (uVar1 == 1) {
    FUN_10038e8e0(local_158,"out_color");
  }
  else {
    FUN_10038e8e0(local_158,"temp_color");
  }
  lVar6 = *(long *)(param_1 + 0x38);
  if (param_4 == 0) {
    iVar10 = *(int *)(lVar6 + (ulong)(iVar11 + 0x101) * 4);
    if (iVar10 - 0x19U < 2) {
      FUN_100358ec0(param_1,local_e0,param_3,*(undefined4 *)(lVar6 + (ulong)(iVar11 + 0x11a) * 4));
      lVar6 = *(long *)(param_1 + 0x38);
    }
    uVar2 = *(uint *)(lVar6 + (ulong)(iVar11 + 0x102) * 4);
    uVar12 = *(uint *)(lVar6 + (ulong)(iVar11 + 0x103) * 4);
    local_15c = uVar2 | 0x40;
    if (3 < iVar10 - 0x12U) {
      local_15c = uVar2;
    }
    if (iVar10 != 0x18) {
      FUN_10038e8e0(local_158,".rgb = ");
      if (((local_15c | uVar12) & 0x20) != 0) {
        FUN_10038e8e0(local_158,"vec3(");
      }
      goto LAB_100357f55;
    }
    iVar10 = 0x18;
    FUN_10038e8e0(local_158," = ");
LAB_100357f75:
    bVar4 = true;
    FUN_10038e8e0(local_158,"clamp(");
  }
  else {
    iVar10 = *(int *)(lVar6 + (ulong)(iVar11 + 0x104) * 4);
    if (iVar10 - 0x19U < 2) {
      FUN_100358ec0(param_1,local_e0,param_3,*(uint *)(lVar6 + (ulong)(iVar11 + 0x11b) * 4) | 0x20);
      lVar6 = *(long *)(param_1 + 0x38);
    }
    local_15c = *(uint *)(lVar6 + (ulong)(iVar11 + 0x105) * 4);
    uVar12 = *(uint *)(lVar6 + (ulong)(iVar11 + 0x106) * 4);
    FUN_10038e8e0(local_158,".a = ");
    local_15c = local_15c | 0x20;
    uVar12 = uVar12 | 0x20;
LAB_100357f55:
    if ((0xf < iVar10 - 2U) || ((0x23f0U >> (iVar10 - 2U & 0x1f) & 1) != 0)) goto LAB_100357f75;
    bVar4 = false;
  }
  FUN_100358ec0(param_1,local_108,param_3,local_15c);
  FUN_100358ec0(param_1,local_130,param_3,uVar12);
  switch(iVar10) {
  case 2:
    if (((local_15c | 0x20) == (uVar1 | 0x20)) &&
       ((bVar5 = 1, (local_15c & 0x20) == 0 || (param_4 != 0)))) goto LAB_1003589ac;
    if (local_150 == 0) {
      local_150 = local_140;
    }
    if (local_100 == 0) {
      local_100 = local_f0;
    }
    FUN_10038e8e0(param_2,"%s%s",local_150,local_100);
    break;
  case 3:
    if (((uVar12 | 0x20) == (uVar1 | 0x20)) && ((bVar5 = 1, (uVar12 & 0x20) == 0 || (param_4 != 0)))
       ) goto LAB_1003589ac;
    if (local_150 == 0) {
      local_150 = local_140;
    }
    if (local_128 == 0) {
      local_128 = local_118;
    }
    FUN_10038e8e0(param_2,"%s%s",local_150,local_128);
    break;
  case 4:
    if (local_150 == 0) {
      local_150 = local_140;
    }
    if (local_100 == 0) {
      local_100 = local_f0;
    }
    if (local_128 == 0) {
      local_128 = local_118;
    }
    FUN_10038e8e0(param_2,"%s%s * %s",local_150,local_100,local_128);
    break;
  case 5:
    if (local_150 == 0) {
      local_150 = local_140;
    }
    if (local_100 == 0) {
      local_100 = local_f0;
    }
    if (local_128 == 0) {
      local_128 = local_118;
    }
    FUN_10038e8e0(param_2,"%s%s * %s * 2.0",local_150,local_100,local_128);
    break;
  case 6:
    if (local_150 == 0) {
      local_150 = local_140;
    }
    if (local_100 == 0) {
      local_100 = local_f0;
    }
    if (local_128 == 0) {
      local_128 = local_118;
    }
    FUN_10038e8e0(param_2,"%s%s * %s * 4.0",local_150,local_100,local_128);
    break;
  case 7:
    if (local_150 == 0) {
      local_150 = local_140;
    }
    if (local_100 == 0) {
      local_100 = local_f0;
    }
    if (local_128 == 0) {
      local_128 = local_118;
    }
    FUN_10038e8e0(param_2,"%s%s + %s",local_150,local_100,local_128);
    break;
  case 8:
    if (local_150 == 0) {
      local_150 = local_140;
    }
    if (local_100 == 0) {
      local_100 = local_f0;
    }
    if (local_128 == 0) {
      local_128 = local_118;
    }
    FUN_10038e8e0(param_2,"%s%s + %s - 0.5",local_150,local_100,local_128);
    break;
  case 9:
    if (local_150 == 0) {
      local_150 = local_140;
    }
    if (local_100 == 0) {
      local_100 = local_f0;
    }
    if (local_128 == 0) {
      local_128 = local_118;
    }
    FUN_10038e8e0(param_2,"%s(%s + %s - 0.5) * 2.0",local_150,local_100,local_128);
    break;
  case 10:
    if (local_150 == 0) {
      local_150 = local_140;
    }
    if (local_100 == 0) {
      local_100 = local_f0;
    }
    if (local_128 == 0) {
      local_128 = local_118;
    }
    FUN_10038e8e0(param_2,"%s%s - %s",local_150,local_100,local_128);
    break;
  case 0xb:
    if (local_150 == 0) {
      local_150 = local_140;
    }
    lVar6 = local_100;
    if (local_100 == 0) {
      lVar6 = local_f0;
    }
    if (local_128 == 0) {
      local_128 = local_118;
    }
    if (local_100 == 0) {
      local_100 = local_f0;
    }
    FUN_10038e8e0(param_2,"%s%s - %s * (%s - 1.0)",local_150,lVar6,local_128,local_100);
    break;
  case 0xc:
    if (local_150 == 0) {
      local_150 = local_140;
    }
    if (local_128 == 0) {
      local_128 = local_118;
    }
    if (local_100 == 0) {
      local_100 = local_f0;
    }
    FUN_10038e8e0(param_2,"%smix(%s, %s, in_color.a)",local_150,local_128,local_100);
    break;
  case 0xd:
    if (local_150 == 0) {
      local_150 = local_140;
    }
    if (local_128 == 0) {
      local_128 = local_118;
    }
    if (local_100 == 0) {
      local_100 = local_f0;
    }
    FUN_10038e8e0(param_2,"%smix(%s, %s, tex_colors%u.a)",local_150,local_128,local_100,param_3);
    break;
  case 0xe:
    lVar6 = *(long *)(param_1 + 0x48);
    lVar3 = *(long *)(lVar6 + 0x140);
    uVar9 = lVar3 - *(long *)(lVar6 + 0x138) >> 2;
    if (uVar9 == 0) {
      FUN_10032f560(lVar6 + 0x138,1);
    }
    else if ((1 < uVar9) && (lVar7 = *(long *)(lVar6 + 0x138) + 4, lVar3 != lVar7)) {
      *(ulong *)(lVar6 + 0x140) = (~((lVar3 + -4) - lVar7) & 0xfffffffffffffffcU) + lVar3;
    }
    if (local_150 == 0) {
      local_150 = local_140;
    }
    if (local_128 == 0) {
      local_128 = local_118;
    }
    if (local_100 == 0) {
      local_100 = local_f0;
    }
    FUN_10038e8e0(param_2,"%smix(%s, %s, c_ps[OFF_TFACTOR].a)",local_150,local_128,local_100);
    break;
  case 0xf:
    if (local_150 == 0) {
      local_150 = local_140;
    }
    if (local_100 == 0) {
      local_100 = local_f0;
    }
    if (local_128 == 0) {
      local_128 = local_118;
    }
    FUN_10038e8e0(param_2,"%s%s + %s * (1.0 - tex_colors%u.a)",local_150,local_100,local_128,param_3
                 );
    break;
  case 0x10:
    if (local_150 == 0) {
      local_150 = local_140;
    }
    if (local_128 == 0) {
      local_128 = local_118;
    }
    if (local_100 == 0) {
      local_100 = local_f0;
    }
    FUN_10038e8e0(param_2,"%smix(%s, %s, out_color.a)",local_150,local_128,local_100);
    break;
  case 0x11:
    if (local_150 == 0) {
      local_150 = local_140;
    }
    if (local_100 == 0) {
      local_100 = local_f0;
    }
    FUN_10038e8e0(param_2,"%s%s",local_150,local_100);
    if (*(int *)(*(long *)(param_1 + 0x40) + 0x74) != param_3 + 1) {
      pcVar8 = "rgb";
      if (param_4 != 0) {
        pcVar8 = "a";
      }
      FUN_10038e8e0(param_2," * tex_colors%u.%s",param_3 + 1,pcVar8);
    }
    break;
  case 0x12:
    if (param_4 != 0) {
      bVar5 = 0;
      goto LAB_1003589ac;
    }
    if (local_150 == 0) {
      local_150 = local_140;
    }
    if (local_100 == 0) {
      local_100 = local_f0;
    }
    if (local_128 == 0) {
      local_128 = local_118;
    }
    FUN_10038e8e0(param_2,"%s%s.rgb + %s.a * %s",local_150,local_100,local_100,local_128);
    break;
  case 0x13:
    if (param_4 != 0) {
      bVar5 = 0;
      goto LAB_1003589ac;
    }
    if (local_150 == 0) {
      local_150 = local_140;
    }
    lVar6 = local_100;
    if (local_100 == 0) {
      lVar6 = local_f0;
    }
    if (local_128 == 0) {
      local_128 = local_118;
    }
    if (local_100 == 0) {
      local_100 = local_f0;
    }
    FUN_10038e8e0(param_2,"%s%s.rgb * %s + %s.a",local_150,lVar6,local_128,local_100);
    break;
  case 0x14:
    if (param_4 != 0) {
      bVar5 = 0;
      goto LAB_1003589ac;
    }
    if (local_150 == 0) {
      local_150 = local_140;
    }
    lVar6 = local_100;
    if (local_100 == 0) {
      lVar6 = local_f0;
    }
    if (local_128 == 0) {
      local_128 = local_118;
    }
    if (local_100 == 0) {
      local_100 = local_f0;
    }
    FUN_10038e8e0(param_2,"%s(1.0 - %s.a) * %s + %s.rgb",local_150,lVar6,local_128,local_100);
    break;
  case 0x15:
    if (param_4 != 0) {
      bVar5 = 0;
      goto LAB_1003589ac;
    }
    if (local_150 == 0) {
      local_150 = local_140;
    }
    lVar6 = local_100;
    if (local_100 == 0) {
      lVar6 = local_f0;
    }
    if (local_128 == 0) {
      local_128 = local_118;
    }
    if (local_100 == 0) {
      local_100 = local_f0;
    }
    FUN_10038e8e0(param_2,"%s(1.0 - %s.rgb) * %s + %s.a",local_150,lVar6,local_128,local_100);
    break;
  case 0x16:
    bVar5 = param_4 ^ 1;
    goto LAB_1003589ac;
  case 0x17:
    if (param_4 == 0) {
      bVar5 = 1;
      FUN_10038e8e0(param_2,
                    "tex_colors%u = tex_colors%u * clamp(tex_colors%u.b * c_ps[%u * BUMP_STRIDE + OFF_BUMP_INFO].x + c_ps[%u * BUMP_STRIDE + OFF_BUMP_INFO].y, 0.0, 1.0);\n"
                    ,param_3 + 1,param_3 + 1,param_3,param_3,CONCAT44(uVar13,param_3));
    }
    else {
      bVar5 = 0;
    }
    goto LAB_1003589ac;
  case 0x18:
    if (param_4 == 0) {
      if (local_150 == 0) {
        local_150 = local_140;
      }
      if (local_100 == 0) {
        local_100 = local_f0;
      }
      if (local_128 == 0) {
        local_128 = local_118;
      }
      FUN_10038e8e0(param_2,"%svec4(dot(%s - 0.5, %s - 0.5) * 4.0)",local_150,local_100,local_128);
    }
    break;
  case 0x19:
    if (local_150 == 0) {
      local_150 = local_140;
    }
    if (local_d8 == 0) {
      local_d8 = local_c8;
    }
    if (local_100 == 0) {
      local_100 = local_f0;
    }
    if (local_128 == 0) {
      local_128 = local_118;
    }
    FUN_10038e8e0(param_2,"%s%s + %s * %s",local_150,local_d8,local_100,local_128);
    break;
  case 0x1a:
    if (local_150 == 0) {
      local_150 = local_140;
    }
    lVar6 = local_d8;
    if (local_d8 == 0) {
      lVar6 = local_c8;
    }
    if (local_100 == 0) {
      local_100 = local_f0;
    }
    if (local_d8 == 0) {
      local_d8 = local_c8;
    }
    if (local_128 == 0) {
      local_128 = local_118;
    }
    FUN_10038e8e0(param_2,"%s%s * %s + (1.0 - %s) * %s",local_150,lVar6,local_100,local_d8,local_128
                 );
    break;
  default:
    bVar5 = 0;
    goto LAB_1003589ac;
  }
  if (bVar4) {
    FUN_10038e8e0(param_2,", 0.0, 1.0)");
  }
  if ((param_4 == 0) && (((uVar12 | local_15c) & 0x20) != 0)) {
    bVar5 = 1;
    FUN_10038e8e0(param_2,");\n");
  }
  else {
    bVar5 = 1;
    FUN_10038e8e0(param_2,";\n");
  }
LAB_1003589ac:
  FUN_10038e8c0(local_158);
  FUN_10038e8c0(local_130);
  FUN_10038e8c0(local_108);
  FUN_10038e8c0(local_e0);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_100ba2320 >> 8),bVar5);
}

