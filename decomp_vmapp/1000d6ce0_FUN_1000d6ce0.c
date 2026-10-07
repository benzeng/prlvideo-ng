
undefined8 FUN_1000d6ce0(long *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined4 *)param_1[3];
  (**(code **)(*param_1 + 0x88))(param_1,(int)param_1[2]);
  uVar1 = puVar2[2];
  if (*(uint *)(param_1 + 4) < uVar1) {
    uVar5 = 0;
  }
  else {
    uVar3 = FUN_1000d6d50(param_1);
    *puVar2 = uVar3;
    uVar4 = QIODevice::write((char *)param_1,(longlong)puVar2);
    if (uVar1 == uVar4) {
      QFileDevice::flush();
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}

