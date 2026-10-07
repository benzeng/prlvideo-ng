
long FUN_100879c20(void)

{
  long lVar1;
  
  FUN_10081d010(9,0x1e,"eng_list.c",0xca);
  lVar1 = DAT_1011c0888;
  if (DAT_1011c0888 != 0) {
    *(int *)(DAT_1011c0888 + 0xac) = *(int *)(DAT_1011c0888 + 0xac) + 1;
  }
  FUN_10081d010(10,0x1e,"eng_list.c",0xd0);
  return lVar1;
}

