
void FUN_10081d010(undefined4 param_1,uint param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int *piVar4;
  uint uVar5;
  ulong unaff_RBX;
  uint uVar6;
  
  if (-1 < (int)param_2) {
    if (DAT_1011c0628 == (code *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010081d053. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c0628)(param_1,param_2,param_3);
    return;
  }
  if (DAT_1011c0620 == (code *)0x0) {
    return;
  }
  if (DAT_1011c0628 != (code *)0x0) {
    (*DAT_1011c0628)(9,0x1d,"cryptlib.c",0x156);
  }
  if (DAT_1011c0610 != 0) {
    uVar5 = ~param_2;
    unaff_RBX = (ulong)uVar5;
    iVar1 = FUN_100885600();
    if (((int)uVar5 < iVar1) &&
       (piVar2 = (int *)FUN_100885620(DAT_1011c0610,uVar5), piVar2 != (int *)0x0)) {
      *piVar2 = *piVar2 + 1;
      if (DAT_1011c0628 != (code *)0x0) {
        (*DAT_1011c0628)(10,0x1d,"cryptlib.c",0x15d);
      }
      if (*(long *)(piVar2 + 2) != 0) {
        (*DAT_1011c0620)(param_1,*(long *)(piVar2 + 2),param_3,param_4);
        FUN_10081d160(param_2);
        return;
      }
      goto LAB_10081d147;
    }
  }
  if (DAT_1011c0628 != (code *)0x0) {
    (*DAT_1011c0628)(10,0x1d,"cryptlib.c",0x15d);
  }
LAB_10081d147:
  uVar6 = 0xb17029;
  uVar3 = FUN_10081d560("cryptlib.c",0x24d,"pointer != NULL");
  uVar5 = ~uVar6;
  if (uVar6 == 0) {
    uVar5 = 0;
  }
  if (DAT_1011c0618 != (code *)0x0) {
    if (DAT_1011c0628 != (code *)0x0) {
      (*DAT_1011c0628)(9,0x1d,"cryptlib.c",0x133,param_5,param_6,uVar3,unaff_RBX,param_2,param_3,
                       &stack0xfffffffffffffff8);
    }
    if ((DAT_1011c0610 != 0) && (iVar1 = FUN_100885600(), (int)uVar5 < iVar1)) {
      piVar4 = (int *)FUN_100885620(DAT_1011c0610,uVar5);
      piVar2 = piVar4;
      if (piVar4 != (int *)0x0) {
        iVar1 = *piVar4;
        *piVar4 = iVar1 + -1;
        piVar2 = (int *)0x0;
        if (iVar1 < 2) {
          FUN_100885650(DAT_1011c0610,uVar5,0);
          piVar2 = piVar4;
        }
      }
      if (DAT_1011c0628 != (code *)0x0) {
        (*DAT_1011c0628)(10,0x1d,"cryptlib.c",0x148);
      }
      if (piVar2 == (int *)0x0) {
        return;
      }
      (*DAT_1011c0618)(*(undefined8 *)(piVar2 + 2),"cryptlib.c",0x14b);
      FUN_10081e1a0(piVar2);
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

