
undefined8 FUN_100988e50(long param_1,int param_2,undefined1 *param_3)

{
  *param_3 = *(undefined1 *)
              (*(long *)(param_1 + 0x10) + 0x10 +
              ((long)param_2 + (long)*(int *)(*(long *)(param_1 + 0x10) + 8)) * 8);
  return 0;
}

