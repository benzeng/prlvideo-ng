
int FUN_100580b60(long param_1,undefined4 param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  int iVar1;
  
  if (param_3 == 0) {
    FUN_1008e3970("","vdisk",0,"Images filter can\'t operate without parent");
    iVar1 = -0x7ffffffd;
  }
  else {
    iVar1 = FUN_100582470(param_1,param_4,param_5);
    if (iVar1 < 0) {
      FUN_1008e3970("","vdisk",0,"Error initializing images filtering 0x%x",iVar1);
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = param_2;
      *(long *)(param_1 + 0x58) = param_3;
      *(undefined1 *)(param_1 + 100) = 0;
      iVar1 = 0;
    }
  }
  return iVar1;
}

