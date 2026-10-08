
undefined8 FUN_100c586e0(long *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (param_1 != (long *)0x0) {
    iVar2 = FUN_100bf2cf0(param_1 + 9,0xffffffff,0x15,"bio_lib.c",0x72);
    uVar3 = 1;
    if (iVar2 < 1) {
      if (((code *)param_1[1] != (code *)0x0) &&
         (uVar3 = (*(code *)param_1[1])(param_1,1,0,0,0,1), (int)uVar3 < 1)) {
        return uVar3;
      }
      FUN_100bf51c0(0,param_1,param_1 + 0xc);
      if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x40), pcVar1 != (code *)0x0)) {
        (*pcVar1)(param_1);
      }
      FUN_100bf3910(param_1);
      uVar3 = 1;
    }
  }
  return uVar3;
}

