
undefined8 FUN_100091700(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  
  if (0xd < *(uint *)(param_1 + 0xa4)) {
    if ((*(long **)(param_1 + 0x10818) == (long *)0x0) ||
       (cVar1 = (**(code **)(**(long **)(param_1 + 0x10818) + 0x10))(), cVar1 == '\0')) {
      puVar2 = (undefined8 *)(param_1 + 0x10810);
    }
    else {
      puVar2 = (undefined8 *)(param_1 + 0x10818);
    }
    (**(code **)(*(long *)*puVar2 + 0x38))((long *)*puVar2,param_2,param_3,param_4);
    FUN_100409080(param_1 + 0x10b0);
    return 1;
  }
  return 0;
}

