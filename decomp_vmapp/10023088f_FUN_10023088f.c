
void FUN_10023088f(long param_1,undefined4 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long local_50;
  
  if (((*(uint *)(param_1 + 0x38) >> 3 & 1) == 0) &&
     (lVar1 = FUN_1002301ee(param_2,param_5,param_6), lVar1 != 0)) {
    if (*(int *)(param_1 + 0x44) == 0) {
      *(undefined4 *)(param_1 + 0x44) = param_2;
    }
    local_50 = param_4;
    if (param_4 == 0) {
      local_50 = param_3;
    }
    FUN_10022d6c2(param_1,local_50,param_2,lVar1,param_5,param_6);
    (*(code *)_xmlFree)(lVar1);
  }
  return;
}

