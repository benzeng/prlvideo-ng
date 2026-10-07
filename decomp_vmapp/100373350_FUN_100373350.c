
undefined8 * FUN_100373350(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *local_48 [3];
  undefined8 local_30;
  
  puVar1 = (undefined8 *)FUN_100373f70(param_1,&local_30,param_2);
  puVar2 = (undefined8 *)*puVar1;
  if (puVar2 == (undefined8 *)0x0) {
    FUN_100374160(local_48,param_1,param_2);
    puVar2 = local_48[0];
    local_48[0] = (undefined8 *)0x0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[2] = local_30;
    *puVar1 = puVar2;
    puVar3 = puVar2;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar3 = (undefined8 *)*puVar1;
    }
    FUN_1000e8bb0(param_1[1],puVar3);
    param_1[2] = param_1[2] + 1;
  }
  return puVar2 + 0x34;
}

