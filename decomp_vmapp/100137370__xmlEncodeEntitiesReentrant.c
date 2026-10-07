
/* WARNING: Removing unreachable block (ram,0x000100137840) */

xmlChar * _xmlEncodeEntitiesReentrant(xmlDocPtr doc,xmlChar *input)

{
  bool bVar1;
  byte *pbVar2;
  xmlChar *pxVar3;
  byte local_68 [10];
  undefined1 local_5e;
  byte local_58 [10];
  undefined1 local_4e;
  byte *local_48;
  byte *local_40;
  byte *local_38;
  int local_2c;
  uint local_28;
  int local_24;
  byte *local_20;
  uint local_18;
  int local_14;
  byte *local_10;
  
  local_40 = (byte *)0x0;
  local_38 = (byte *)0x0;
  local_28 = 0;
  if (input != (xmlChar *)0x0) {
    if (doc != (xmlDocPtr)0x0) {
      local_28 = (uint)(doc->type == XML_HTML_DOCUMENT_NODE);
    }
    local_2c = 1000;
    local_48 = input;
    local_40 = (byte *)(*(code *)_xmlMalloc)(1000);
    pbVar2 = local_40;
    if (local_40 != (byte *)0x0) {
      do {
        while( true ) {
          local_38 = pbVar2;
          if (*local_48 == 0) {
            *local_38 = 0;
            return local_40;
          }
          if ((long)(local_2c + -100) < (long)local_38 - (long)local_40) {
            local_24 = (int)local_38 - (int)local_40;
            local_2c = local_2c << 1;
            local_40 = (byte *)(*(code *)_xmlRealloc)(local_40,(long)local_2c);
            if (local_40 == (byte *)0x0) {
              FUN_100136740("xmlEncodeEntitiesReentrant: realloc failed");
              return (xmlChar *)0x0;
            }
            local_38 = local_40 + local_24;
          }
          if (*local_48 != 0x3c) break;
          *local_38 = 0x26;
          local_38[1] = 0x6c;
          local_38[2] = 0x74;
          local_38[3] = 0x3b;
          local_38 = local_38 + 4;
LAB_100137a34:
          local_48 = local_48 + 1;
          pbVar2 = local_38;
        }
        if (*local_48 == 0x3e) {
          *local_38 = 0x26;
          local_38[1] = 0x67;
          local_38[2] = 0x74;
          local_38[3] = 0x3b;
          local_38 = local_38 + 4;
          goto LAB_100137a34;
        }
        if (*local_48 == 0x26) {
          *local_38 = 0x26;
          local_38[1] = 0x61;
          local_38[2] = 0x6d;
          local_38[3] = 0x70;
          local_38[4] = 0x3b;
          local_38 = local_38 + 5;
          goto LAB_100137a34;
        }
        if ((((0x1f < *local_48) && (-1 < (char)*local_48)) || (*local_48 == 10)) ||
           ((*local_48 == 9 || ((local_28 != 0 && (*local_48 == 0xd)))))) {
          *local_38 = *local_48;
          local_38 = local_38 + 1;
          goto LAB_100137a34;
        }
        if (-1 < (char)*local_48) {
          if (((8 < *local_48) && (*local_48 < 0xb)) || ((*local_48 == 0xd || (0x1f < *local_48))))
          {
            _snprintf((char *)local_68,0xb,"&#%d;",(ulong)*local_48);
            local_5e = 0;
            for (local_10 = local_68; *local_10 != 0; local_10 = local_10 + 1) {
              *local_38 = *local_10;
              local_38 = local_38 + 1;
            }
          }
          goto LAB_100137a34;
        }
        if (((doc != (xmlDocPtr)0x0) && (doc->encoding != (xmlChar *)0x0)) || (local_28 != 0)) {
          *local_38 = *local_48;
          local_38 = local_38 + 1;
          goto LAB_100137a34;
        }
        local_18 = 0;
        local_14 = 1;
        if (*local_48 < 0xc0) {
          FUN_10013676e(0x13a8,"xmlEncodeEntitiesReentrant : input not UTF-8");
          if (doc != (xmlDocPtr)0x0) {
            pxVar3 = _xmlStrdup((xmlChar *)"ISO-8859-1");
            doc->encoding = pxVar3;
          }
          _snprintf((char *)local_58,0xb,"&#%d;",(ulong)*local_48);
          local_4e = 0;
          for (local_20 = local_58; *local_20 != 0; local_20 = local_20 + 1) {
            *local_38 = *local_20;
            local_38 = local_38 + 1;
          }
          local_48 = local_48 + 1;
          pbVar2 = local_38;
        }
        else {
          if (*local_48 < 0xe0) {
            local_18 = (*local_48 & 0x1f) << 6 | local_48[1] & 0x3f;
            local_14 = 2;
          }
          else if (*local_48 < 0xf0) {
            local_18 = ((*local_48 & 0xf) << 6 | local_48[1] & 0x3f) << 6 | local_48[2] & 0x3f;
            local_14 = 3;
          }
          else if (*local_48 < 0xf8) {
            local_18 = (((*local_48 & 7) << 6 | local_48[1] & 0x3f) << 6 | local_48[2] & 0x3f) << 6
                       | local_48[3] & 0x3f;
            local_14 = 4;
          }
          if (local_14 == 1) {
LAB_100137893:
            FUN_10013676e(9,"xmlEncodeEntitiesReentrant : char out of range\n");
            if (doc != (xmlDocPtr)0x0) {
              pxVar3 = _xmlStrdup((xmlChar *)"ISO-8859-1");
              doc->encoding = pxVar3;
            }
            _snprintf((char *)local_58,0xb,"&#%d;",(ulong)*local_48);
            local_4e = 0;
            for (local_20 = local_58; *local_20 != 0; local_20 = local_20 + 1) {
              *local_38 = *local_20;
              local_38 = local_38 + 1;
            }
            local_48 = local_48 + 1;
            pbVar2 = local_38;
          }
          else {
            if (local_18 < 0x100) {
              if ((((local_18 < 9) || (10 < local_18)) && (local_18 != 0xd)) && (local_18 < 0x20)) {
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
            }
            else if (((local_18 < 0x100) || (0xd7ff < local_18)) &&
                    (((local_18 < 0xe000 || (0xfffd < local_18)) &&
                     ((local_18 < 0x10000 || (0x10ffff < local_18)))))) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) goto LAB_100137893;
            _snprintf((char *)local_58,0xb,"&#x%X;",(ulong)local_18);
            local_4e = 0;
            for (local_20 = local_58; *local_20 != 0; local_20 = local_20 + 1) {
              *local_38 = *local_20;
              local_38 = local_38 + 1;
            }
            local_48 = local_48 + local_14;
            pbVar2 = local_38;
          }
        }
      } while( true );
    }
    FUN_100136740("xmlEncodeEntitiesReentrant: malloc failed");
  }
  return (xmlChar *)0x0;
}

