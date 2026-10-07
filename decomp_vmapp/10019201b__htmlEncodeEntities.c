
int _htmlEncodeEntities(uchar *out,int *outlen,uchar *in,int *inlen,int quoteChar)

{
  byte *pbVar1;
  uchar uVar2;
  int iVar3;
  long lVar5;
  int iVar6;
  int iVar7;
  uchar *puVar8;
  uchar *puVar9;
  int local_90;
  byte *local_80;
  uchar *local_70;
  uchar local_68 [16];
  byte *local_58;
  uchar *local_50;
  uchar *local_48;
  uchar *local_40;
  byte *local_38;
  uint local_2c;
  uint local_28;
  int local_24;
  htmlEntityDesc *local_20;
  uchar *local_18;
  int local_c;
  int iVar4;
  
  if ((((out == (uchar *)0x0) || (outlen == (int *)0x0)) || (inlen == (int *)0x0)) ||
     (in == (uchar *)0x0)) {
    local_90 = -1;
  }
  else {
    local_50 = out + *outlen;
    local_38 = in + *inlen;
    local_80 = in;
    local_70 = out;
    local_48 = out;
    local_40 = in;
    while (local_58 = local_80, iVar7 = (int)local_70, local_80 < local_38) {
      local_28 = (uint)*local_80;
      pbVar1 = local_80 + 1;
      iVar3 = (int)local_48;
      iVar4 = (int)local_40;
      iVar6 = (int)local_80;
      if (local_28 < 0x80) {
        local_24 = 0;
        local_2c = local_28;
      }
      else {
        if (local_28 < 0xc0) {
          *outlen = iVar7 - iVar3;
          *inlen = iVar6 - iVar4;
          return -2;
        }
        if (local_28 < 0xe0) {
          local_2c = local_28 & 0x1f;
          local_24 = 1;
        }
        else if (local_28 < 0xf0) {
          local_2c = local_28 & 0xf;
          local_24 = 2;
        }
        else {
          if (0xf7 < local_28) {
            *outlen = iVar7 - iVar3;
            *inlen = iVar6 - iVar4;
            return -2;
          }
          local_2c = local_28 & 7;
          local_24 = 3;
        }
      }
      local_80 = pbVar1;
      if ((long)local_38 - (long)pbVar1 < (long)local_24) break;
      while (local_24 = local_24 + -1, local_24 != -1) {
        local_28 = (uint)*local_80;
        if ((local_28 & 0xc0) != 0x80) {
          *outlen = iVar7 - iVar3;
          *inlen = iVar6 - iVar4;
          return -2;
        }
        local_2c = local_2c << 6 | local_28 & 0x3f;
        local_80 = local_80 + 1;
      }
      if (((local_2c < 0x80) && (quoteChar != local_2c)) &&
         ((local_2c != 0x26 && ((local_2c != 0x3c && (local_2c != 0x3e)))))) {
        if (local_50 <= local_70) break;
        *local_70 = (uchar)local_2c;
      }
      else {
        local_20 = _htmlEntityValueLookup(local_2c);
        if (local_20 == (htmlEntityDesc *)0x0) {
          _snprintf((char *)local_68,0x10,"#%u",(ulong)local_2c);
          local_18 = local_68;
        }
        else {
          local_18 = (uchar *)local_20->name;
        }
        lVar5 = -1;
        puVar8 = local_18;
        do {
          if (lVar5 == 0) break;
          lVar5 = lVar5 + -1;
          uVar2 = *puVar8;
          puVar8 = puVar8 + 1;
        } while (uVar2 != '\0');
        local_c = ~(uint)lVar5 - 1;
        if (local_50 < local_70 + (long)local_c + 2) break;
        *local_70 = '&';
        puVar8 = local_18;
        puVar9 = local_70 + 1;
        for (lVar5 = (long)local_c; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        local_70 = local_70 + 1 + local_c;
        *local_70 = ';';
      }
      local_70 = local_70 + 1;
    }
    *outlen = iVar7 - (int)local_48;
    *inlen = (int)local_58 - (int)local_40;
    local_90 = 0;
  }
  return local_90;
}

