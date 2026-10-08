
undefined8 FUN_1003672a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_10035dcf0(*(undefined8 *)(param_1 + 8),2);
  if (cVar1 == '\0') {
    FUN_100363c20(*(undefined8 *)(param_1 + 0x18),param_2,10,0);
    uVar2 = FUN_1003652e0(param_1,param_2,param_3);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

