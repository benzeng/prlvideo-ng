
undefined8 FUN_100b53720(long param_1,long *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  char *pcVar10;
  long lVar11;
  undefined1 local_138 [256];
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar6;
  lVar4 = _SCDynamicStoreCreate(0,&cf_Parallels,0,0);
  lVar11 = param_1;
  if (lVar4 == 0) {
    FUN_100df99c0("","prl_net",0,"getPrimaryIface: SCDynamicStoreCreate() Failed");
    goto LAB_100b5390c;
  }
  uVar5 = _SCDynamicStoreKeyCreateNetworkGlobalEntity
                    (0,*(undefined8 *)PTR__kSCDynamicStoreDomainState_1021e1a08,
                     *(undefined8 *)PTR__kSCEntNetIPv4_1021e1a20);
  lVar6 = _SCDynamicStoreCopyValue(lVar4,uVar5);
  _CFRelease(uVar5);
  _CFRelease(lVar4);
  if (lVar6 == 0) {
    FUN_100df99c0("","prl_net",0,
                  "getPrimaryIface: SCDynamicStoreKeyCreateNetworkGlobalEntity() Failed");
  }
  else {
    lVar4 = _CFDictionaryGetValue
                      (lVar6,*(undefined8 *)PTR__kSCDynamicStorePropNetPrimaryInterface_1021e1a10);
    if (lVar4 == 0) {
LAB_100b538af:
      pcVar10 = "getPrimaryIface: No key for NetPrimaryInterface in DynamicStore";
LAB_100b538c4:
      FUN_100df99c0("","prl_net",0,pcVar10);
    }
    else {
      lVar7 = _CFGetTypeID(lVar4);
      lVar8 = _CFStringGetTypeID();
      if (lVar7 != lVar8) goto LAB_100b538af;
      uVar2 = _CFStringGetFastestEncoding(lVar4);
      puVar9 = (undefined1 *)_CFStringGetCStringPtr(lVar4,uVar2);
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = local_138;
        cVar1 = _CFStringGetCString(lVar4,puVar9,0x100,0);
        if (cVar1 != '\0') goto LAB_100b53824;
        pcVar10 = "getPrimaryIface: Failed to convert primary-iface to utf8";
        goto LAB_100b538c4;
      }
LAB_100b53824:
      for (lVar4 = *(long *)(param_1 + 8); lVar11 = param_1, lVar4 != param_1;
          lVar4 = *(long *)(lVar4 + 8)) {
        lVar11 = *(long *)(lVar4 + 0x10);
        iVar3 = QString::compare_helper
                          (*(long *)(lVar11 + 0x10) + lVar11,*(undefined4 *)(lVar11 + 4),puVar9,
                           0xffffffff,1);
        lVar11 = lVar4;
        if (iVar3 == 0) break;
      }
      if (lVar11 == param_1) {
        FUN_100df99c0("","prl_net",0,
                      "getPrimaryAdapter: primary iface (%s) is not an ethernet-iface",puVar9);
      }
    }
    _CFRelease(lVar6);
  }
  lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
LAB_100b5390c:
  *param_2 = lVar11;
  uVar5 = 0x80000009;
  if (lVar11 != param_1) {
    uVar5 = 0;
  }
  if (lVar6 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

