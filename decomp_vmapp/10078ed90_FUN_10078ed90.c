
undefined8 FUN_10078ed90(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0) {
    uVar1 = 0;
  }
  else if (*(long *)(param_1 + 0x18) < param_2) {
    uVar1 = 0;
  }
  else {
    *(long *)(param_1 + 0x20) = param_2;
    uVar1 = QIODevice::seek(param_1);
  }
  return uVar1;
}

