
undefined8 * FUN_10087e1f0(undefined8 *param_1,uint param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((char)param_2 == '\0') {
      do {
        if (((uint *)*param_1 != (uint *)0x0) && ((*(uint *)*param_1 & param_2) != 0)) {
          return param_1;
        }
        param_1 = (undefined8 *)param_1[7];
      } while (param_1 != (undefined8 *)0x0);
    }
    else {
      do {
        if (((uint *)*param_1 != (uint *)0x0) && (*(uint *)*param_1 == param_2)) {
          return param_1;
        }
        param_1 = (undefined8 *)param_1[7];
      } while (param_1 != (undefined8 *)0x0);
    }
  }
  return (undefined8 *)0x0;
}

