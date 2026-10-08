
void FUN_1001cc200(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if (DAT_102310878 != (long *)0x0) {
    (**(code **)(*DAT_102310878 + 0x20))();
  }
  DAT_102310878 = (long *)0x0;
  if (DAT_1023108f8 != (long *)0x0) {
    (**(code **)(*DAT_1023108f8 + 0x20))();
  }
  DAT_1023108f8 = (long *)0x0;
  uVar2 = FUN_100794960();
  FUN_100794b70(uVar2);
  if (DAT_102310998 == (long *)0x0) {
    plVar3 = operator_new(0x18);
    FUN_1006faf60(plVar3);
    DAT_102274400 = 1;
    DAT_102310998 = plVar3;
  }
  (**(code **)(*DAT_102310998 + 0x20))(DAT_102310998);
  DAT_102310998 = (long *)0x0;
  if (DAT_102310a18 != (long *)0x0) {
    (**(code **)(*DAT_102310a18 + 0x20))();
  }
  DAT_102310a18 = (long *)0x0;
  if (DAT_1023109b0 != (long *)0x0) {
    (**(code **)(*DAT_1023109b0 + 0x20))();
  }
  DAT_1023109b0 = (long *)0x0;
  FUN_100d75320();
  FUN_100a28840();
  FUN_1000a4a90();
  FUN_1001063c0();
  FUN_1000eed20();
  FUN_10009cd80();
  FUN_10073d910();
  FUN_1001c4d10();
  if (DAT_1023109d0 != (long *)0x0) {
    (**(code **)(*DAT_1023109d0 + 0x20))();
  }
  DAT_1023109d0 = (long *)0x0;
  if (DAT_1023109c8 != (long *)0x0) {
    (**(code **)(*DAT_1023109c8 + 0x20))();
  }
  DAT_1023109c8 = (long *)0x0;
  if (DAT_102310938 != (long *)0x0) {
    (**(code **)(*DAT_102310938 + 0x20))();
  }
  DAT_102310938 = (long *)0x0;
  if (DAT_102310900 != (long *)0x0) {
    (**(code **)(*DAT_102310900 + 0x20))();
  }
  DAT_102310900 = (long *)0x0;
  if (DAT_1023109b8 != (long *)0x0) {
    (**(code **)(*DAT_1023109b8 + 0x20))();
  }
  DAT_1023109b8 = (long *)0x0;
  if (DAT_1023108e8 != (long *)0x0) {
    (**(code **)(*DAT_1023108e8 + 0x20))();
  }
  DAT_1023108e8 = (long *)0x0;
  FUN_100031990();
  puVar1 = PTR_m_instance_1021e12d8;
  if (*(long **)PTR_m_instance_1021e12d8 != (long *)0x0) {
    (**(code **)(**(long **)PTR_m_instance_1021e12d8 + 0x20))();
  }
  *(undefined8 *)puVar1 = 0;
  if (DAT_1023108f0 != (long *)0x0) {
    (**(code **)(*DAT_1023108f0 + 0x20))();
  }
  DAT_1023108f0 = (long *)0x0;
  return;
}

