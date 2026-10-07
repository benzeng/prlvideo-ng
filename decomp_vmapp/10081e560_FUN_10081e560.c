
undefined8 FUN_10081e560(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 local_38 [16];
  
  if ((DAT_1011c0680 & 1) != 0) {
    FUN_10081d470(local_38);
    FUN_10081d010(5,0x14,"mem_dbg.c",0x11d);
    if ((DAT_1011c0680 & 2) == 0) {
      iVar1 = FUN_10081d4e0(&DAT_1011c0688,local_38);
      FUN_10081d010(6,0x14,"mem_dbg.c",0x122);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      FUN_10081d010(6,0x14,"mem_dbg.c",0x122);
    }
    FUN_10081e310(3);
    lVar2 = FUN_10081ddd0(0x38,"mem_dbg.c",0x18d);
    if (lVar2 != 0) {
      if ((DAT_1011c06a0 == 0) &&
         (DAT_1011c06a0 = FUN_1008856e0(FUN_10081e720,FUN_10081e750), DAT_1011c06a0 == 0)) {
        FUN_10081e1a0(lVar2);
      }
      else {
        FUN_10081d470(lVar2);
        *(undefined8 *)(lVar2 + 0x10) = param_2;
        *(undefined4 *)(lVar2 + 0x18) = param_3;
        *(undefined8 *)(lVar2 + 0x20) = param_1;
        *(undefined4 *)(lVar2 + 0x30) = 1;
        *(undefined8 *)(lVar2 + 0x28) = 0;
        lVar3 = FUN_1008859e0(DAT_1011c06a0,lVar2);
        if (lVar3 != 0) {
          *(long *)(lVar2 + 0x28) = lVar3;
        }
      }
    }
    FUN_10081d010(9,0x14,"mem_dbg.c",0xd4);
    if ((((DAT_1011c0680 & 1) != 0) && (DAT_1011c0684 != 0)) &&
       (DAT_1011c0684 = DAT_1011c0684 + -1, DAT_1011c0684 == 0)) {
      DAT_1011c0680 = DAT_1011c0680 | 2;
      FUN_10081d010(10,0x1b,"mem_dbg.c",0x109);
    }
    FUN_10081d010(10,0x14,"mem_dbg.c",0x112);
  }
  return 0;
}

