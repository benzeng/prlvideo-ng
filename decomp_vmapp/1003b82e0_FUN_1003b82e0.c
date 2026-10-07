
undefined8 FUN_1003b82e0(long param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  char *pcVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint *local_38;
  
  uVar2 = *param_2;
  uVar7 = uVar2 & 0x7ff;
  uVar8 = *(undefined8 *)(param_1 + 8);
  local_38 = param_2;
  lVar4 = FUN_1003a7de0(uVar7);
  FUN_10038e8e0(uVar8,"%s",*(undefined8 *)(lVar4 + 8));
  if (uVar7 < 0x1f) {
    if ((0xd < uVar7) || ((0x2128U >> (uVar2 & 0x1f) & 1) == 0)) goto LAB_1003b8426;
    goto LAB_1003b8404;
  }
  if (uVar7 < 0xbe) {
    if (uVar7 < 0x3f) {
      if (uVar7 == 0x1f) {
LAB_1003b8404:
        uVar8 = *(undefined8 *)(param_1 + 8);
        if ((*param_2 & 0x40000) == 0) {
          pcVar10 = "_z";
        }
        else {
          pcVar10 = "_nz";
        }
      }
      else {
        if (uVar7 != 0x3d) goto LAB_1003b8426;
        uVar8 = *(undefined8 *)(param_1 + 8);
        uVar2 = *param_2 >> 0xb & 3;
        if (uVar2 == 3) {
          pcVar10 = "return?";
        }
        else {
          pcVar10 = (&PTR_s__100bbe2b0)[uVar2];
        }
      }
    }
    else {
      if (uVar7 == 0x3f) goto LAB_1003b8404;
      if ((uVar7 != 0x6f) || ((*param_2 & 0x1800) != 0x800)) goto LAB_1003b8426;
      uVar8 = *(undefined8 *)(param_1 + 8);
      pcVar10 = "_uint";
    }
  }
  else {
    if (uVar7 != 0xbe) goto LAB_1003b8426;
    uVar2 = *param_2;
    if ((uVar2 & 0x1000) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"_g");
      uVar2 = *param_2;
    }
    if ((uVar2 & 0x800) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"_t");
      uVar2 = *param_2;
    }
    if ((uVar2 & 0x2000) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"_ugroup");
      uVar2 = *param_2;
    }
    if ((uVar2 & 0x4000) == 0) goto LAB_1003b8426;
    uVar8 = *(undefined8 *)(param_1 + 8);
    pcVar10 = "_uglobal";
  }
  FUN_10038e8e0(uVar8,pcVar10);
LAB_1003b8426:
  uVar2 = *param_2;
  if ((uVar2 & 0x2000) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"_sat");
    uVar2 = *param_2;
  }
  do {
    bVar1 = param_2 < param_3;
    if (-1 < (int)uVar2) {
      uVar8 = 1;
      if (bVar1) {
        local_38 = param_2 + 1;
        uVar11 = *(undefined8 *)(param_1 + 8);
        if (local_38 < param_3) {
          pcVar10 = " ";
          do {
            FUN_10038e8e0(uVar11,pcVar10);
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
            uVar11 = *(undefined8 *)(param_1 + 8);
            pcVar10 = ", ";
          } while (local_38 < param_3);
        }
        uVar8 = 0;
        FUN_10038e8e0(uVar11,"\n");
      }
      return uVar8;
    }
    param_2 = param_2 + 1;
    if (!bVar1) {
      return 1;
    }
    uVar2 = *param_2;
    local_38 = param_2;
    switch(uVar2 & 0x3f) {
    case 0:
      goto switchD_1003b84b7_caseD_0;
    case 1:
      uVar5 = uVar2 >> 9;
      uVar7 = uVar5 | 0xfffffff0;
      if ((uVar5 & 8) == 0) {
        uVar7 = uVar5 & 0xf;
      }
      uVar9 = uVar2 >> 0xd;
      uVar5 = uVar9 | 0xfffffff0;
      if ((uVar9 & 8) == 0) {
        uVar5 = uVar9 & 0xf;
      }
      uVar2 = uVar2 >> 0x11;
      uVar9 = uVar2 | 0xfffffff0;
      if ((uVar2 & 8) == 0) {
        uVar9 = uVar2 & 0xf;
      }
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"(%d, %d, %d)",uVar7,uVar5,uVar9);
      break;
    case 2:
      uVar2 = (uVar2 >> 6 & 0x1f) - 1;
      pcVar10 = "dimension?";
      if (uVar2 < 10) {
        pcVar10 = (&PTR_s_buffer_100bbdfd0)[(int)uVar2];
      }
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"(%s)",pcVar10);
      break;
    case 3:
      uVar7 = (uVar2 >> 6 & 0xf) - 1;
      pcVar13 = "return?";
      pcVar10 = "return?";
      if (uVar7 < 6) {
        pcVar10 = (&PTR_s_unorm_100bbe020)[(int)uVar7];
      }
      uVar7 = (uVar2 >> 10 & 0xf) - 1;
      pcVar6 = "return?";
      if (uVar7 < 6) {
        pcVar6 = (&PTR_s_unorm_100bbe020)[(int)uVar7];
      }
      uVar7 = (uVar2 >> 0xe & 0xf) - 1;
      pcVar12 = "return?";
      if (uVar7 < 6) {
        pcVar12 = (&PTR_s_unorm_100bbe020)[(int)uVar7];
      }
      uVar2 = (uVar2 >> 0x12 & 0xf) - 1;
      if (uVar2 < 6) {
        pcVar13 = (&PTR_s_unorm_100bbe020)[(int)uVar2];
      }
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"(%s, %s, %s, %s)",pcVar10,pcVar6,pcVar12,pcVar13);
      break;
    default:
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"(ext?)");
    }
    uVar2 = *param_2;
switchD_1003b84b7_caseD_0:
  } while( true );
}

