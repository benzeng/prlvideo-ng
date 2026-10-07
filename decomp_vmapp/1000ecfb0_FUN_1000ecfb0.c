
undefined1 FUN_1000ecfb0(long param_1,long param_2,undefined4 param_3,uint param_4,char param_5)

{
  long lVar1;
  char cVar2;
  char *pcVar3;
  
  lVar1 = param_1 + 0x78;
  cVar2 = FUN_1000eb0e0(param_1,lVar1,param_4 & 0xfffe1fff,0);
  if (cVar2 == '\0') {
    pcVar3 = "Processing callbacks before loading failed.";
  }
  else {
    cVar2 = FUN_1000ec6e0(0,param_1,lVar1,param_2,param_3,
                          ((ulong)(param_5 == '\0') + 1) * 0x10 + param_2,0,param_4,0);
    if (cVar2 == '\0') {
      pcVar3 = "Loading data failed";
    }
    else {
      cVar2 = FUN_1000eb0e0(param_1,lVar1,param_4 & 0xfffe4fff,0);
      if (cVar2 != '\0') {
        return 1;
      }
      pcVar3 = "Processing callbacks after loading failed";
    }
  }
  FUN_1008e3970("","vm",0,pcVar3);
  return 0;
}

