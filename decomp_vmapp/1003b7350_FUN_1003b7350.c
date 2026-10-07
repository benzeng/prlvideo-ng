
undefined4 FUN_1003b7350(long param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint *local_38;
  
  if (param_3 <= param_2) {
    return 1;
  }
  uVar4 = *param_2;
  puVar2 = param_2 + 1;
  uVar12 = uVar4 & 0x7ff;
  uVar9 = *(undefined8 *)(param_1 + 8);
  local_38 = puVar2;
  lVar5 = FUN_1003a7de0(uVar12);
  FUN_10038e8e0(uVar9,"%s",*(undefined8 *)(lVar5 + 8));
  uVar13 = uVar4 & 0x7fe;
  if (((uVar4 & 0x10000) != 0) && (uVar13 == 0x9c || uVar12 == 0x9e)) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"_glc");
  }
  if (((uVar4 & 0x800000) != 0) && (uVar12 == 0x9e)) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"_opc");
  }
  FUN_10038e8e0(*(undefined8 *)(param_1 + 8)," ");
  switch(uVar12) {
  case 0x58:
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    iVar3 = FUN_1003ae100();
    puVar2 = local_38;
    if (iVar3 != 0) {
      return 3;
    }
    uVar4 = (uVar4 >> 0xb & 0x1f) - 1;
    if (uVar4 < 10) {
      pcVar7 = (&PTR_s_buffer_100bbdfd0)[(int)uVar4];
    }
    else {
      pcVar7 = "dimension?";
    }
    uVar4 = *local_38;
    uVar12 = (uVar4 & 0xf) - 1;
    pcVar8 = "return?";
    pcVar6 = "return?";
    if (uVar12 < 6) {
      pcVar6 = (&PTR_s_unorm_100bbe020)[(int)uVar12];
    }
    uVar12 = (uVar4 >> 4 & 0xf) - 1;
    pcVar10 = "return?";
    if (uVar12 < 6) {
      pcVar10 = (&PTR_s_unorm_100bbe020)[(int)uVar12];
    }
    uVar12 = (uVar4 >> 8 & 0xf) - 1;
    pcVar11 = "return?";
    if (uVar12 < 6) {
      pcVar11 = (&PTR_s_unorm_100bbe020)[(int)uVar12];
    }
    uVar4 = (uVar4 >> 0xc & 0xf) - 1;
    if (uVar4 < 6) {
      pcVar8 = (&PTR_s_unorm_100bbe020)[(int)uVar4];
    }
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"%s (%s, %s, %s, %s) ",pcVar7,pcVar6,pcVar10,pcVar11,
                  pcVar8);
    if (param_3 <= puVar2) {
      return 1;
    }
    local_38 = puVar2 + 1;
    goto LAB_1003b7dc5;
  case 0x59:
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    iVar3 = FUN_1003ae100();
    if (iVar3 != 0) {
      return 3;
    }
    FUN_1003b7f20(param_1,&local_68);
    uVar9 = *(undefined8 *)(param_1 + 8);
    uVar4 = uVar4 >> 0xb & 1;
    pcVar6 = "indexed?";
    if (uVar4 == 0) {
      pcVar6 = "immediateIndexed";
    }
    pcVar7 = "dynamicIndexed";
    if (uVar4 == 0) {
      pcVar7 = pcVar6;
    }
    goto LAB_1003b7de1;
  case 0x5a:
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    iVar3 = FUN_1003ae100();
    if (iVar3 != 0) {
      return 3;
    }
    FUN_1003b7f20(param_1,&local_68);
    uVar9 = *(undefined8 *)(param_1 + 8);
    uVar4 = uVar4 >> 0xb & 0xf;
    if (uVar4 < 3) {
      pcVar7 = (&PTR_s_default_100bbdfb0)[uVar4];
    }
    else {
      pcVar7 = "mode?";
    }
