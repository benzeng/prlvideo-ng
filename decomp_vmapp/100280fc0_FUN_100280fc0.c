
void FUN_100280fc0(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_10027fc60();
  *param_1 = (long)&PTR_FUN_100baffb0;
  param_1[5] = (long)&PTR_FUN_100bb01d8;
  param_1[6] = (long)&PTR_metaObject_100bb0250;
  param_1[0x27] = (long)&PTR_FUN_100bb02c8;
  FUN_10026b650(param_1 + 0x27,param_1,param_2,0xffffffff);
  *param_1 = (long)&PTR_FUN_100baffb0;
  param_1[5] = (long)&PTR_FUN_100bb01d8;
  param_1[6] = (long)&PTR_metaObject_100bb0250;
  param_1[0x27] = (long)&PTR_FUN_100bb02c8;
  iVar1 = CVmDevice::getConnected();
  if (iVar1 == 1) {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    if (iVar1 < 0) {
      uVar2 = CVmDevice::getIndex();
      FUN_1003f9010(uVar2,0x80000263);
    }
  }
  *(undefined1 *)(param_1 + 0x29) = 0;
  FUN_100257c20(param_1 + 5);
  return;
}

