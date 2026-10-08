
int _xmlValidateNMToken(xmlChar *value,int space)

{
  int iVar1;
  bool bVar2;
  uint local_54;
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
     (((0x2f < *local_18 && (*local_18 < 0x3a)) ||
      ((*local_18 == 0x5f || (((*local_18 == 0x2d || (*local_18 == 0x2e)) || (*local_18 == 0x3a)))))
      ))) {
LAB_10089a960:
    do {
      local_18 = local_18 + 1;
      if (0x60 < *local_18) {
        if (*local_18 < 0x7b) goto LAB_10089a960;
      }
    } while ((((0x40 < *local_18) && (*local_18 < 0x5b)) ||
             ((0x2f < *local_18 && (*local_18 < 0x3a)))) ||
            (((*local_18 == 0x5f || (*local_18 == 0x2d)) ||
             ((*local_18 == 0x2e || (*local_18 == 0x3a))))));
    if (space != 0) {
      for (; (*local_18 == 0x20 || (((8 < *local_18 && (*local_18 < 0xb)) || (*local_18 == 0xd))));
          local_18 = local_18 + 1) {
      }
    }
    if (*local_18 == 0) {
      return 0;
    }
  }
  local_18 = value;
  local_c = _xmlStringCurrentChar(0,value,&local_1c);
  if (space != 0) {
    while (((int)local_c < 0x100 &&
           (((local_c == 0x20 || ((8 < (int)local_c && ((int)local_c < 0xb)))) || (local_c == 0xd)))
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
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  else {
    iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
    bVar2 = iVar1 == 0;
  }
  if ((bVar2) &&
     (((int)local_c < 0x100 ||
      (((((int)local_c < 0x4e00 || (0x9fa5 < (int)local_c)) && (local_c != 0x3007)) &&
       (((int)local_c < 0x3021 || (0x3029 < (int)local_c)))))))) {
    if ((int)local_c < 0x100) {
      if (((int)local_c < 0x30) || (0x39 < (int)local_c)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
    }
    else {
      iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsDigitGroup);
      bVar2 = iVar1 == 0;
    }
    if ((((bVar2) && (local_c != 0x2e)) && (local_c != 0x3a)) &&
       (((local_c != 0x2d && (local_c != 0x5f)) &&
        (((int)local_c < 0x100 ||
         (iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsCombiningGroup), iVar1 == 0)))))
       ) {
      if ((int)local_c < 0x100) {
        bVar2 = local_c != 0xb7;
      }
      else {
        iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsExtenderGroup);
        bVar2 = iVar1 == 0;
      }
      if (bVar2) {
        return 1;
      }
    }
  }
  local_18 = local_18 + local_1c;
  local_c = _xmlStringCurrentChar(0,local_18,&local_1c);
  do {
    if ((int)local_c < 0x100) {
      if (((((int)local_c < 0x41) || (0x5a < (int)local_c)) &&
          (((int)local_c < 0x61 || (0x7a < (int)local_c)))) &&
         ((((int)local_c < 0xc0 || (0xd6 < (int)local_c)) &&
          ((((int)local_c < 0xd8 || (0xf6 < (int)local_c)) && ((int)local_c < 0xf8)))))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
LAB_10089acd9:
        if (((int)local_c < 0x100) ||
           (((((int)local_c < 0x4e00 || (0x9fa5 < (int)local_c)) && (local_c != 0x3007)) &&
            (((int)local_c < 0x3021 || (0x3029 < (int)local_c)))))) {
          if ((int)local_c < 0x100) {
            if (((int)local_c < 0x30) || (0x39 < (int)local_c)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) {
LAB_10089ad65:
              if (((((local_c != 0x2e) && (local_c != 0x3a)) && (local_c != 0x2d)) &&
                  (local_c != 0x5f)) &&
                 (((int)local_c < 0x100 ||
                  (iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsCombiningGroup),
                  iVar1 == 0)))) {
                if ((int)local_c < 0x100) {
                  if (local_c != 0xb7) goto LAB_10089addc;
                }
                else {
                  iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsExtenderGroup);
                  if (iVar1 == 0) {
LAB_10089addc:
                    if (space != 0) {
                      while (((int)local_c < 0x100 &&
                             (((local_c == 0x20 || ((8 < (int)local_c && ((int)local_c < 0xb)))) ||
                              (local_c == 0xd))))) {
                        local_18 = local_18 + local_1c;
                        local_c = _xmlStringCurrentChar(0,local_18,&local_1c);
                      }
                    }
                    local_54 = (uint)(local_c != 0);
                    return local_54;
                  }
                }
              }
            }
          }
          else {
            iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsDigitGroup);
            if (iVar1 == 0) goto LAB_10089ad65;
          }
        }
      }
    }
    else {
      iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
      if (iVar1 == 0) goto LAB_10089acd9;
    }
    local_18 = local_18 + local_1c;
    local_c = _xmlStringCurrentChar(0,local_18,&local_1c);
  } while( true );
}

