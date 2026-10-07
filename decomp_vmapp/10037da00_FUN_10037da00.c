
void FUN_10037da00(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long *param_8)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  bool bVar14;
  uint *local_38;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar2 = *(uint *)(DAT_1011c8478 + 4);
  if (uVar2 < 0x140) {
    DAT_1011c7520 = DAT_1011c5978;
    DAT_1011c7580 = DAT_1011c5c88;
  }
  lVar3 = param_8[1];
  uVar11 = lVar3 - *param_8 >> 3;
  if (uVar11 < 0x617) {
    FUN_10037ff60(param_8,0x617 - uVar11);
  }
  else if ((0x617 < uVar11) && (lVar8 = *param_8 + 0x30b8, lVar3 != lVar8)) {
    param_8[1] = (~((lVar3 + -8) - lVar8) & 0xfffffffffffffff8U) + lVar3;
  }
  lVar3 = param_1[1];
  uVar11 = lVar3 - *param_1 >> 3;
  if (uVar11 < 0x28) {
    uVar13 = 0;
    FUN_1003800b0(param_1,0x28 - uVar11);
  }
  else {
    uVar13 = 0;
    if (0x28 < uVar11) {
      lVar8 = *param_1 + 0x140;
      uVar13 = 0;
      if (lVar3 != lVar8) {
        param_1[1] = (~((lVar3 + -8) - lVar8) & 0xfffffffffffffff8U) + lVar3;
        uVar13 = 0;
      }
    }
  }
  do {
    switch(uVar13 & 0xffffffff) {
    case 0:
      puVar7 = operator_new(0x20);
      *puVar7 = &PTR_FUN_100bbc7d8;
      puVar7[1] = param_3;
      puVar7[2] = param_7;
      puVar7[3] = param_6;
      goto LAB_10037df03;
    case 1:
      puVar7 = operator_new(0x10);
      *puVar7 = &PTR_FUN_100bbc828;
      puVar7[1] = param_3;
      goto LAB_10037df03;
    case 2:
      puVar7 = operator_new(0x10);
      ppuVar10 = &PTR_FUN_100bbc510;
      goto LAB_10037de85;
    case 3:
      puVar7 = operator_new(0x18);
      *puVar7 = &PTR_FUN_100bbc558;
      puVar7[1] = param_2;
      puVar7[2] = param_7;
      goto LAB_10037df03;
    case 4:
      puVar7 = operator_new(0x10);
      ppuVar10 = &PTR_FUN_100bbc6e8;
      goto LAB_10037de85;
    case 5:
      puVar7 = operator_new(0x18);
      *puVar7 = &PTR_FUN_100bbc480;
      uVar9 = param_4;
      goto LAB_10037dc8d;
    case 6:
      puVar7 = operator_new(0x10);
      *puVar7 = &PTR_FUN_100bbc4b0;
      puVar7[1] = param_5;
      goto LAB_10037df03;
    case 7:
      puVar7 = operator_new(0x18);
      *puVar7 = &PTR_FUN_100bbc4e0;
      uVar9 = param_2;
LAB_10037dc8d:
      puVar7[1] = uVar9;
      puVar7[2] = param_5;
      goto LAB_10037df03;
    case 8:
      puVar7 = operator_new(8);
      ppuVar10 = &PTR_FUN_100bbc878;
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
      if (*(char *)(DAT_1011c8478 + 0x37) != '\0') {
        puVar7 = operator_new(0x18);
        *puVar7 = &PTR_FUN_100bbc788;
        puVar7[2] = param_6;
        *(int *)(puVar7 + 1) = (int)uVar13 + -9;
        goto LAB_10037df03;
      }
      goto switchD_10037db5b_default;
    case 0xf:
      puVar7 = operator_new(8);
      ppuVar10 = &PTR_FUN_100bbc8c8;
      break;
    case 0x10:
      puVar7 = operator_new(8);
      ppuVar10 = &PTR_FUN_100bbc918;
      break;
    case 0x11:
      puVar7 = operator_new(0x10);
      ppuVar10 = &PTR_FUN_100bbc738;
      goto LAB_10037de85;
    case 0x12:
      puVar7 = operator_new(8);
      ppuVar10 = &PTR_FUN_100bbc968;
      break;
    case 0x13:
      if (uVar2 < 0x140) {
        puVar7 = operator_new(8);
        ppuVar10 = &PTR_FUN_100bbc9b8;
        break;
      }
      goto switchD_10037db5b_default;
    case 0x14:
      puVar7 = operator_new(8);
      ppuVar10 = &PTR_FUN_100bbca08;
      break;
    case 0x15:
      if (uVar2 < 0x140) {
        puVar7 = operator_new(8);
        ppuVar10 = &PTR_FUN_100bbca58;
        break;
      }
      goto switchD_10037db5b_default;
    case 0x16:
      puVar7 = operator_new(8);
      ppuVar10 = &PTR_FUN_100bbcaa8;
      break;
    case 0x17:
      puVar7 = operator_new(8);
      ppuVar10 = &PTR_FUN_100bbcaf8;
      break;
    case 0x18:
      puVar7 = operator_new(8);
      ppuVar10 = &PTR_FUN_100bbcb48;
      break;
    case 0x19:
      puVar7 = operator_new(8);
      ppuVar10 = &PTR_FUN_100bbcb98;
      break;
    case 0x1a:
      puVar7 = operator_new(8);
      ppuVar10 = &PTR_FUN_100bbcbe8;
      break;
    case 0x1b:
      if (uVar2 < 0x140) {
        puVar7 = operator_new(8);
        ppuVar10 = &PTR_FUN_100bbcc38;
        break;
      }
      goto switchD_10037db5b_default;
    case 0x1c:
      puVar7 = operator_new(8);
      ppuVar10 = &PTR_FUN_100bbcc88;
      break;
    case 0x1d:
      puVar7 = operator_new(0x10);
      ppuVar10 = &PTR_FUN_100bbc5a8;
      goto LAB_10037de85;
    case 0x1e:
      puVar7 = operator_new(0x10);
      ppuVar10 = &PTR_FUN_100bbc5f8;
      goto LAB_10037de85;
    case 0x1f:
      puVar7 = operator_new(8);
      ppuVar10 = &PTR_FUN_100bbccd8;
      break;
    case 0x20:
      puVar7 = operator_new(8);
      ppuVar10 = &PTR_FUN_100bbcd28;
      break;
    case 0x21:
      puVar7 = operator_new(0x10);
      ppuVar10 = &PTR_FUN_100bbc648;
      goto LAB_10037de85;
    case 0x22:
      puVar7 = operator_new(0x10);
      ppuVar10 = &PTR_FUN_100bbc698;
LAB_10037de85:
      *puVar7 = ppuVar10;
      puVar7[1] = param_7;
      goto LAB_10037df03;
    case 0x23:
      puVar7 = operator_new(8);
      ppuVar10 = &PTR_FUN_100bbcd78;
      break;
    case 0x24:
      puVar7 = operator_new(8);
      ppuVar10 = &PTR_FUN_100bbcdc8;
      break;
    case 0x25:
      puVar7 = operator_new(8);
      ppuVar10 = &PTR_FUN_100bbce18;
      break;
    case 0x26:
      puVar7 = operator_new(8);
      ppuVar10 = &PTR_FUN_100bbce68;
      break;
    case 0x27:
      if (*(char *)(DAT_1011c8478 + 0x28) == '\0') {
        puVar7 = operator_new(8);
        ppuVar10 = &PTR_FUN_100bbceb8;
        break;
      }
    default:
      goto switchD_10037db5b_default;
    }
    *puVar7 = ppuVar10;
LAB_10037df03:
    *(undefined8 **)(*param_1 + uVar13 * 8) = puVar7;
switchD_10037db5b_default:
    plVar4 = *(long **)(*param_1 + uVar13 * 8);
    if ((plVar4 != (long *)0x0) && (uVar5 = (**(code **)(*plVar4 + 0x10))(), uVar5 != 0)) {
      uVar11 = 1L << ((byte)uVar13 & 0x3f);
      lVar3 = *param_8;
      bVar14 = (uVar5 & 1) != 0;
      if (bVar14) {
        puVar1 = (ulong *)(lVar3 + (ulong)*local_38 * 8);
        *puVar1 = *puVar1 | uVar11;
      }
      if (uVar5 != 1) {
        puVar12 = local_38 + (ulong)bVar14 + 1;
        iVar6 = (uVar5 + 1) - (bVar14 + 1);
        do {
          puVar1 = (ulong *)(lVar3 + (ulong)puVar12[-1] * 8);
          *puVar1 = *puVar1 | uVar11;
          puVar1 = (ulong *)(lVar3 + (ulong)*puVar12 * 8);
          *puVar1 = *puVar1 | uVar11;
          puVar12 = puVar12 + 2;
          iVar6 = iVar6 + -2;
        } while (iVar6 != 0);
      }
    }
    uVar13 = uVar13 + 1;
    if (0x27 < uVar13) {
      return;
    }
  } while( true );
}

