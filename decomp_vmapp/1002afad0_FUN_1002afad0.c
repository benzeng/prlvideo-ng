
long FUN_1002afad0(long param_1,char param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  local_30 = 0;
  puVar3 = (undefined8 *)(param_1 + 0x848);
  if (param_2 != '\0') {
    puVar3 = (undefined8 *)(param_1 + 0x850);
  }
  local_28 = 0;
  iVar2 = _CGLCreateContext(*puVar3,*(undefined8 *)(param_1 + 0x868),&local_28);
  if (iVar2 == 0) {
    if (*(long *)(param_1 + 0x868) != 0) {
      _CGLGetVirtualScreen(*(long *)(param_1 + 0x868),&local_2c);
      _CGLSetVirtualScreen(local_28,local_2c);
    }
    lVar1 = local_28;
    if (local_28 != 0) {
      if (DAT_1011c4a88 != local_28) {
        DAT_1011c4a88 = local_28;
        _CGLSetCurrentContext(local_28);
      }
      (*DAT_1011c5bc0)(0xbd0);
      (*DAT_1011c5bc0)(0xbe2);
      (*DAT_1011c5bc0)(0xb90);
      (*DAT_1011c6b18)(0);
      (*DAT_1011c5bc0)(0xb71);
      (*DAT_1011c5ba0)(0);
      (*DAT_1011c68d8)(0x405);
      (*DAT_1011c5c00)(0x405);
      (*DAT_1011c5e98)(1,&local_30);
      (*DAT_1011c5770)(local_30);
      (*DAT_1011c5708)(0x8892,*(undefined4 *)(param_1 + 0x11884));
      (*DAT_1011c72b0)(0,2,0x1406,0,8,0);
      (*DAT_1011c5c90)(0);
      return lVar1;
    }
  }
  else {
    FUN_1008e3970("","LocalDevices",0,"Failed to CGLCreateContext for GL context (%u)",iVar2);
  }
  FUN_1008e3970("","LocalDevices",0,"Failed to create additional GL context version %u",
                *(undefined4 *)(param_1 + 0x85c));
  return 0;
}

