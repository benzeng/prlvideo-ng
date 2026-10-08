
undefined8 FUN_100bf3cd0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 local_38 [16];
  
  if ((DAT_102316070 & 1) != 0) {
    FUN_100bf2be0(local_38);
    FUN_100bf2780(5,0x14,"mem_dbg.c",0x11d);
    if ((DAT_102316070 & 2) == 0) {
      iVar1 = FUN_100bf2c50(&DAT_102316078,local_38);
      FUN_100bf2780(6,0x14,"mem_dbg.c",0x122);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      FUN_100bf2780(6,0x14,"mem_dbg.c",0x122);
    }
    FUN_100bf3a80(3);
    lVar2 = FUN_100bf3540(0x38,"mem_dbg.c",0x18d);
    if (lVar2 != 0) {
      if ((DAT_102316090 == 0) &&
         (DAT_102316090 = FUN_100c608e0(FUN_100bf3e90,FUN_100bf3ec0), DAT_102316090 == 0)) {
        FUN_100bf3910(lVar2);
      }
      else {
        FUN_100bf2be0(lVar2);
        *(undefined8 *)(lVar2 + 0x10) = param_2;
        *(undefined4 *)(lVar2 + 0x18) = param_3;
        *(undefined8 *)(lVar2 + 0x20) = param_1;
        *(undefined4 *)(lVar2 + 0x30) = 1;
        *(undefined8 *)(lVar2 + 0x28) = 0;
        lVar3 = FUN_100c60be0(DAT_102316090,lVar2);
        if (lVar3 != 0) {
          *(long *)(lVar2 + 0x28) = lVar3;
        }
      }
    }
    FUN_100bf2780(9,0x14,"mem_dbg.c",0xd4);
    if ((((DAT_102316070 & 1) != 0) && (DAT_102316074 != 0)) &&
       (DAT_102316074 = DAT_102316074 + -1, DAT_102316074 == 0)) {
      DAT_102316070 = DAT_102316070 | 2;
      FUN_100bf2780(10,0x1b,"mem_dbg.c",0x109);
    }
    FUN_100bf2780(10,0x14,"mem_dbg.c",0x112);
  }
  return 0;
}

