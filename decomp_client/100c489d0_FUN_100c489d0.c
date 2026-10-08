
undefined8 FUN_100c489d0(void *param_1,int param_2,void *param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 < (int)param_4) {
    uVar1 = 0x6e;
    uVar2 = 0x45;
  }
  else {
    if (param_2 <= (int)param_4) {
      _memcpy(param_1,param_3,(ulong)param_4);
      return 1;
    }
    uVar1 = 0x7a;
    uVar2 = 0x4a;
  }
  FUN_100c62ee0(4,0x6b,uVar1,"rsa_none.c",uVar2);
  return 0;
}

