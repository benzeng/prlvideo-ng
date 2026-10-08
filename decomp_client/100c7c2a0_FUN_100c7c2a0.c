
void FUN_100c7c2a0(long *param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != (long *)0x0) && (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0)) {
    FUN_100c57f20(puVar1[2]);
    FUN_100c60790(*puVar1,FUN_100c7c190);
    if (puVar1[3] != 0) {
      FUN_100bf3910();
    }
    FUN_100bf3910(puVar1);
    *param_1 = 0;
  }
  return;
}

