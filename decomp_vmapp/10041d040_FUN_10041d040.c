
undefined4 FUN_10041d040(undefined8 param_1,bool *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char local_9;
  
  local_9 = '\0';
  uVar1 = QByteArray::toInt(param_2,(int)&local_9);
  uVar2 = 0;
  if (local_9 != '\0') {
    uVar2 = uVar1;
  }
  return uVar2;
}

