
long FUN_100879c80(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    FUN_100887ce0(0x26,0x73,0x43,"eng_list.c",0xd9);
    lVar1 = 0;
  }
  else {
    FUN_10081d010(9,0x1e,"eng_list.c",0xdc);
    lVar1 = *(long *)(param_1 + 0xd0);
    if (lVar1 != 0) {
      *(int *)(lVar1 + 0xac) = *(int *)(lVar1 + 0xac) + 1;
    }
    FUN_10081d010(10,0x1e,"eng_list.c",0xe3);
    FUN_100879890(param_1);
  }
  return lVar1;
}

