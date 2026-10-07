
/* WARNING: Enum "enum_2029": Some values do not have unique names */

byte * FUN_100193144(htmlParserCtxtPtr param_1,xmlChar param_2)

{
  byte *pbVar1;
  byte *local_c0;
  undefined1 local_a4 [4];
  byte *local_a0;
  byte *local_98;
  int local_8c;
  byte *local_88;
  byte *local_80;
  htmlEntityDesc *local_78;
  uint local_6c;
  int local_68;
  int local_64;
  byte *local_60;
  int local_54;
  byte *local_50;
  int local_44;
  byte *local_40;
  uint local_34;
  int local_30;
  int local_2c;
  byte *local_28;
  uint local_1c;
  int local_18;
  int local_14;
  byte *local_10;
  
  local_98 = (byte *)0x0;
  local_88 = (byte *)0x0;
  local_a0 = (byte *)0x0;
  local_80 = (byte *)0x0;
  local_8c = 100;
  local_98 = (byte *)(*(code *)_xmlMallocAtomic)(100);
  pbVar1 = local_98;
  if (local_98 == (byte *)0x0) {
    FUN_100190414(param_1,"buffer allocation failed\n");
    local_c0 = (byte *)0x0;
  }
  else {
    while ((((local_88 = pbVar1, *param_1->input->cur != '\0' && (*param_1->input->cur != param_2))
            && ((param_2 != '\0' || (*param_1->input->cur != '>')))) &&
           ((param_2 != '\0' ||
            ((*param_1->input->cur != ' ' &&
             (((*param_1->input->cur < 9 || (10 < *param_1->input->cur)) &&
              (*param_1->input->cur != '\r'))))))))) {
      if (*param_1->input->cur == '&') {
        if (param_1->input->cur[1] == '#') {
          local_6c = _htmlParseCharRef(param_1);
          if (local_6c < 0x80) {
            *local_88 = (byte)local_6c;
            local_88 = local_88 + 1;
            local_68 = -6;
          }
          else if (local_6c < 0x800) {
            *local_88 = (byte)(local_6c >> 6) & 0x1f | 0xc0;
            local_88 = local_88 + 1;
            local_68 = 0;
          }
          else if (local_6c < 0x10000) {
            *local_88 = (byte)(local_6c >> 0xc) & 0xf | 0xe0;
            local_88 = local_88 + 1;
            local_68 = 6;
          }
          else {
            *local_88 = (byte)(local_6c >> 0x12) & 7 | 0xf0;
            local_88 = local_88 + 1;
            local_68 = 0xc;
          }
          for (; -1 < local_68; local_68 = local_68 + -6) {
            *local_88 = (byte)(local_6c >> ((byte)local_68 & 0x1f)) & 0x3f | 0x80;
            local_88 = local_88 + 1;
          }
          pbVar1 = local_88;
          if ((long)(local_8c + -100) < (long)local_88 - (long)local_98) {
            local_64 = (int)local_88 - (int)local_98;
            local_8c = local_8c << 1;
            local_60 = (byte *)(*(code *)_xmlRealloc)(local_98,(long)local_8c);
            if (local_60 == (byte *)0x0) {
              FUN_100190414(param_1,"growing buffer\n");
              (*(code *)_xmlFree)(local_98);
              return (byte *)0x0;
            }
            local_98 = local_60;
            pbVar1 = local_60 + local_64;
          }
        }
        else {
          local_78 = _htmlParseEntityRef(param_1,&local_a0);
          if (local_a0 == (byte *)0x0) {
            *local_88 = 0x26;
            local_88 = local_88 + 1;
            pbVar1 = local_88;
            if ((long)(local_8c + -100) < (long)local_88 - (long)local_98) {
              local_54 = (int)local_88 - (int)local_98;
              local_8c = local_8c << 1;
              local_50 = (byte *)(*(code *)_xmlRealloc)(local_98,(long)local_8c);
              if (local_50 == (byte *)0x0) {
                FUN_100190414(param_1,"growing buffer\n");
                (*(code *)_xmlFree)(local_98);
                return (byte *)0x0;
              }
              local_98 = local_50;
              pbVar1 = local_50 + local_54;
            }
          }
          else if (local_78 == (htmlEntityDesc *)0x0) {
            *local_88 = 0x26;
            for (local_80 = local_a0; local_88 = local_88 + 1, pbVar1 = local_88, *local_80 != 0;
                local_80 = local_80 + 1) {
              if ((long)(local_8c + -100) < (long)local_88 - (long)local_98) {
                local_44 = (int)local_88 - (int)local_98;
                local_8c = local_8c << 1;
                local_40 = (byte *)(*(code *)_xmlRealloc)(local_98,(long)local_8c);
                if (local_40 == (byte *)0x0) {
                  FUN_100190414(param_1,"growing buffer\n");
                  (*(code *)_xmlFree)(local_98);
                  return (byte *)0x0;
                }
                local_88 = local_40 + local_44;
                local_98 = local_40;
              }
              *local_88 = *local_80;
            }
          }
          else {
            if ((long)(local_8c + -100) < (long)local_88 - (long)local_98) {
              local_2c = (int)local_88 - (int)local_98;
              local_8c = local_8c << 1;
              local_28 = (byte *)(*(code *)_xmlRealloc)(local_98,(long)local_8c);
              if (local_28 == (byte *)0x0) {
                FUN_100190414(param_1,"growing buffer\n");
                (*(code *)_xmlFree)(local_98);
                return (byte *)0x0;
              }
              local_88 = local_28 + local_2c;
              local_98 = local_28;
            }
            local_34 = local_78->value & 0xff;
            if (local_34 < 0x80) {
              *local_88 = (byte)local_78->value;
              local_88 = local_88 + 1;
              local_30 = -6;
            }
            else if (local_34 < 0x800) {
              *local_88 = (byte)(local_34 >> 6) | 0xc0;
              local_88 = local_88 + 1;
              local_30 = 0;
            }
            else if (local_34 < 0x10000) {
              *local_88 = 0xe0;
              local_88 = local_88 + 1;
              local_30 = 6;
            }
            else {
              *local_88 = 0xf0;
              local_88 = local_88 + 1;
              local_30 = 0xc;
            }
            for (; pbVar1 = local_88, -1 < local_30; local_30 = local_30 + -6) {
              *local_88 = (byte)(local_34 >> ((byte)local_30 & 0x1f)) & 0x3f | 0x80;
              local_88 = local_88 + 1;
            }
          }
        }
      }
      else {
        if ((long)(local_8c + -100) < (long)local_88 - (long)local_98) {
          local_14 = (int)local_88 - (int)local_98;
          local_8c = local_8c << 1;
          local_10 = (byte *)(*(code *)_xmlRealloc)(local_98,(long)local_8c);
          if (local_10 == (byte *)0x0) {
            FUN_100190414(param_1,"growing buffer\n");
            (*(code *)_xmlFree)(local_98);
            return (byte *)0x0;
          }
          local_88 = local_10 + local_14;
          local_98 = local_10;
        }
        local_1c = FUN_100190973(param_1,local_a4);
        if (local_1c < 0x80) {
          *local_88 = (byte)local_1c;
          local_88 = local_88 + 1;
          local_18 = -6;
        }
        else if (local_1c < 0x800) {
          *local_88 = (byte)(local_1c >> 6) & 0x1f | 0xc0;
          local_88 = local_88 + 1;
          local_18 = 0;
        }
        else if (local_1c < 0x10000) {
          *local_88 = (byte)(local_1c >> 0xc) & 0xf | 0xe0;
          local_88 = local_88 + 1;
          local_18 = 6;
        }
        else {
          *local_88 = (byte)(local_1c >> 0x12) & 7 | 0xf0;
          local_88 = local_88 + 1;
          local_18 = 0xc;
        }
        for (; -1 < local_18; local_18 = local_18 + -6) {
          *local_88 = (byte)(local_1c >> ((byte)local_18 & 0x1f)) & 0x3f | 0x80;
          local_88 = local_88 + 1;
        }
        _xmlNextChar(param_1);
        pbVar1 = local_88;
      }
    }
    *local_88 = 0;
    local_c0 = local_98;
  }
  return local_c0;
}

