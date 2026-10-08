
bool FUN_100bf3ed0(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  undefined1 local_50 [56];
  
  if ((DAT_102316070 & 1) == 0) {
    bVar4 = false;
  }
  else {
    FUN_100bf2be0(local_50);
    FUN_100bf2780(5,0x14,"mem_dbg.c",0x11d);
    if ((DAT_102316070 & 2) == 0) {
      iVar2 = FUN_100bf2c50(&DAT_102316078,local_50);
      FUN_100bf2780(6,0x14,"mem_dbg.c",0x122);
      if (iVar2 == 0) {
        return false;
      }
    }
    else {
      FUN_100bf2780(6,0x14,"mem_dbg.c",0x122);
    }
    FUN_100bf3a80(3);
    lVar3 = 0;
    if (DAT_102316090 != 0) {
      FUN_100bf2be0(local_50);
      lVar3 = FUN_100c60e10(DAT_102316090,local_50);
      if (lVar3 != 0) {
        lVar1 = *(long *)(lVar3 + 0x28);
        if (lVar1 != 0) {
          *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + 1;
          FUN_100c60be0(DAT_102316090,lVar1);
        }
        iVar2 = *(int *)(lVar3 + 0x30);
        *(int *)(lVar3 + 0x30) = iVar2 + -1;
        if (iVar2 < 2) {
          *(undefined8 *)(lVar3 + 0x28) = 0;
          if (lVar1 != 0) {
            *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
          }
          FUN_100bf3910(lVar3);
        }
      }
    }
    bVar4 = lVar3 != 0;
    FUN_100bf2780(9,0x14,"mem_dbg.c",0xd4);
    if ((((DAT_102316070 & 1) != 0) && (DAT_102316074 != 0)) &&
       (DAT_102316074 = DAT_102316074 + -1, DAT_102316074 == 0)) {
      DAT_102316070 = DAT_102316070 | 2;
      FUN_100bf2780(10,0x1b,"mem_dbg.c",0x109);
    }
    FUN_100bf2780(10,0x14,"mem_dbg.c",0x112);
  }
  return bVar4;
}

