
ulong FUN_100c59f90(long param_1,void *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  int *piVar3;
  
  sVar2 = 0;
  if ((param_2 != (void *)0x0) && (*(int *)(param_1 + 0x18) != 0)) {
    sVar2 = _fread(param_2,1,(long)param_3,*(FILE **)(param_1 + 0x30));
    iVar1 = _ferror(*(FILE **)(param_1 + 0x30));
    if (iVar1 != 0) {
      piVar3 = ___error();
      FUN_100c62ee0(2,0xb,*piVar3,"bss_file.c",0xfb);
      FUN_100c62ee0(0x20,0x82,2,"bss_file.c",0xfc);
      sVar2 = 0xffffffff;
    }
  }
  return sVar2 & 0xffffffff;
}

