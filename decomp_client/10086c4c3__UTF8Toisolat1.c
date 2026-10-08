
int _UTF8Toisolat1(uchar *out,int *outlen,uchar *in,int *inlen)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar5;
  int iVar6;
  int local_6c;
  byte *local_60;
  uchar *local_50;
  byte *local_40;
  uint local_14;
  int local_c;
  int iVar4;
  int iVar7;
  
  if (((out == (uchar *)0x0) || (outlen == (int *)0x0)) || (inlen == (int *)0x0)) {
    local_6c = -1;
  }
  else if (in == (uchar *)0x0) {
    *outlen = 0;
    *inlen = 0;
    local_6c = 0;
  }
  else {
    pbVar5 = in + *inlen;
    iVar2 = *outlen;
    local_50 = out;
    local_40 = in;
    while( true ) {
      iVar3 = (int)out;
      iVar6 = (int)local_50;
      iVar4 = (int)in;
      iVar7 = (int)local_40;
      if (pbVar5 <= local_40) break;
      local_14 = (uint)*local_40;
      local_60 = local_40 + 1;
      if (local_14 < 0x80) {
        local_c = 0;
      }
      else {
        if (local_14 < 0xc0) {
          *outlen = iVar6 - iVar3;
          *inlen = iVar7 - iVar4;
          return -2;
        }
        if (local_14 < 0xe0) {
          local_14 = local_14 & 0x1f;
          local_c = 1;
        }
        else if (local_14 < 0xf0) {
          local_14 = local_14 & 0xf;
          local_c = 2;
        }
        else {
          if (0xf7 < local_14) {
            *outlen = iVar6 - iVar3;
            *inlen = iVar7 - iVar4;
            return -2;
          }
          local_14 = local_14 & 7;
          local_c = 3;
        }
      }
      if ((long)pbVar5 - (long)local_60 < (long)local_c) break;
      while ((local_c != 0 && (local_60 < pbVar5))) {
        bVar1 = *local_60;
        local_60 = local_60 + 1;
        if ((bVar1 & 0xc0) != 0x80) {
          *outlen = iVar6 - iVar3;
          *inlen = iVar7 - iVar4;
          return -2;
        }
        local_14 = local_14 << 6 | bVar1 & 0x3f;
        local_c = local_c + -1;
      }
      if (0xff < local_14) {
        *outlen = iVar6 - iVar3;
        *inlen = iVar7 - iVar4;
        return -2;
      }
      if (out + iVar2 <= local_50) break;
      *local_50 = (uchar)local_14;
      local_50 = local_50 + 1;
      local_40 = local_60;
    }
    *outlen = iVar6 - iVar3;
    *inlen = iVar7 - iVar4;
    local_6c = *outlen;
  }
  return local_6c;
}

