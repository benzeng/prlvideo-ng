
undefined4 FUN_1001fef25(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_54;
  undefined8 *local_30;
  long *local_20;
  
  if ((param_3 == 0) || (*param_2 == 0)) {
    local_54 = 0xffffffff;
  }
  else {
    *(undefined4 *)(*param_2 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
    local_30 = *(undefined8 **)(param_3 + 0x30);
    local_20 = (long *)0x0;
    for (; local_30 != (undefined8 *)0x0; local_30 = (undefined8 *)*local_30) {
      plVar2 = (long *)FUN_1001ee9b6(param_1);
      if (plVar2 == (long *)0x0) {
        return 0xffffffff;
      }
      plVar2[1] = local_30[1];
      if (local_20 == (long *)0x0) {
        *(long **)(*param_2 + 0x30) = plVar2;
      }
      else {
        *local_20 = (long)plVar2;
      }
      local_20 = plVar2;
    }
    if (*(long *)(*param_2 + 0x38) != 0) {
      FUN_1001eb6df(*(undefined8 *)(*param_2 + 0x38));
    }
    if (*(long *)(param_3 + 0x38) == 0) {
      *(undefined8 *)(*param_2 + 0x38) = 0;
    }
    else {
      lVar1 = *param_2;
      uVar3 = FUN_1001ee9b6(param_1);
      *(undefined8 *)(lVar1 + 0x38) = uVar3;
      if (*(long *)(*param_2 + 0x38) == 0) {
        return 0xffffffff;
      }
      *(undefined8 *)(*(long *)(*param_2 + 0x38) + 8) =
           *(undefined8 *)(*(long *)(param_3 + 0x38) + 8);
    }
    local_54 = 0;
  }
  return local_54;
}

