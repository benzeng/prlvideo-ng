
uint FUN_1001dbb4a(undefined4 param_1,uint param_2,uint param_3,int param_4,int param_5,
                  undefined8 param_6)

{
  bool bVar1;
  int iVar2;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_44;
  uint local_24;
  uint local_c;
  
  local_c = 0;
  local_24 = param_3;
  switch(param_1) {
  case 1:
  case 3:
  case 4:
  case 5:
    return 0xffffffff;
  case 2:
    if (((int)param_2 < param_4) || (param_5 < (int)param_2)) {
      local_54 = 0;
    }
    else {
      local_54 = 1;
    }
    local_c = local_54;
    break;
  case 6:
    if ((param_2 == 10) || (param_2 == 0xd)) {
      local_58 = 0;
    }
    else {
      local_58 = 1;
    }
    local_c = local_58;
    break;
  case 8:
    local_24 = (uint)(param_3 == 0);
  case 7:
    if (((param_2 == 10) || (param_2 == 0xd)) || ((param_2 == 9 || (param_2 == 0x20)))) {
      local_50 = 1;
    }
    else {
      local_50 = 0;
    }
    local_c = local_50;
    break;
  case 9:
    goto switchD_1001dbb9a_caseD_9;
  case 10:
    local_24 = (uint)(param_3 == 0);
switchD_1001dbb9a_caseD_9:
    if ((int)param_2 < 0x100) {
      if ((((((int)param_2 < 0x41) || (0x5a < (int)param_2)) &&
           (((int)param_2 < 0x61 || (0x7a < (int)param_2)))) &&
          ((((int)param_2 < 0xc0 || (0xd6 < (int)param_2)) &&
           (((int)param_2 < 0xd8 || (0xf6 < (int)param_2)))))) && ((int)param_2 < 0xf8)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_1001dbddc;
LAB_1001dbd9a:
      if (((0xff < (int)param_2) &&
          ((((0x4dff < (int)param_2 && ((int)param_2 < 0x9fa6)) || (param_2 == 0x3007)) ||
           ((0x3020 < (int)param_2 && ((int)param_2 < 0x302a)))))) ||
         ((param_2 == 0x5f || (param_2 == 0x3a)))) goto LAB_1001dbddc;
      local_4c = 0;
    }
    else {
      iVar2 = _xmlCharInRange(param_2,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
      if (iVar2 == 0) goto LAB_1001dbd9a;
LAB_1001dbddc:
      local_4c = 1;
    }
    local_c = local_4c;
    break;
  case 0xb:
    goto switchD_1001dbb9a_caseD_b;
  case 0xc:
    local_24 = (uint)(param_3 == 0);
switchD_1001dbb9a_caseD_b:
    if ((int)param_2 < 0x100) {
      if (((((((int)param_2 < 0x41) || (0x5a < (int)param_2)) &&
            (((int)param_2 < 0x61 || (0x7a < (int)param_2)))) &&
           (((int)param_2 < 0xc0 || (0xd6 < (int)param_2)))) &&
          (((int)param_2 < 0xd8 || (0xf6 < (int)param_2)))) && ((int)param_2 < 0xf8)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_1001dbf7a;
LAB_1001dbe87:
      if ((0xff < (int)param_2) &&
         ((((0x4dff < (int)param_2 && ((int)param_2 < 0x9fa6)) || (param_2 == 0x3007)) ||
          ((0x3020 < (int)param_2 && ((int)param_2 < 0x302a)))))) goto LAB_1001dbf7a;
      if (0xff < (int)param_2) {
        iVar2 = _xmlCharInRange(param_2,(xmlChRangeGroup *)&_xmlIsDigitGroup);
        if (iVar2 == 0) goto LAB_1001dbf0f;
        goto LAB_1001dbf7a;
      }
      if (((int)param_2 < 0x30) || (0x39 < (int)param_2)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_1001dbf7a;
LAB_1001dbf0f:
      if ((((param_2 == 0x2e) || (param_2 == 0x2d)) || (param_2 == 0x5f)) ||
         ((param_2 == 0x3a ||
          ((0xff < (int)param_2 &&
           (iVar2 = _xmlCharInRange(param_2,(xmlChRangeGroup *)&_xmlIsCombiningGroup), iVar2 != 0)))
          ))) goto LAB_1001dbf7a;
      if ((int)param_2 < 0x100) {
        if (param_2 == 0xb7) goto LAB_1001dbf7a;
      }
      else {
        iVar2 = _xmlCharInRange(param_2,(xmlChRangeGroup *)&_xmlIsExtenderGroup);
        if (iVar2 != 0) goto LAB_1001dbf7a;
      }
      local_44 = 0;
    }
    else {
      iVar2 = _xmlCharInRange(param_2,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
      if (iVar2 == 0) goto LAB_1001dbe87;
LAB_1001dbf7a:
      local_44 = 1;
    }
    local_c = local_44;
    break;
  case 0xd:
    goto switchD_1001dbb9a_caseD_d;
  case 0xe:
    local_24 = (uint)(param_3 == 0);
switchD_1001dbb9a_caseD_d:
    local_c = _xmlUCSIsCatNd(param_2);
    break;
  case 0xf:
    local_24 = (uint)(param_3 == 0);
  case 0x10:
    local_c = _xmlUCSIsCatP(param_2);
    if (local_c == 0) {
      local_c = _xmlUCSIsCatZ(param_2);
    }
    if (local_c == 0) {
      local_c = _xmlUCSIsCatC(param_2);
    }
    break;
  case 0x11:
    local_c = _xmlUCSIsCatL(param_2);
    break;
  case 0x12:
    local_c = _xmlUCSIsCatLu(param_2);
    break;
  case 0x13:
    local_c = _xmlUCSIsCatLl(param_2);
    break;
  case 0x14:
    local_c = _xmlUCSIsCatLt(param_2);
    break;
  case 0x15:
    local_c = _xmlUCSIsCatLm(param_2);
    break;
  case 0x16:
    local_c = _xmlUCSIsCatLo(param_2);
    break;
  case 0x17:
    local_c = _xmlUCSIsCatM(param_2);
    break;
  case 0x18:
    local_c = _xmlUCSIsCatMn(param_2);
    break;
  case 0x19:
    local_c = _xmlUCSIsCatMc(param_2);
    break;
  case 0x1a:
    local_c = _xmlUCSIsCatMe(param_2);
    break;
  case 0x1b:
    local_c = _xmlUCSIsCatN(param_2);
    break;
  case 0x1c:
    local_c = _xmlUCSIsCatNd(param_2);
    break;
  case 0x1d:
    local_c = _xmlUCSIsCatNl(param_2);
    break;
  case 0x1e:
    local_c = _xmlUCSIsCatNo(param_2);
    break;
  case 0x1f:
    local_c = _xmlUCSIsCatP(param_2);
    break;
  case 0x20:
    local_c = _xmlUCSIsCatPc(param_2);
    break;
  case 0x21:
    local_c = _xmlUCSIsCatPd(param_2);
    break;
  case 0x22:
    local_c = _xmlUCSIsCatPs(param_2);
    break;
  case 0x23:
    local_c = _xmlUCSIsCatPe(param_2);
    break;
  case 0x24:
    local_c = _xmlUCSIsCatPi(param_2);
    break;
  case 0x25:
    local_c = _xmlUCSIsCatPf(param_2);
    break;
  case 0x26:
    local_c = _xmlUCSIsCatPo(param_2);
    break;
  case 0x27:
    local_c = _xmlUCSIsCatZ(param_2);
    break;
  case 0x28:
    local_c = _xmlUCSIsCatZs(param_2);
    break;
  case 0x29:
    local_c = _xmlUCSIsCatZl(param_2);
    break;
  case 0x2a:
    local_c = _xmlUCSIsCatZp(param_2);
    break;
  case 0x2b:
    local_c = _xmlUCSIsCatS(param_2);
    break;
  case 0x2c:
    local_c = _xmlUCSIsCatSm(param_2);
    break;
  case 0x2d:
    local_c = _xmlUCSIsCatSc(param_2);
    break;
  case 0x2e:
    local_c = _xmlUCSIsCatSk(param_2);
    break;
  case 0x2f:
    local_c = _xmlUCSIsCatSo(param_2);
    break;
  case 0x30:
    local_c = _xmlUCSIsCatC(param_2);
    break;
  case 0x31:
    local_c = _xmlUCSIsCatCc(param_2);
    break;
  case 0x32:
    local_c = _xmlUCSIsCatCf(param_2);
    break;
  case 0x33:
    local_c = _xmlUCSIsCatCo(param_2);
    break;
  case 0x34:
    local_c = 0;
    break;
  case 0x35:
    local_c = _xmlUCSIsBlock(param_2,param_6);
  }
  if (local_24 == 0) {
    local_5c = local_c;
  }
  else {
    local_5c = (uint)(local_c == 0);
  }
  return local_5c;
}

