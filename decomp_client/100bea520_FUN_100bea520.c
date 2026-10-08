
undefined8
FUN_100bea520(uint *param_1,long *param_2,undefined8 *param_3,int *param_4,undefined4 *param_5,
             undefined8 *param_6)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  uint local_48 [6];
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 == 0) {
    return 0;
  }
  if (param_6 != (undefined8 *)0x0) {
    FUN_100bea8f0();
    *param_6 = 0;
    local_48[0] = param_1[0x36];
    if (DAT_102315fe8 != 0) {
      iVar2 = FUN_100c60360(DAT_102315fe8,local_48);
      if (iVar2 < 0) {
        *param_6 = 0;
      }
      else {
        uVar3 = FUN_100c60820(DAT_102315fe8,iVar2);
        *param_6 = uVar3;
      }
    }
  }
  if (param_2 == (long *)0x0) {
    return 0;
  }
  if (param_3 == (undefined8 *)0x0) {
    return 0;
  }
  lVar6 = *(long *)(lVar1 + 0x28);
  lVar4 = 0;
  if (lVar6 < 0x10) {
    switch(lVar6) {
    case 1:
      break;
    case 2:
      lVar4 = 1;
      break;
    default:
      goto switchD_100bea5f9_caseD_3;
    case 4:
      lVar4 = 2;
      break;
    case 8:
      lVar4 = 3;
    }
switchD_100bea5f9_caseD_1:
    lVar6 = (&DAT_102315f30)[lVar4];
LAB_100bea6ed:
    *param_2 = lVar6;
  }
  else {
    if (0xff < lVar6) {
      if (lVar6 < 0x1000) {
        if (lVar6 < 0x400) {
          if (lVar6 == 0x100) {
            lVar4 = 8;
          }
          else {
            if (lVar6 != 0x200) goto switchD_100bea5f9_caseD_3;
            lVar4 = 9;
          }
        }
        else if (lVar6 == 0x400) {
          lVar4 = 10;
        }
        else {
          if (lVar6 != 0x800) goto switchD_100bea5f9_caseD_3;
          lVar4 = 0xb;
        }
      }
      else if (lVar6 == 0x1000) {
        lVar4 = 0xc;
      }
      else {
        if (lVar6 != 0x2000) goto switchD_100bea5f9_caseD_3;
        lVar4 = 0xd;
      }
      goto switchD_100bea5f9_caseD_1;
    }
    if (0x3f < lVar6) {
      if (lVar6 == 0x40) {
        lVar4 = 6;
      }
      else {
        if (lVar6 != 0x80) goto switchD_100bea5f9_caseD_3;
        lVar4 = 7;
      }
      goto switchD_100bea5f9_caseD_1;
    }
    if (lVar6 == 0x10) {
      lVar4 = 4;
      goto switchD_100bea5f9_caseD_1;
    }
    if (lVar6 == 0x20) {
      lVar6 = FUN_100c6f600();
      goto LAB_100bea6ed;
    }
switchD_100bea5f9_caseD_3:
    *param_2 = 0;
  }
  lVar6 = *(long *)(lVar1 + 0x30);
  lVar4 = 0;
  if (0xf < lVar6) {
    if (lVar6 == 0x10) {
      lVar4 = 4;
    }
    else {
      if (lVar6 != 0x20) goto switchD_100bea721_caseD_3;
      lVar4 = 5;
    }
    goto switchD_100bea721_caseD_1;
  }
  switch(lVar6) {
  case 1:
    break;
  case 2:
    lVar4 = 1;
    break;
  default:
switchD_100bea721_caseD_3:
    *param_3 = 0;
    if (param_4 != (int *)0x0) {
      *param_4 = 0;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 0;
    }
    piVar7 = (int *)0x0;
    if (lVar6 == 0x40) {
      param_4 = piVar7;
    }
    goto LAB_100bea7ab;
  case 4:
    lVar4 = 2;
    break;
  case 8:
    lVar4 = 3;
  }
switchD_100bea721_caseD_1:
  piVar7 = (int *)(&DAT_102315fa0)[lVar4];
  *param_3 = piVar7;
  if (param_4 != (int *)0x0) {
    *param_4 = (&DAT_1023031d0)[lVar4];
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = (&DAT_102315fd0)[lVar4];
  }
LAB_100bea7ab:
  if (*param_2 == 0) {
    return 0;
  }
  if ((piVar7 == (int *)0x0) && (uVar5 = FUN_100c6fbb0(), (uVar5 & 0x200000) == 0)) {
    return 0;
  }
  if ((param_4 != (int *)0x0) && (*param_4 == 0)) {
    return 0;
  }
  if ((int)*param_1 < 0x301) {
    return 1;
  }
  if ((*param_1 & 0xffffff00) != 0x300) {
    return 1;
  }
  lVar6 = *(long *)(lVar1 + 0x28);
  if (lVar6 == 4) {
    if (*(long *)(lVar1 + 0x30) != 1) {
      return 1;
    }
    lVar6 = FUN_100c6bd50("RC4-HMAC-MD5");
    if (lVar6 != 0) goto LAB_100bea890;
    lVar6 = *(long *)(lVar1 + 0x28);
  }
  if (lVar6 == 0x40) {
    if (*(long *)(lVar1 + 0x30) != 2) {
      return 1;
    }
    lVar6 = FUN_100c6bd50("AES-128-CBC-HMAC-SHA1");
    if (lVar6 != 0) goto LAB_100bea890;
    lVar6 = *(long *)(lVar1 + 0x28);
  }
  if (lVar6 != 0x80) {
    return 1;
  }
  if (*(long *)(lVar1 + 0x30) != 2) {
    return 1;
  }
  lVar6 = FUN_100c6bd50("AES-256-CBC-HMAC-SHA1");
  if (lVar6 == 0) {
    return 1;
  }
LAB_100bea890:
  *param_2 = lVar6;
  *param_3 = 0;
  return 1;
}

