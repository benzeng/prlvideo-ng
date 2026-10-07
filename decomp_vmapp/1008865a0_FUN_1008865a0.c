
bool FUN_1008865a0(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined1 local_28 [16];
  
  FUN_10081d470(local_28);
  if (DAT_1011c0938 == '\x01') {
    FUN_10081d010(5,0x13,"md_rand.c",0x22f);
    iVar3 = FUN_10081d4e0(&DAT_1011c0928,local_28);
    FUN_10081d010(6,0x13,"md_rand.c",0x231);
    bVar2 = true;
    if (iVar3 == 0) goto LAB_100886672;
  }
  FUN_10081d010(9,0x12,"md_rand.c",0x236);
  FUN_10081d010(9,0x13,"md_rand.c",0x23b);
  FUN_10081d4f0(&DAT_1011c0928,local_28);
  FUN_10081d010(10,0x13,"md_rand.c",0x23d);
  DAT_1011c0938 = '\x01';
  bVar2 = false;
LAB_100886672:
  if (DAT_1011c0939 == '\0') {
    FUN_100887450();
    DAT_1011c0939 = '\x01';
  }
  bVar1 = DAT_100b46198 <= DAT_1011c0940;
  if (!bVar2) {
    DAT_1011c0938 = '\0';
    FUN_10081d010(10,0x12,"md_rand.c",0x24c);
  }
  return bVar1;
}

