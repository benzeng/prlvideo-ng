
void FUN_1000d6c70(long *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  cVar1 = FUN_1000bd150();
  if ((cVar1 == '\0') && ((**(code **)(*param_1 + 0xa0))(param_1), param_3 == '\0')) {
    return;
  }
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001548f0(uVar2,param_1 + 2);
  if (lVar3 == 0) {
    return;
  }
  uVar2 = FUN_10018c280(lVar3);
  uVar2 = FUN_100319c80(uVar2);
  if (param_3 == '\0') {
    FUN_10033ab80(uVar2);
  }
  else {
    FUN_10033ac80();
  }
  uVar2 = FUN_10018c280(lVar3);
  uVar2 = FUN_100319d20(uVar2);
  FUN_10035a010(uVar2,4,1);
  return;
}

