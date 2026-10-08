
undefined4 FUN_100938e70(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *local_30;
  undefined8 *local_20;
  undefined8 *local_18;
  
  local_30 = *(undefined8 **)(param_2 + 0xa8);
  do {
    if (local_30 == (undefined8 *)0x0) {
      return 0;
    }
    if ((*(int *)local_30[1] != 1) && (((*(uint *)(local_30[1] + 0x58) >> 0x16 ^ 1) & 1) != 0)) {
      FUN_100939fa8(local_30[1],param_1);
    }
    if ((((*(uint *)(local_30[1] + 0x58) >> 7 & 1) != 0) &&
        (plVar2 = (long *)FUN_100934f21(local_30[1]), plVar2 != (long *)0x0)) &&
       (local_30[1] = plVar2[1], *plVar2 != 0)) {
      uVar1 = *local_30;
      local_18 = (undefined8 *)*plVar2;
      local_20 = local_30;
      for (; local_18 != (undefined8 *)0x0; local_18 = (undefined8 *)*local_18) {
        puVar3 = (undefined8 *)(*(code *)_xmlMalloc)(0x10);
        if (puVar3 == (undefined8 *)0x0) {
          FUN_10091b97e(param_1,"allocating a type link",0);
          return 0xffffffff;
        }
        puVar3[1] = local_18[1];
        *local_20 = puVar3;
        *puVar3 = uVar1;
        local_20 = puVar3;
      }
    }
    local_30 = (undefined8 *)*local_30;
  } while( true );
}

