
undefined8 FUN_10087d950(long *param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) || (*(long *)(*param_1 + 0x28) == 0)) {
    uVar2 = 0x79;
    uVar3 = 0x121;
  }
  else {
    pcVar1 = (code *)param_1[1];
    if ((pcVar1 != (code *)0x0) &&
       (uVar2 = (*pcVar1)(param_1,5,param_2,param_3,0,1), (int)uVar2 < 1)) {
      return uVar2;
    }
    if ((int)param_1[3] != 0) {
      uVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3);
      if (pcVar1 == (code *)0x0) {
        return uVar2;
      }
      uVar2 = (*pcVar1)(param_1,0x85,param_2,param_3,0,(long)(int)uVar2);
      return uVar2;
    }
    uVar2 = 0x78;
    uVar3 = 299;
  }
  FUN_100887ce0(0x20,0x68,uVar2,"bio_lib.c",uVar3);
  return 0xfffffffe;
}

