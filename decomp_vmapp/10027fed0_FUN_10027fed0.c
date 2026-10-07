
void FUN_10027fed0(undefined8 *param_1)

{
  ulong uVar1;
  Data *pDVar2;
  
  *param_1 = &PTR_FUN_100bafc60;
  param_1[5] = &PTR_FUN_100bafe80;
  param_1[6] = &PTR_metaObject_100bafef8;
  uVar1 = (ulong)*(byte *)((long)param_1 + 0xc9);
  if (*(undefined8 **)(&DAT_1011c3c20 + uVar1 * 8) != param_1) {
    FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "s_list[m_ucTargetID] == this","../Scsi/ScsiDev/GenericScsiDev.cpp",0x6c,
                  "~CGenericScsiDevice");
    uVar1 = (ulong)*(byte *)((long)param_1 + 0xc9);
  }
  *(undefined8 *)(&DAT_1011c3c20 + uVar1 * 8) = 0;
  pDVar2 = (Data *)param_1[0x24];
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) goto LAB_10027ff97;
      pDVar2 = (Data *)param_1[0x24];
    }
    QListData::dispose(pDVar2);
  }
LAB_10027ff97:
  QMutex::~QMutex((QMutex *)(param_1 + 0x23));
  QMutex::~QMutex((QMutex *)(param_1 + 0x21));
  FUN_100284de0(param_1 + 0x12);
  FUN_100257ad0(param_1 + 5);
  FUN_10025b110(param_1);
  return;
}

