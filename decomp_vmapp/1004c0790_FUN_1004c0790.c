
void FUN_1004c0790(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x20)) {
    local_10 = param_2;
    uStack_c = param_3;
    FUN_1004c0a30(param_1 + 0x10,&local_10);
  }
  else {
    **(undefined8 **)(param_1 + 0x18) = CONCAT44(param_3,param_2);
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 8;
  }
  return;
}

