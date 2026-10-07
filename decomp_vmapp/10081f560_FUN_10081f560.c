
void FUN_10081f560(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (DAT_1011c06a8 != 0) {
    FUN_10081e310(3);
    uVar1 = FUN_10087ece0();
    lVar2 = FUN_10087d330(uVar1);
    FUN_10081d010(9,0x14,"mem_dbg.c",0xd4);
    if ((((DAT_1011c0680 & 1) != 0) && (DAT_1011c0684 != 0)) &&
       (DAT_1011c0684 = DAT_1011c0684 + -1, DAT_1011c0684 == 0)) {
      DAT_1011c0680 = DAT_1011c0680 | 2;
      FUN_10081d010(10,0x1b,"mem_dbg.c",0x109);
    }
    FUN_10081d010(10,0x14,"mem_dbg.c",0x112);
    if (lVar2 != 0) {
      FUN_10087db60(lVar2,0x6a,0,param_1);
      FUN_10081f100(lVar2);
      FUN_10087d4e0(lVar2);
      return;
    }
  }
  return;
}

