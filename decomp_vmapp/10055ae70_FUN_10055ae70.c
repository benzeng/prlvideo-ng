
undefined1 FUN_10055ae70(long param_1)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  undefined1 uVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  uVar5 = (ulong)(*(int *)(lVar1 + 8) + 0x1fU >> 3 & 0x1ffffffc);
  pvVar2 = operator_new__(uVar5,(nothrow_t *)PTR_nothrow_100ba21c8);
  *(void **)(param_1 + 0x38) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    uVar4 = 0;
    FUN_1008e3970("","TransMem",0,"CSnapshotEngineSparse::init(%u blocks) failed to allocate bitmap"
                  ,*(undefined4 *)(lVar1 + 8));
  }
  else {
    if (*(long *)(param_1 + 0x20) != 0) {
      pvVar3 = _valloc((ulong)*(uint *)(lVar1 + 4));
      *(void **)(param_1 + 0x48) = pvVar3;
      if (pvVar3 == (void *)0x0) {
        FUN_1008e3970("","TransMem",0,"CSnapshotEngineSparse::init() failed to allocate buffer");
        if (*(void **)(param_1 + 0x38) != (void *)0x0) {
          operator_delete__(*(void **)(param_1 + 0x38));
        }
        *(undefined8 *)(param_1 + 0x38) = 0;
        return 0;
      }
    }
    ___bzero(pvVar2,uVar5);
    uVar4 = 1;
  }
  return uVar4;
}

