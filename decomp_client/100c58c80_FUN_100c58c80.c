
long FUN_100c58c80(long *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  code *pcVar2;
  undefined4 in_EAX;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = 0;
  if (param_1 != (long *)0x0) {
    if ((*param_1 == 0) || (pcVar1 = *(code **)(*param_1 + 0x30), pcVar1 == (code *)0x0)) {
      FUN_100c62ee0(0x20,0x67,0x79,"bio_lib.c",0x15d,param_6,CONCAT44(param_4,in_EAX));
      lVar3 = -2;
    }
    else {
      pcVar2 = (code *)param_1[1];
      if (pcVar2 == (code *)0x0) {
        lVar3 = (*pcVar1)(param_1,param_2,param_3,&stack0xffffffffffffffcc);
      }
      else {
        lVar3 = (*pcVar2)(param_1,6,&stack0xffffffffffffffcc,param_2,param_3,1);
        if (0 < lVar3) {
          uVar4 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,&stack0xffffffffffffffcc);
          lVar3 = (*pcVar2)(param_1,0x86,&stack0xffffffffffffffcc,param_2,param_3,uVar4);
        }
      }
    }
  }
  return lVar3;
}

