
long FUN_10087e0a0(long *param_1)

{
  code *pcVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = 0;
  if (param_1 != (long *)0x0) {
    lVar6 = param_1[7];
    if ((*param_1 == 0) || (pcVar1 = *(code **)(*param_1 + 0x30), pcVar1 == (code *)0x0)) {
      FUN_100887ce0(0x20,0x67,0x79,"bio_lib.c",0x15d);
    }
    else {
      pcVar2 = (code *)param_1[1];
      if (pcVar2 == (code *)0x0) {
        (*pcVar1)(param_1,7,0,param_1);
      }
      else {
        lVar3 = (*pcVar2)(param_1,6,param_1,7,0,1);
        if (0 < lVar3) {
          uVar4 = (**(code **)(*param_1 + 0x30))(param_1,7,0,param_1);
          (*pcVar2)(param_1,0x86,param_1,7,0,uVar4);
        }
      }
    }
    lVar3 = param_1[8];
    plVar5 = param_1 + 7;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x38) = *plVar5;
    }
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 0x40) = lVar3;
    }
    param_1[8] = 0;
    *plVar5 = 0;
  }
  return lVar6;
}

