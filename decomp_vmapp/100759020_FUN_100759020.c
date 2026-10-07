
undefined1 FUN_100759020(ulong param_1,code *param_2,uint param_3,long param_4,int param_5)

{
  char cVar1;
  void *pvVar2;
  ulong uVar3;
  undefined1 uVar4;
  ulong uVar5;
  
  uVar5 = (ulong)param_3;
  pvVar2 = operator_new__(uVar5,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (pvVar2 == (void *)0x0) {
    uVar4 = 0;
    FUN_1008e3970("","dbgdump",0,"Failed to allocatde temporary buffer");
  }
  else {
    uVar3 = param_1 - 0x50000000;
    if (param_1 >> 0x1c < 0xb) {
      uVar3 = param_1;
    }
    cVar1 = FUN_100756dc0(*DAT_1011ccb80,pvVar2,uVar5,DAT_1011ccb80[1] + uVar3);
    if (cVar1 == '\0') {
      FUN_1008e3970("","dbgdump",0,"------ Reading at off=0x%llx 0x%x bytes FAILED",uVar3,param_3);
    }
    cVar1 = (*param_2)(pvVar2,uVar5);
    if (cVar1 == '\0') {
      operator_delete__(pvVar2);
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
      if ((param_4 != 0) && (param_5 != 0)) {
        cVar1 = FUN_100756dc0(*DAT_1011ccb80,param_4,param_5,DAT_1011ccb80[1] + uVar3);
        if (cVar1 == '\0') {
          uVar4 = 0;
          FUN_1008e3970("","dbgdump",0,"------ Reading at off=0x%llx 0x%x bytes FAILED",uVar3,
                        param_5);
        }
      }
      operator_delete__(pvVar2);
    }
  }
  return uVar4;
}

