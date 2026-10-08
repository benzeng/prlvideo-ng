
undefined8 FUN_100a0bfd0(long *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  FUN_100a0c1c0();
  iVar2 = *param_2;
  lVar3 = *param_1;
  if (iVar2 == *(int *)(lVar3 + 4)) {
    return 0;
  }
  lVar9 = (long)iVar2;
  lVar7 = *(long *)(lVar3 + 0x10) + lVar3;
  uVar1 = *(ushort *)(lVar7 + lVar9 * 2);
  iVar8 = iVar2 + 1;
  *param_2 = iVar8;
  iVar6 = (int)(char)uVar1;
  if (0xff < uVar1) {
    iVar6 = 0;
  }
  if (iVar6 < 0x5b) {
    switch(iVar6) {
    case 0x22:
      uVar5 = 7;
      break;
    default:
      goto switchD_100a0c033_caseD_23;
    case 0x2c:
      uVar5 = 6;
      break;
    case 0x2d:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      uVar5 = 8;
      break;
    case 0x3a:
      uVar5 = 5;
    }
  }
  else {
    if (iVar6 < 0x7b) {
      if (iVar6 == 0x5b) {
        return 3;
      }
      if (iVar6 == 0x5d) {
        return 4;
      }
    }
    else {
      if (iVar6 == 0x7b) {
        return 1;
      }
      if (iVar6 == 0x7d) {
        return 2;
      }
    }
switchD_100a0c033_caseD_23:
    *param_2 = iVar2;
    iVar6 = *(int *)(lVar3 + 4) - iVar2;
    uVar4 = 0;
    uVar5 = 0;
    if (3 < iVar6) {
      if ((((uVar1 == 0x74) && (*(short *)(lVar7 + 2 + lVar9 * 2) == 0x72)) &&
          (*(short *)(lVar7 + 4 + lVar9 * 2) == 0x75)) &&
         (*(short *)(lVar7 + 6 + lVar9 * 2) == 0x65)) {
        *param_2 = iVar2 + 4;
        uVar5 = 9;
      }
      else {
        uVar5 = uVar4;
        if ((iVar6 < 5) || (uVar1 != 0x66)) {
          if (((uVar1 == 0x6e) &&
              ((*(short *)(lVar7 + (long)iVar8 * 2) == 0x75 &&
               (*(short *)(lVar7 + 4 + lVar9 * 2) == 0x6c)))) &&
             (*(short *)(lVar7 + 6 + lVar9 * 2) == 0x6c)) {
            *param_2 = iVar2 + 4;
            uVar5 = 0xb;
          }
        }
        else {
          uVar5 = 0;
          if ((((*(short *)(lVar7 + (long)iVar8 * 2) == 0x61) &&
               (uVar5 = uVar4, *(short *)(lVar7 + 4 + lVar9 * 2) == 0x6c)) &&
              (*(short *)(lVar7 + 6 + lVar9 * 2) == 0x73)) &&
             (*(short *)(lVar7 + 8 + lVar9 * 2) == 0x65)) {
            *param_2 = iVar2 + 5;
            uVar5 = 10;
          }
        }
      }
    }
  }
  return uVar5;
}

