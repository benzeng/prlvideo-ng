
uint FUN_100bf3a80(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 local_28 [16];
  
  uVar1 = DAT_102316070;
  FUN_100bf2780(9,0x14,"mem_dbg.c",0xd4);
  switch(param_1) {
  case 0:
    DAT_102316070 = 0;
    DAT_102316074 = 0;
    break;
  case 1:
    DAT_102316070 = 3;
    DAT_102316074 = 0;
    break;
  case 2:
    if ((((DAT_102316070 & 1) != 0) && (DAT_102316074 != 0)) &&
       (DAT_102316074 = DAT_102316074 + -1, DAT_102316074 == 0)) {
      DAT_102316070 = DAT_102316070 | 2;
      FUN_100bf2780(10,0x1b,"mem_dbg.c",0x109);
    }
    break;
  case 3:
    if ((DAT_102316070 & 1) != 0) {
      FUN_100bf2be0(local_28);
      if ((DAT_102316074 == 0) || (iVar2 = FUN_100bf2c50(&DAT_102316078,local_28), iVar2 != 0)) {
        FUN_100bf2780(10,0x14,"mem_dbg.c",0xf4);
        FUN_100bf2780(9,0x1b,"mem_dbg.c",0xfb);
        FUN_100bf2780(9,0x14,"mem_dbg.c",0xfc);
        DAT_102316070 = DAT_102316070 & 0xfffffffd;
        FUN_100bf2c60(&DAT_102316078,local_28);
      }
      DAT_102316074 = DAT_102316074 + 1;
    }
  }
  FUN_100bf2780(10,0x14,"mem_dbg.c",0x112);
  return uVar1;
}

