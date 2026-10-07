
undefined8 FUN_1004dbc80(long param_1,int param_2,ulong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  cVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x40) + 0x10) + 0x18))();
  uVar2 = 0xf000001c;
  uVar3 = 0;
  if (cVar1 != '\0') {
    uVar3 = (ulong)(param_2 + 0x1ffU & 0xfffffe00);
    uVar2 = 0;
  }
  if (param_3 != (ulong *)0x0) {
    *param_3 = uVar3;
  }
  return uVar2;
}

