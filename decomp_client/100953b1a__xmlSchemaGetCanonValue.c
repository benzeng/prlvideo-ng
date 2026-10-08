
undefined4 _xmlSchemaGetCanonValue(undefined4 *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  xmlChar *pxVar3;
  ulong uVar4;
  double dVar5;
  undefined8 in_stack_fffffffffffffdf8;
  undefined4 uVar6;
  undefined8 in_stack_fffffffffffffe00;
  undefined4 uVar7;
  undefined4 local_1f8;
  double local_1d0;
  double local_1b8;
  double local_1a0;
  undefined8 local_188;
  long local_180;
  long local_178;
  undefined8 local_170;
  xmlChar local_118 [32];
  xmlChar local_f8 [32];
  xmlChar local_d8 [32];
  xmlChar local_b8 [44];
  int local_8c;
  char *local_88;
  char *local_80;
  int local_74;
  uint local_70;
  int local_6c;
  ulong local_68;
  long local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  double local_40;
  double local_38;
  long local_30;
  long local_28;
  long local_20;
  
  uVar6 = (undefined4)((ulong)in_stack_fffffffffffffdf8 >> 0x20);
  uVar7 = (undefined4)((ulong)in_stack_fffffffffffffe00 >> 0x20);
  if ((param_2 == (long *)0x0) || (param_1 == (undefined4 *)0x0)) {
    local_1f8 = 0xffffffff;
  }
  else {
    *param_2 = 0;
    switch(*param_1) {
    default:
      pxVar3 = _xmlStrdup((xmlChar *)"???");
      *param_2 = (long)pxVar3;
      return 1;
    case 1:
      if (*(long *)(param_1 + 4) == 0) {
        pxVar3 = _xmlStrdup((xmlChar *)"");
        *param_2 = (long)pxVar3;
      }
      else {
        pxVar3 = _xmlStrdup(*(xmlChar **)(param_1 + 4));
        *param_2 = (long)pxVar3;
      }
      break;
    case 2:
      if (*(long *)(param_1 + 4) == 0) {
        pxVar3 = _xmlStrdup((xmlChar *)"");
        *param_2 = (long)pxVar3;
      }
      else {
        lVar2 = _xmlSchemaWhiteSpaceReplace(*(undefined8 *)(param_1 + 4));
        *param_2 = lVar2;
        if (*param_2 == 0) {
          pxVar3 = _xmlStrdup(*(xmlChar **)(param_1 + 4));
          *param_2 = (long)pxVar3;
        }
      }
      break;
    case 3:
      if ((*(char *)((long)param_1 + 0x2d) == '\x01') && (*(long *)(param_1 + 4) == 0)) {
        pxVar3 = _xmlStrdup((xmlChar *)"0.0");
        *param_2 = (long)pxVar3;
      }
      else {
        local_188 = *(undefined8 *)(param_1 + 4);
        local_180 = *(long *)(param_1 + 6);
        local_178 = *(long *)(param_1 + 8);
        uVar4 = *(ulong *)(param_1 + 10);
        local_88 = (char *)0x0;
        local_170._5_1_ = (byte)(uVar4 >> 0x28);
        local_8c = local_170._5_1_ + 2;
        if ((uVar4 & 0x100000000) != 0) {
          local_8c = local_170._5_1_ + 3;
        }
        if (((uVar4 & 0xfe00000000) == 0) ||
           (((uint)(uVar4 >> 0x21) & 0x7f) == (uint)local_170._5_1_)) {
          local_8c = local_8c + 1;
        }
        local_170 = uVar4;
        local_88 = (char *)(*(code *)_xmlMalloc)(local_8c);
        local_80 = local_88;
        if ((local_170 & 0x100000000) != 0) {
          *local_88 = '-';
          local_80 = local_88 + 1;
        }
        if (((uint)(local_170 >> 0x21) & 0x7f) == (uint)local_170._5_1_) {
          *local_80 = '0';
          local_80[1] = '.';
          local_80 = local_80 + 2;
        }
        if (local_178 == 0) {
          if (local_180 == 0) {
            _snprintf(local_80,(long)local_8c - ((long)local_80 - (long)local_88),"%lu",local_188);
          }
          else {
            _snprintf(local_80,(long)local_8c - ((long)local_80 - (long)local_88),"%lu%lu",local_180
                      ,local_188);
          }
        }
        else {
          _snprintf(local_80,(long)local_8c - ((long)local_80 - (long)local_88),"%lu%lu%lu",
                    local_178,local_180,local_188);
        }
        if ((local_170 & 0xfe00000000) == 0) {
          local_88[(long)local_8c + -1] = '\0';
          local_88[(long)local_8c + -2] = '0';
          local_88[(long)local_8c + -3] = '.';
        }
        else {
          uVar1 = (uint)(local_170 >> 0x20);
          if ((uVar1 >> 1 & 0x7f) == (uint)local_170._5_1_) {
            for (local_70 = 0; local_80[local_70] != '\0'; local_70 = local_70 + 1) {
            }
            if (local_70 < local_170._5_1_) {
              _memmove(local_80 + (local_170._5_1_ - local_70),local_80,(ulong)(local_70 + 1));
              _memset(local_80,0x30,(ulong)(local_170._5_1_ - local_70));
            }
          }
          else {
            local_74 = (uint)local_170._5_1_ - (uVar1 >> 1 & 0x7f);
            _memmove(local_80 + (long)local_74 + 1,local_80 + local_74,
                     (long)(int)((uVar1 >> 1 & 0x7f) + 1));
            local_80[local_74] = '.';
          }
        }
        *param_2 = (long)local_88;
      }
      break;
    case 4:
      if ((*(ulong *)(param_1 + 10) & 1) == 0) {
        _snprintf((char *)local_d8,0x1e,"%02u:%02u:%02.14g",*(undefined8 *)(param_1 + 8),
                  (ulong)((uint)(*(ulong *)(param_1 + 6) >> 9) & 0x1f),
                  (ulong)((uint)(*(ulong *)(param_1 + 6) >> 0xe) & 0x3f));
      }
      else {
        local_30 = FUN_10095052d(0,param_1);
        if (local_30 == 0) {
          return 0xffffffff;
        }
        _snprintf((char *)local_d8,0x1e,"%02u:%02u:%02.14gZ",*(undefined8 *)(local_30 + 0x20),
                  (ulong)((uint)(*(ulong *)(local_30 + 0x18) >> 9) & 0x1f),
                  (ulong)((uint)(*(ulong *)(local_30 + 0x18) >> 0xe) & 0x3f));
        _xmlSchemaFreeValue(local_30);
      }
      pxVar3 = _xmlStrdup(local_d8);
      *param_2 = (long)pxVar3;
      break;
    case 5:
      lVar2 = (*(code *)_xmlMalloc)(6);
      *param_2 = lVar2;
      _snprintf((char *)*param_2,6,"---%02u",(ulong)((uint)(*(ulong *)(param_1 + 6) >> 4) & 0x1f));
      break;
    case 6:
      lVar2 = (*(code *)_xmlMalloc)(5);
      *param_2 = lVar2;
      _snprintf((char *)*param_2,6,"--%02u",(ulong)((uint)*(undefined8 *)(param_1 + 6) & 0xf));
      break;
    case 7:
      lVar2 = (*(code *)_xmlMalloc)(8);
      *param_2 = lVar2;
      _snprintf((char *)*param_2,8,"--%02u-%02u",(ulong)((uint)*(undefined8 *)(param_1 + 6) & 0xf),
                (ulong)((uint)(*(ulong *)(param_1 + 6) >> 4) & 0x1f));
      break;
    case 8:
      _snprintf((char *)local_b8,0x1e,"%04ld",*(undefined8 *)(param_1 + 4));
      pxVar3 = _xmlStrdup(local_b8);
      *param_2 = (long)pxVar3;
      break;
    case 9:
      if (*(long *)(param_1 + 4) < 0) {
        uVar4 = (long)*(ulong *)(param_1 + 4) >> 0x3f;
        _snprintf((char *)&local_188,0x23,"-%04ld-%02u",(uVar4 ^ *(ulong *)(param_1 + 4)) - uVar4,
                  (ulong)((uint)*(undefined8 *)(param_1 + 6) & 0xf));
      }
      else {
        _snprintf((char *)&local_188,0x23,"%04ld-%02u",*(undefined8 *)(param_1 + 4),
                  (ulong)((uint)*(undefined8 *)(param_1 + 6) & 0xf));
      }
      pxVar3 = _xmlStrdup((xmlChar *)&local_188);
      *param_2 = (long)pxVar3;
      break;
    case 10:
      if ((*(ulong *)(param_1 + 10) & 1) == 0) {
        _snprintf((char *)local_f8,0x1e,"%04ld:%02u:%02u",*(undefined8 *)(param_1 + 4),
                  (ulong)((uint)*(undefined8 *)(param_1 + 6) & 0xf),
                  (ulong)((uint)(*(ulong *)(param_1 + 6) >> 4) & 0x1f));
      }
      else {
        local_28 = FUN_10095052d(0,param_1);
        if (local_28 == 0) {
          return 0xffffffff;
        }
        _snprintf((char *)local_f8,0x1e,"%04ld:%02u:%02uZ",*(undefined8 *)(local_28 + 0x10),
                  (ulong)((uint)*(undefined8 *)(local_28 + 0x18) & 0xf),
                  (ulong)((uint)(*(ulong *)(local_28 + 0x18) >> 4) & 0x1f));
        _xmlSchemaFreeValue(local_28);
      }
      pxVar3 = _xmlStrdup(local_f8);
      *param_2 = (long)pxVar3;
      break;
    case 0xb:
      if ((*(ulong *)(param_1 + 10) & 1) == 0) {
        _snprintf((char *)&local_188,0x32,"%04ld:%02u:%02uT%02u:%02u:%02.14g",
                  *(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 4),
                  (ulong)((uint)*(undefined8 *)(param_1 + 6) & 0xf),
                  (ulong)((uint)(*(ulong *)(param_1 + 6) >> 4) & 0x1f),
                  CONCAT44(uVar6,(int)(*(ulong *)(param_1 + 6) >> 9)) & 0xffffffff0000001f,
                  CONCAT44(uVar7,(int)(*(ulong *)(param_1 + 6) >> 0xe)) & 0xffffffff0000003f);
      }
      else {
        local_20 = FUN_10095052d(0,param_1);
        if (local_20 == 0) {
          return 0xffffffff;
        }
        _snprintf((char *)&local_188,0x32,"%04ld:%02u:%02uT%02u:%02u:%02.14gZ",
                  *(undefined8 *)(local_20 + 0x20),*(undefined8 *)(local_20 + 0x10),
                  (ulong)((uint)*(undefined8 *)(local_20 + 0x18) & 0xf),
                  (ulong)((uint)(*(ulong *)(local_20 + 0x18) >> 4) & 0x1f),
                  CONCAT44(uVar6,(int)(*(ulong *)(local_20 + 0x18) >> 9)) & 0xffffffff0000001f,
                  CONCAT44(uVar7,(int)(*(ulong *)(local_20 + 0x18) >> 0xe)) & 0xffffffff0000003f);
        _xmlSchemaFreeValue(local_20);
      }
      pxVar3 = _xmlStrdup((xmlChar *)&local_188);
      *param_2 = (long)pxVar3;
      break;
    case 0xc:
      local_50 = 0;
      local_48 = 0;
      local_40 = 0.0;
      uVar4 = (long)*(ulong *)(param_1 + 4) >> 0x3f;
      dVar5 = (double)_floor((double)(long)((*(ulong *)(param_1 + 4) ^ uVar4) - uVar4) /
                             DAT_100e11048);
      if (DAT_100e1e240 <= dVar5) {
        local_68 = (long)(dVar5 - DAT_100e1e240) ^ 0x8000000000000000;
      }
      else {
        local_68 = (ulong)dVar5;
      }
      uVar4 = (long)*(ulong *)(param_1 + 4) >> 0x3f;
      local_60 = ((*(ulong *)(param_1 + 4) ^ uVar4) - uVar4) + local_68 * -0xc;
      dVar5 = (double)_floor((double)(*(ulong *)(param_1 + 8) & DAT_101c9be20) / DAT_101c9be00);
      if (DAT_100e1e240 <= dVar5) {
        local_58 = (long)(dVar5 - DAT_100e1e240) ^ 0x8000000000000000;
      }
      else {
        local_58 = (ulong)dVar5;
      }
      uVar4 = local_58 * 0x15180;
      if ((long)uVar4 < 0) {
        local_1d0 = (double)(uVar4 >> 1) + (double)(uVar4 >> 1);
      }
      else {
        local_1d0 = (double)(long)uVar4;
      }
      local_38 = (double)(*(ulong *)(param_1 + 8) & DAT_101c9be20) - local_1d0;
      if (0.0 < local_38) {
        dVar5 = (double)_floor(local_38 / DAT_101db3918);
        if (DAT_100e1e240 <= dVar5) {
          local_50 = (long)(dVar5 - DAT_100e1e240) ^ 0x8000000000000000;
        }
        else {
          local_50 = (ulong)dVar5;
        }
        uVar4 = local_50 * 0xe10;
        if ((long)uVar4 < 0) {
          local_1b8 = (double)(uVar4 >> 1) + (double)(uVar4 >> 1);
        }
        else {
          local_1b8 = (double)(long)uVar4;
        }
        local_38 = local_38 - local_1b8;
        if (0.0 < local_38) {
          dVar5 = (double)_floor(local_38 / DAT_101db3920);
          if (DAT_100e1e240 <= dVar5) {
            local_48 = (long)(dVar5 - DAT_100e1e240) ^ 0x8000000000000000;
          }
          else {
            local_48 = (ulong)dVar5;
          }
          uVar4 = local_48 * 0x3c;
          if ((long)uVar4 < 0) {
            local_1a0 = (double)(uVar4 >> 1) + (double)(uVar4 >> 1);
          }
          else {
            local_1a0 = (double)(long)uVar4;
          }
          local_40 = local_38 - local_1a0;
        }
      }
      if ((*(long *)(param_1 + 4) < 0) || (*(double *)(param_1 + 8) < 0.0)) {
        _snprintf((char *)&local_188,100,"P%luY%luM%luDT%luH%luM%.14gS",local_40,local_68,local_60,
                  local_58,local_50,local_48);
      }
      else {
        _snprintf((char *)&local_188,100,"-P%luY%luM%luDT%luH%luM%.14gS",local_40,local_68,local_60,
                  local_58,local_50,local_48);
      }
      pxVar3 = _xmlStrdup((xmlChar *)&local_188);
      *param_2 = (long)pxVar3;
      break;
    case 0xd:
      _snprintf((char *)local_118,0x1e,"%01.14e",(double)(float)param_1[4]);
      pxVar3 = _xmlStrdup(local_118);
      *param_2 = (long)pxVar3;
      break;
    case 0xe:
      _snprintf((char *)&local_188,0x28,"%01.14e",*(undefined8 *)(param_1 + 4));
      pxVar3 = _xmlStrdup((xmlChar *)&local_188);
      *param_2 = (long)pxVar3;
      break;
    case 0xf:
      if (param_1[4] == 0) {
        pxVar3 = _xmlStrdup((xmlChar *)"false");
        *param_2 = (long)pxVar3;
      }
      else {
        pxVar3 = _xmlStrdup((xmlChar *)"true");
        *param_2 = (long)pxVar3;
      }
      break;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x14:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x1a:
    case 0x1c:
    case 0x1d:
      if (*(long *)(param_1 + 4) == 0) {
        return 0xffffffff;
      }
      lVar2 = _xmlSchemaCollapseString(*(undefined8 *)(param_1 + 4));
      *param_2 = lVar2;
      if (*param_2 == 0) {
        pxVar3 = _xmlStrdup(*(xmlChar **)(param_1 + 4));
        *param_2 = (long)pxVar3;
      }
      break;
    case 0x15:
      if (*(long *)(param_1 + 6) == 0) {
        pxVar3 = _xmlStrdup(*(xmlChar **)(param_1 + 4));
        *param_2 = (long)pxVar3;
        return 0;
      }
      pxVar3 = _xmlStrdup((xmlChar *)"{");
      *param_2 = (long)pxVar3;
      pxVar3 = _xmlStrcat((xmlChar *)*param_2,*(xmlChar **)(param_1 + 6));
      *param_2 = (long)pxVar3;
      pxVar3 = _xmlStrcat((xmlChar *)*param_2,(xmlChar *)"}");
      *param_2 = (long)pxVar3;
      pxVar3 = _xmlStrcat((xmlChar *)*param_2,*(xmlChar **)(param_1 + 6));
      *param_2 = (long)pxVar3;
      break;
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
      if ((*(char *)((long)param_1 + 0x2d) == '\x01') && (*(long *)(param_1 + 4) == 0)) {
        pxVar3 = _xmlStrdup((xmlChar *)"0");
        *param_2 = (long)pxVar3;
      }
      else {
        local_188 = *(undefined8 *)(param_1 + 4);
        local_180 = *(long *)(param_1 + 6);
        local_178 = *(long *)(param_1 + 8);
        uVar4 = *(ulong *)(param_1 + 10);
        local_170._5_1_ = (byte)(uVar4 >> 0x28);
        local_6c = local_170._5_1_ + 1;
        if ((uVar4 & 0x100000000) != 0) {
          local_6c = local_170._5_1_ + 2;
        }
        local_170 = uVar4;
        lVar2 = (*(code *)_xmlMalloc)(local_6c);
        *param_2 = lVar2;
        if (local_178 == 0) {
          if (local_180 == 0) {
            if ((local_170 & 0x100000000) == 0) {
              _snprintf((char *)*param_2,(long)local_6c,"%lu",local_188);
            }
            else {
              _snprintf((char *)*param_2,(long)local_6c,"-%lu",local_188);
            }
          }
          else if ((local_170 & 0x100000000) == 0) {
            _snprintf((char *)*param_2,(long)local_6c,"%lu%lu",local_180,local_188);
          }
          else {
            _snprintf((char *)*param_2,(long)local_6c,"-%lu%lu",local_180,local_188);
          }
        }
        else if ((local_170 & 0x100000000) == 0) {
          _snprintf((char *)*param_2,(long)local_6c,"%lu%lu%lu",local_178,local_180,local_188);
        }
        else {
          _snprintf((char *)*param_2,(long)local_6c,"-%lu%lu%lu",local_178,local_180,local_188);
        }
      }
      break;
    case 0x2b:
      pxVar3 = _xmlStrdup(*(xmlChar **)(param_1 + 4));
      *param_2 = (long)pxVar3;
      break;
    case 0x2c:
      pxVar3 = _xmlStrdup(*(xmlChar **)(param_1 + 4));
      *param_2 = (long)pxVar3;
    }
    local_1f8 = 0;
  }
  return local_1f8;
}

