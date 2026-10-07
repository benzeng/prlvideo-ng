
undefined8 FUN_1002d6560(undefined8 *param_1,int param_2)

{
  void *pvVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  cVar2 = (**(code **)(*(long *)*param_1 + 0x18))();
  uVar3 = 0;
  lVar4 = 9;
  if (cVar2 != '\0') {
    do {
      pvVar1 = (void *)param_1[lVar4];
      if ((pvVar1 != (void *)0x0) && (*(int *)((long)pvVar1 + 0xb0) == param_2)) {
        FUN_1002d7cd0(pvVar1);
        operator_delete(pvVar1);
        param_1[lVar4] = 0;
      }
      uVar5 = lVar4 - 7;
      uVar3 = 1;
      lVar4 = lVar4 + 1;
    } while (uVar5 < 0xff);
  }
  return uVar3;
}

