
void FUN_100bf4870(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 local_28;
  int local_20;
  undefined8 local_18;
  
  if ((DAT_102316098 == 0) && (DAT_102316090 == 0)) {
    return;
  }
  FUN_100bf3a80(3);
  local_18 = 0;
  local_20 = 0;
  local_28 = param_1;
  if ((DAT_102316098 == 0) || (FUN_100c61110(DAT_102316098,FUN_100bf4a10,&local_28), local_20 == 0))
  {
    FUN_100bf2780(9,0x14,"mem_dbg.c",0x2eb);
    uVar1 = DAT_102316070;
    DAT_102316070 = 0;
    if (DAT_102316098 != 0) {
      FUN_100c60b60();
      DAT_102316098 = 0;
    }
    if ((DAT_102316090 != 0) && (lVar2 = FUN_100c61180(), lVar2 == 0)) {
      FUN_100c60b60(DAT_102316090);
      DAT_102316090 = 0;
    }
    DAT_102316070 = uVar1;
    FUN_100bf2780(10,0x14,"mem_dbg.c",0x300);
  }
  else {
    FUN_100c5c0c0(param_1,"%ld bytes leaked in %d chunks\n",local_18);
  }
  FUN_100bf2780(9,0x14,"mem_dbg.c",0xd4);
  if ((((DAT_102316070 & 1) != 0) && (DAT_102316074 != 0)) &&
     (DAT_102316074 = DAT_102316074 + -1, DAT_102316074 == 0)) {
    DAT_102316070 = DAT_102316070 | 2;
    FUN_100bf2780(10,0x1b,"mem_dbg.c",0x109);
  }
  FUN_100bf2780(10,0x14,"mem_dbg.c",0x112);
  return;
}

