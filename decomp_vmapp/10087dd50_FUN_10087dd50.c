
long FUN_10087dd50(long *param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_28;
  
  lVar3 = 0;
  if (param_1 != (long *)0x0) {
    local_28 = param_3;
    if ((*param_1 == 0) || (pcVar1 = *(code **)(*param_1 + 0x48), pcVar1 == (code *)0x0)) {
      FUN_100887ce0(0x20,0x83,0x79,"bio_lib.c",0x179);
      lVar3 = -2;
    }
    else {
      pcVar2 = (code *)param_1[1];
      if (pcVar2 == (code *)0x0) {
        lVar3 = (*pcVar1)(param_1,param_2);
      }
      else {
        lVar3 = (*pcVar2)(param_1,6,&local_28,param_2,0,1);
        if (0 < lVar3) {
          uVar4 = (**(code **)(*param_1 + 0x48))(param_1,param_2,local_28);
          lVar3 = (*pcVar2)(param_1,0x86,&local_28,param_2,0,uVar4);
        }
      }
    }
  }
  return lVar3;
}

