
void FUN_10081ef60(long param_1,long param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,int param_6)

{
  int iVar1;
  long *plVar2;
  long local_80 [9];
  undefined1 local_38 [16];
  
  if ((param_2 != 0) && (param_6 == 1)) {
    if (param_1 == 0) {
      FUN_10081ead0(param_2,param_3,param_4,param_5,0x81);
    }
    else if ((DAT_1011c0680 & 1) != 0) {
      FUN_10081d470(local_38);
      FUN_10081d010(5,0x14,"mem_dbg.c",0x11d);
      if ((DAT_1011c0680 & 2) == 0) {
        iVar1 = FUN_10081d4e0(&DAT_1011c0688,local_38);
        FUN_10081d010(6,0x14,"mem_dbg.c",0x122);
        if (iVar1 == 0) {
          return;
        }
      }
      else {
        FUN_10081d010(6,0x14,"mem_dbg.c",0x122);
      }
      FUN_10081e310(3);
      local_80[0] = param_1;
      plVar2 = (long *)FUN_100885c10(DAT_1011c06a8,local_80);
      if (plVar2 != (long *)0x0) {
        *plVar2 = param_2;
        *(undefined4 *)(plVar2 + 1) = param_3;
        FUN_1008859e0(DAT_1011c06a8,plVar2);
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

