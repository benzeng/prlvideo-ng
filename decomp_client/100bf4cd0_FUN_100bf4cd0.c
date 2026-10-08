
void FUN_100bf4cd0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (DAT_102316098 != 0) {
    FUN_100bf3a80(3);
    uVar1 = FUN_100c59ee0();
    lVar2 = FUN_100c58530(uVar1);
    FUN_100bf2780(9,0x14,"mem_dbg.c",0xd4);
    if ((((DAT_102316070 & 1) != 0) && (DAT_102316074 != 0)) &&
       (DAT_102316074 = DAT_102316074 + -1, DAT_102316074 == 0)) {
      DAT_102316070 = DAT_102316070 | 2;
      FUN_100bf2780(10,0x1b,"mem_dbg.c",0x109);
    }
    FUN_100bf2780(10,0x14,"mem_dbg.c",0x112);
    if (lVar2 != 0) {
      FUN_100c58d60(lVar2,0x6a,0,param_1);
      FUN_100bf4870(lVar2);
      FUN_100c586e0(lVar2);
      return;
    }
  }
  return;
}

