
undefined1 FUN_10057db20(long param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x1128);
  while( true ) {
    if (puVar2 == *(undefined8 **)(param_1 + 0x1130)) {
      return 1;
    }
    iVar1 = FUN_100598790(*puVar2);
    if (iVar1 != param_2) break;
    puVar2 = puVar2 + 1;
  }
  return 0;
}

