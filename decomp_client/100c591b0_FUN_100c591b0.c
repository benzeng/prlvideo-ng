
long * FUN_100c591b0(long *param_1,long *param_2)

{
  code *pcVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  plVar3 = param_1;
  if (param_1 != (long *)0x0) {
    do {
      plVar4 = plVar3;
      plVar3 = (long *)plVar4[7];
    } while ((long *)plVar4[7] != (long *)0x0);
    plVar4[7] = (long)param_2;
    if (param_2 != (long *)0x0) {
      param_2[8] = (long)plVar4;
    }
    param_2 = param_1;
    if ((*param_1 == 0) || (pcVar1 = *(code **)(*param_1 + 0x30), pcVar1 == (code *)0x0)) {
      FUN_100c62ee0(0x20,0x67,0x79,"bio_lib.c",0x15d);
    }
    else {
      pcVar2 = (code *)param_1[1];
      if (pcVar2 == (code *)0x0) {
        (*pcVar1)(param_1,6,0,plVar4);
      }
      else {
        lVar5 = (*pcVar2)(param_1,6,plVar4,6,0,1);
        if (0 < lVar5) {
          uVar6 = (**(code **)(*param_1 + 0x30))(param_1,6,0,plVar4);
          (*pcVar2)(param_1,0x86,plVar4,6,0,uVar6);
        }
      }
    }
  }
  return param_2;
}

