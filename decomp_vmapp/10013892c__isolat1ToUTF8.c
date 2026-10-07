
int _isolat1ToUTF8(uchar *out,int *outlen,uchar *in,int *inlen)

{
  byte *pbVar1;
  byte *pbVar2;
  int local_6c;
  byte *local_60;
  byte *local_50;
  byte *local_20;
  
  if ((((out == (uchar *)0x0) || (in == (uchar *)0x0)) || (outlen == (int *)0x0)) ||
     (inlen == (int *)0x0)) {
    local_6c = -1;
  }
  else {
    pbVar1 = out + *outlen;
    pbVar2 = in + *inlen;
    local_60 = in;
    local_50 = out;
    local_20 = pbVar2;
    while ((local_60 < pbVar2 && (local_50 < pbVar1 + -1))) {
      if ((char)*local_60 < '\0') {
        *local_50 = *local_60 >> 6 | 0xc0;
        local_50[1] = *local_60 & 0x3f | 0x80;
        local_50 = local_50 + 2;
        local_60 = local_60 + 1;
      }
      if ((long)pbVar1 - (long)local_50 < (long)local_20 - (long)local_60) {
        local_20 = local_60 + ((long)pbVar1 - (long)local_50);
      }
      for (; (local_60 < local_20 && (-1 < (char)*local_60)); local_60 = local_60 + 1) {
        *local_50 = *local_60;
        local_50 = local_50 + 1;
      }
    }
    if (((local_60 < pbVar2) && (local_50 < pbVar1)) && (-1 < (char)*local_60)) {
      *local_50 = *local_60;
      local_60 = local_60 + 1;
      local_50 = local_50 + 1;
    }
    *outlen = (int)local_50 - (int)out;
    *inlen = (int)local_60 - (int)in;
    local_6c = *outlen;
  }
  return local_6c;
}

