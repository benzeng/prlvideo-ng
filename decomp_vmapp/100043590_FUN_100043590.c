
undefined8 FUN_100043590(undefined8 param_1,long *param_2,uint param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*param_2 + 0x10);
  uVar1 = (ulong)*(uint *)(lVar3 + 0x1c) + 0x20;
  if (uVar1 == param_3) {
    if (*param_2 == 0) {
      lVar3 = 0;
    }
    if (uVar1 < (ulong)*(uint *)(lVar3 + 0x30) + 0x14) {
      uVar2 = 0;
    }
    else {
      FUN_100045b10(param_1,lVar3 + 0x20);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

