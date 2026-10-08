
void FUN_100abea30(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  float fVar5;
  string local_50;
  undefined1 local_4f [15];
  undefined1 *local_40;
  string local_38;
  undefined1 local_37 [15];
  undefined1 *local_28;
  
  if ((DAT_102313b18 == '\0') && (iVar2 = ___cxa_guard_acquire(&DAT_102313b18), iVar2 != 0)) {
    FUN_100deba20(&local_38,"Q29yZURvY2tJc01hZ25pZmljYXRpb25FbmFibGVk");
    if (((byte)local_38 & 1) == 0) {
      local_28 = local_37;
    }
    pcVar3 = (code *)_dlsym(0xfffffffffffffffe,local_28);
    DAT_102313b10 = pcVar3;
    std::string::~string(&local_38);
    DAT_102313b10 = pcVar3;
    ___cxa_guard_release(&DAT_102313b18);
  }
  if ((DAT_102313b28 == '\0') && (iVar2 = ___cxa_guard_acquire(&DAT_102313b28), iVar2 != 0)) {
    FUN_100deba20(&local_50,"Q29yZURvY2tHZXRNYWduaWZpY2F0aW9uU2l6ZQ==");
    if (((byte)local_50 & 1) == 0) {
      local_40 = local_4f;
    }
    pcVar3 = (code *)_dlsym(0xfffffffffffffffe,local_40);
    DAT_102313b20 = pcVar3;
    std::string::~string(&local_50);
    DAT_102313b20 = pcVar3;
    ___cxa_guard_release(&DAT_102313b28);
  }
  cVar1 = (*DAT_102313b10)();
  if (cVar1 != '\0') {
    fVar5 = (float)(*DAT_102313b20)();
    iVar2 = (int)((double)fVar5 * DAT_100e19980) + 9;
    if (param_1 == 3) {
      iVar4 = (param_2[3] + 1) - param_2[1];
    }
    else {
      iVar4 = (param_2[2] + 1) - *param_2;
    }
    if (iVar4 < iVar2) {
      if (param_1 == 2) {
        *param_2 = param_2[2] - iVar2;
      }
      else if (param_1 == 0) {
        param_2[2] = iVar2 + *param_2;
      }
      else if (param_1 == 3) {
        param_2[1] = param_2[3] - iVar2;
      }
    }
  }
  return;
}