LAB_1003b7de1:
    FUN_10038e8e0(uVar9," %s",pcVar7);
    break;
  case 0x5b:
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    iVar3 = FUN_1003ae100();
    if (iVar3 != 0) {
      return 3;
    }
    if (param_3 <= local_38) {
      return 1;
    }
    uVar4 = *local_38;
    local_38 = local_38 + 1;
    FUN_1003b7f20(param_1,&local_68);
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),", ");
    uStack_60 = CONCAT44((uVar4 - 1) + uStack_60._4_4_,(undefined4)uStack_60);
    FUN_1003b7f20(param_1,&local_68);
    break;
  case 0x5c:
    uVar9 = *(undefined8 *)(param_1 + 8);
    uVar4 = (uVar4 >> 0xb & 0x3f) - 1;
    if (uVar4 < 0xd) {
      pcVar7 = (&PTR_s_pointlist_100bbe240)[(int)uVar4];
    }
    else {
      pcVar7 = "topology?";
    }
    goto LAB_1003b74b4;
  case 0x5d:
    uVar9 = *(undefined8 *)(param_1 + 8);
    uVar4 = (uVar4 >> 0xb & 0x3f) - 1;
    if (uVar4 < 0x27) {
      pcVar7 = (&PTR_s_point_100bbe100)[(int)uVar4];
    }
    else {
      pcVar7 = "primitive?";
    }
    goto LAB_1003b74b4;
  case 0x5e:
  case 0x68:
  case 0x99:
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"%d",*puVar2);
    if (param_3 <= puVar2) {
      return 1;
    }
    local_38 = param_2 + 2;
    break;
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
    if ((uVar13 == 0x62) || (uVar12 == 100)) {
      uVar4 = (uVar4 >> 0xb & 0xf) - 1;
      if (uVar4 < 5) {
        pcVar7 = (&PTR_s_constant_100bbdf80)[(int)uVar4];
      }
      else {
        pcVar7 = "interpolation??";
      }
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"%s ",pcVar7);
    }
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    iVar3 = FUN_1003ae100();
    if (iVar3 != 0) {
      return 3;
    }
    FUN_1003b7f20(param_1,&local_68);
    puVar2 = local_38;
    if ((uVar13 == 0x60) || (uVar12 - 99 < 2)) {
      uVar4 = (ushort)*local_38 - 1;
      if (uVar4 < 0x16) {
        pcVar7 = (&PTR_s_position_100bbe050)[(int)uVar4];
      }
      else {
        pcVar7 = "name?";
      }
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8)," %s",pcVar7);
      if (param_3 <= puVar2) {
        return 1;
      }
      local_38 = puVar2 + 1;
    }
    break;
  case 0x65:
  case 0x66:
  case 0x67:
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    iVar3 = FUN_1003ae100();
    if (iVar3 != 0) {
      return 3;
    }
    FUN_1003b7f20(param_1,&local_68);
    puVar2 = local_38;
    if (uVar13 == 0x66) {
      uVar4 = (ushort)*local_38 - 1;
      if (uVar4 < 0x16) {
        pcVar7 = (&PTR_s_position_100bbe050)[(int)uVar4];
      }
      else {
        pcVar7 = "name?";
      }
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8)," %s",pcVar7);
      if (param_3 <= puVar2) {
        return 1;
      }
      local_38 = puVar2 + 1;
    }
    break;
  case 0x69:
    if (param_3 <= puVar2) {
      return 1;
    }
    if (param_3 <= param_2 + 2) {
      return 1;
    }
    if (param_3 <= param_2 + 3) {
      return 1;
    }
    local_38 = param_2 + 4;
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"X%d[%d]%s",*puVar2,param_2[2],
                  (&PTR_s__x_100bbdd80)[param_2[3] - 1]);
    break;
  case 0x6a:
    if ((uVar4 & 0x800) == 0) break;
    uVar9 = *(undefined8 *)(param_1 + 8);
    pcVar7 = "refactoringAllowed";
    goto LAB_1003b74b4;
  default:
    uVar9 = *(undefined8 *)(param_1 + 8);
    pcVar7 = "dcl???\n";
    goto LAB_1003b74b4;
  case 0x8f:
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    iVar3 = FUN_1003ae100();
    if (iVar3 != 0) {
      return 3;
    }
