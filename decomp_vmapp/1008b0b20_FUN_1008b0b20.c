
int FUN_1008b0b20(int *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((*param_1 == 4) && (piVar1 = *(int **)(param_1 + 2), piVar1 != (int *)0x0)) {
    iVar2 = *piVar1;
    if (iVar2 <= param_3) {
      param_3 = iVar2;
    }
    _memcpy(param_2,*(void **)(piVar1 + 2),(long)param_3);
  }
  else {
    FUN_100887ce0(0xd,0x87,0x6d,"evp_asn1.c",0x55);
    iVar2 = -1;
  }
  return iVar2;
}

