
int FUN_10042cb40(string *param_1,uint param_2)

{
  int iVar1;
  string *psVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  string *psVar6;
  string *psVar7;
  char *pcVar8;
  ulong uVar9;
  string *psVar10;
  string sVar11;
  ulong uVar12;
  ulong uVar13;
  string *local_88;
  string local_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  char *local_58;
  string local_48;
  string local_47 [7];
  ulong local_40;
  string *local_38;
  
  std::string::__init((char *)&local_48,0x100b203d3);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (char *)0x0;
  sVar11 = *param_1;
  iVar1 = 0;
  uVar12 = 0;
  uVar4 = 0;
LAB_10042cbb0:
  if (((byte)sVar11 & 1) == 0) {
    uVar13 = (ulong)((byte)sVar11 >> 1);
    psVar2 = param_1 + 1;
  }
  else {
    uVar13 = *(ulong *)(param_1 + 8);
    psVar2 = *(string **)(param_1 + 0x10);
  }
  if (((byte)local_48 & 1) == 0) {
    local_88 = local_47;
    uVar9 = (ulong)((byte)local_48 >> 1);
  }
  else {
    local_88 = local_38;
    uVar9 = local_40;
  }
  uVar5 = uVar4;
  if (uVar4 < uVar13) {
    for (; uVar13 != uVar5; uVar5 = uVar5 + 1) {
      if ((uVar9 == 0) ||
         (pvVar3 = _memchr(local_88,(uint)(byte)psVar2[uVar5],uVar9), pvVar3 == (void *)0x0)) {
        if (uVar5 != 0xffffffffffffffff) goto LAB_10042cc9b;
        break;
      }
    }
  }
  if (((byte)sVar11 & 1) == 0) {
    uVar5 = (ulong)((byte)sVar11 >> 1);
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8);
  }
LAB_10042cc9b:
  std::string::string(local_80,param_1,uVar4,uVar5 - uVar4,(allocator *)param_1);
  std::string::operator=((string *)&local_68,local_80);
  std::string::~string(local_80);
  if (uVar12 == param_2) {
    pcVar8 = local_58;
    if ((local_68 & 1) == 0) {
      pcVar8 = (char *)((long)&local_68 + 1);
    }
    iVar1 = _atoi(pcVar8);
  }
  sVar11 = *param_1;
  if (((byte)sVar11 & 1) == 0) {
    uVar4 = (ulong)((byte)sVar11 >> 1);
    psVar2 = param_1 + 1;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 8);
    psVar2 = *(string **)(param_1 + 0x10);
  }
  uVar5 = uVar5 + 1;
  psVar10 = local_38;
  uVar13 = local_40;
  if (((byte)local_48 & 1) == 0) {
    psVar10 = local_47;
    uVar13 = (ulong)((byte)local_48 >> 1);
  }
  if (((uVar5 < uVar4) && (uVar13 != 0)) && (uVar4 != uVar5)) {
    psVar6 = psVar2 + uVar5;
    do {
      psVar7 = psVar10;
      uVar9 = uVar13;
      do {
        if (*psVar6 == *psVar7) {
          if (((psVar6 == psVar2 + uVar4) ||
              (uVar4 = (long)psVar6 - (long)psVar2, uVar4 == 0xffffffffffffffff)) ||
             (uVar12 = uVar12 + 1, param_2 < uVar12)) goto LAB_10042cdaa;
          goto LAB_10042cbb0;
        }
        psVar7 = psVar7 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      psVar6 = psVar6 + 1;
    } while (psVar6 != psVar2 + uVar4);
  }
LAB_10042cdaa:
  std::string::~string((string *)&local_68);
  std::string::~string(&local_48);
  return iVar1;
}

