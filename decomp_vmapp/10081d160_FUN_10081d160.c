
void FUN_10081d160(uint param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = ~param_1;
  if (param_1 == 0) {
    uVar3 = 0;
  }
  if (DAT_1011c0618 != (code *)0x0) {
    if (DAT_1011c0628 != (code *)0x0) {
      (*DAT_1011c0628)(9,0x1d,"cryptlib.c",0x133);
    }
    if ((DAT_1011c0610 != 0) && (iVar1 = FUN_100885600(), (int)uVar3 < iVar1)) {
      piVar2 = (int *)FUN_100885620(DAT_1011c0610,uVar3);
      piVar4 = piVar2;
      if (piVar2 != (int *)0x0) {
        iVar1 = *piVar2;
        *piVar2 = iVar1 + -1;
        piVar4 = (int *)0x0;
        if (iVar1 < 2) {
          FUN_100885650(DAT_1011c0610,uVar3,0);
          piVar4 = piVar2;
        }
      }
      if (DAT_1011c0628 != (code *)0x0) {
        (*DAT_1011c0628)(10,0x1d,"cryptlib.c",0x148);
      }
      if (piVar4 == (int *)0x0) {
        return;
      }
      (*DAT_1011c0618)(*(undefined8 *)(piVar4 + 2),"cryptlib.c",0x14b);
      FUN_10081e1a0(piVar4);
      return;
    }
    if (DAT_1011c0628 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010081d27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_1011c0628)(10,0x1d,"cryptlib.c",0x136);
      return;
    }
  }
  return;
}

