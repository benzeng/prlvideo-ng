
undefined8 FUN_100271650(undefined8 param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined4 local_7c;
  undefined1 local_78 [40];
  long local_50 [5];
  
  FUN_1001ce160(DAT_102310918);
  FUN_1001ce100(DAT_102310918);
  if (DAT_102310928 == (void *)0x0) {
    pvVar1 = operator_new(0x18);
    FUN_1001d4a60(pvVar1);
    DAT_102273638 = 1;
    DAT_102310928 = pvVar1;
  }
  FUN_1001d4b80(DAT_102310928);
  uVar2 = FUN_100152280();
  FUN_100155b20(uVar2);
  FUN_100271750(param_1);
  FUN_1001cda40(local_78,DAT_102310918);
  if (*(int *)(local_50[0] + 4) != 0) {
    uVar2 = FUN_1001d50a0();
    uVar2 = FUN_1001d50d0(uVar2);
    local_7c = 0x2713;
    FUN_1001e05f0(uVar2,local_50,&local_7c);
  }
  FUN_1001091d0(local_78);
  return 0;
}

