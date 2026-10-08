
undefined8 FUN_100ada0c0(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x80))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0xb8))(*(long **)(param_1 + 0x18),param_2);
  }
  return uVar2;
}

