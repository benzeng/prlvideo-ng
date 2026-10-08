
void FUN_100bf2780(undefined4 param_1,uint param_2,undefined8 param_3,undefined4 param_4,
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
    if (DAT_102316018 == (code *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000100bf27c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_102316018)(param_1,param_2,param_3);
    return;
  }
  if (DAT_102316010 == (code *)0x0) {
    return;
  }
  if (DAT_102316018 != (code *)0x0) {
    (*DAT_102316018)(9,0x1d,"cryptlib.c",0x156);
  }
  if (DAT_102316000 != 0) {
    uVar5 = ~param_2;
    unaff_RBX = (ulong)uVar5;
    iVar1 = FUN_100c60800();
    if (((int)uVar5 < iVar1) &&
       (piVar2 = (int *)FUN_100c60820(DAT_102316000,uVar5), piVar2 != (int *)0x0)) {
      *piVar2 = *piVar2 + 1;
      if (DAT_102316018 != (code *)0x0) {
        (*DAT_102316018)(10,0x1d,"cryptlib.c",0x15d);
      }
      if (*(long *)(piVar2 + 2) != 0) {
        (*DAT_102316010)(param_1,*(long *)(piVar2 + 2),param_3,param_4);
        FUN_100bf28d0(param_2);
        return;
      }
      goto LAB_100bf28b7;
    }
  }
  if (DAT_102316018 != (code *)0x0) {
    (*DAT_102316018)(10,0x1d,"cryptlib.c",0x15d);
  }
LAB_100bf28b7:
  uVar6 = 0x1ee00df;
  uVar3 = FUN_100bf2cd0("cryptlib.c",0x24d,"pointer != NULL");
  uVar5 = ~uVar6;
  if (uVar6 == 0) {
    uVar5 = 0;
  }
  if (DAT_102316008 != (code *)0x0) {
    if (DAT_102316018 != (code *)0x0) {
      (*DAT_102316018)(9,0x1d,"cryptlib.c",0x133,param_5,param_6,uVar3,unaff_RBX,param_2,param_3,
                       &stack0xfffffffffffffff8);
    }
    if ((DAT_102316000 != 0) && (iVar1 = FUN_100c60800(), (int)uVar5 < iVar1)) {
      piVar4 = (int *)FUN_100c60820(DAT_102316000,uVar5);
      piVar2 = piVar4;
      if (piVar4 != (int *)0x0) {
        iVar1 = *piVar4;
        *piVar4 = iVar1 + -1;
        piVar2 = (int *)0x0;
        if (iVar1 < 2) {
          FUN_100c60850(DAT_102316000,uVar5,0);
          piVar2 = piVar4;
        }
      }
      if (DAT_102316018 != (code *)0x0) {
        (*DAT_102316018)(10,0x1d,"cryptlib.c",0x148);
      }
      if (piVar2 == (int *)0x0) {
        return;
      }
      (*DAT_102316008)(*(undefined8 *)(piVar2 + 2),"cryptlib.c",0x14b);
      FUN_100bf3910(piVar2);
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

