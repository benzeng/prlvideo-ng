
void FUN_1007920e0(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*param_2 != 0) && (lVar1 = *(long *)(*param_2 + 0x10), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
  }
  return;
}

