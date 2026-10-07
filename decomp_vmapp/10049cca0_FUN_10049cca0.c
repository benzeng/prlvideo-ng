
undefined1 FUN_10049cca0(undefined8 param_1,string *param_2)

{
  string *psVar1;
  string *psVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  void *pvVar9;
  ulong uVar10;
  undefined1 uVar11;
  string *psVar12;
  string *psVar13;
  ulong uVar14;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  string local_d8;
  string local_d7 [7];
  ulong local_d0;
  string *local_c8;
  undefined1 local_c0 [12];
  long local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined1 local_88 [80];
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar3;
  cVar4 = _CFURLGetFSRef(param_1,local_88);
  if (cVar4 == '\0') {
    if (DAT_1011b55f8 < 3) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      FUN_1008e3970("","prl_sharedapps",3,"CFURLGetFSRef failed");
    }
  }
  else {
    local_90 = 0;
    iVar5 = _LSCopyDisplayNameForRef(local_88,&local_90);
    lVar7 = local_90;
    if (iVar5 == 0) {
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      lVar6 = _CFStringGetCStringPtr(local_90,0x8000100);
      if (lVar6 == 0) {
        uVar8 = _CFStringGetLength(lVar7);
        lVar6 = _CFStringGetMaximumSizeForEncoding(uVar8,0x8000100);
        pvVar9 = _malloc(lVar6 + 1U);
        if (pvVar9 != (void *)0x0) {
          cVar4 = _CFStringGetCString(lVar7,pvVar9,lVar6 + 1U,0x8000100);
          if (cVar4 != '\0') {
            std::string::assign((char *)&local_a8);
          }
          _free(pvVar9);
        }
      }
      else {
        std::string::assign((char *)&local_a8);
      }
      std::string::operator=(param_2,(string *)&local_a8);
      std::string::~string((string *)&local_a8);
      iVar5 = _LSCopyItemInfoForRef(local_88,1,local_c0);
      uVar11 = 1;
      if ((iVar5 == 0) && (local_b4 != 0)) {
        local_f8 = 0;
        uStack_f0 = 0;
        local_e8 = 0;
        lVar7 = _CFStringGetCStringPtr(local_b4,0x8000100);
        if (lVar7 == 0) {
          uVar8 = _CFStringGetLength(local_b4);
          lVar7 = _CFStringGetMaximumSizeForEncoding(uVar8,0x8000100);
          pvVar9 = _malloc(lVar7 + 1U);
          if (pvVar9 != (void *)0x0) {
            cVar4 = _CFStringGetCString(local_b4,pvVar9,lVar7 + 1U,0x8000100);
            if (cVar4 != '\0') {
              std::string::assign((char *)&local_f8);
            }
            _free(pvVar9);
          }
        }
        else {
          std::string::assign((char *)&local_f8);
        }
        FUN_10049d340(&local_d8,".",&local_f8);
        std::string::~string((string *)&local_f8);
        if (((byte)*param_2 & 1) == 0) {
          psVar13 = param_2 + 1;
          uVar14 = (ulong)((byte)*param_2 >> 1);
        }
        else {
          uVar14 = *(ulong *)(param_2 + 8);
          psVar13 = *(string **)(param_2 + 0x10);
        }
        if (((byte)local_d8 & 1) == 0) {
          local_c8 = local_d7;
          local_d0 = (ulong)((byte)local_d8 >> 1);
        }
        if (local_d0 <= uVar14) {
          uVar10 = 0;
          if (local_d0 == 0) {
LAB_10049d003:
            std::string::erase((ulong)param_2,uVar10);
          }
          else if (((long)local_d0 <= (long)uVar14) && (lVar7 = (1 - local_d0) + uVar14, lVar7 != 0)
                  ) {
            psVar12 = psVar13;
            do {
              uVar10 = 1;
              if (*psVar12 == *local_c8) {
                do {
                  if (local_d0 == uVar10) {
                    if ((psVar12 == psVar13 + uVar14) ||
                       (uVar10 = (long)psVar12 - (long)psVar13, uVar10 == 0xffffffffffffffff))
                    goto LAB_10049d012;
                    goto LAB_10049d003;
                  }
                  psVar1 = local_c8 + uVar10;
                  psVar2 = psVar12 + uVar10;
                  uVar10 = uVar10 + 1;
                } while (*psVar2 == *psVar1);
              }
              psVar12 = psVar12 + 1;
            } while (psVar12 != psVar13 + lVar7);
          }
        }
LAB_10049d012:
        std::string::~string(&local_d8);
      }
    }
    else if (DAT_1011b55f8 < 3) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      FUN_1008e3970("","prl_sharedapps",3,"LSCopyDisplayNameForRef failed");
    }
    if (local_90 != 0) {
      _CFRelease();
    }
  }
  if (lVar3 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar11;
}

