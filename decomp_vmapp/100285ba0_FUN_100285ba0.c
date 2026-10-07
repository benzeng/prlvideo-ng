
long * FUN_100285ba0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long *plVar5;
  long *plVar6;
  
  plVar1 = *(long **)(param_1 + 0x3a0b0);
  plVar6 = (long *)(param_1 + 0x3a0b0);
  if (plVar1 == plVar6) {
    FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]","false",
                  "../Scsi/Lsi/dev.cpp",0x2fc,"req_take");
  }
  else {
    lVar2 = *plVar1;
    plVar3 = (long *)plVar1[1];
    *(long **)(lVar2 + 8) = plVar3;
    *plVar3 = lVar2;
    *plVar1 = (long)plVar1;
    plVar1[1] = (long)plVar1;
    plVar3 = plVar1 + -0x13;
    plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (plVar5 == (long *)0x0) {
      plVar1[-1] = 0;
      FUN_1008e3970("","LocalDevices",0,"LSI: alloc failed");
      _free(plVar3);
    }
    else {
      *(undefined4 *)(plVar5 + 2) = 0;
      plVar5[1] = 0;
      *plVar5 = 0;
      FUN_10008d2d0(plVar5,param_2,0x1000);
      plVar1[-1] = (long)plVar5;
      lVar2 = *plVar5;
      plVar1[-2] = lVar2;
      if (lVar2 != 0) {
        *plVar3 = param_2;
        *(undefined4 *)((long)plVar1 + 0x3c) = 0;
        *(undefined4 *)(plVar1 + 8) = 0;
        *(undefined1 *)((long)plVar1 + 0x2a) = 0;
        *(undefined1 *)((long)plVar1 + 0x34) = 0;
        *(undefined1 *)((long)plVar1 + 0x35) = 0;
        plVar1[-0x11] = 0;
        plVar1[-0x12] = 0;
        *(undefined1 *)(plVar1 + 5) = 0;
        plVar1[4] = 0;
        plVar1[3] = 0;
        plVar1[2] = 0;
        return plVar3;
      }
      FUN_1008e3970("","LocalDevices",0,"LSI: map failed 0x%08llX",param_2);
      pvVar4 = (void *)plVar1[-1];
      if (pvVar4 != (void *)0x0) {
        FUN_10008d3f0(pvVar4);
        operator_delete(pvVar4);
      }
      lVar2 = *plVar1;
      plVar3 = (long *)plVar1[1];
      *(long **)(lVar2 + 8) = plVar3;
      *plVar3 = lVar2;
      lVar2 = *plVar6;
      *(long **)(lVar2 + 8) = plVar1;
      *plVar1 = lVar2;
      plVar1[1] = (long)plVar6;
      *plVar6 = (long)plVar1;
    }
  }
  return (long *)0x0;
}

