
void FUN_10079a9f0(long param_1,undefined4 param_2,undefined8 param_3,ulong param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar2;
  undefined4 local_34;
  
  uVar2 = (undefined4)((ulong)in_stack_ffffffffffffffa8 >> 0x20);
  local_34 = 0;
  if ((*(int *)(param_1 + 0x68) == 2) && (*(char *)(param_1 + 0x370) != '\0')) {
    uVar1 = FUN_10080ee80(*(undefined8 *)(param_1 + 0x328));
    param_4 = param_4 & 0xffffffff;
    if ((uVar1 & 0x3000) == 0) {
      FUN_1007b59b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      return;
    }
  }
  FUN_10079edb0(param_1,param_2,param_3,param_4,&local_34,1,CONCAT44(uVar2,param_5),param_6,param_7)
  ;
  return;
}

