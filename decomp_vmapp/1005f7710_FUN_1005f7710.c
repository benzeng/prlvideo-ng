
undefined8 FUN_1005f7710(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1007ea210(param_2);
  if (cVar1 != '\0') {
    FUN_1008e3970("","vdisk",0,"Snapshot uuid not specified");
    return 0x80000003;
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x6a) = param_2[1];
  *(undefined8 *)(param_1 + 0x62) = uVar2;
  uVar2 = FUN_1005f6710(param_1,param_3,param_4);
  return uVar2;
}

