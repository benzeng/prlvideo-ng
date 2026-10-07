
bool FUN_10081e760(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  undefined1 local_50 [56];
  
  if ((DAT_1011c0680 & 1) == 0) {
    bVar4 = false;
  }
  else {
    FUN_10081d470(local_50);
    FUN_10081d010(5,0x14,"mem_dbg.c",0x11d);
    if ((DAT_1011c0680 & 2) == 0) {
      iVar2 = FUN_10081d4e0(&DAT_1011c0688,local_50);
      FUN_10081d010(6,0x14,"mem_dbg.c",0x122);
      if (iVar2 == 0) {
        return false;
      }
    }
    else {
      FUN_10081d010(6,0x14,"mem_dbg.c",0x122);
    }
    FUN_10081e310(3);
    lVar3 = 0;
    if (DAT_1011c06a0 != 0) {
      FUN_10081d470(local_50);
      lVar3 = FUN_100885c10(DAT_1011c06a0,local_50);
      if (lVar3 != 0) {
        lVar1 = *(long *)(lVar3 + 0x28);
        if (lVar1 != 0) {
          *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + 1;
          FUN_1008859e0(DAT_1011c06a0,lVar1);
        }
        iVar2 = *(int *)(lVar3 + 0x30);
        *(int *)(lVar3 + 0x30) = iVar2 + -1;
        if (iVar2 < 2) {
          *(undefined8 *)(lVar3 + 0x28) = 0;
          if (lVar1 != 0) {
            *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
          }
          FUN_10081e1a0(lVar3);
        }
      }
    }
    bVar4 = lVar3 != 0;
    FUN_10081d010(9,0x14,"mem_dbg.c",0xd4);
    if ((((DAT_1011c0680 & 1) != 0) && (DAT_1011c0684 != 0)) &&
       (DAT_1011c0684 = DAT_1011c0684 + -1, DAT_1011c0684 == 0)) {
      DAT_1011c0680 = DAT_1011c0680 | 2;
      FUN_10081d010(10,0x1b,"mem_dbg.c",0x109);
    }
    FUN_10081d010(10,0x14,"mem_dbg.c",0x112);
  }
  return bVar4;
}

