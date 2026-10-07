
int FUN_10081e910(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined1 local_60 [56];
  
  if ((DAT_1011c0680 & 1) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_10081d470(local_60);
    FUN_10081d010(5,0x14,"mem_dbg.c",0x11d);
    if ((DAT_1011c0680 & 2) == 0) {
      iVar3 = FUN_10081d4e0(&DAT_1011c0688,local_60);
      FUN_10081d010(6,0x14,"mem_dbg.c",0x122);
      if (iVar3 == 0) {
        return 0;
      }
    }
    else {
      FUN_10081d010(6,0x14,"mem_dbg.c",0x122);
    }
    FUN_10081e310(3);
    iVar3 = 0;
    if (DAT_1011c06a0 != 0) {
      iVar3 = 0;
      do {
        FUN_10081d470(local_60);
        lVar4 = FUN_100885c10(DAT_1011c06a0,local_60);
        if (lVar4 == 0) break;
        lVar2 = *(long *)(lVar4 + 0x28);
        if (lVar2 != 0) {
          *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
          FUN_1008859e0(DAT_1011c06a0,lVar2);
        }
        iVar1 = *(int *)(lVar4 + 0x30);
        *(int *)(lVar4 + 0x30) = iVar1 + -1;
        if (iVar1 < 2) {
          *(undefined8 *)(lVar4 + 0x28) = 0;
          if (lVar2 != 0) {
            *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + -1;
          }
          FUN_10081e1a0(lVar4);
        }
        iVar3 = iVar3 + 1;
      } while (DAT_1011c06a0 != 0);
    }
    FUN_10081d010(9,0x14,"mem_dbg.c",0xd4);
    if ((((DAT_1011c0680 & 1) != 0) && (DAT_1011c0684 != 0)) &&
       (DAT_1011c0684 = DAT_1011c0684 + -1, DAT_1011c0684 == 0)) {
      DAT_1011c0680 = DAT_1011c0680 | 2;
      FUN_10081d010(10,0x1b,"mem_dbg.c",0x109);
    }
    FUN_10081d010(10,0x14,"mem_dbg.c",0x112);
  }
  return iVar3;
}

