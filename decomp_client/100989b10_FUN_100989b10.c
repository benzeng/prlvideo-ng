
undefined8 FUN_100989b10(long param_1,int param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)
              (*(long *)(param_1 + 0x10) + 0x10 +
              ((long)param_2 + (long)*(int *)(*(long *)(param_1 + 0x10) + 8)) * 8);
  return 0;
}

