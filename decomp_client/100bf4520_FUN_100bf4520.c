
void FUN_100bf4520(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long local_70 [9];
  undefined1 local_28 [16];
  
  if (((param_1 != 0) && (param_2 == 0)) && ((DAT_102316070 & 1) != 0)) {
    FUN_100bf2be0(local_28);
    FUN_100bf2780(5,0x14,"mem_dbg.c",0x11d);
    bVar3 = true;
    if ((DAT_102316070 & 2) == 0) {
      iVar1 = FUN_100bf2c50(&DAT_102316078,local_28);
      bVar3 = iVar1 != 0;
    }
    FUN_100bf2780(6,0x14,"mem_dbg.c",0x122);
    if ((bVar3) && (DAT_102316098 != 0)) {
      FUN_100bf3a80(3);
      local_70[0] = param_1;
      lVar2 = FUN_100c60e10(DAT_102316098,local_70);
      if (lVar2 != 0) {
        if (*(long *)(lVar2 + 0x40) != 0) {
          FUN_100bf4690();
        }
        FUN_100bf3910(lVar2);
      }
      FUN_100bf2780(9,0x14,"mem_dbg.c",0xd4);
      if ((((DAT_102316070 & 1) != 0) && (DAT_102316074 != 0)) &&
         (DAT_102316074 = DAT_102316074 + -1, DAT_102316074 == 0)) {
        DAT_102316070 = DAT_102316070 | 2;
        FUN_100bf2780(10,0x1b,"mem_dbg.c",0x109);
      }
      FUN_100bf2780(10,0x14,"mem_dbg.c",0x112);
    }
  }
  return;
}

