
int _xmlValidateNameValue(xmlChar *value)

{
  int iVar1;
  bool bVar2;
  int local_1c;
  xmlChar *local_18;
  uint local_c;
  
  if (value != (xmlChar *)0x0) {
    local_18 = value;
    local_c = _xmlStringCurrentChar(0,value,&local_1c);
    local_18 = local_18 + local_1c;
    if ((int)local_c < 0x100) {
      if ((((((int)local_c < 0x41) || (0x5a < (int)local_c)) &&
           (((int)local_c < 0x61 || (0x7a < (int)local_c)))) &&
          (((int)local_c < 0xc0 || (0xd6 < (int)local_c)))) &&
         ((((int)local_c < 0xd8 || (0xf6 < (int)local_c)) && ((int)local_c < 0xf8)))) {
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
    if (((!bVar2) ||
        ((0xff < (int)local_c &&
         ((((0x4dff < (int)local_c && ((int)local_c < 0x9fa6)) || (local_c == 0x3007)) ||
          ((0x3020 < (int)local_c && ((int)local_c < 0x302a)))))))) ||
       ((local_c == 0x5f || (local_c == 0x3a)))) {
      local_c = _xmlStringCurrentChar(0,local_18,&local_1c);
      local_18 = local_18 + local_1c;
      do {
        if ((int)local_c < 0x100) {
          if ((((((int)local_c < 0x41) || (0x5a < (int)local_c)) &&
               (((int)local_c < 0x61 || (0x7a < (int)local_c)))) &&
              ((((int)local_c < 0xc0 || (0xd6 < (int)local_c)) &&
               (((int)local_c < 0xd8 || (0xf6 < (int)local_c)))))) && ((int)local_c < 0xf8)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) {
LAB_10018963f:
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
LAB_1001896cb:
                  if ((((local_c != 0x2e) && (local_c != 0x2d)) && (local_c != 0x5f)) &&
                     ((local_c != 0x3a &&
                      (((int)local_c < 0x100 ||
                       (iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsCombiningGroup),
                       iVar1 == 0)))))) {
                    if ((int)local_c < 0x100) {
                      if (local_c != 0xb7) goto LAB_100189742;
                    }
                    else {
                      iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsExtenderGroup);
                      if (iVar1 == 0) {
LAB_100189742:
                        if (local_c == 0) {
                          return 1;
                        }
                        return 0;
                      }
                    }
                  }
                }
              }
              else {
                iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsDigitGroup);
                if (iVar1 == 0) goto LAB_1001896cb;
              }
            }
          }
        }
        else {
          iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
          if (iVar1 == 0) goto LAB_10018963f;
        }
        local_c = _xmlStringCurrentChar(0,local_18,&local_1c);
        local_18 = local_18 + local_1c;
      } while( true );
    }
  }
  return 0;
}

