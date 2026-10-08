
void FUN_1004b6ba0(undefined8 *param_1)

{
  QWidget *pQVar1;
  
  *param_1 = &PTR_FUN_102216a10;
  param_1[2] = &PTR_FUN_102216c18;
  pQVar1 = (QWidget *)FUN_10044e620();
  CWidgetMapper::removeMapping(pQVar1);
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 0x20))();
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_10044e270(param_1);
  return;
}

