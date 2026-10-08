
undefined8 FUN_100c49ce0(undefined1 *param_1,int param_2,void *param_3,uint param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  size_t sVar5;
  
  param_2 = param_2 - param_4;
  if (param_2 < 2) {
    FUN_100c62ee0(4,0x7f,0x6e,"rsa_x931.c",0x51);
    uVar1 = 0xffffffff;
  }
  else {
    puVar2 = param_1 + 1;
    if (param_2 == 2) {
      *param_1 = 0x6a;
    }
    else {
      *param_1 = 0x6b;
      lVar4 = 2;
      puVar3 = puVar2;
      if (1 < param_2 + -2) {
        sVar5 = (size_t)(param_2 + -3);
        _memset(puVar2,0xbb,sVar5);
        puVar3 = param_1 + sVar5 + 1;
        lVar4 = sVar5 + 2;
      }
      puVar2 = param_1 + lVar4;
      *puVar3 = 0xba;
      param_1 = puVar3;
    }
    _memcpy(puVar2,param_3,(ulong)param_4);
    param_1[(long)(int)param_4 + 1] = 0xcc;
    uVar1 = 1;
  }
  return uVar1;
}

