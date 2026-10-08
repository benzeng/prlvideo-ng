
bool FUN_1009c1ab0(char *param_1)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  bool bVar5;
  string local_60 [24];
  string local_48 [24];
  string local_30;
  undefined1 local_2f [7];
  ulong local_28;
  undefined1 *local_20;
  
  if (DAT_102313720 != 0) {
    return true;
  }
  _strlen(param_1);
  std::string::__init((char *)&local_30,(ulong)param_1);
  uVar4 = local_28;
  if (((byte)local_30 & 1) == 0) {
    uVar4 = (ulong)((byte)local_30 >> 1);
  }
  if (6 < uVar4) {
    puVar3 = local_20;
    if (((byte)local_30 & 1) == 0) {
      local_28 = (ulong)((byte)local_30 >> 1);
      puVar3 = local_2f;
    }
    iVar1 = _strcmp(puVar3 + (local_28 - 6),".dylib");
    if (iVar1 == 0) goto LAB_1009c1b3f;
  }
  std::string::append((char *)&local_30);
LAB_1009c1b3f:
  lVar2 = std::string::find((char)&local_30,0x2f);
  if (lVar2 == -1) {
    std::string::string(local_48,&local_30,0,3,(allocator *)&local_30);
    iVar1 = std::string::compare((char *)local_48);
    std::string::~string(local_48);
    if (iVar1 != 0) {
      FUN_100a65520(local_60,"lib",&local_30);
      std::string::operator=(&local_30,local_60);
      std::string::~string(local_60);
    }
  }
  if (((byte)local_30 & 1) == 0) {
    local_20 = local_2f;
  }
  DAT_102313720 = _dlopen(local_20,1);
  bVar5 = DAT_102313720 != 0;
  std::string::~string(&local_30);
  return bVar5;
}

