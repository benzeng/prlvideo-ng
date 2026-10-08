
void FUN_1001c9550(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  QString local_178;
  QString local_170;
  QString local_168;
  undefined **local_160 [3];
  int *local_148;
  undefined4 local_134;
  long local_130;
  long local_128;
  CVmConfiguration local_120 [248];
  undefined4 local_28;
  undefined1 local_21;
  
  local_28 = param_1;
  FUN_100df99c0("","prl_client_app",0,"SDK lib is warming up...");
  iVar2 = SdkUtils::initSdk(true,false,0);
  CVmConfiguration::CVmConfiguration(local_120);
  local_128 = 0;
  if (-1 < iVar2) {
    local_128 = 0;
    _PrlSrv_Create(&local_128);
    local_130 = 0;
    _PrlSrv_CreateVm(local_128,&local_130);
    lVar3 = _PrlSrv_LoginLocal(local_128,"",0,1);
    _PrlJob_Wait(lVar3,param_3);
    local_134 = 0;
    _PrlSrv_CheckParallelsServerAlive(1,"localhost",&local_134,0);
    _PrlApi_Deinit();
    if (lVar3 != 0) {
      _PrlHandle_Free(lVar3);
    }
    if (local_130 != 0) {
      _PrlHandle_Free();
    }
  }
  cVar1 = MacUtils::isWindowServerAlive();
  if (cVar1 == '\0') goto LAB_1001c97f9;
  FUN_100df99c0("","prl_client_app",0,"GUI process is warming up...");
  FUN_100ae89b0(local_160,&local_28,param_2,1);
  FUN_100ae8a70(local_160);
  local_168.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Parallels Software",0x12);
  QCoreApplication::setOrganizationName(&local_168);
  if (*(int *)local_168.field0_0x0 != -1) {
    if (*(int *)local_168.field0_0x0 != 0) {
      LOCK();
      *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
      local_21 = *(int *)local_168.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001c9703;
    }
    QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
  }
LAB_1001c9703:
  local_170.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("parallels.com",0xd);
  QCoreApplication::setOrganizationDomain(&local_170);
  if (*(int *)local_170.field0_0x0 != -1) {
    if (*(int *)local_170.field0_0x0 != 0) {
      LOCK();
      *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
      local_21 = *(int *)local_170.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001c975d;
    }
    QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
  }
LAB_1001c975d:
  FUN_100d8e790(&local_178,0xffff);
  QCoreApplication::setApplicationName(&local_178);
  if (*(int *)local_178.field0_0x0 != -1) {
    if (*(int *)local_178.field0_0x0 != 0) {
      LOCK();
      *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
      local_21 = *(int *)local_178.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001c97b0;
    }
    QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
  }
LAB_1001c97b0:
  local_160[0] = &PTR_FUN_10223b460;
  if (local_148 != (int *)0x0) {
    LOCK();
    *local_148 = *local_148 + -1;
    local_21 = *local_148 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_148 != (int *)0x0)) {
      operator_delete(local_148);
    }
  }
  QApplication::~QApplication((QApplication *)local_160);
LAB_1001c97f9:
  FUN_100df99c0("","prl_client_app",0,"Finished");
  if (local_128 != 0) {
    _PrlHandle_Free();
  }
  CVmConfiguration::~CVmConfiguration(local_120);
  return;
}

