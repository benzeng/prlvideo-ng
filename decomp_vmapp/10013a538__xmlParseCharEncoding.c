
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlCharEncoding _xmlParseCharEncoding(char *name)

{
  char cVar1;
  int iVar2;
  xmlCharEncoding local_234;
  char *local_230;
  char local_228 [512];
  char *local_28;
  int local_1c;
  
  if (name == (char *)0x0) {
    local_234 = XML_CHAR_ENCODING_ERROR;
  }
  else {
    local_28 = _xmlGetEncodingAlias(name);
    local_230 = name;
    if (local_28 != (char *)0x0) {
      local_230 = local_28;
    }
    for (local_1c = 0; iVar2 = local_1c, local_1c < 499; local_1c = local_1c + 1) {
      cVar1 = FUN_10013a181((int)local_230[local_1c]);
      local_228[iVar2] = cVar1;
      if (local_228[local_1c] == '\0') break;
    }
    local_228[local_1c] = '\0';
    if (local_228[0] == '\0') {
      local_234 = XML_CHAR_ENCODING_ERROR;
    }
    else {
      iVar2 = _strcmp(local_228,"UTF-8");
      if (iVar2 == 0) {
        local_234 = XML_CHAR_ENCODING_UTF8;
      }
      else {
        iVar2 = _strcmp(local_228,"UTF8");
        if (iVar2 == 0) {
          local_234 = XML_CHAR_ENCODING_UTF8;
        }
        else {
          iVar2 = _strcmp(local_228,"UTF-16");
          if (iVar2 == 0) {
            local_234 = XML_CHAR_ENCODING_UTF16LE;
          }
          else {
            iVar2 = _strcmp(local_228,"UTF16");
            if (iVar2 == 0) {
              local_234 = XML_CHAR_ENCODING_UTF16LE;
            }
            else {
              iVar2 = _strcmp(local_228,"ISO-10646-UCS-2");
              if (iVar2 == 0) {
                local_234 = XML_CHAR_ENCODING_UCS2;
              }
              else {
                iVar2 = _strcmp(local_228,"UCS-2");
                if (iVar2 == 0) {
                  local_234 = XML_CHAR_ENCODING_UCS2;
                }
                else {
                  iVar2 = _strcmp(local_228,"UCS2");
                  if (iVar2 == 0) {
                    local_234 = XML_CHAR_ENCODING_UCS2;
                  }
                  else {
                    iVar2 = _strcmp(local_228,"ISO-10646-UCS-4");
                    if (iVar2 == 0) {
                      local_234 = XML_CHAR_ENCODING_UCS4LE;
                    }
                    else {
                      iVar2 = _strcmp(local_228,"UCS-4");
                      if (iVar2 == 0) {
                        local_234 = XML_CHAR_ENCODING_UCS4LE;
                      }
                      else {
                        iVar2 = _strcmp(local_228,"UCS4");
                        if (iVar2 == 0) {
                          local_234 = XML_CHAR_ENCODING_UCS4LE;
                        }
                        else {
                          iVar2 = _strcmp(local_228,"ISO-8859-1");
                          if (iVar2 == 0) {
                            local_234 = XML_CHAR_ENCODING_8859_1;
                          }
                          else {
                            iVar2 = _strcmp(local_228,"ISO-LATIN-1");
                            if (iVar2 == 0) {
                              local_234 = XML_CHAR_ENCODING_8859_1;
                            }
                            else {
                              iVar2 = _strcmp(local_228,"ISO LATIN 1");
                              if (iVar2 == 0) {
                                local_234 = XML_CHAR_ENCODING_8859_1;
                              }
                              else {
                                iVar2 = _strcmp(local_228,"ISO-8859-2");
                                if (iVar2 == 0) {
                                  local_234 = XML_CHAR_ENCODING_8859_2;
                                }
                                else {
                                  iVar2 = _strcmp(local_228,"ISO-LATIN-2");
                                  if (iVar2 == 0) {
                                    local_234 = XML_CHAR_ENCODING_8859_2;
                                  }
                                  else {
                                    iVar2 = _strcmp(local_228,"ISO LATIN 2");
                                    if (iVar2 == 0) {
                                      local_234 = XML_CHAR_ENCODING_8859_2;
                                    }
                                    else {
                                      iVar2 = _strcmp(local_228,"ISO-8859-3");
                                      if (iVar2 == 0) {
                                        local_234 = XML_CHAR_ENCODING_8859_3;
                                      }
                                      else {
                                        iVar2 = _strcmp(local_228,"ISO-8859-4");
                                        if (iVar2 == 0) {
                                          local_234 = XML_CHAR_ENCODING_8859_4;
                                        }
                                        else {
                                          iVar2 = _strcmp(local_228,"ISO-8859-5");
                                          if (iVar2 == 0) {
                                            local_234 = XML_CHAR_ENCODING_8859_5;
                                          }
                                          else {
                                            iVar2 = _strcmp(local_228,"ISO-8859-6");
                                            if (iVar2 == 0) {
                                              local_234 = XML_CHAR_ENCODING_8859_6;
                                            }
                                            else {
                                              iVar2 = _strcmp(local_228,"ISO-8859-7");
                                              if (iVar2 == 0) {
                                                local_234 = XML_CHAR_ENCODING_8859_7;
                                              }
                                              else {
                                                iVar2 = _strcmp(local_228,"ISO-8859-8");
                                                if (iVar2 == 0) {
                                                  local_234 = XML_CHAR_ENCODING_8859_8;
                                                }
                                                else {
                                                  iVar2 = _strcmp(local_228,"ISO-8859-9");
                                                  if (iVar2 == 0) {
                                                    local_234 = XML_CHAR_ENCODING_8859_9;
                                                  }
                                                  else {
                                                    iVar2 = _strcmp(local_228,"ISO-2022-JP");
                                                    if (iVar2 == 0) {
                                                      local_234 = XML_CHAR_ENCODING_2022_JP;
                                                    }
                                                    else {
                                                      iVar2 = _strcmp(local_228,"SHIFT_JIS");
                                                      if (iVar2 == 0) {
                                                        local_234 = XML_CHAR_ENCODING_SHIFT_JIS;
                                                      }
                                                      else {
                                                        iVar2 = _strcmp(local_228,"EUC-JP");
                                                        if (iVar2 == 0) {
                                                          local_234 = XML_CHAR_ENCODING_EUC_JP;
                                                        }
                                                        else {
                                                          local_234 = ~XML_CHAR_ENCODING_ERROR;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return local_234;
}

