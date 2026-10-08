
int _xmlBufferDump(FILE *file,xmlBufferPtr buf)

{
  size_t sVar1;
  int local_2c;
  FILE *local_20;
  
  if (buf == (xmlBufferPtr)0x0) {
    local_2c = 0;
  }
  else if (buf->content == (xmlChar *)0x0) {
    local_2c = 0;
  }
  else {
    local_20 = file;
    if (file == (FILE *)0x0) {
      local_20 = *(FILE **)PTR____stdoutp_1021e1858;
    }
    sVar1 = _fwrite(buf->content,1,(ulong)buf->use,local_20);
    local_2c = (int)sVar1;
  }
  return local_2c;
}

