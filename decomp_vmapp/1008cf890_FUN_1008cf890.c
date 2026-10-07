
void FUN_1008cf890(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (lVar1 = *(long *)(param_1 + 0x10), lVar1 != 0)) {
    *(undefined8 *)(lVar1 + 0x30) = 0;
    FUN_100885f10(lVar1,FUN_1008cf8f0,lVar1);
    FUN_100885ea0(*(undefined8 *)(param_1 + 0x10),FUN_1008cf910);
    FUN_100885960(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}

