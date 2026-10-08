
void FUN_100cdb2a0(long *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  undefined4 local_58;
  uint local_54;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  
  if (param_1[0x88] != 0) {
    FUN_100df99c0("","hid",0,"[CHIDMacHook::CreateIgnoreActionList] ignore action list not empty");
    return;
  }
  iVar2 = _CopySymbolicHotKeys(&local_38);
  if (iVar2 == 0) {
    lVar4 = _CFArrayGetCount(local_38);
    if (0 < lVar4) {
      lVar4 = *(long *)PTR__kCFBooleanTrue_1021e18e0;
      lVar9 = 0;
      do {
        lVar5 = _CFArrayGetValueAtIndex(local_38,lVar9);
        if (lVar5 != 0) {
          local_40 = 0;
          local_48 = 0;
          local_50 = 0;
          local_54 = 0;
          local_58 = 0;
          cVar1 = _CFDictionaryGetValueIfPresent(lVar5,&cf_kHISymbolicHotKeyEnabled,&local_40);
          if (cVar1 != '\0') {
            cVar1 = _CFDictionaryGetValueIfPresent(lVar5,&cf_kHISymbolicHotKeyModifiers,&local_48);
            if (cVar1 != '\0') {
              cVar1 = _CFNumberGetValue(local_48,3,&local_54);
              if (cVar1 != '\0') {
                cVar1 = _CFDictionaryGetValueIfPresent(lVar5,&cf_kHISymbolicHotKeyCode,&local_50);
                if (cVar1 != '\0') {
                  cVar1 = _CFNumberGetValue(local_50,3,&local_58);
                  if ((cVar1 != '\0') && (local_40 == lVar4)) {
                    iVar2 = FUN_100cdf770(local_58,0);
                    uVar3 = 0x400000c0;
                    if ((local_54 & 0x100) == 0) {
                      uVar3 = 0x40000000;
                    }
                    uVar8 = uVar3 | 0xc;
                    if ((local_54 & 0x2200) == 0) {
                      uVar8 = uVar3;
                    }
                    uVar3 = uVar8 | 0x30;
                    if ((local_54 & 0x4800) == 0) {
                      uVar3 = uVar8;
                    }
                    uVar8 = uVar3 | 3;
                    if ((local_54 & 0x9000) == 0) {
                      uVar8 = uVar3;
                    }
                    if ((iVar2 != 0x91) && (iVar2 != 0x8e)) {
                      uVar3 = local_54 >> 4 & 0x2000;
                      uVar8 = uVar8 | uVar3;
                      if (iVar2 == 0) {
                        if (2 < DAT_10230ffd0) {
                          FUN_100df99c0("","hid",3,
                                        "[CHIDMacHook::CreateIgnoreActionList] invalid prl key code (vk_code %08x vk_mod %08x prl_key %08x prl_mod %08x)"
                                        ,local_58,local_54,0,uVar8);
                        }
                      }
                      else if ((char)(uVar3 >> 8) == '\0') {
                        plVar6 = (long *)FUN_100cd00c0(param_1);
                        if (plVar6 == (long *)0x0) {
                          FUN_100df99c0("","hid",0,
                                        "[CHIDMacHook::CreateIgnoreActionList] can\'t create key action"
                                       );
                        }
                        else {
                          (**(code **)(*plVar6 + 0x78))(plVar6,iVar2,uVar8);
                          cVar1 = (**(code **)(*param_1 + 0x108))(param_1,plVar6);
                          if (cVar1 == '\0') {
                            (**(code **)(*param_1 + 0xf0))(param_1,plVar6,0);
                            plVar7 = operator_new(0x18);
                            plVar7[2] = (long)plVar6;
                            plVar7[1] = (long)(param_1 + 0x86);
                            lVar5 = param_1[0x86];
                            *plVar7 = lVar5;
                            *(long **)(lVar5 + 8) = plVar7;
                            param_1[0x86] = (long)plVar7;
                            param_1[0x88] = param_1[0x88] + 1;
                          }
                          else {
                            if (2 < DAT_10230ffd0) {
                              FUN_100df99c0("","hid",3,
                                            "[CHIDMacHook::CreateIgnoreActionList] action already exists (vk_code %08x vk_mod %08x prl_key %08x prl_mod %08x)"
                                            ,local_58,local_54,iVar2,uVar8);
                            }
                            (**(code **)(*plVar6 + 0x60))();
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        lVar9 = lVar9 + 1;
        lVar5 = _CFArrayGetCount(local_38);
      } while (lVar9 < lVar5);
    }
    _CFRelease();
  }
  else {
    FUN_100df99c0("","hid",0,"[CHIDMacHook::CreateIgnoreActionList] can\'t get symbolic hot keys");
  }
  return;
}

