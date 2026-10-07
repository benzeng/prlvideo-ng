
void FUN_10081ead0(long *param_1,undefined4 param_2,long param_3,undefined4 param_4,uint param_5)

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
  if ((DAT_1011c0680 & 1) == 0) {
    return;
  }
  FUN_10081d470(local_40);
  FUN_10081d010(5,0x14,"mem_dbg.c",0x11d);
  if ((DAT_1011c0680 & 2) == 0) {
    iVar2 = FUN_10081d4e0(&DAT_1011c0688,local_40);
    FUN_10081d010(6,0x14,"mem_dbg.c",0x122);
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    FUN_10081d010(6,0x14,"mem_dbg.c",0x122);
  }
  FUN_10081e310(3);
  plVar3 = (long *)FUN_10081ddd0(0x48,"mem_dbg.c",0x1e1);
  if (plVar3 != (long *)0x0) {
    if ((DAT_1011c06a8 == 0) &&
       (DAT_1011c06a8 = FUN_1008856e0(FUN_10081ed70,FUN_10081eda0), DAT_1011c06a8 == 0)) {
      FUN_10081e1a0(param_1);
      param_1 = plVar3;
    }
    else {
      *plVar3 = (long)param_1;
      plVar3[2] = param_3;
      *(undefined4 *)(plVar3 + 3) = param_4;
      *(undefined4 *)(plVar3 + 1) = param_2;
      if (((byte)DAT_1011c0698 & 2) == 0) {
        plVar3[5] = 0;
        plVar3[4] = 0;
      }
      else {
        FUN_10081d470();
      }
      if (DAT_1011c06b0 == 0) {
        plVar3[6] = 0;
      }
      lVar5 = DAT_1011c06b0 + 1;
      plVar3[6] = DAT_1011c06b0;
      DAT_1011c06b0 = lVar5;
      if (((byte)DAT_1011c0698 & 1) == 0) {
        plVar3[7] = 0;
      }
      else {
        tVar4 = _time((time_t *)0x0);
        plVar3[7] = tVar4;
      }
      FUN_10081d470(local_78);
      plVar3[8] = 0;
      if ((DAT_1011c06a0 != 0) && (lVar5 = FUN_100885dc0(DAT_1011c06a0,local_78), lVar5 != 0)) {
        plVar3[8] = lVar5;
        *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
      }
      param_1 = (long *)FUN_1008859e0(DAT_1011c06a8,plVar3);
      if (param_1 == (long *)0x0) goto LAB_10081ecdd;
      if (param_1[8] != 0) {
        piVar1 = (int *)(param_1[8] + 0x30);
        *piVar1 = *piVar1 + -1;
      }
    }
  }
  FUN_10081e1a0(param_1);
LAB_10081ecdd:
  FUN_10081d010(9,0x14,"mem_dbg.c",0xd4);
  if ((((DAT_1011c0680 & 1) != 0) && (DAT_1011c0684 != 0)) &&
     (DAT_1011c0684 = DAT_1011c0684 + -1, DAT_1011c0684 == 0)) {
    DAT_1011c0680 = DAT_1011c0680 | 2;
    FUN_10081d010(10,0x1b,"mem_dbg.c",0x109);
  }
  FUN_10081d010(10,0x14,"mem_dbg.c",0x112);
  return;
}

