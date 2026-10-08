
undefined8 FUN_100365390(long param_1)

{
  char cVar1;
  
  cVar1 = FUN_10035dcf0(*(undefined8 *)(param_1 + 8),2);
  if ((cVar1 != '\0') && (cVar1 = FUN_10035de90(*(undefined8 *)(param_1 + 8),0,0), cVar1 != '\0')) {
    return 0;
  }
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))(*(long **)(param_1 + 0x18),6,0);
  return 0;
}

