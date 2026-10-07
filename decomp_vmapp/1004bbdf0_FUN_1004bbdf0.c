
long FUN_1004bbdf0(long param_1,uint param_2,long param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = 0;
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    lVar4 = (ulong)param_2 * 0x20;
    lVar2 = *(long *)(param_1 + 0x28 + lVar4);
    if (lVar2 != 0) {
      if (((lVar2 == param_3) && (*(int *)(param_1 + 0x30 + lVar4) == param_4)) &&
         ((*(int *)(param_1 + 0x34 + lVar4) == param_5 &&
          ((*(int *)(param_1 + 0x38 + lVar4) == param_6 &&
           (*(int *)(param_1 + 0x3c + lVar4) == param_7)))))) {
        return *(long *)(param_1 + 0x40 + lVar4);
      }
      lVar3 = *(long *)(param_1 + 0x40 + lVar4);
      if (lVar3 != 0) {
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                        "Release CGImage for display [%d] (new: mem=%p;w=%d;h=%d) (prev: mem=%p;w=%d;h=%d)\n"
                        ,param_2,param_3,param_4,param_5,lVar2,
                        *(undefined4 *)(param_1 + 0x30 + lVar4),
                        *(undefined4 *)(param_1 + 0x34 + lVar4));
          lVar3 = *(long *)(param_1 + 0x40 + lVar4);
        }
        _CGImageRelease(lVar3);
      }
    }
    plVar1 = (long *)(param_1 + 0x28 + lVar4);
    plVar1[3] = 0;
    plVar1[2] = 0;
    plVar1[1] = 0;
    *plVar1 = 0;
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                    "Create new CGImage for display [%d] (mem=%p;w=%d;h=%d)\n",param_2,param_3,
                    param_4,param_5);
    }
    lVar3 = FUN_1004be6d0();
    *(long *)(param_1 + 0x40 + lVar4) = lVar3;
    lVar2 = 0;
    if (lVar3 != 0) {
      *plVar1 = param_3;
      *(int *)(param_1 + 0x30 + lVar4) = param_4;
      *(int *)(param_1 + 0x34 + lVar4) = param_5;
      *(int *)(param_1 + 0x38 + lVar4) = param_6;
      *(int *)(param_1 + 0x3c + lVar4) = param_7;
      lVar2 = lVar3;
    }
  }
  return lVar2;
}

