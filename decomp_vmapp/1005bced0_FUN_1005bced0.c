
undefined8 FUN_1005bced0(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_2 + 8) + 0x10);
  (**(code **)(*plVar1 + 0x20))(param_1,plVar1,param_2 + 0x60);
  return param_1;
}

