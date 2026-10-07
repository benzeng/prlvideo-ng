
gzFile FUN_1006338b0(char *param_1,uint param_2,uint param_3)

{
  int fd;
  int iVar1;
  gzFile pvVar2;
  int *piVar3;
  char *mode;
  
  if ((param_2 & 3) == 1) {
    mode = "wb";
  }
  else {
    if ((param_2 & 3) != 0) {
      piVar3 = ___error();
      *piVar3 = 0x16;
      return (gzFile)0xffffffffffffffff;
    }
    mode = "rb";
  }
  fd = _open(param_1,param_2,(ulong)param_3);
  if (fd != -1) {
    if (((param_2 & 0x200) != 0) && (iVar1 = _fchmod(fd,(mode_t)param_3), iVar1 != 0)) {
      return (gzFile)0xffffffffffffffff;
    }
    pvVar2 = _gzdopen(fd,mode);
    if (pvVar2 == (gzFile)0x0) {
      piVar3 = ___error();
      *piVar3 = 0xc;
      return (gzFile)0xffffffffffffffff;
    }
    return pvVar2;
  }
  return (gzFile)0xffffffffffffffff;
}

