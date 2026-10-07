
void _xmlAttrSerializeTxtContent(xmlBufferPtr buf,xmlDocPtr doc,xmlAttrPtr attr,xmlChar *string)

{
  bool bVar1;
  int iVar2;
  xmlChar *pxVar3;
  int iVar4;
  xmlChar local_38 [24];
  byte *local_20;
  byte *local_18;
  uint local_10;
  int local_c;
  
  local_20 = string;
  local_18 = string;
  if (string != (xmlChar *)0x0) {
LAB_100251c77:
    iVar2 = (int)local_20;
    iVar4 = (int)local_18;
    if (*local_18 != 0) {
      if (*local_18 == 10) {
        if (local_20 != local_18) {
          _xmlBufferAdd(buf,local_20,iVar4 - iVar2);
        }
        _xmlBufferAdd(buf,(xmlChar *)"&#10;",5);
        local_20 = local_18 + 1;
        local_18 = local_20;
      }
      else if (*local_18 == 0xd) {
        if (local_20 != local_18) {
          _xmlBufferAdd(buf,local_20,iVar4 - iVar2);
        }
        _xmlBufferAdd(buf,(xmlChar *)"&#13;",5);
        local_20 = local_18 + 1;
        local_18 = local_20;
      }
      else if (*local_18 == 9) {
        if (local_20 != local_18) {
          _xmlBufferAdd(buf,local_20,iVar4 - iVar2);
        }
        _xmlBufferAdd(buf,(xmlChar *)"&#9;",4);
        local_20 = local_18 + 1;
        local_18 = local_20;
      }
      else if (*local_18 == 0x22) {
        if (local_20 != local_18) {
          _xmlBufferAdd(buf,local_20,iVar4 - iVar2);
        }
        _xmlBufferAdd(buf,(xmlChar *)"&quot;",6);
        local_20 = local_18 + 1;
        local_18 = local_20;
      }
      else if (*local_18 == 0x3c) {
        if (local_20 != local_18) {
          _xmlBufferAdd(buf,local_20,iVar4 - iVar2);
        }
        _xmlBufferAdd(buf,(xmlChar *)"&lt;",4);
        local_20 = local_18 + 1;
        local_18 = local_20;
      }
      else if (*local_18 == 0x3e) {
        if (local_20 != local_18) {
          _xmlBufferAdd(buf,local_20,iVar4 - iVar2);
        }
        _xmlBufferAdd(buf,(xmlChar *)"&gt;",4);
        local_20 = local_18 + 1;
        local_18 = local_20;
      }
      else if (*local_18 == 0x26) {
        if (local_20 != local_18) {
          _xmlBufferAdd(buf,local_20,iVar4 - iVar2);
        }
        _xmlBufferAdd(buf,(xmlChar *)"&amp;",5);
        local_20 = local_18 + 1;
        local_18 = local_20;
      }
      else if (((char)*local_18 < '\0') &&
              ((doc == (xmlDocPtr)0x0 || (doc->encoding == (xmlChar *)0x0)))) {
        local_10 = 0;
        local_c = 1;
        if (local_20 != local_18) {
          _xmlBufferAdd(buf,local_20,iVar4 - iVar2);
        }
        if (0xbf < *local_18) {
          if (*local_18 < 0xe0) {
            local_10 = (*local_18 & 0x1f) << 6 | local_18[1] & 0x3f;
            local_c = 2;
          }
          else if (*local_18 < 0xf0) {
            local_10 = ((*local_18 & 0xf) << 6 | local_18[1] & 0x3f) << 6 | local_18[2] & 0x3f;
            local_c = 3;
          }
          else if (*local_18 < 0xf8) {
            local_10 = (((*local_18 & 7) << 6 | local_18[1] & 0x3f) << 6 | local_18[2] & 0x3f) << 6
                       | local_18[3] & 0x3f;
            local_c = 4;
          }
          if (local_c != 1) {
            if ((int)local_10 < 0x100) {
              if (((((int)local_10 < 9) || (10 < (int)local_10)) && (local_10 != 0xd)) &&
                 ((int)local_10 < 0x20)) {
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
            }
            else if (((((int)local_10 < 0x100) || (0xd7ff < (int)local_10)) &&
                     (((int)local_10 < 0xe000 || (0xfffd < (int)local_10)))) &&
                    (((int)local_10 < 0x10000 || (0x10ffff < (int)local_10)))) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (!bVar1) {
              FUN_10024e23d(local_38,local_10);
              _xmlBufferAdd(buf,local_38,-1);
              local_20 = local_18 + local_c;
              local_18 = local_20;
              goto LAB_100251c77;
            }
          }
          FUN_10024e18e(0x579,attr,0);
          if (doc != (xmlDocPtr)0x0) {
            pxVar3 = _xmlStrdup((xmlChar *)"ISO-8859-1");
            doc->encoding = pxVar3;
          }
          FUN_10024e23d(local_38,*local_18);
          _xmlBufferAdd(buf,local_38,-1);
          local_20 = local_18 + 1;
          local_18 = local_20;
          goto LAB_100251c77;
        }
        FUN_10024e18e(0x578,attr,0);
        if (doc != (xmlDocPtr)0x0) {
          pxVar3 = _xmlStrdup((xmlChar *)"ISO-8859-1");
          doc->encoding = pxVar3;
        }
        FUN_10024e23d(local_38,*local_18);
        _xmlBufferAdd(buf,local_38,-1);
        local_20 = local_18 + 1;
        local_18 = local_20;
      }
      else {
        local_18 = local_18 + 1;
      }
      goto LAB_100251c77;
    }
    if (local_20 != local_18) {
      _xmlBufferAdd(buf,local_20,iVar4 - iVar2);
    }
  }
  return;
}

