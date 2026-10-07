
undefined8 FUN_10056a220(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x1128);
  if (puVar2 != *(undefined8 **)(param_1 + 0x1130)) {
    do {
      uVar1 = (**(code **)(*(long *)*puVar2 + 0x40))((long *)*puVar2,param_2);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined8 **)(param_1 + 0x1130));
  }
  return 0;
}

