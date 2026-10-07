
undefined8 * FUN_100503e00(undefined8 *param_1,QString *param_2)

{
  int *piVar1;
  QArrayData *pQVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  QFileInfo local_78 [8];
  undefined1 local_70 [56];
  QTypedArrayData<unsigned_short> *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if ((DAT_1011bc288 == '\0') && (iVar5 = ___cxa_guard_acquire(&DAT_1011bc288), iVar5 != 0)) {
    FUN_100507c20(&DAT_1011bc280);
    ___cxa_atexit(FUN_10002f530,&DAT_1011bc280,0x100000000);
    ___cxa_guard_release(&DAT_1011bc288);
  }
  local_30 = (QArrayData *)QString::fromAscii_helper("Host",4);
  local_38 = param_2->field0_0x0;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_19 = *(int *)local_38 != 0;
    UNLOCK();
  }
  cVar3 = QString::startsWith(&local_38,&DAT_1011bc280,1);
  if (cVar3 != '\0') {
    QString::fromUtf8_helper((char *)&local_28,0xa3a1cb);
    pQVar2 = local_30;
    local_30 = local_28;
    local_28 = pQVar2;
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_19 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100503ef4;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
LAB_100503ef4:
    QString::remove((int)&local_38,0);
  }
  FUN_1005049b0(local_70);
  FUN_100506450(local_70,&local_30);
  FUN_1005064c0(local_70,&local_38);
  QFileInfo::QFileInfo(local_78,param_2);
  uVar4 = QFileInfo::isDir();
  FUN_1005065a0(local_70,uVar4);
  QFileInfo::~QFileInfo(local_78);
  puVar6 = (undefined8 *)FUN_100504be0(local_70);
  piVar1 = (int *)*puVar6;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_19 = *piVar1 != 0;
    UNLOCK();
  }
  FUN_100504bb0(local_70);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_70[0] = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_70[0]) goto LAB_100503faf;
    }
    QArrayData::deallocate((QArrayData *)local_38,2,8);
  }
LAB_100503faf:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_70[0] = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

