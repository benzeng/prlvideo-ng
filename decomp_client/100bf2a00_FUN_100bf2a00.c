
undefined8 FUN_100bf2a00(uint param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = ~param_1;
  if (param_1 == 0) {
    uVar3 = 0;
  }
  if (DAT_102316018 != (code *)0x0) {
    (*DAT_102316018)(9,0x1d,"cryptlib.c",0x156);
  }
  if (((DAT_102316000 != 0) && (iVar1 = FUN_100c60800(), (int)uVar3 < iVar1)) &&
     (piVar2 = (int *)FUN_100c60820(DAT_102316000,uVar3), piVar2 != (int *)0x0)) {
    *piVar2 = *piVar2 + 1;
    if (DAT_102316018 != (code *)0x0) {
      (*DAT_102316018)(10,0x1d,"cryptlib.c",0x15d);
    }
    return *(undefined8 *)(piVar2 + 2);
  }
  if (DAT_102316018 != (code *)0x0) {
    (*DAT_102316018)(10,0x1d,"cryptlib.c",0x15d);
  }
  return 0;
}

