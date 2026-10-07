
undefined8
FUN_100698990(long *param_1,code *param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5,
             undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
             undefined8 param_10,undefined4 param_11,undefined8 param_12)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  
  cVar4 = (**(code **)(*param_1 + 0xe0))();
  iVar5 = 0;
  if (cVar4 == '\0') {
    cVar4 = (**(code **)(**(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1) + 0xc0))();
    if (cVar4 != '\0') {
      return 0x80021044;
    }
    pvVar6 = operator_new(0x8a8,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (pvVar6 == (void *)0x0) {
      FUN_1008e3970("","dimg",0,"Error: out of memory");
      iVar5 = -0x7ffffffe;
    }
    else {
      *(undefined8 *)((long)pvVar6 + 0x18) = 0;
      FUN_10070ae60();
      iVar5 = FUN_100698760(param_1,pvVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            param_9,param_10,param_11);
      if (-1 < iVar5) {
        *(undefined4 *)((long)pvVar6 + 0x58) = 0;
        lVar1 = *param_1;
        uVar2 = *(ulong *)(*(long *)(lVar1 + -0x18) + 0x38 + (long)param_1);
        *(ulong *)((long)pvVar6 + 0x50) = *(ulong *)((long)pvVar6 + 0x20) / uVar2;
        *(void **)((long)pvVar6 + 0x60) = pvVar6;
        *(long **)((long)pvVar6 + 0x68) = param_1;
        *(code **)((long)pvVar6 + 0x98) = FUN_100698500;
        *(undefined8 *)((long)pvVar6 + 0x80) = param_12;
        *(undefined4 *)((long)pvVar6 + 0xa0) = *(undefined4 *)((long)pvVar6 + 0x28);
        *(undefined4 *)((long)pvVar6 + 0xa4) = 1;
        *(undefined8 *)((long)pvVar6 + 0xa8) = *(undefined8 *)((long)pvVar6 + 0x18);
        *(undefined4 *)((long)pvVar6 + 0xb0) = *(undefined4 *)((long)pvVar6 + 0x28);
        plVar3 = *(long **)(*(long *)(lVar1 + -0x18) + 8 + (long)param_1);
        (**(code **)(*plVar3 + 0x50))
                  (plVar3,(long)pvVar6 + 0x50,*(ulong *)((long)pvVar6 + 0x20) % uVar2);
        return 0;
      }
      FUN_1008e3970("","dimg",0,"Error: prepare of async req failed, err %x",iVar5);
      (**(code **)(*param_1 + 0xf0))(param_1);
      if (*(void **)((long)pvVar6 + 0x18) != (void *)0x0) {
        _free(*(void **)((long)pvVar6 + 0x18));
      }
      operator_delete(pvVar6);
    }
  }
  (*param_2)(param_3,iVar5);
  return 0;
}

