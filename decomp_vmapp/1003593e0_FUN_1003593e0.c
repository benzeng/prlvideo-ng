
undefined8 FUN_1003593e0(long *param_1,long param_2,int param_3)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  undefined8 uVar4;
  
  *param_1 = param_2;
  uVar4 = 1;
  lVar1 = FUN_1002fa2d0(param_2,1,*(undefined8 *)(param_2 + 0x868));
  param_1[1] = lVar1;
  if (lVar1 == 0) {
    FUN_1008e3970("","LocalDevices",0,"Error: Failed to create Direct3DProcess GL context");
  }
  else {
    FUN_1002adb30(*param_1,lVar1);
    if (param_3 < 0xa0000) {
      plVar3 = operator_new(0xe0);
      FUN_100360230(plVar3,*param_1,param_1);
      param_1[6] = (long)plVar3;
      param_1[5] = (long)plVar3;
      (**(code **)(*plVar3 + 0x18))(plVar3,param_1[0x200d]);
    }
    else {
      pvVar2 = operator_new(0xd0);
      FUN_1003628f0(pvVar2,*param_1,param_1);
      param_1[7] = (long)pvVar2;
      param_1[5] = (long)pvVar2;
    }
    uVar4 = 0;
  }
  return uVar4;
}

