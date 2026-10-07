
undefined8 FUN_100708990(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x98))();
  if (cVar1 != '\0') {
    uVar2 = FUN_100761a10((int)param_1[1]);
    return uVar2;
  }
  return 0xffffffffffffffff;
}

