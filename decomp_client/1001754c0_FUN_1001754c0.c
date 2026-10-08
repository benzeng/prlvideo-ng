
bool FUN_1001754c0(long param_1,int param_2)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  Data_conflict local_68;
  undefined4 local_60;
  QArrayData *local_58;
  QVariant local_50;
  QVariant local_40;
  uint local_30;
  undefined1 local_29;
  
  local_30 = 0;
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  iVar4 = _PrlSrv_IsFeatureSupported(lVar1,param_2,&local_30);
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  if (iVar4 < 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: failed to get status of PFSM_VM_CONFIG_MERGE_SUPPORT feature, %#x",
                  iVar4);
    return false;
  }
  if (local_30 == 0) goto LAB_100175600;
  uVar5 = 0;
  if ((*(long *)(param_1 + 0xa8) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0xa8) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
  }
  cVar2 = FUN_10061c2b0(uVar5);
  if ((0x12 < param_2 - 0x10U) || (cVar2 == '\0')) goto LAB_100175600;
  QSettings::QSettings((QSettings *)&local_50,(QObject *)0x0);
  local_58 = (QArrayData *)QString::fromAscii_helper("Advanced/TraditionalLook",0x18);
  local_60 = 0x80000000;
  local_68.field7 = 0;
  QSettings::value((QString *)&local_40,&local_50);
  bVar3 = QVariant::toBool();
  local_30 = bVar3 ^ 1;
  QVariant::~QVariant(&local_40);
  QVariant::~QVariant((QVariant *)&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001755f7;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1001755f7:
  QSettings::~QSettings((QSettings *)&local_50);
LAB_100175600:
  return local_30 != 0;
}

