
undefined8 FUN_100549c00(long param_1,int *param_2)

{
  return *(undefined8 *)
          (*(long *)(param_1 + 0x20) + 0x10 +
          ((long)*param_2 + (long)*(int *)(*(long *)(param_1 + 0x20) + 8)) * 8);
}

