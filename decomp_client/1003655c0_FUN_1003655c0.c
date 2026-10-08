
void FUN_1003655c0(long param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_10035dcf0(*(undefined8 *)(param_1 + 8),2);
  if (cVar1 != '\0') {
    cVar1 = FUN_10035ddf0(*(undefined8 *)(param_1 + 8),0);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x30))(*(long **)(param_1 + 0x18),0x13,0);
      if (uVar2 < 2) {
        FUN_10035db20(*(undefined8 *)(param_1 + 8),0x10,1);
        return;
      }
    }
  }
  return;
}

