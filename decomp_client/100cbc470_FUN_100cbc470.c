
undefined8 * FUN_100cbc470(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_100bf3540(0x18,"pqueue.c",0x47);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_2;
    puVar1[2] = 0;
    puVar2 = puVar1;
  }
  return puVar2;
}

