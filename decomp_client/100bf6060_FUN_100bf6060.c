
long FUN_100bf6060(long *param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  
  piVar2 = ___error();
  if ((param_1 == (long *)0x0) || (param_2 == 0)) {
    *piVar2 = 0x16;
  }
  else {
    *piVar2 = 0;
    if ((long *)*param_1 != (long *)0x0) {
      lVar5 = *(long *)*param_1;
LAB_100bf60d1:
      lVar5 = _readdir_INODE64(lVar5);
      if (lVar5 == 0) {
        return 0;
      }
      _strncpy((char *)(*param_1 + 8),(char *)(lVar5 + 0x15),0x400);
      *(undefined1 *)(*param_1 + 0x408) = 0;
      return *param_1 + 8;
    }
    pvVar3 = _malloc(0x410);
    *param_1 = (long)pvVar3;
    if (pvVar3 == (void *)0x0) {
      piVar2 = ___error();
      *piVar2 = 0xc;
    }
    else {
      ___bzero(pvVar3,0x410);
      uVar4 = _opendir_INODE64(param_2);
      *(undefined8 *)*param_1 = uVar4;
      lVar5 = *(long *)*param_1;
      if (lVar5 != 0) goto LAB_100bf60d1;
      piVar2 = ___error();
      iVar1 = *piVar2;
      _free((void *)*param_1);
      *param_1 = 0;
      piVar2 = ___error();
      *piVar2 = iVar1;
    }
  }
  return 0;
}

