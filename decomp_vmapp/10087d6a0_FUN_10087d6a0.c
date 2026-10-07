
undefined8 FUN_10087d6a0(long *param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) || (*(long *)(*param_1 + 0x18) == 0)) {
    uVar3 = 0x79;
    uVar4 = 0xc4;
  }
  else {
    pcVar1 = (code *)param_1[1];
    if ((pcVar1 != (code *)0x0) &&
       (uVar3 = (*pcVar1)(param_1,2,param_2,param_3,0,1), (int)uVar3 < 1)) {
      return uVar3;
    }
    if ((int)param_1[3] != 0) {
      uVar3 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
      iVar2 = (int)uVar3;
      if (0 < iVar2) {
        param_1[10] = param_1[10] + (long)iVar2;
      }
      if (pcVar1 == (code *)0x0) {
        return uVar3;
      }
      uVar3 = (*pcVar1)(param_1,0x82,param_2,param_3,0,(long)iVar2);
      return uVar3;
    }
    uVar3 = 0x78;
    uVar4 = 0xce;
  }
  FUN_100887ce0(0x20,0x6f,uVar3,"bio_lib.c",uVar4);
  return 0xfffffffe;
}

