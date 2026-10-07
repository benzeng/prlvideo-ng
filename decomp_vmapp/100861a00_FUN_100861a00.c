
undefined8 FUN_100861a00(long param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (param_1 != 0) {
    uVar2 = FUN_10085b870(param_1);
    iVar1 = FUN_10085b880(uVar2);
    if ((((iVar1 == 0x197) && (*(int *)(param_1 + 0x80) != 0)) && (*(int *)(param_1 + 0x84) != 0))
       && (((*(int *)(param_1 + 0x88) != 0 && (*(int *)(param_1 + 0x8c) != 0)) &&
           (*(int *)(param_1 + 0x90) == 0)))) {
      if (param_2 != (int *)0x0) {
        *param_2 = *(int *)(param_1 + 0x8c);
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(param_1 + 0x88);
      }
      uVar3 = 1;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(param_1 + 0x84);
      }
    }
    else {
      FUN_100887ce0(0x10,0xc1,0x42,"ec_asn1.c",0x77);
    }
  }
  return uVar3;
}

