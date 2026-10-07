
long FUN_100879d10(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    FUN_100887ce0(0x26,0x74,0x43,"eng_list.c",0xed);
    lVar1 = 0;
  }
  else {
    FUN_10081d010(9,0x1e,"eng_list.c",0xf0);
    lVar1 = *(long *)(param_1 + 200);
    if (lVar1 != 0) {
      *(int *)(lVar1 + 0xac) = *(int *)(lVar1 + 0xac) + 1;
    }
    FUN_10081d010(10,0x1e,"eng_list.c",0xf7);
    FUN_100879890(param_1);
  }
  return lVar1;
}

