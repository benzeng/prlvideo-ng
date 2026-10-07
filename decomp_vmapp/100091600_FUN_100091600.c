
undefined8
FUN_100091600(long param_1,undefined1 param_2,ulong param_3,ulong param_4,ulong param_5,
             ulong param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  char cVar1;
  undefined8 *puVar2;
  
  if (*(uint *)(param_1 + 0xa4) < 0xe) {
    return 0;
  }
  if (*(long **)(param_1 + 0x10818) != (long *)0x0) {
    param_5 = param_5 & 0xffffffff;
    param_4 = param_4 & 0xffffffff;
    param_3 = param_3 & 0xffffffff;
    cVar1 = (**(code **)(**(long **)(param_1 + 0x10818) + 0x10))();
    param_6 = param_6 & 0xffffffff;
    if (cVar1 != '\0') {
      puVar2 = (undefined8 *)(param_1 + 0x10818);
      goto LAB_10009167a;
    }
  }
  puVar2 = (undefined8 *)(param_1 + 0x10810);
LAB_10009167a:
  (**(code **)(*(long *)*puVar2 + 0x18))
            ((long *)*puVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  FUN_100409080(param_1 + 0x10b0);
  return 1;
}

