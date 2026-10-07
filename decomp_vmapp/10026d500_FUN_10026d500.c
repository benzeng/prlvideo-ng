
void FUN_10026d500(undefined8 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  FUN_10026b250();
  *param_1 = &PTR_FUN_100baf290;
  param_1[1] = &PTR_metaObject_100baf358;
  param_1[0xd] = &PTR_FUN_100baf3d0;
  param_1[0x14] = &PTR_FUN_100baf400;
  lVar1 = DAT_1011c3688;
  param_1[0x16] = DAT_1011c3688;
  param_1[0x17] = *(undefined8 *)(*(long *)(lVar1 + 0x60) + 0x20);
  param_1[0x18] = param_1 + 0x19;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  FUN_1003ff060(param_1 + 0x11b);
  FUN_1003fd230(param_1 + 0x149);
  param_1[0x25c] = 0;
  uVar2 = CVmClusteredDevice::getStackIndex();
  *(undefined4 *)(param_1 + 0x25d) = uVar2;
  param_1[0x25e] = PTR_shared_null_100ba20d0;
  uVar2 = 500;
  if (*(int *)(DAT_1011c3698 + 0x5c0) != 0x806) {
    uVar2 = 0;
  }
  *(undefined4 *)((long)param_1 + 0x12ec) = uVar2;
  return;
}

