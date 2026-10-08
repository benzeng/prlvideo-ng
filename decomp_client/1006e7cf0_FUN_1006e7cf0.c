
void FUN_1006e7cf0(void)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001554a0(uVar1);
  if (lVar2 == 0) {
    CAppUpdateWorker::isDownloadInBackgroundByDefault();
  }
  else {
    uVar1 = FUN_10016f500(lVar2);
    FUN_10061b500(uVar1,0x80);
  }
  return;
}

