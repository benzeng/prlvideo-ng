
bool FUN_100820ce0(void)

{
  bool bVar1;
  
  bVar1 = true;
  if (DAT_1011c06d0 == 0) {
    FUN_10081e310(3);
    DAT_1011c06d0 = FUN_1008856e0(FUN_100820d40,FUN_100820d90);
    FUN_10081e310(2);
    bVar1 = DAT_1011c06d0 != 0;
  }
  return bVar1;
}

