
undefined1 FUN_100cd04e0(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    lVar2 = ___dynamic_cast(param_2,&PTR_vtable_10225a1a0,&PTR_vtable_102259a60,0);
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(lVar2 + 0x1c);
      *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(lVar2 + 0x14);
      *(undefined8 *)(param_1 + 0x1c) = uVar1;
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar2 + 0x24);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar2 + 0x30);
      *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(lVar2 + 0x68);
      QString::operator=((QString *)(param_1 + 0x38),(QString *)(lVar2 + 0x38));
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(lVar2 + 0x58);
      *(undefined2 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      uVar3 = 1;
    }
  }
  return uVar3;
}

