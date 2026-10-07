
undefined8 FUN_10087dc60(long *param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_38;
  
  local_38 = 0;
  lVar3 = 0;
  if (param_1 != (long *)0x0) {
    if ((*param_1 == 0) || (pcVar1 = *(code **)(*param_1 + 0x30), pcVar1 == (code *)0x0)) {
      FUN_100887ce0(0x20,0x67,0x79,"bio_lib.c",0x15d);
      lVar3 = -2;
    }
    else {
      pcVar2 = (code *)param_1[1];
      if (pcVar2 == (code *)0x0) {
        lVar3 = (*pcVar1)(param_1,param_2,param_3,&local_38);
      }
      else {
        lVar3 = (*pcVar2)(param_1,6,&local_38,param_2,param_3,1);
        if (0 < lVar3) {
          uVar4 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,&local_38);
          lVar3 = (*pcVar2)(param_1,0x86,&local_38,param_2,param_3,uVar4);
        }
      }
    }
  }
  uVar4 = 0;
  if (0 < lVar3) {
    uVar4 = local_38;
  }
  return uVar4;
}

