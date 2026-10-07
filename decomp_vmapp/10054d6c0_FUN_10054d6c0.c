
undefined2 FUN_10054d6c0(long param_1)

{
  undefined2 uVar1;
  
  if (**(short **)(param_1 + 0x28) == 2) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT11((char)((ushort)**(short **)(param_1 + 0x28) >> 8),
                     *(long *)(param_1 + 0x88) != 0);
  }
  return uVar1;
}

