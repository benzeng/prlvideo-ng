
undefined8 FUN_1002d70e0(long param_1)

{
  char cVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x850) != 0) && (cVar1 = FUN_1000afc00(DAT_1011c3698), cVar1 == '\0')) {
    lVar2 = FUN_1000b3d20(DAT_1011c3698);
    if ((ulong)(lVar2 - *(long *)(param_1 + 0x850)) < (ulong)DAT_1011c5658) {
      return 0x1011c5601;
    }
    *(undefined8 *)(param_1 + 0x850) = 0;
  }
  return 0;
}

