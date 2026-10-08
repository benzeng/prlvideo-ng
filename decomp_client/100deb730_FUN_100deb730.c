
undefined8 * FUN_100deb730(undefined8 *param_1,byte *param_2)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  string local_68 [24];
  string local_50 [25];
  byte local_37;
  byte local_36;
  byte local_35;
  byte local_34;
  byte local_33 [3];
  
  sVar2 = _strlen((char *)param_2);
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if ((int)sVar2 != 0) {
    iVar1 = -(int)sVar2;
    iVar5 = 0;
    do {
      lVar3 = (long)iVar5;
      iVar5 = iVar5 + 1;
      local_33[lVar3] = *param_2;
      cVar4 = (char)param_1;
      if (iVar5 == 3) {
        local_37 = local_33[0] >> 2;
        local_36 = local_33[1] >> 4 | (local_33[0] & 3) << 4;
        local_35 = local_33[2] >> 6 | (local_33[1] & 0xf) << 2;
        local_34 = local_33[2] & 0x3f;
        std::string::__init((char *)local_50,0x101f1e361);
        std::string::push_back(cVar4);
        std::string::~string(local_50);
        std::string::__init((char *)local_50,0x101f1e361);
        std::string::push_back(cVar4);
        std::string::~string(local_50);
        std::string::__init((char *)local_50,0x101f1e361);
        std::string::push_back(cVar4);
        std::string::~string(local_50);
        std::string::__init((char *)local_50,0x101f1e361);
        std::string::push_back(cVar4);
        iVar5 = 0;
        std::string::~string(local_50);
      }
      param_2 = param_2 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0);
    if (iVar5 != 0) {
      if (iVar5 < 3) {
        ___bzero(local_33 + iVar5,(ulong)(2 - iVar5) + 1);
      }
      local_37 = local_33[0] >> 2;
      local_36 = local_33[1] >> 4 | (local_33[0] & 3) << 4;
      local_35 = local_33[2] >> 6 | (local_33[1] & 0xf) << 2;
      local_34 = local_33[2] & 0x3f;
      if (-1 < iVar5) {
        lVar3 = -1;
        do {
          std::string::__init((char *)local_68,0x101f1e361);
          std::string::push_back(cVar4);
          std::string::~string(local_68);
          lVar3 = lVar3 + 1;
        } while (lVar3 < iVar5);
      }
      iVar5 = iVar5 + -1;
      while (iVar5 = iVar5 + 1, iVar5 < 3) {
        std::string::push_back(cVar4);
      }
    }
  }
  return param_1;
}

