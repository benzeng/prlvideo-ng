
undefined4 FUN_1000d6c10(long *param_1,undefined8 param_2,long param_3,uint *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 local_38;
  
  uVar2 = 0xffffffff;
  if (param_4 != (uint *)0x0) {
    uVar1 = FUN_1000d6260(param_1,param_2,&local_38);
    if (uVar1 != 0) {
      uVar2 = 0xffffffff;
      if ((param_3 != 0) && (uVar1 <= *param_4)) {
        (**(code **)(*param_1 + 0x88))(param_1,local_38);
        uVar1 = QIODevice::read((char *)param_1,param_3);
        uVar2 = (int)param_2;
      }
      *param_4 = uVar1;
    }
  }
  return uVar2;
}

