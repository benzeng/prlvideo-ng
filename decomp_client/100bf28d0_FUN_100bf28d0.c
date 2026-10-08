
void FUN_100bf28d0(uint param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = ~param_1;
  if (param_1 == 0) {
    uVar3 = 0;
  }
  if (DAT_102316008 != (code *)0x0) {
    if (DAT_102316018 != (code *)0x0) {
      (*DAT_102316018)(9,0x1d,"cryptlib.c",0x133);
    }
    if ((DAT_102316000 != 0) && (iVar1 = FUN_100c60800(), (int)uVar3 < iVar1)) {
      piVar2 = (int *)FUN_100c60820(DAT_102316000,uVar3);
      piVar4 = piVar2;
      if (piVar2 != (int *)0x0) {
        iVar1 = *piVar2;
        *piVar2 = iVar1 + -1;
        piVar4 = (int *)0x0;
        if (iVar1 < 2) {
          FUN_100c60850(DAT_102316000,uVar3,0);
          piVar4 = piVar2;
        }
      }
      if (DAT_102316018 != (code *)0x0) {
        (*DAT_102316018)(10,0x1d,"cryptlib.c",0x148);
      }
      if (piVar4 == (int *)0x0) {
        return;
      }
      (*DAT_102316008)(*(undefined8 *)(piVar4 + 2),"cryptlib.c",0x14b);
      FUN_100bf3910(piVar4);
      return;
    }
    if (DAT_102316018 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100bf29ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_102316018)(10,0x1d,"cryptlib.c",0x136);
      return;
    }
  }
  return;
}

