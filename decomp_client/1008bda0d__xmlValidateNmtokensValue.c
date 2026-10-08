
int _xmlValidateNmtokensValue(xmlChar *value)

{
  int iVar1;
  bool bVar2;
  int local_6c;
  int local_1c;
  xmlChar *local_18;
  uint local_c;
  
  if (value == (xmlChar *)0x0) {
    return 0;
  }
  local_18 = value;
  local_c = _xmlStringCurrentChar(0,value,&local_1c);
  local_18 = local_18 + local_1c;
  while (((int)local_c < 0x100 &&
         ((local_c == 0x20 || (((8 < (int)local_c && ((int)local_c < 0xb)) || (local_c == 0xd)))))))
  {
    local_c = _xmlStringCurrentChar(0,local_18,&local_1c);
    local_18 = local_18 + local_1c;
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
    if ((((bVar2) && (local_c != 0x2e)) && (local_c != 0x2d)) &&
       (((local_c != 0x5f && (local_c != 0x3a)) &&
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
        return 0;
      }
    }
  }
  do {
    if ((int)local_c < 0x100) {
      if (((((int)local_c < 0x41) || (0x5a < (int)local_c)) &&
          ((((int)local_c < 0x61 || (0x7a < (int)local_c)) &&
           (((int)local_c < 0xc0 || (0xd6 < (int)local_c)))))) &&
         ((((int)local_c < 0xd8 || (0xf6 < (int)local_c)) && ((int)local_c < 0xf8)))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
LAB_1008bdcda:
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
LAB_1008bdd66:
              if (((((local_c != 0x2e) && (local_c != 0x2d)) && (local_c != 0x5f)) &&
                  (local_c != 0x3a)) &&
                 (((int)local_c < 0x100 ||
                  (iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsCombiningGroup),
                  iVar1 == 0)))) {
                if ((int)local_c < 0x100) {
                  if (local_c != 0xb7) goto LAB_1008be161;
                }
                else {
                  iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsExtenderGroup);
                  if (iVar1 == 0) {
LAB_1008be161:
                    if (local_c == 0x20) {
                      while (local_c == 0x20) {
                        local_c = _xmlStringCurrentChar(0,local_18,&local_1c);
                        local_18 = local_18 + local_1c;
                      }
                      if (local_c != 0) {
                        if ((int)local_c < 0x100) {
                          if ((((((int)local_c < 0x41) || (0x5a < (int)local_c)) &&
                               (((int)local_c < 0x61 || (0x7a < (int)local_c)))) &&
                              ((((int)local_c < 0xc0 || (0xd6 < (int)local_c)) &&
                               (((int)local_c < 0xd8 || (0xf6 < (int)local_c)))))) &&
                             ((int)local_c < 0xf8)) {
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
                            (((((int)local_c < 0x4e00 || (0x9fa5 < (int)local_c)) &&
                              (local_c != 0x3007)) &&
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
                          if ((((bVar2) && (local_c != 0x2e)) && (local_c != 0x2d)) &&
                             (((local_c != 0x5f && (local_c != 0x3a)) &&
                              (((int)local_c < 0x100 ||
                               (iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)
                                                                &_xmlIsCombiningGroup), iVar1 == 0))
                              )))) {
                            if ((int)local_c < 0x100) {
                              bVar2 = local_c != 0xb7;
                            }
                            else {
                              iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)
                                                              &_xmlIsExtenderGroup);
                              bVar2 = iVar1 == 0;
                            }
                            if (bVar2) {
                              return 0;
                            }
                          }
                        }
                        do {
                          if ((int)local_c < 0x100) {
                            if ((((((int)local_c < 0x41) || (0x5a < (int)local_c)) &&
                                 (((int)local_c < 0x61 || (0x7a < (int)local_c)))) &&
                                ((((int)local_c < 0xc0 || (0xd6 < (int)local_c)) &&
                                 (((int)local_c < 0xd8 || (0xf6 < (int)local_c)))))) &&
                               ((int)local_c < 0xf8)) {
                              bVar2 = false;
                            }
                            else {
                              bVar2 = true;
                            }
                            if (!bVar2) {
LAB_1008be05c:
                              if (((int)local_c < 0x100) ||
                                 (((((int)local_c < 0x4e00 || (0x9fa5 < (int)local_c)) &&
                                   (local_c != 0x3007)) &&
                                  (((int)local_c < 0x3021 || (0x3029 < (int)local_c)))))) {
                                if ((int)local_c < 0x100) {
                                  if (((int)local_c < 0x30) || (0x39 < (int)local_c)) {
                                    bVar2 = false;
                                  }
                                  else {
                                    bVar2 = true;
                                  }
                                  if (!bVar2) {
LAB_1008be0e8:
                                    if ((((local_c != 0x2e) && (local_c != 0x2d)) &&
                                        (local_c != 0x5f)) &&
                                       ((local_c != 0x3a &&
                                        (((int)local_c < 0x100 ||
                                         (iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)
                                                                          &_xmlIsCombiningGroup),
                                         iVar1 == 0)))))) {
                                      if ((int)local_c < 0x100) {
                                        if (local_c != 0xb7) goto LAB_1008be161;
                                      }
                                      else {
                                        iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)
                                                                        &_xmlIsExtenderGroup);
                                        if (iVar1 == 0) goto LAB_1008be161;
                                      }
                                    }
                                  }
                                }
                                else {
                                  iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)
                                                                  &_xmlIsDigitGroup);
                                  if (iVar1 == 0) goto LAB_1008be0e8;
                                }
                              }
                            }
                          }
                          else {
                            iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsBaseCharGroup)
                            ;
                            if (iVar1 == 0) goto LAB_1008be05c;
                          }
                          local_c = _xmlStringCurrentChar(0,local_18,&local_1c);
                          local_18 = local_18 + local_1c;
                        } while( true );
                      }
                      local_6c = 1;
                    }
                    else if (local_c == 0) {
                      local_6c = 1;
                    }
                    else {
                      local_6c = 0;
                    }
                    return local_6c;
                  }
                }
              }
            }
          }
          else {
            iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsDigitGroup);
            if (iVar1 == 0) goto LAB_1008bdd66;
          }
        }
      }
    }
    else {
      iVar1 = _xmlCharInRange(local_c,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
      if (iVar1 == 0) goto LAB_1008bdcda;
    }
    local_c = _xmlStringCurrentChar(0,local_18,&local_1c);
    local_18 = local_18 + local_1c;
  } while( true );
}

