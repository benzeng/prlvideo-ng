
void _xmlMemDisplay(FILE *fp)

{
  FILE *local_20;
  
  local_20 = fp;
  if ((fp == (FILE *)0x0) && (local_20 = _fopen(".memorylist","w"), local_20 == (FILE *)0x0)) {
    return;
  }
  _fwrite("Memory list not compiled (MEM_LIST not defined !)\n",1,0x32,local_20);
  if (fp == (FILE *)0x0) {
    _fclose(local_20);
  }
  return;
}

