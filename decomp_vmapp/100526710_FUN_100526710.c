
void * FUN_100526710(long param_1,long param_2,long param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  undefined1 local_58 [40];
  
  if (param_4 == '\0') {
    if (param_2 != 0) {
      FUN_1004ba370(param_2);
    }
    cVar1 = FUN_100528de0(param_1);
    pvVar7 = (void *)0x0;
    if (cVar1 != '\0') {
      uVar2 = FUN_1005268f0();
      pvVar4 = operator_new(0x20,(nothrow_t *)PTR_nothrow_100ba21c8);
      pvVar7 = (void *)0x0;
      if (pvVar4 != (void *)0x0) {
        FUN_10052a3e0(pvVar4,uVar2,0,3,4);
        uVar3 = FUN_10052a540();
        plVar5 = (long *)FUN_100529f40(pvVar4);
        lVar6 = 0;
        if (*plVar5 != 0) {
          lVar6 = *(long *)(*plVar5 + 0x10);
        }
        FUN_100526a00(param_1 + 0x820,param_1 + 0x810,(ulong)uVar3 + lVar6);
        pvVar7 = pvVar4;
      }
      if (param_2 != 0) {
        FUN_100528930(param_1,param_2);
      }
    }
    if (param_3 != 0) {
      FUN_100528750(param_1,param_3);
    }
    FUN_100528e30(param_1);
  }
  else {
    FUN_100529230(local_58,param_1);
    uVar2 = FUN_1005268f0(local_58,param_1 + 0x810);
    pvVar4 = operator_new(0x20,(nothrow_t *)PTR_nothrow_100ba21c8);
    pvVar7 = (void *)0x0;
    if (pvVar4 != (void *)0x0) {
      FUN_10052a3e0(pvVar4,uVar2,0,3,4);
      uVar3 = FUN_10052a540();
      plVar5 = (long *)FUN_100529f40(pvVar4);
      lVar6 = 0;
      if (*plVar5 != 0) {
        lVar6 = *(long *)(*plVar5 + 0x10);
      }
      FUN_100526a00(local_58,param_1 + 0x810,(ulong)uVar3 + lVar6);
      pvVar7 = pvVar4;
    }
    FUN_100529300(local_58);
  }
  return pvVar7;
}

