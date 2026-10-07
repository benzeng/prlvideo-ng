
undefined8 FUN_1002893b0(void)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined4 *)(DAT_1011c3698 + 0x584);
  CVmClusteredDevice::setStackIndex(0x11b8a98);
  CVmDevice::setConnected(0x11b8a98);
  CVmClusteredDevice::setInterfaceType(0x11b8a98);
  CVmClusteredDevice::setSubType(0x11b8a98);
  CVmDevice::setEnabled(0x11b8a98);
  lVar3 = FUN_10025ad30(&DAT_1011b8a98);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    plVar4 = (long *)___dynamic_cast(lVar3,&PTR_vtable_100baea70,&PTR_vtable_100bb0a90,0x68);
    if (plVar4 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      iVar2 = (**(code **)(*plVar4 + 0x78))(plVar4);
      if (iVar2 < 0) {
        FUN_10025ab50(plVar4 + 0xd);
        uVar5 = 0;
      }
      else {
        lVar3 = plVar4[0x13];
        *(undefined4 *)(lVar3 + 0x1098) = uVar1;
        uVar5 = CONCAT71((int7)((ulong)lVar3 >> 8),1);
      }
    }
  }
  return uVar5;
}

