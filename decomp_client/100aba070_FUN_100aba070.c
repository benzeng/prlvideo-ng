
undefined1 FUN_100aba070(string *param_1,undefined1 *param_2)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  size_t sVar5;
  long lVar6;
  undefined1 uVar7;
  string *psVar8;
  undefined1 uVar9;
  string local_d8 [24];
  string local_c0 [24];
  undefined8 local_a8;
  undefined8 uStack_a0;
  char *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  byte local_68 [48];
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = (char *)0x0;
  if (((byte)*param_1 & 1) == 0) {
    psVar8 = param_1 + 1;
  }
  else {
    psVar8 = *(string **)(param_1 + 0x10);
  }
  local_38 = lVar3;
  pcVar4 = _strrchr((char *)psVar8,0x2e);
  if (pcVar4 == (char *)0x0) {
    uVar7 = 0;
  }
  else if ((ulong)((long)pcVar4 - (long)psVar8) < 0x15) {
    uVar7 = 0;
  }
  else {
    std::string::assign((char *)&local_88);
    std::string::assign((char *)&local_a8,(ulong)(psVar8 + 0x15));
    pcVar4 = local_98;
    if ((local_a8 & 1) == 0) {
      pcVar4 = (char *)((long)&local_a8 + 1);
    }
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while ('\0' < cVar1);
    if (cVar1 == '\0') {
      uVar9 = 0;
    }
    else {
      pcVar4 = local_98;
      if ((local_a8 & 1) == 0) {
        pcVar4 = (char *)((long)&local_a8 + 1);
      }
      sVar5 = _strlen(pcVar4);
      FUN_100bf9750(pcVar4,sVar5,local_68 + 0x20);
      lVar6 = 0;
      do {
        bVar2 = local_68[lVar6 + 0x20];
        local_68[lVar6 * 2] = "0123456789abcdef"[bVar2 >> 4];
        local_68[lVar6 * 2 + 1] = "0123456789abcdef"[(ulong)bVar2 & 0xf];
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x10);
      std::string::__init((char *)local_c0,(ulong)local_68);
      std::string::operator=((string *)&local_a8,local_c0);
      std::string::~string(local_c0);
      lVar6 = local_78;
      if ((local_88 & 1) == 0) {
        lVar6 = (long)&local_88 + 1;
      }
      pcVar4 = local_98;
      if ((local_a8 & 1) == 0) {
        pcVar4 = (char *)((long)&local_a8 + 1);
      }
      FUN_100ab9f70(local_d8,lVar6,pcVar4);
      std::string::operator=(param_1,local_d8);
      uVar9 = 1;
      std::string::~string(local_d8);
    }
    uVar7 = 1;
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = uVar9;
    }
  }
  std::string::~string((string *)&local_a8);
  std::string::~string((string *)&local_88);
  if (lVar3 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

