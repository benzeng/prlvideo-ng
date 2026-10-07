
undefined8 FUN_10056bc40(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  if ((*param_1 == param_1[2] + 0x128) || (*(long *)(*param_1 + 0x28) != param_1[5])) {
    if ((lVar2 == param_1[2] + 0x128) || (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != param_1[5])) {
      uVar1 = CONCAT71((int7)((ulong)lVar2 >> 8),1);
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

