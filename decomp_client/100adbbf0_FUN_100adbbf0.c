
undefined8 * FUN_100adbbf0(long param_1,int param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0;
  do {
    for (puVar2 = *(undefined8 **)(param_1 + uVar1 * 8); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      if (*(int *)(puVar2 + 9) == param_2) {
        return puVar2;
      }
    }
    for (puVar2 = *(undefined8 **)(param_1 + 8 + uVar1 * 8); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      if (*(int *)(puVar2 + 9) == param_2) {
        return puVar2;
      }
    }
    uVar1 = uVar1 + 2;
    if (0xff < uVar1) {
      return (undefined8 *)0x0;
    }
  } while( true );
}

