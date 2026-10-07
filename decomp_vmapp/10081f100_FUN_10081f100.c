
void FUN_10081f100(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 local_28;
  int local_20;
  undefined8 local_18;
  
  if ((DAT_1011c06a8 == 0) && (DAT_1011c06a0 == 0)) {
    return;
  }
  FUN_10081e310(3);
  local_18 = 0;
  local_20 = 0;
  local_28 = param_1;
  if ((DAT_1011c06a8 == 0) || (FUN_100885f10(DAT_1011c06a8,FUN_10081f2a0,&local_28), local_20 == 0))
  {
    FUN_10081d010(9,0x14,"mem_dbg.c",0x2eb);
    uVar1 = DAT_1011c0680;
    DAT_1011c0680 = 0;
    if (DAT_1011c06a8 != 0) {
      FUN_100885960();
      DAT_1011c06a8 = 0;
    }
    if ((DAT_1011c06a0 != 0) && (lVar2 = FUN_100885f80(), lVar2 == 0)) {
      FUN_100885960(DAT_1011c06a0);
      DAT_1011c06a0 = 0;
    }
    DAT_1011c0680 = uVar1;
    FUN_10081d010(10,0x14,"mem_dbg.c",0x300);
  }
  else {
    FUN_100880ec0(param_1,"%ld bytes leaked in %d chunks\n",local_18);
  }
  FUN_10081d010(9,0x14,"mem_dbg.c",0xd4);
  if ((((DAT_1011c0680 & 1) != 0) && (DAT_1011c0684 != 0)) &&
     (DAT_1011c0684 = DAT_1011c0684 + -1, DAT_1011c0684 == 0)) {
    DAT_1011c0680 = DAT_1011c0680 | 2;
    FUN_10081d010(10,0x1b,"mem_dbg.c",0x109);
  }
  FUN_10081d010(10,0x14,"mem_dbg.c",0x112);
  return;
}

