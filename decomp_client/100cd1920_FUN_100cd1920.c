
undefined8 * FUN_100cd1920(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x0;
  if (param_1 != 0) {
    puVar1 = operator_new(0xa8);
    FUN_100cd0150(puVar1,param_1,2);
    *puVar1 = &PTR_FUN_102259bd8;
    *(undefined8 *)((long)puVar1 + 0x9c) = 0;
    *(undefined8 *)((long)puVar1 + 0x94) = 0;
    *(undefined8 *)((long)puVar1 + 0x8c) = 0;
    *(undefined8 *)((long)puVar1 + 0x84) = 0;
    *(undefined8 *)((long)puVar1 + 0x7c) = 0;
    *(undefined8 *)((long)puVar1 + 0x74) = 0;
    *(undefined8 *)((long)puVar1 + 0x6c) = 0;
  }
  return puVar1;
}

