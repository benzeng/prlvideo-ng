
undefined8 FUN_10057e140(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_2 + 8) + 0x10);
  (**(code **)(*plVar1 + 0xa8))(param_1,plVar1,0);
  return param_1;
}

