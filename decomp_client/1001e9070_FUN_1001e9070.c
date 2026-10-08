
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1001e9070(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_100d8b860(&local_50);
  local_40 = (QArrayData *)QString::fromAscii_helper("prl_disp_service",0x10);
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_50;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_31 = *(int *)local_50 != 0;
    UNLOCK();
  }
  iVar2 = *(int *)local_40;
  if (1 < iVar2 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_31 = *(int *)local_40 != 0;
    UNLOCK();
    iVar2 = *(int *)local_40;
  }
  if (iVar2 != -1) {
    if (iVar2 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001e90f7;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001e90f7:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001e9127;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001e9127:
  local_68 = DAT_100e14fe0;
  uStack_60 = _UNK_100e14fe8;
  QElapsedTimer::start();
  uVar4 = 1;
  while( true ) {
    cVar1 = QElapsedTimer::hasExpired((longlong)&local_68);
    uVar3 = 0x80000015;
    if (cVar1 != '\0') break;
    cVar1 = QFileInfo::exists(&local_48);
    uVar3 = 0;
    if ((cVar1 == '\0') ||
       (((uVar4 & 7) == 0 &&
        (((cVar1 = QFileInfo::exists(&local_48), cVar1 == '\0' ||
          (cVar1 = FUN_1001e9440(&local_48,local_70), cVar1 == '\0')) ||
         (cVar1 = FUN_1001e95d0(&local_48,local_70), uVar3 = 0, cVar1 == '\0')))))) break;
    uVar4 = uVar4 + 1;
    FUN_100db8d20(0xfa);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001e9263;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001e9263:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return uVar3;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return uVar3;
}

