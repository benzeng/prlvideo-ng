
undefined8 * FUN_10009a990(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = operator_new(0x18);
  *plVar1 = param_2;
  plVar1[1] = param_2 + 8;
  *(undefined4 *)(plVar1 + 2) = 0;
  QMutex::lock();
  *(undefined4 *)(plVar1 + 2) = 1;
  uVar2 = FUN_10009f2a0(plVar1);
  *param_1 = uVar2;
  return param_1;
}

