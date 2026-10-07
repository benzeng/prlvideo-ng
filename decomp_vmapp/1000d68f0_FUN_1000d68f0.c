
undefined8 FUN_1000d68f0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined4 local_1c;
  
  local_54 = 0x40001;
  local_50 = 0x3008d;
  local_58 = 0x65526153;
  local_4c = 0x1234567f;
  local_48 = 0xa28f;
  local_1c = 0;
  local_24 = 0;
  local_2c = 0;
  local_34 = 0;
  local_3c = 0;
  local_44 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  uVar2 = 0;
  (**(code **)(*param_1 + 0x88))(param_1,0);
  lVar1 = QIODevice::write((char *)param_1,(longlong)&local_58);
  if (lVar1 != 0x40) {
    FUN_1008e3970("","vm",0,"SaReFileWriteHeader Failed.");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

