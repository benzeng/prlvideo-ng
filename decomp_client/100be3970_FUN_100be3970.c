
void FUN_100be3970(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x18) == lVar1)) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x38);
    *(undefined8 *)(lVar1 + 0x38) = 0;
  }
  if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_1 + 0x10) != param_2)) {
    FUN_100c59480();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (((lVar1 != 0) && (lVar1 != param_3)) && (*(long *)(param_1 + 0x10) != lVar1)) {
    FUN_100c59480();
  }
  *(long *)(param_1 + 0x10) = param_2;
  *(long *)(param_1 + 0x18) = param_3;
  return;
}

