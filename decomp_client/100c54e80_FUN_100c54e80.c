
long FUN_100c54e80(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    FUN_100c62ee0(0x26,0x73,0x43,"eng_list.c",0xd9);
    lVar1 = 0;
  }
  else {
    FUN_100bf2780(9,0x1e,"eng_list.c",0xdc);
    lVar1 = *(long *)(param_1 + 0xd0);
    if (lVar1 != 0) {
      *(int *)(lVar1 + 0xac) = *(int *)(lVar1 + 0xac) + 1;
    }
    FUN_100bf2780(10,0x1e,"eng_list.c",0xe3);
    FUN_100c54a90(param_1);
  }
  return lVar1;
}

