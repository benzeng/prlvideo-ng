
undefined8 FUN_10071c5d0(long param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_100152280();
  if (*(int *)(*param_2 + 4) == 0) {
    param_2 = (long *)(param_1 + 0x18);
  }
  lVar3 = FUN_1001548f0(uVar2,param_2);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar4 = FUN_10018c280(lVar3);
    uVar2 = FUN_100319c50(uVar4);
    cVar1 = FUN_100330a50(uVar2);
    uVar2 = 1;
    if (cVar1 == '\0') {
      uVar2 = FUN_100319c50(uVar4);
      uVar2 = FUN_100330b70(uVar2);
    }
  }
  return uVar2;
}

