
byte FUN_10000c0e0(undefined8 param_1,string *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  bool bVar7;
  string local_30;
  char local_2f [7];
  size_t local_28;
  void *local_20;
  
  if (((byte)*param_2 & 1) == 0) {
    uVar2 = (ulong)((byte)*param_2 >> 1);
  }
  else {
    uVar2 = *(ulong *)(param_2 + 8);
  }
  bVar6 = 0;
  if ((uVar2 != 0) && (lVar3 = std::string::find((char)param_2,0x2e), bVar6 = 0, lVar3 != -1)) {
    if ((DAT_1011b61f8 == '\0') && (iVar1 = ___cxa_guard_acquire(&DAT_1011b61f8), iVar1 != 0)) {
      std::string::__init((char *)&DAT_1011b61e0,0x1009e0021);
      ___cxa_atexit(PTR__string_100ba21a0,&DAT_1011b61e0,0x100000000);
      ___cxa_guard_release(&DAT_1011b61f8);
    }
    iVar1 = std::string::compare((char *)param_2);
    bVar7 = true;
    if (((iVar1 != 0) && (iVar1 = std::string::compare((char *)param_2), iVar1 != 0)) &&
       (iVar1 = std::string::compare((char *)param_2), iVar1 != 0)) {
      uVar2 = DAT_1011b61e8;
      if ((DAT_1011b61e0 & 1) == 0) {
        uVar2 = (ulong)(DAT_1011b61e0 >> 1);
      }
      std::string::string(&local_30,param_2,0,uVar2,(allocator *)param_2);
      if (((byte)local_30 & 1) == 0) {
        local_28 = (size_t)((byte)local_30 >> 1);
      }
      uVar2 = DAT_1011b61e8;
      if ((DAT_1011b61e0 & 1) == 0) {
        uVar2 = (ulong)(DAT_1011b61e0 >> 1);
      }
      if (local_28 == uVar2) {
        bVar7 = true;
        if (((byte)local_30 & 1) == 0) {
          if (local_28 != 0) {
            pcVar4 = &DAT_1011b61e1;
            if ((DAT_1011b61e0 & 1) != 0) {
              pcVar4 = DAT_1011b61f0;
            }
            pcVar5 = local_2f;
            do {
              if (*pcVar5 != *pcVar4) {
                bVar7 = false;
                break;
              }
              pcVar5 = pcVar5 + 1;
              pcVar4 = pcVar4 + 1;
              local_28 = local_28 - 1;
            } while (local_28 != 0);
          }
        }
        else if (local_28 != 0) {
          pcVar4 = &DAT_1011b61e1;
          if ((DAT_1011b61e0 & 1) != 0) {
            pcVar4 = DAT_1011b61f0;
          }
          iVar1 = _memcmp(local_20,pcVar4,local_28);
          bVar7 = iVar1 == 0;
        }
      }
      else {
        bVar7 = false;
      }
      std::string::~string(&local_30);
    }
    bVar6 = bVar7 ^ 1;
  }
  return bVar6;
}

