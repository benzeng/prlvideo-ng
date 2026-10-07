
undefined8
FUN_1005f8b40(long param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (param_2 == 0) {
    pcVar2 = "Guest bitmap not specified";
  }
  else {
    *(long *)(param_1 + 0x68) = param_2;
    if (param_3 != 0) {
      *(int *)(param_1 + 0x70) = param_3;
      uVar1 = FUN_1005f6710(param_1,param_4,param_5);
      return uVar1;
    }
    pcVar2 = "Guest block size not specified";
  }
  FUN_1008e3970("","vdisk",0,pcVar2);
  return 0x80000003;
}

