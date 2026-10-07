
int _xmlValidateQName(xmlChar *value,int space)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  int local_1c;
  byte *local_18;
  uint local_c;
  
  if (value == (xmlChar *)0x0) {
    return -1;
  }
  local_18 = value;
  if (space != 0) {
    for (; (*local_18 == 0x20 || (((8 < *local_18 && (*local_18 < 0xb)) || (*local_18 == 0xd))));
        local_18 = local_18 + 1) {
    }
  }
  if ((((0x60 < *local_18) && (*local_18 < 0x7b)) || ((0x40 < *local_18 && (*local_18 < 0x5b)))) ||
     (*local_18 == 0x5f)) {
LAB_1001662cb:
    do {
      pbVar2 = local_18;
      local_18 = pbVar2 + 1;
      if (0x60 < *local_18) {
        if (*local_18 < 0x7b) goto LAB_1001662cb;
      }
    } while (((0x40 < *local_18) && (*local_18 < 0x5b)) ||
            (((0x2f < *local_18 && (*local_18 < 0x3a)) ||
             (((*local_18 == 0x5f || (*local_18 == 0x2d)) || (*local_18 == 0x2e))))));
    if (*local_18 == 0x3a) {
      pbVar1 = pbVar2 + 2;
      if ((((*pbVar1 < 0x61) || (0x7a < *pbVar1)) && ((*pbVar1 < 0x41 || (0x5a < *pbVar1)))) &&
         (*pbVar1 != 0x5f)) goto LAB_100166444;
      for (local_18 = pbVar2 + 3;
          ((0x60 < *local_18 && (*local_18 < 0x7b)) ||
          (((0x40 < *local_18 && (*local_18 < 0x5b)) ||
           ((((0x2f < *local_18 && (*local_18 < 0x3a)) || (*local_18 == 0x5f)) ||
            ((*local_18 == 0x2d || (*local_18 == 0x2e)))))))); local_18 = local_18 + 1) {
      }
    }
    if (space != 0) {
      for (; ((*local_18 == 0x20 || ((8 < *local_18 && (*local_18 < 0xb)))) || (*local_18 == 0xd));
          local_18 = local_18 + 1) {
      }
    }
    if (*local_18 == 0) {
      return 0;
    }
  }
