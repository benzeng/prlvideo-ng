
void FUN_100c59480(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  
  do {
    if (param_1 == (long *)0x0) {
      return;
    }
    lVar3 = param_1[9];
    plVar1 = (long *)param_1[7];
    if (((param_1 != (long *)0x0) &&
        (iVar4 = FUN_100bf2cf0(param_1 + 9,0xffffffff,0x15,"bio_lib.c",0x72), iVar4 < 1)) &&
       (((code *)param_1[1] == (code *)0x0 ||
        (iVar4 = (*(code *)param_1[1])(param_1,1,0,0,0,1), 0 < iVar4)))) {
      FUN_100bf51c0(0,param_1,param_1 + 0xc);
      if ((*param_1 != 0) && (pcVar2 = *(code **)(*param_1 + 0x40), pcVar2 != (code *)0x0)) {
        (*pcVar2)(param_1);
      }
      FUN_100bf3910(param_1);
    }
    param_1 = plVar1;
  } while ((int)lVar3 < 2);
  return;
}

