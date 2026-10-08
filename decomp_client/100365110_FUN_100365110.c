
undefined8 FUN_100365110(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_10035dcf0(*(undefined8 *)(param_1 + 8),2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10035de90(*(undefined8 *)(param_1 + 8),0,0);
  }
  return uVar2;
}

