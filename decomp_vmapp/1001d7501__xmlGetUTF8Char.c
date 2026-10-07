
int _xmlGetUTF8Char(uchar *utf,int *len)

{
  uint local_2c;
  uint local_c;
  
  if (((utf == (uchar *)0x0) || (len == (int *)0x0)) || (*len < 1)) {
LAB_1001d771c:
    if (len != (int *)0x0) {
      *len = 0;
    }
    local_2c = 0xffffffff;
  }
  else {
    local_c = (uint)*utf;
    if ((char)*utf < '\0') {
      if ((*len < 2) || ((utf[1] & 0xc0) != 0x80)) goto LAB_1001d771c;
      if ((local_c & 0xe0) == 0xe0) {
        if ((*len < 3) || ((utf[2] & 0xc0) != 0x80)) goto LAB_1001d771c;
        if ((local_c & 0xf0) == 0xf0) {
          if (((*len < 4) || ((local_c & 0xf8) != 0xf0)) || ((utf[3] & 0xc0) != 0x80))
          goto LAB_1001d771c;
          *len = 4;
          local_c = (*utf & 7) << 0x12 | (utf[1] & 0x3f) << 0xc | (utf[2] & 0x3f) << 6 |
                    utf[3] & 0x3f;
        }
        else {
          *len = 3;
          local_c = (*utf & 0xf) << 0xc | (utf[1] & 0x3f) << 6 | utf[2] & 0x3f;
        }
      }
      else {
        *len = 2;
        local_c = (*utf & 0x1f) << 6 | utf[1] & 0x3f;
      }
    }
    else {
      *len = 1;
    }
    local_2c = local_c;
  }
  return local_2c;
}

