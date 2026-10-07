
uint FUN_10081e310(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 local_28 [16];
  
  uVar1 = DAT_1011c0680;
  FUN_10081d010(9,0x14,"mem_dbg.c",0xd4);
  switch(param_1) {
  case 0:
    DAT_1011c0680 = 0;
    DAT_1011c0684 = 0;
    break;
  case 1:
    DAT_1011c0680 = 3;
    DAT_1011c0684 = 0;
    break;
  case 2:
    if ((((DAT_1011c0680 & 1) != 0) && (DAT_1011c0684 != 0)) &&
       (DAT_1011c0684 = DAT_1011c0684 + -1, DAT_1011c0684 == 0)) {
      DAT_1011c0680 = DAT_1011c0680 | 2;
      FUN_10081d010(10,0x1b,"mem_dbg.c",0x109);
    }
    break;
  case 3:
    if ((DAT_1011c0680 & 1) != 0) {
      FUN_10081d470(local_28);
      if ((DAT_1011c0684 == 0) || (iVar2 = FUN_10081d4e0(&DAT_1011c0688,local_28), iVar2 != 0)) {
        FUN_10081d010(10,0x14,"mem_dbg.c",0xf4);
        FUN_10081d010(9,0x1b,"mem_dbg.c",0xfb);
        FUN_10081d010(9,0x14,"mem_dbg.c",0xfc);
        DAT_1011c0680 = DAT_1011c0680 & 0xfffffffd;
        FUN_10081d4f0(&DAT_1011c0688,local_28);
      }
      DAT_1011c0684 = DAT_1011c0684 + 1;
    }
  }
  FUN_10081d010(10,0x14,"mem_dbg.c",0x112);
  return uVar1;
}

