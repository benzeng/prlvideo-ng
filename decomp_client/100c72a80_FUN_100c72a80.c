
undefined8 FUN_100c72a80(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (((param_1 == (long *)0x0) || (lVar1 = *param_1, lVar1 == 0)) || (*(long *)(lVar1 + 0x38) == 0)
     ) {
    FUN_100c62ee0(6,0x93,0x96,"pmeth_gn.c",0x7b);
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 4;
    uVar2 = 1;
    if (*(code **)(lVar1 + 0x30) != (code *)0x0) {
      uVar2 = (**(code **)(lVar1 + 0x30))(param_1);
      if ((int)uVar2 < 1) {
        *(undefined4 *)(param_1 + 4) = 0;
      }
    }
  }
  return uVar2;
}

