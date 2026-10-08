
int FUN_100bf4080(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined1 local_60 [56];
  
  if ((DAT_102316070 & 1) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_100bf2be0(local_60);
    FUN_100bf2780(5,0x14,"mem_dbg.c",0x11d);
    if ((DAT_102316070 & 2) == 0) {
      iVar3 = FUN_100bf2c50(&DAT_102316078,local_60);
      FUN_100bf2780(6,0x14,"mem_dbg.c",0x122);
      if (iVar3 == 0) {
        return 0;
      }
    }
    else {
      FUN_100bf2780(6,0x14,"mem_dbg.c",0x122);
    }
    FUN_100bf3a80(3);
    iVar3 = 0;
    if (DAT_102316090 != 0) {
      iVar3 = 0;
      do {
        FUN_100bf2be0(local_60);
        lVar4 = FUN_100c60e10(DAT_102316090,local_60);
        if (lVar4 == 0) break;
        lVar2 = *(long *)(lVar4 + 0x28);
        if (lVar2 != 0) {
          *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
          FUN_100c60be0(DAT_102316090,lVar2);
        }
        iVar1 = *(int *)(lVar4 + 0x30);
        *(int *)(lVar4 + 0x30) = iVar1 + -1;
        if (iVar1 < 2) {
          *(undefined8 *)(lVar4 + 0x28) = 0;
          if (lVar2 != 0) {
            *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + -1;
          }
          FUN_100bf3910(lVar4);
        }
        iVar3 = iVar3 + 1;
      } while (DAT_102316090 != 0);
    }
    FUN_100bf2780(9,0x14,"mem_dbg.c",0xd4);
    if ((((DAT_102316070 & 1) != 0) && (DAT_102316074 != 0)) &&
       (DAT_102316074 = DAT_102316074 + -1, DAT_102316074 == 0)) {
      DAT_102316070 = DAT_102316070 | 2;
      FUN_100bf2780(10,0x1b,"mem_dbg.c",0x109);
    }
    FUN_100bf2780(10,0x14,"mem_dbg.c",0x112);
  }
  return iVar3;
}

