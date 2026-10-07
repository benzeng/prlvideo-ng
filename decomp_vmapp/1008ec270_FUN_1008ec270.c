
undefined8 * FUN_1008ec270(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  size_t sVar6;
  long lVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  string local_68 [24];
  string local_50 [25];
  byte local_37;
  byte local_36;
  char local_35;
  byte local_34 [4];
  
  sVar6 = _strlen((char *)param_2);
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if ((int)sVar6 != 0) {
    iVar10 = -(int)sVar6;
    iVar9 = 0;
    do {
      bVar1 = *param_2;
      cVar8 = (char)param_1;
      if ((ulong)bVar1 == 0x3d) break;
      if ((char)bVar1 < '\0') {
        uVar5 = ___maskrune((uint)bVar1,0x500);
      }
      else {
        uVar5 = *(uint *)(PTR___DefaultRuneLocale_100ba20c0 + (ulong)bVar1 * 4 + 0x3c) & 0x500;
      }
      if (((bVar1 & 0xfb) != 0x2b) && (uVar5 == 0)) break;
      lVar7 = (long)iVar9;
      iVar9 = iVar9 + 1;
      local_34[lVar7] = *param_2;
      if (iVar9 == 4) {
        std::string::__init((char *)local_50,0x100b2a2e2);
        cVar4 = (char)local_50;
        bVar1 = std::string::find(cVar4,(ulong)(uint)(int)(char)local_34[0]);
        local_34[0] = bVar1;
        std::string::~string(local_50);
        std::string::__init((char *)local_50,0x100b2a2e2);
        bVar2 = std::string::find(cVar4,(ulong)(uint)(int)(char)local_34[1]);
        local_34[1] = bVar2;
        std::string::~string(local_50);
        std::string::__init((char *)local_50,0x100b2a2e2);
        bVar3 = std::string::find(cVar4,(ulong)(uint)(int)(char)local_34[2]);
        local_34[2] = bVar3;
        std::string::~string(local_50);
        std::string::__init((char *)local_50,0x100b2a2e2);
        cVar4 = std::string::find(cVar4,(ulong)(uint)(int)(char)local_34[3]);
        local_34[3] = cVar4;
        std::string::~string(local_50);
        local_37 = bVar2 >> 4 & 3 | bVar1 << 2;
        local_36 = bVar3 >> 2 & 0xf | bVar2 << 4;
        local_35 = cVar4 + bVar3 * '@';
        std::string::push_back(cVar8);
        std::string::push_back(cVar8);
        iVar9 = 0;
        std::string::push_back(cVar8);
      }
      param_2 = param_2 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar10 != 0);
    if (iVar9 != 0) {
      if (iVar9 < 4) {
        ___bzero(local_34 + iVar9,(ulong)(3 - iVar9) + 1);
      }
      std::string::__init((char *)local_68,0x100b2a2e2);
      bVar1 = std::string::find((char)local_68,(ulong)(uint)(int)(char)local_34[0]);
      local_34[0] = bVar1;
      std::string::~string(local_68);
      std::string::__init((char *)local_68,0x100b2a2e2);
      bVar2 = std::string::find((char)local_68,(ulong)(uint)(int)(char)local_34[1]);
      local_34[1] = bVar2;
      std::string::~string(local_68);
      std::string::__init((char *)local_68,0x100b2a2e2);
      bVar3 = std::string::find((char)local_68,(ulong)(uint)(int)(char)local_34[2]);
      local_34[2] = bVar3;
      std::string::~string(local_68);
      std::string::__init((char *)local_68,0x100b2a2e2);
      cVar4 = std::string::find((char)local_68,(ulong)(uint)(int)(char)local_34[3]);
      local_34[3] = cVar4;
      std::string::~string(local_68);
      local_37 = bVar2 >> 4 & 3 | bVar1 << 2;
      local_36 = bVar3 >> 2 & 0xf | bVar2 << 4;
      local_35 = cVar4 + bVar3 * '@';
      if (1 < iVar9) {
        lVar7 = 1;
        while( true ) {
          std::string::push_back(cVar8);
          if (iVar9 + -1 <= lVar7) break;
          lVar7 = lVar7 + 1;
        }
      }
    }
  }
  return param_1;
}

