
bool FUN_100c617a0(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined1 local_28 [16];
  
  FUN_100bf2be0(local_28);
  if (DAT_102316378 == '\x01') {
    FUN_100bf2780(5,0x13,"md_rand.c",0x22f);
    iVar3 = FUN_100bf2c50(&DAT_102316368,local_28);
    FUN_100bf2780(6,0x13,"md_rand.c",0x231);
    bVar2 = true;
    if (iVar3 == 0) goto LAB_100c61872;
  }
  FUN_100bf2780(9,0x12,"md_rand.c",0x236);
  FUN_100bf2780(9,0x13,"md_rand.c",0x23b);
  FUN_100bf2c60(&DAT_102316368,local_28);
  FUN_100bf2780(10,0x13,"md_rand.c",0x23d);
  DAT_102316378 = '\x01';
  bVar2 = false;
LAB_100c61872:
  if (DAT_102316379 == '\0') {
    FUN_100c62650();
    DAT_102316379 = '\x01';
  }
  bVar1 = DAT_100e11070 <= DAT_102316380;
  if (!bVar2) {
    DAT_102316378 = '\0';
    FUN_100bf2780(10,0x12,"md_rand.c",0x24c);
  }
  return bVar1;
}

