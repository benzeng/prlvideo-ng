
void FUN_100a6ab60(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((*param_2 != 0) && (puVar1 = *(undefined8 **)(*param_2 + 0x10), puVar1 != (undefined8 *)0x0))
  {
    uVar2 = *puVar1;
    *(undefined8 *)(param_1 + 0x18) = puVar1[1];
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    lVar3 = 0;
    if (*param_2 != 0) {
      lVar3 = *(long *)(*param_2 + 0x10);
    }
    uVar2 = *(undefined8 *)(lVar3 + 0x20);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
  }
  return;
}

