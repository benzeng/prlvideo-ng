
bool FUN_10081e4c0(void)

{
  int iVar1;
  bool bVar2;
  undefined1 local_20 [16];
  
  bVar2 = false;
  if (((byte)DAT_1011c0680 & 1) != 0) {
    FUN_10081d470(local_20);
    FUN_10081d010(5,0x14,"mem_dbg.c",0x11d);
    bVar2 = true;
    if (((byte)DAT_1011c0680 & 2) == 0) {
      iVar1 = FUN_10081d4e0(&DAT_1011c0688,local_20);
      bVar2 = iVar1 != 0;
    }
    FUN_10081d010(6,0x14,"mem_dbg.c",0x122);
  }
  return bVar2;
}

