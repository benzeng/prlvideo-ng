
int _UTF8ToHtml(uchar *out,int *outlen,uchar *in,int *inlen)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar7;
  htmlEntityDesc *phVar8;
  long lVar9;
  int iVar10;
  uchar *puVar12;
  char *pcVar13;
  uchar *puVar14;
  int local_6c;
  byte *local_60;
  uchar *local_50;
  uint local_20;
  int local_18;
  int iVar6;
  int iVar11;
  
  if (((out == (uchar *)0x0) || (outlen == (int *)0x0)) || (inlen == (int *)0x0)) {
    local_6c = -1;
  }
  else if (in == (uchar *)0x0) {
    *outlen = 0;
    *inlen = 0;
    local_6c = 0;
  }
  else {
    pbVar7 = in + *inlen;
    iVar3 = *outlen;
    local_60 = in;
    local_50 = out;
    while( true ) {
      iVar10 = (int)local_50;
      iVar11 = (int)local_60;
      iVar5 = (int)out;
      iVar6 = (int)in;
      if (pbVar7 <= local_60) break;
      local_20 = (uint)*local_60;
      local_60 = local_60 + 1;
      if (local_20 < 0x80) {
        local_18 = 0;
      }
      else {
        if (local_20 < 0xc0) {
          *outlen = iVar10 - iVar5;
          *inlen = iVar11 - iVar6;
          return -2;
        }
        if (local_20 < 0xe0) {
          local_20 = local_20 & 0x1f;
          local_18 = 1;
        }
        else if (local_20 < 0xf0) {
          local_20 = local_20 & 0xf;
          local_18 = 2;
        }
        else {
          if (0xf7 < local_20) {
            *outlen = iVar10 - iVar5;
            *inlen = iVar11 - iVar6;
            return -2;
          }
          local_20 = local_20 & 7;
          local_18 = 3;
        }
      }
      if ((long)pbVar7 - (long)local_60 < (long)local_18) break;
      while ((local_18 != 0 && (local_60 < pbVar7))) {
        bVar2 = *local_60;
        local_60 = local_60 + 1;
        if ((bVar2 & 0xc0) != 0x80) break;
        local_20 = local_20 << 6 | bVar2 & 0x3f;
        local_18 = local_18 + -1;
      }
      if (local_20 < 0x80) {
        if (out + iVar3 <= local_50 + 1) break;
        *local_50 = (uchar)local_20;
      }
      else {
        phVar8 = _htmlEntityValueLookup(local_20);
        if (phVar8 == (htmlEntityDesc *)0x0) {
          *outlen = iVar10 - iVar5;
          *inlen = iVar11 - iVar6;
          return -2;
        }
        lVar9 = -1;
        pcVar13 = phVar8->name;
        do {
          if (lVar9 == 0) break;
          lVar9 = lVar9 + -1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~(uint)lVar9 - 1;
        if (out + iVar3 <= local_50 + (long)iVar4 + 2) break;
        *local_50 = '&';
        puVar12 = (uchar *)phVar8->name;
        puVar14 = local_50 + 1;
        for (lVar9 = (long)iVar4; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        }
        local_50 = local_50 + 1 + iVar4;
        *local_50 = ';';
      }
      local_50 = local_50 + 1;
    }
    *outlen = iVar10 - iVar5;
    *inlen = iVar11 - iVar6;
    local_6c = 0;
  }
  return local_6c;
}

