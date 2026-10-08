
undefined8 FUN_10098a040(long param_1,int param_2,undefined8 *param_3)

{
  *param_3 = *(undefined8 *)
              (*(long *)(param_1 + 0x10) + 0x10 +
              ((long)param_2 + (long)*(int *)(*(long *)(param_1 + 0x10) + 8)) * 8);
  return 0;
}

