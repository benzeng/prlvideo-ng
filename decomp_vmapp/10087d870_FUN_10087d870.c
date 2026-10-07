
undefined8 FUN_10087d870(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) || (*(long *)(*param_1 + 0x20) == 0)) {
    uVar3 = 0x79;
    uVar4 = 0x103;
  }
  else {
    pcVar1 = (code *)param_1[1];
    if ((pcVar1 != (code *)0x0) && (uVar3 = (*pcVar1)(param_1,4,param_2,0,0,1), (int)uVar3 < 1)) {
      return uVar3;
    }
    if ((int)param_1[3] != 0) {
      uVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
      iVar2 = (int)uVar3;
      if (0 < iVar2) {
        param_1[0xb] = param_1[0xb] + (long)iVar2;
      }
      if (pcVar1 == (code *)0x0) {
        return uVar3;
      }
      uVar3 = (*pcVar1)(param_1,0x84,param_2,0,0,(long)iVar2);
      return uVar3;
    }
    uVar3 = 0x78;
    uVar4 = 0x10d;
  }
  FUN_100887ce0(0x20,0x6e,uVar3,"bio_lib.c",uVar4);
  return 0xfffffffe;
}

