
undefined8 FUN_100896850(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (((param_1 == (long *)0x0) || (lVar1 = *param_1, lVar1 == 0)) || (*(long *)(lVar1 + 0x48) == 0)
     ) {
    FUN_100887ce0(6,0x8d,0x96,"pmeth_fn.c",0x58);
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 8;
    uVar2 = 1;
    if (*(code **)(lVar1 + 0x40) != (code *)0x0) {
      uVar2 = (**(code **)(lVar1 + 0x40))(param_1);
      if ((int)uVar2 < 1) {
        *(undefined4 *)(param_1 + 4) = 0;
      }
    }
  }
  return uVar2;
}

