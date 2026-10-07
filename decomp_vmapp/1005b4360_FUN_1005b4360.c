
int FUN_1005b4360(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_20 = 0;
  local_28 = *(undefined4 *)(param_1 + 0x118);
  local_30 = param_2;
  iVar1 = FUN_1005b1220(param_1 + 0x48,FUN_1005b43d0,&local_30);
  if (iVar1 < 0) {
    FUN_1008e3970("","vdisk",0,"Scannig failed, err = 0x%X",iVar1);
  }
  return iVar1;
}

