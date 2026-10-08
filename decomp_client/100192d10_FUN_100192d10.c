
void FUN_100192d10(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_10018f900();
  if (cVar1 == '\0') {
    uVar2 = 0x800;
  }
  else {
    uVar2 = 0x1000;
  }
  FUN_100192d60(param_1,uVar2,param_2,param_3,param_4);
  return;
}

