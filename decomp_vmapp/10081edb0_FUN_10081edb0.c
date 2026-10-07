
void FUN_10081edb0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long local_70 [9];
  undefined1 local_28 [16];
  
  if (((param_1 != 0) && (param_2 == 0)) && ((DAT_1011c0680 & 1) != 0)) {
    FUN_10081d470(local_28);
    FUN_10081d010(5,0x14,"mem_dbg.c",0x11d);
    bVar3 = true;
    if ((DAT_1011c0680 & 2) == 0) {
      iVar1 = FUN_10081d4e0(&DAT_1011c0688,local_28);
      bVar3 = iVar1 != 0;
    }
    FUN_10081d010(6,0x14,"mem_dbg.c",0x122);
    if ((bVar3) && (DAT_1011c06a8 != 0)) {
      FUN_10081e310(3);
      local_70[0] = param_1;
      lVar2 = FUN_100885c10(DAT_1011c06a8,local_70);
      if (lVar2 != 0) {
        if (*(long *)(lVar2 + 0x40) != 0) {
          FUN_10081ef20();
        }
        FUN_10081e1a0(lVar2);
      }
      FUN_10081d010(9,0x14,"mem_dbg.c",0xd4);
      if ((((DAT_1011c0680 & 1) != 0) && (DAT_1011c0684 != 0)) &&
         (DAT_1011c0684 = DAT_1011c0684 + -1, DAT_1011c0684 == 0)) {
        DAT_1011c0680 = DAT_1011c0680 | 2;
        FUN_10081d010(10,0x1b,"mem_dbg.c",0x109);
      }
      FUN_10081d010(10,0x14,"mem_dbg.c",0x112);
    }
  }
  return;
}

