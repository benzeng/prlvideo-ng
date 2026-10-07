
int FUN_10042a790(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    iVar1 = __dyld_image_count();
    if (0 < iVar1) {
      iVar3 = 0;
      do {
        lVar2 = __dyld_get_image_header(iVar3);
        if (*(int *)(lVar2 + 0xc) == 2) {
          return iVar3;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
  }
  else {
    iVar1 = FUN_100424d00();
    if (-1 < iVar1) {
      return iVar1;
    }
  }
  return 0;
}

