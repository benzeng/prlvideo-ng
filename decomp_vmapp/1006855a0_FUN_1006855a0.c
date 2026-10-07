
undefined8 FUN_1006855a0(long *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_2c;
  
  local_2c = 0;
  lVar1 = param_1[7];
  cVar2 = (**(code **)(*param_1 + 0x198))(param_1,param_4 * lVar1,param_3,"write");
  uVar4 = 0x80021027;
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*(long *)param_1[1] + 0x48))
                      ((long *)param_1[1],param_2,param_3 & 0xffffffff,&local_2c,param_4 * lVar1);
    uVar4 = 0;
    if (cVar2 == '\0') {
      uVar3 = FUN_100768f60();
      FUN_1008e3970("","dimg",0,"write() failed!: %d",uVar3);
      uVar4 = 0x80021027;
    }
  }
  return uVar4;
}

