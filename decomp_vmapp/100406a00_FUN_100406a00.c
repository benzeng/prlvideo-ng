
undefined4 FUN_100406a00(long *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint in_EAX;
  undefined4 uVar2;
  void *pvVar3;
  undefined8 uStack_38;
  
  uStack_38 = (ulong)in_EAX;
  cVar1 = (**(code **)(*(long *)param_1[1] + 0x98))();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 4) = 0x16;
    uStack_38._4_4_ = 0;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x50))(param_1);
    if (cVar1 == '\0') {
      pvVar3 = _malloc((ulong)param_3);
      if (pvVar3 == (void *)0x0) {
        FUN_1008e3970("","FddImage",0,"Error allocating memory block");
        return 0;
      }
      _memset(pvVar3,param_4 & 0xff,(ulong)param_3);
      (**(code **)(*(long *)param_1[1] + 0x60))((long *)param_1[1],param_2,0);
      cVar1 = (**(code **)(*(long *)param_1[1] + 0x38))
                        ((long *)param_1[1],pvVar3,param_3,(long)&uStack_38 + 4);
      if (cVar1 == '\0') {
        uStack_38 = uStack_38 & 0xffffffff;
      }
      _free(pvVar3);
    }
    uVar2 = FUN_100768f60();
    *(undefined4 *)(param_1 + 4) = uVar2;
  }
  return uStack_38._4_4_;
}

