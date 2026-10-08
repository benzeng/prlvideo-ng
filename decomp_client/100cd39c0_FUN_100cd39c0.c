
undefined1 FUN_100cd39c0(long param_1,uint param_2,char param_3)

{
  long *plVar1;
  uint *puVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  
  QMutex::lock();
  if ((int)param_2 < 0xc1) {
    if ((param_3 == '\0') &&
       ((*(uint *)(param_1 + 0x3c0 + (ulong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) == 0)) {
      if (1 < DAT_10230ffd0) {
        uVar7 = FUN_100cdf380(param_2);
        FUN_100df99c0("","hid",2,"[CHIDHostHook] Key %s (0x%x) is not pressed before, ignore key-up"
                      ,uVar7,param_2);
      }
      plVar3 = (long *)(*(long *)(param_1 + 0x380) + 0xf0);
      *plVar3 = *plVar3 + 1;
      uVar8 = 0;
    }
    else {
      pcVar6 = (char *)FUN_100cdf2a0(param_2);
      if (*pcVar6 == '\0') {
        iVar4 = FUN_100cdf2d0(param_2);
        if (iVar4 == 0) {
          uVar8 = 0;
          FUN_100df99c0("","hid",0,"No scancodes defined for code 0x%x",param_2);
          goto LAB_100cd3b3b;
        }
      }
      plVar3 = *(long **)(param_1 + 0x10);
      if (plVar3 == (long *)0x0) {
        uVar8 = 0;
        FUN_100df99c0("","hid",0,"[CHIDHostHook] m_pView is NULL. Keycode was not sent.");
      }
      else {
        plVar1 = (long *)(*(long *)(param_1 + 0x370) + 0xf0);
        *plVar1 = *plVar1 + 1;
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2,(ulong)(param_3 == '\0') << 7);
        uVar5 = 1 << ((byte)param_2 & 0x1f);
        if (param_3 == '\0') {
          puVar2 = (uint *)(param_1 + 0x3c0 + (ulong)(param_2 >> 5) * 4);
          *puVar2 = *puVar2 & ~uVar5;
        }
        else {
          puVar2 = (uint *)(param_1 + 0x3c0 + (ulong)(param_2 >> 5) * 4);
          *puVar2 = *puVar2 | uVar5;
        }
        uVar8 = 1;
      }
    }
  }
  else {
    uVar8 = 0;
    FUN_100df99c0("","hid",0,"[CHIDHostHook] Invalid keycode: 0x%x",param_2);
  }
LAB_100cd3b3b:
  QMutex::unlock();
  return uVar8;
}