LAB_1003b7dc5:
    FUN_1003b7f20(param_1,&local_68);
    break;
  case 0x93:
  case 0x94:
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"%d",uVar4 >> 0xb & 0x3f);
    break;
  case 0x95:
    uVar9 = *(undefined8 *)(param_1 + 8);
    uVar4 = (uVar4 >> 0xb & 3) - 1;
    if (uVar4 < 3) {
      pcVar7 = (&PTR_s_domain_isoline_100bbe2d0)[(int)uVar4];
    }
    else {
      pcVar7 = "domain?";
    }
    goto LAB_1003b74b4;
  case 0x96:
    uVar9 = *(undefined8 *)(param_1 + 8);
    uVar4 = (uVar4 >> 0xb & 7) - 1;
    if (uVar4 < 4) {
      pcVar7 = (&PTR_s_partitioning_integer_100bbe2f0)[(int)uVar4];
    }
    else {
      pcVar7 = "partitioning?";
    }
    goto LAB_1003b74b4;
  case 0x97:
    uVar9 = *(undefined8 *)(param_1 + 8);
    uVar4 = (uVar4 >> 0xb & 7) - 1;
    if (uVar4 < 4) {
      pcVar7 = (&PTR_s_output_point_100bbe310)[(int)uVar4];
    }
    else {
      pcVar7 = "output?";
    }
LAB_1003b74b4:
    FUN_10038e8e0(uVar9,pcVar7);
    break;
  case 0x9b:
    if (param_3 <= puVar2) {
      return 1;
    }
    if (param_3 <= param_2 + 2) {
      return 1;
    }
    if (param_3 <= param_2 + 3) {
      return 1;
    }
    local_38 = param_2 + 4;
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"%d, %d, %d",*puVar2,param_2[2],param_2[3]);
    break;
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0xa1:
  case 0xa2:
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    iVar3 = FUN_1003ae100();
    if (iVar3 != 0) {
      return 3;
    }
    FUN_1003b7f20(param_1,&local_68);
    puVar2 = local_38;
    if (uVar12 == 0x9c) {
      uVar4 = (uVar4 >> 0xb & 0x1f) - 1;
      if (uVar4 < 10) {
        pcVar7 = (&PTR_s_buffer_100bbdfd0)[(int)uVar4];
      }
      else {
        pcVar7 = "dimension?";
      }
      uVar4 = *local_38;
      uVar12 = (uVar4 & 0xf) - 1;
      pcVar8 = "return?";
      pcVar6 = "return?";
      if (uVar12 < 6) {
        pcVar6 = (&PTR_s_unorm_100bbe020)[(int)uVar12];
      }
      uVar12 = (uVar4 >> 4 & 0xf) - 1;
      pcVar10 = "return?";
      if (uVar12 < 6) {
        pcVar10 = (&PTR_s_unorm_100bbe020)[(int)uVar12];
      }
      uVar12 = (uVar4 >> 8 & 0xf) - 1;
      pcVar11 = "return?";
      if (uVar12 < 6) {
        pcVar11 = (&PTR_s_unorm_100bbe020)[(int)uVar12];
      }
      uVar4 = (uVar4 >> 0xc & 0xf) - 1;
      if (uVar4 < 6) {
        pcVar8 = (&PTR_s_unorm_100bbe020)[(int)uVar4];
      }
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),", %s (%s, %s, %s, %s)",pcVar7,pcVar6,pcVar10,
                    pcVar11,pcVar8);
      if (param_3 <= puVar2) {
        return 1;
      }
      local_38 = puVar2 + 1;
    }
    else if ((uVar12 == 0x9e) || (uVar12 == 0xa2)) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),", %d",*local_38);
      if (param_3 <= puVar2) {
        return 1;
      }
      local_38 = puVar2 + 1;
    }
    break;
  case 0x9f:
  case 0xa0:
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    iVar3 = FUN_1003ae100();
    if (iVar3 != 0) {
      return 3;
    }
    FUN_1003b7f20(param_1,&local_68);
    puVar2 = local_38;
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),", %d",*local_38);
    if (param_3 <= puVar2) {
      return 1;
    }
    puVar1 = puVar2 + 1;
    local_38 = puVar1;
    if (uVar12 == 0xa0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),", %d",*puVar1);
      if (param_3 <= puVar1) {
        return 1;
      }
      local_38 = puVar2 + 2;
    }
  }
  FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"\n");
  return 0;
}

