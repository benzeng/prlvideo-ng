
undefined4 FUN_100539c70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = 1;
  UNLOCK();
  return uVar1;
}

