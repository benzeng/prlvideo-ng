
undefined8 * FUN_1000c5530(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long local_28;
  
  lVar2 = FUN_100deef90(param_2);
  local_28 = 0;
  iVar1 = _LSGetApplicationForInfo(0,0,lVar2,0xffffffff,0,&local_28);
  if (iVar1 == 0) {
    lVar3 = _CFBundleCreate(0,local_28);
    if (lVar3 != 0) {
      uVar4 = _CFBundleGetIdentifier(lVar3);
      FUN_100deed00(param_1,uVar4);
      _CFRelease(lVar3);
      goto LAB_1000c55b9;
    }
  }
  *param_1 = PTR_shared_null_1021e1288;
LAB_1000c55b9:
  if (local_28 != 0) {
    _CFRelease();
  }
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  return param_1;
}

