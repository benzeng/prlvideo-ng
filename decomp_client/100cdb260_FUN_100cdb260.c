
undefined1 FUN_100cdb260(long param_1,char param_2)

{
  undefined8 uVar1;
  
  if (param_2 == '\0') {
    uVar1 = _PushSymbolicHotKeyMode(1);
    *(undefined8 *)(param_1 + 0x408) = uVar1;
  }
  else {
    _PopSymbolicHotKeyMode(*(undefined8 *)(param_1 + 0x408));
  }
  return 1;
}

