
undefined4 FUN_100d7b770(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 **ppuVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_70;
  undefined1 *local_68;
  undefined4 local_5c;
  undefined8 local_58;
  string local_50;
  undefined1 local_4f [15];
  undefined1 *local_40;
  long local_38;
  
  ppuVar11 = &local_68;
  lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar7;
  if (DAT_102318960 == '\0') {
    uStack_70 = 0x100d7b7a5;
    iVar2 = ___cxa_guard_acquire(&DAT_102318960);
    if (iVar2 != 0) {
      uStack_70 = 0x100d7b7b9;
      FUN_100deba20(&local_50,"Q29yZURvY2tDb3B5V29ya3NwYWNlc0FwcEJpbmRpbmdz");
      if (((byte)local_50 & 1) == 0) {
        local_40 = local_4f;
      }
      uStack_70 = 0x100d7b7d5;
      pcVar4 = (code *)_dlsym(0xfffffffffffffffe,local_40);
      uStack_70 = 0x100d7b7e8;
      DAT_102318958 = pcVar4;
      std::string::~string(&local_50);
      uStack_70 = 0x100d7b7fb;
      DAT_102318958 = pcVar4;
      ___cxa_guard_release(&DAT_102318960);
    }
  }
  uStack_70 = 0x100d7b805;
  iVar2 = (*DAT_102318958)(&local_58);
  uVar3 = 0xffffffff;
  if (iVar2 == 0) {
    local_5c = 0xffffffff;
    uStack_70 = 0x100d7b820;
    uVar5 = _CFBundleGetMainBundle();
    uStack_70 = 0x100d7b828;
    lVar6 = _CFBundleGetIdentifier(uVar5);
    ppuVar11 = &local_68;
    if (lVar6 != 0) {
      uStack_70 = 0x100d7b83d;
      lVar7 = _CFDictionaryGetCount(local_58);
      uVar5 = local_58;
      uVar8 = lVar7 * 8 + 0xfU & 0xfffffffffffffff0;
      lVar10 = (long)&local_68 - uVar8;
      lVar12 = lVar10 - uVar8;
      local_68 = (undefined1 *)&local_68;
      *(undefined8 *)(lVar12 + -8) = 0x100d7b871;
      _CFDictionaryGetKeysAndValues(uVar5,lVar10,lVar12);
      lVar13 = 0;
      if (0 < lVar7) {
        do {
          uVar5 = *(undefined8 *)(lVar10 + lVar13 * 8);
          *(undefined8 *)(lVar12 + -8) = 0x100d7b891;
          lVar9 = _CFStringCompare(uVar5,lVar6,1);
          if (lVar9 == 0) {
            uVar5 = *(undefined8 *)(lVar12 + lVar13 * 8);
            *(undefined8 *)(lVar12 + -8) = 0x100d7b8b2;
            cVar1 = _CFNumberGetValue(uVar5,3,&local_5c);
            if (cVar1 != '\0') {
              *(undefined8 *)(lVar12 + -8) = 0x100d7b8d8;
              FUN_100df99c0("","WorkspacesMac",0,
                            "(!)Error: failed to get a dedicated space number. Err=%d",cVar1);
            }
            break;
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < lVar7);
      }
      lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
      ppuVar11 = (undefined1 **)local_68;
    }
    *(undefined8 *)((long)ppuVar11 + -8) = 0x100d7b8ef;
    _CFRelease(local_58);
    uVar3 = local_5c;
  }
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)ppuVar11 + -8) = &UNK_100d7b90c;
    ___stack_chk_fail();
  }
  return uVar3;
}

