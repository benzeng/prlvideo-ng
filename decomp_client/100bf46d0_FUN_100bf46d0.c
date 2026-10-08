
void FUN_100bf46d0(long param_1,long param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,int param_6)

{
  int iVar1;
  long *plVar2;
  long local_80 [9];
  undefined1 local_38 [16];
  
  if ((param_2 != 0) && (param_6 == 1)) {
    if (param_1 == 0) {
      FUN_100bf4240(param_2,param_3,param_4,param_5,0x81);
    }
    else if ((DAT_102316070 & 1) != 0) {
      FUN_100bf2be0(local_38);
      FUN_100bf2780(5,0x14,"mem_dbg.c",0x11d);
      if ((DAT_102316070 & 2) == 0) {
        iVar1 = FUN_100bf2c50(&DAT_102316078,local_38);
        FUN_100bf2780(6,0x14,"mem_dbg.c",0x122);
        if (iVar1 == 0) {
          return;
        }
      }
      else {
        FUN_100bf2780(6,0x14,"mem_dbg.c",0x122);
      }
      FUN_100bf3a80(3);
      local_80[0] = param_1;
      plVar2 = (long *)FUN_100c60e10(DAT_102316098,local_80);
      if (plVar2 != (long *)0x0) {
        *plVar2 = param_2;
        *(undefined4 *)(plVar2 + 1) = param_3;
        FUN_100c60be0(DAT_102316098,plVar2);
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

