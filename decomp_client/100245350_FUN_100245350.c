
undefined8 * FUN_100245350(undefined8 *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  if ((*(byte *)(param_2 + 0x28) & 2) == 0) {
    uVar2 = 0;
    if ((*(long *)(param_2 + 0x18) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_2 + 0x18) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_2 + 0x20);
    }
    cVar1 = FUN_10061b500(uVar2,1);
    if (cVar1 == '\0') {
      if ((*(byte *)(param_2 + 0x28) & 8) != 0) {
        uVar2 = 0;
        if ((*(long *)(param_2 + 0x18) != 0) &&
           (uVar2 = 0, *(int *)(*(long *)(param_2 + 0x18) + 4) != 0)) {
          uVar2 = *(undefined8 *)(param_2 + 0x20);
        }
        cVar1 = FUN_10061b4d0(uVar2,8);
        if (cVar1 != '\0') {
          local_24 = 1;
          FUN_100129840(param_1,&local_24);
        }
      }
      goto LAB_1002453a9;
    }
  }
  local_20[0] = 0;
  FUN_100129840(param_1,local_20);
LAB_1002453a9:
  local_28 = 2;
  FUN_100129840(param_1,&local_28);
  local_2c = 4;
  FUN_100129840(param_1,&local_2c);
  return param_1;
}

