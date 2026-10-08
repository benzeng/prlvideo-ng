
undefined8 * FUN_100adc120(undefined8 *param_1,long param_2,code *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *local_40 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  uVar3 = 0;
  do {
    for (puVar2 = *(undefined8 **)(param_2 + uVar3 * 8); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      local_40[0] = puVar2;
      if (param_3 == (code *)0x0) {
LAB_100adc17b:
        FUN_100adc750(param_1,local_40);
      }
      else {
        cVar1 = (*param_3)(puVar2);
        if (cVar1 != '\0') goto LAB_100adc17b;
      }
    }
    uVar3 = uVar3 + 1;
    if (0xff < uVar3) {
      return param_1;
    }
  } while( true );
}

