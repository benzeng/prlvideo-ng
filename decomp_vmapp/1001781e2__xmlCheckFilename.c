
int _xmlCheckFilename(char *path)

{
  int iVar1;
  int local_94;
  ushort local_80;
  
  if (path == (char *)0x0) {
    local_94 = 0;
  }
  else {
    iVar1 = _stat(path,(stat *)&stack0xffffffffffffff78);
    if (iVar1 == -1) {
      local_94 = 0;
    }
    else if ((local_80 & 0xf000) == 0x4000) {
      local_94 = 2;
    }
    else if (path == (char *)0x0) {
      local_94 = 0;
    }
    else {
      local_94 = 1;
    }
  }
  return local_94;
}

