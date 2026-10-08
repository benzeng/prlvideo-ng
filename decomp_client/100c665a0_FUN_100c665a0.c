
undefined8 FUN_100c665a0(long *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*param_1 == 0) {
    uVar2 = 0x83;
    uVar3 = 0x255;
  }
  else {
    pcVar1 = *(code **)(*param_1 + 0x48);
    if (pcVar1 == (code *)0x0) {
      uVar2 = 0x84;
      uVar3 = 0x25a;
    }
    else {
      uVar2 = (*pcVar1)();
      if ((int)uVar2 != -1) {
        return uVar2;
      }
      uVar2 = 0x85;
      uVar3 = 0x261;
    }
  }
  FUN_100c62ee0(6,0x7c,uVar2,"evp_enc.c",uVar3);
  return 0;
}

