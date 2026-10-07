
void FUN_1008a0d20(long *param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != (long *)0x0) && (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0)) {
    FUN_10087cd20(puVar1[2]);
    FUN_100885590(*puVar1,FUN_1008a0c10);
    if (puVar1[3] != 0) {
      FUN_10081e1a0();
    }
    FUN_10081e1a0(puVar1);
    *param_1 = 0;
  }
  return;
}

