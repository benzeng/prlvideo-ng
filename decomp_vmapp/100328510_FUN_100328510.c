
void FUN_100328510(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                  undefined8 param_6,int param_7,void *param_8,int param_9,long param_10,
                  long param_11)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [8];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  iVar4 = 1;
  iVar6 = 1;
  if (((6 < param_7 - 0x8362U) && (iVar6 = 1, 4 < param_7 - 0x8032U)) &&
     (iVar6 = 1, param_7 != 0x84fa)) {
    iVar6 = 4;
    iVar5 = (int)param_6;
    if (iVar5 < 0x8000) {
      switch(iVar5) {
      case 0x1900:
      case 0x1901:
      case 0x1902:
      case 0x1903:
      case 0x1904:
      case 0x1905:
      case 0x1906:
      case 0x1909:
switchD_100328686_caseD_1900:
        iVar6 = 1;
        break;
      case 0x1907:
switchD_100328686_caseD_1907:
        iVar6 = 3;
        break;
      case 0x1908:
        break;
      case 0x190a:
switchD_100328686_caseD_190a:
        iVar6 = 2;
        break;
      default:
switchD_100328686_default:
        iVar6 = 0;
      }
    }
    else if (iVar5 < 0x8d94) {
      if (iVar5 < 0x80e0) {
        if (iVar5 != 0x8000) goto switchD_100328686_default;
      }
      else {
        if (iVar5 - 0x8227U < 2) goto switchD_100328686_caseD_190a;
        if (iVar5 == 0x80e0) goto switchD_100328686_caseD_1907;
        if (iVar5 != 0x80e1) goto switchD_100328686_default;
      }
    }
    else {
      switch(iVar5) {
      case 0x8d94:
      case 0x8d95:
      case 0x8d96:
      case 0x8d97:
      case 0x8d9c:
        goto switchD_100328686_caseD_1900;
      case 0x8d98:
      case 0x8d9a:
        iVar6 = 3;
        break;
      case 0x8d99:
      case 0x8d9b:
        break;
      case 0x8d9d:
        goto switchD_100328686_caseD_190a;
      default:
        goto switchD_100328686_default;
      }
    }
  }
  if (param_7 < 0x8032) {
    uVar1 = param_7 - 0x1400;
    if (uVar1 < 0xc) {
      if ((0x80cU >> (uVar1 & 0x1f) & 1) != 0) {
        iVar4 = 2;
        goto LAB_1003286d0;
      }
      if ((0x70U >> (uVar1 & 0x1f) & 1) != 0) {
LAB_100328635:
        iVar4 = 4;
        goto LAB_1003286d0;
      }
      if ((3U >> (uVar1 & 0x1f) & 1) != 0) goto LAB_1003286d0;
    }
  }
  else if (param_7 < 0x8362) {
    if (param_7 - 0x8033U < 2) {
LAB_10032861b:
      iVar4 = 2;
      goto LAB_1003286d0;
    }
    if (param_7 - 0x8035U < 2) {
LAB_100328693:
      iVar4 = 4;
      goto LAB_1003286d0;
    }
    if (param_7 == 0x8032) goto LAB_1003286d0;
  }
  else if (param_7 < 0x84fa) {
    if (param_7 - 0x8363U < 4) goto LAB_10032861b;
    if (param_7 - 0x8367U < 2) goto LAB_100328693;
    if (param_7 == 0x8362) goto LAB_1003286d0;
  }
  else if (param_7 == 0x84fa) goto LAB_100328635;
  iVar4 = 0;
LAB_1003286d0:
  iVar4 = iVar4 * iVar6;
  iVar6 = -param_5;
  if (0 < param_5) {
    iVar6 = param_5;
  }
  (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xd04,&local_44);
  (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xd03,&local_48);
  (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xd02,&local_4c);
  (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x806c,&local_50);
  (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xd05,&local_54);
  iVar5 = local_4c;
  if (local_4c < 1) {
    iVar5 = param_4;
  }
  uVar2 = iVar5 * iVar4;
  uVar1 = local_54 - 1U & uVar2;
  if (uVar1 != 0) {
    uVar2 = (uVar2 + local_54) - uVar1;
  }
  (*(code *)DAT_1011c4a88[0xc4])(*DAT_1011c4a88,0xd04,0);
  (*(code *)DAT_1011c4a88[0xc4])(*DAT_1011c4a88,0xd03,0);
  if (((param_4 == 1) && (iVar6 == 1)) && (param_9 - 1U < 4)) {
    (*(code *)DAT_1011c4a88[0xc4])(*DAT_1011c4a88,0xd02,2);
    (*(code *)DAT_1011c4a88[0xc4])(*DAT_1011c4a88,0x806c,1);
    (*(code *)DAT_1011c4a88[0xc4])(*DAT_1011c4a88,0xd05,4);
    (*(code *)DAT_1011c4a88[0xee])(*DAT_1011c4a88,param_2,param_3,2,1,param_6,param_7,local_40);
    _memcpy(param_8,local_40,(long)param_9);
    (*(code *)DAT_1011c4a88[0xc4])(*DAT_1011c4a88,0xd02,local_4c);
    (*(code *)DAT_1011c4a88[0xc4])(*DAT_1011c4a88,0x806c,local_50);
    (*(code *)DAT_1011c4a88[0xc4])(*DAT_1011c4a88,0xd05,local_54);
  }
  else {
    (*(code *)DAT_1011c4a88[0xee])
              (*DAT_1011c4a88,param_2,param_3,param_4,iVar6,param_6,param_7,param_8);
  }
  (*(code *)DAT_1011c4a88[0xc4])(*DAT_1011c4a88,0xd04,local_44);
  (*(code *)DAT_1011c4a88[0xc4])(*DAT_1011c4a88,0xd03,local_48);
  if ((0 < param_9) && (param_10 != 0)) {
    lVar3 = 0;
    if (param_5 < 0) {
      lVar3 = (long)(int)((iVar6 + -1) * uVar2);
    }
    if (0 < iVar6) {
      lVar7 = (long)(int)(local_44 * iVar4 + local_48 * uVar2);
      lVar3 = (long)param_8 + lVar3;
      do {
        FUN_1002a5a50(param_10,lVar7,lVar3,iVar4 * param_4);
        lVar3 = lVar3 + (int)((param_5 >> 0x1f | 1U) * uVar2);
        lVar7 = lVar7 + (int)uVar2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  if (param_10 != 0) {
    *(int *)(param_10 + 0x10) = param_9;
  }
  if (param_11 != 0) {
    *(undefined4 *)(param_11 + 0x10) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

