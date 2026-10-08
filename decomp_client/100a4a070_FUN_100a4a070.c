
undefined8 FUN_100a4a070(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 8) == 0) {
    uVar1 = 0x80000009;
  }
  else {
    uVar1 = _PrlTool_Unregister();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return uVar1;
}