LAB_100166444:
  local_18 = value;
  local_c = _xmlStringCurrentChar(0,value,&local_1c);
  if (space != 0) {
    while (((int)local_c < 0x100 &&
           ((local_c == 0x20 || (((8 < (int)local_c && ((int)local_c < 0xb)) || (local_c == 0xd)))))
           )) {
      local_18 = local_18 + local_1c;
      local_c = _xmlStringCurrentChar(0,local_18,&local_1c);
    }
  }
  if ((int)local_c < 0x100) {
    if (((((((int)local_c < 0x41) || (0x5a < (int)local_c)) &&
          (((int)local_c < 0x61 || (0x7a < (int)local_c)))) &&
         (((int)local_c < 0xc0 || (0xd6 < (int)local_c)))) &&
        (((int)local_c < 0xd8 || (0xf6 < (int)local_c)))) && ((int)local_c < 0xf8)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
  }
  else {
    iVar3 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
    bVar4 = iVar3 == 0;
  }
  if ((bVar4) &&
     ((((int)local_c < 0x100 ||
       (((((int)local_c < 0x4e00 || (0x9fa5 < (int)local_c)) && (local_c != 0x3007)) &&
        (((int)local_c < 0x3021 || (0x3029 < (int)local_c)))))) && (local_c != 0x5f)))) {
    return 1;
  }
  local_18 = local_18 + local_1c;
  local_c = _xmlStringCurrentChar(0,local_18,&local_1c);
  do {
    if ((int)local_c < 0x100) {
      if (((((int)local_c < 0x41) || (0x5a < (int)local_c)) &&
          (((int)local_c < 0x61 || (0x7a < (int)local_c)))) &&
         (((((int)local_c < 0xc0 || (0xd6 < (int)local_c)) &&
           (((int)local_c < 0xd8 || (0xf6 < (int)local_c)))) && ((int)local_c < 0xf8)))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
LAB_100166645:
        if (((int)local_c < 0x100) ||
           (((((int)local_c < 0x4e00 || (0x9fa5 < (int)local_c)) && (local_c != 0x3007)) &&
            (((int)local_c < 0x3021 || (0x3029 < (int)local_c)))))) {
          if ((int)local_c < 0x100) {
            if (((int)local_c < 0x30) || (0x39 < (int)local_c)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) {
LAB_1001666d1:
              if ((((local_c != 0x2e) && (local_c != 0x2d)) && (local_c != 0x5f)) &&
                 (((int)local_c < 0x100 ||
                  (iVar3 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsCombiningGroup),
                  iVar3 == 0)))) {
                if ((int)local_c < 0x100) {
                  if (local_c != 0xb7) break;
                }
                else {
                  iVar3 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsExtenderGroup);
                  if (iVar3 == 0) break;
                }
              }
            }
          }
          else {
            iVar3 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsDigitGroup);
            if (iVar3 == 0) goto LAB_1001666d1;
          }
        }
      }
    }
    else {
      iVar3 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
      if (iVar3 == 0) goto LAB_100166645;
    }
    local_18 = local_18 + local_1c;
    local_c = _xmlStringCurrentChar(0,local_18,&local_1c);
  } while( true );
  if (local_c != 0x3a) {
LAB_1001669fc:
    if (space != 0) {
      while (((int)local_c < 0x100 &&
             (((local_c == 0x20 || ((8 < (int)local_c && ((int)local_c < 0xb)))) || (local_c == 0xd)
              )))) {
        local_18 = local_18 + local_1c;
        local_c = _xmlStringCurrentChar(0,local_18,&local_1c);
      }
    }
    if (local_c != 0) {
      return 1;
    }
    return 0;
  }
  local_18 = local_18 + local_1c;
  local_c = _xmlStringCurrentChar(0,local_18,&local_1c);
  if ((int)local_c < 0x100) {
    if ((((((int)local_c < 0x41) || (0x5a < (int)local_c)) &&
         (((int)local_c < 0x61 || (0x7a < (int)local_c)))) &&
        ((((int)local_c < 0xc0 || (0xd6 < (int)local_c)) &&
         (((int)local_c < 0xd8 || (0xf6 < (int)local_c)))))) && ((int)local_c < 0xf8)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
  }
  else {
    iVar3 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
    bVar4 = iVar3 == 0;
  }
  if ((bVar4) &&
     ((((int)local_c < 0x100 ||
       (((((int)local_c < 0x4e00 || (0x9fa5 < (int)local_c)) && (local_c != 0x3007)) &&
        (((int)local_c < 0x3021 || (0x3029 < (int)local_c)))))) && (local_c != 0x5f)))) {
    return 1;
  }
  local_18 = local_18 + local_1c;
  local_c = _xmlStringCurrentChar(0,local_18,&local_1c);
  do {
    if ((int)local_c < 0x100) {
      if (((((((int)local_c < 0x41) || (0x5a < (int)local_c)) &&
            (((int)local_c < 0x61 || (0x7a < (int)local_c)))) &&
           (((int)local_c < 0xc0 || (0xd6 < (int)local_c)))) &&
          (((int)local_c < 0xd8 || (0xf6 < (int)local_c)))) && ((int)local_c < 0xf8)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
LAB_100166903:
        if (((int)local_c < 0x100) ||
           (((((int)local_c < 0x4e00 || (0x9fa5 < (int)local_c)) && (local_c != 0x3007)) &&
            (((int)local_c < 0x3021 || (0x3029 < (int)local_c)))))) {
          if ((int)local_c < 0x100) {
            if (((int)local_c < 0x30) || (0x39 < (int)local_c)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) {
LAB_10016698f:
              if ((((local_c != 0x2e) && (local_c != 0x2d)) && (local_c != 0x5f)) &&
                 (((int)local_c < 0x100 ||
                  (iVar3 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsCombiningGroup),
                  iVar3 == 0)))) {
                if ((int)local_c < 0x100) {
                  if (local_c != 0xb7) goto LAB_1001669fc;
                }
                else {
                  iVar3 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsExtenderGroup);
                  if (iVar3 == 0) goto LAB_1001669fc;
                }
              }
            }
          }
          else {
            iVar3 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsDigitGroup);
            if (iVar3 == 0) goto LAB_10016698f;
          }
        }
      }
    }
    else {
      iVar3 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
      if (iVar3 == 0) goto LAB_100166903;
    }
    local_18 = local_18 + local_1c;
    local_c = _xmlStringCurrentChar(0,local_18,&local_1c);
  } while( true );
}

