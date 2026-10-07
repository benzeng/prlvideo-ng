
undefined8 FUN_1004dc560(long *param_1,undefined8 param_2)

{
  char cVar1;
  
  while( true ) {
    cVar1 = (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],param_2);
    if (cVar1 == '\0') {
      return 0;
    }
    cVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
    if (cVar1 != '\0') break;
    (**(code **)(*(long *)param_1[1] + 0x10))();
  }
  return 1;
}

