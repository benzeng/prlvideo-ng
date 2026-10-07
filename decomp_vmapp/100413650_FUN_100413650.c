
bool FUN_100413650(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  char local_3a;
  char local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  undefined **local_20 [2];
  
  FUN_100414700(local_20);
  local_20[0] = &PTR_FUN_101119d40;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  iVar1 = FUN_100414b50(param_1,&local_38);
  if (iVar1 == 0) {
    lVar2 = local_28;
    if ((local_38 & 1) == 0) {
      lVar2 = (long)&local_38 + 1;
    }
    iVar1 = FUN_100414840(local_20,lVar2,0);
    if (iVar1 == 0) {
      iVar1 = FUN_100414c30(local_20,&local_39);
      if (iVar1 != 0) {
        local_39 = '\0';
      }
      iVar1 = FUN_100414c50(local_20,&local_3a);
      if (iVar1 != 0) {
        local_3a = '\0';
      }
      bVar3 = true;
      if (local_39 == '\0') {
        bVar3 = local_3a != '\0';
      }
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = false;
  }
  std::string::~string((string *)&local_38);
  FUN_100414740(local_20);
  return bVar3;
}

