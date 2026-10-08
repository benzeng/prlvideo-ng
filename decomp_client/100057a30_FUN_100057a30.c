
void FUN_100057a30(long param_1)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  
  QMutex::lock();
  lVar1 = DAT_1023108a8;
  if (DAT_1023108a8 != 0) {
    DAT_1023108b0 = DAT_1023108b0 + 1;
    QMutex::unlock();
    if ((*(char *)(param_1 + 0x4d) == '\0') || (*(char *)(param_1 + 0x4f) != '\0')) {
      if (2 < DAT_10230ffd0) {
        if (*(char *)(param_1 + 0x4e) == '\0') {
          pcVar7 = "false";
        }
        else {
          pcVar7 = "true";
        }
        FUN_100df99c0("SGAC","prl_client_app",3,"Need to reset flag \"%s\" (%s)",
                      "Apps folder added to Dock",pcVar7);
      }
      if (*(char *)(param_1 + 0x4e) != '\0') {
        FUN_1000b16c0(lVar1,param_1 + 0x28,0);
      }
    }
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("SGAC","prl_client_app",3,"Remove Applications Folder from Dock");
    }
    if (((*(char *)(param_1 + 0x4f) == '\0') && (*(char *)(param_1 + 0x50) == '\0')) &&
       (*(char *)(param_1 + 0x51) == '\0')) {
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("SGAC","prl_client_app",3,"Applications Folder already removed from Dock");
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0x48);
      if (iVar6 == 0) {
        cVar2 = QFile::exists((QString *)(param_1 + 0x38));
        iVar6 = 0x3b32;
        if (cVar2 != '\0') {
          iVar6 = 0x3b16;
        }
      }
      FUN_1000b13a0(lVar1,param_1 + 0x28,param_1 + 0x30,iVar6);
      bVar3 = FUN_100056d00(param_1 + 8);
      bVar4 = FUN_100056d00(param_1 + 0x18);
      bVar5 = FUN_100056d00(param_1 + 0x20);
      FUN_1000b14d0(lVar1,bVar4 | bVar5 | bVar3);
      if ((1 < DAT_10230ffd0) && (bVar3 == 1)) {
        FUN_100df99c0("SGAC","prl_client_app",2,"Applications Folder was removed from Dock");
      }
      if ((1 < DAT_10230ffd0) && (bVar4 == 1)) {
        FUN_100df99c0("SGAC","prl_client_app",2,
                      "Compat PD5 Applications Folder was removed from Dock");
      }
      if ((1 < DAT_10230ffd0) && (bVar5 == 1)) {
        FUN_100df99c0("SGAC","prl_client_app",2,
                      "Compat PD6 Applications Folder was removed from Dock");
      }
    }
    FUN_100055290(&DAT_102310898);
    return;
  }
  QMutex::unlock();
  FUN_100df99c0("SGAC","prl_client_app",0,"Failed to get CSharedAppsDsp instance");
  return;
}

