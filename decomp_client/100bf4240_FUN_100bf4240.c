
void FUN_100bf4240(long *param_1,undefined4 param_2,long param_3,undefined4 param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  time_t tVar4;
  long lVar5;
  undefined1 local_78 [56];
  undefined1 local_40 [16];
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if ((param_5 & 0x7f) != 1) {
    return;
  }
  if ((DAT_102316070 & 1) == 0) {
    return;
  }
  FUN_100bf2be0(local_40);
  FUN_100bf2780(5,0x14,"mem_dbg.c",0x11d);
  if ((DAT_102316070 & 2) == 0) {
    iVar2 = FUN_100bf2c50(&DAT_102316078,local_40);
    FUN_100bf2780(6,0x14,"mem_dbg.c",0x122);
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    FUN_100bf2780(6,0x14,"mem_dbg.c",0x122);
  }
  FUN_100bf3a80(3);
  plVar3 = (long *)FUN_100bf3540(0x48,"mem_dbg.c",0x1e1);
  if (plVar3 != (long *)0x0) {
    if ((DAT_102316098 == 0) &&
       (DAT_102316098 = FUN_100c608e0(FUN_100bf44e0,FUN_100bf4510), DAT_102316098 == 0)) {
      FUN_100bf3910(param_1);
      param_1 = plVar3;
    }
    else {
      *plVar3 = (long)param_1;
      plVar3[2] = param_3;
      *(undefined4 *)(plVar3 + 3) = param_4;
      *(undefined4 *)(plVar3 + 1) = param_2;
      if (((byte)DAT_102316088 & 2) == 0) {
        plVar3[5] = 0;
        plVar3[4] = 0;
      }
      else {
        FUN_100bf2be0();
      }
      if (DAT_1023160a0 == 0) {
        plVar3[6] = 0;
      }
      lVar5 = DAT_1023160a0 + 1;
      plVar3[6] = DAT_1023160a0;
      DAT_1023160a0 = lVar5;
      if (((byte)DAT_102316088 & 1) == 0) {
        plVar3[7] = 0;
      }
      else {
        tVar4 = _time((time_t *)0x0);
        plVar3[7] = tVar4;
      }
      FUN_100bf2be0(local_78);
      plVar3[8] = 0;
      if ((DAT_102316090 != 0) && (lVar5 = FUN_100c60fc0(DAT_102316090,local_78), lVar5 != 0)) {
        plVar3[8] = lVar5;
        *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
      }
      param_1 = (long *)FUN_100c60be0(DAT_102316098,plVar3);
      if (param_1 == (long *)0x0) goto LAB_100bf444d;
      if (param_1[8] != 0) {
        piVar1 = (int *)(param_1[8] + 0x30);
        *piVar1 = *piVar1 + -1;
      }
    }
  }
  FUN_100bf3910(param_1);
LAB_100bf444d:
  FUN_100bf2780(9,0x14,"mem_dbg.c",0xd4);
  if ((((DAT_102316070 & 1) != 0) && (DAT_102316074 != 0)) &&
     (DAT_102316074 = DAT_102316074 + -1, DAT_102316074 == 0)) {
    DAT_102316070 = DAT_102316070 | 2;
    FUN_100bf2780(10,0x1b,"mem_dbg.c",0x109);
  }
  FUN_100bf2780(10,0x14,"mem_dbg.c",0x112);
  return;
}

