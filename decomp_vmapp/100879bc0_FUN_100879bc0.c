
long FUN_100879bc0(void)

{
  long lVar1;
  
  FUN_10081d010(9,0x1e,"eng_list.c",0xbc);
  lVar1 = DAT_1011c0880;
  if (DAT_1011c0880 != 0) {
    *(int *)(DAT_1011c0880 + 0xac) = *(int *)(DAT_1011c0880 + 0xac) + 1;
  }
  FUN_10081d010(10,0x1e,"eng_list.c",0xc2);
  return lVar1;
}

