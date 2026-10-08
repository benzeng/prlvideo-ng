
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100429f00(long param_1)

{
  QObject *pQVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  QObject *pQVar6;
  QObject *pQVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  CVmHardDisk *pCVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  Connection local_50 [8];
  CVmHardDisk *local_48;
  QObject *local_40;
  undefined1 local_31;
  
  if (((*(long *)(param_1 + 0xe8) == 0) || (*(int *)(*(long *)(param_1 + 0xe8) + 4) == 0)) ||
     (*(long *)(param_1 + 0xf0) == 0)) {
    pcVar10 = "(!)Error: can\'t resize hdd - VM is invalid.";
    uVar3 = 0;
  }
  else {
    if (*(long *)(param_1 + 0xf8) == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(param_1 + 0xf8) + 4) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x100) == 0) {
      return 0;
    }
    uVar3 = CVmHardDisk::getSize();
    auVar14._8_4_ = (int)((ulong)uVar3 >> 0x20);
    auVar14._0_8_ = uVar3;
    auVar14._12_4_ = _UNK_100e11114;
    dVar12 = (((double)CONCAT44(_DAT_100e11110,(int)uVar3) - _DAT_100e11120) +
             (auVar14._8_8_ - _UNK_100e11128)) * DAT_100e14d10;
    dVar13 = (double)QDoubleSpinBox::value();
    dVar12 = dVar12 - dVar13;
    if (dVar12 < 0.0) {
      dVar12 = (double)((ulong)dVar12 ^ DAT_100e14fe0);
    }
    auVar15._8_4_ = (int)((ulong)DAT_102273e68 >> 0x20);
    auVar15._0_8_ = DAT_102273e68;
    auVar15._12_4_ = _UNK_100e11114;
    if ((((double)CONCAT44(_DAT_100e11110,(int)DAT_102273e68) - _DAT_100e11120) +
        (auVar15._8_8_ - _UNK_100e11128)) * DAT_100e14d10 < dVar12) {
      QAbstractButton::isChecked();
      dVar12 = (double)QDoubleSpinBox::value();
      dVar13 = DAT_100e1e238 * dVar12;
      uVar4 = (long)dVar13;
      if (DAT_100e1e240 <= dVar13) {
        uVar4 = (long)(dVar13 - DAT_100e1e240) ^ 0x8000000000000000;
      }
      auVar16._8_4_ = (int)(uVar4 >> 0x20);
      auVar16._0_8_ = uVar4;
      auVar16._12_4_ = _UNK_100e11114;
      dVar13 = (((double)CONCAT44(_DAT_100e11110,(int)uVar4) - _DAT_100e11120) +
               (auVar16._8_8_ - _UNK_100e11128)) * DAT_100e14d10;
      uVar5 = CDiskImageInfo::getMinSize();
      if ((dVar13 < dVar12) + uVar4 < uVar5) {
        CDiskImageInfo::getMinSize();
      }
      local_48 = operator_new(0x158);
      pCVar11 = (CVmHardDisk *)0x0;
      if ((*(long *)(param_1 + 0xf8) != 0) &&
         (pCVar11 = (CVmHardDisk *)0x0, *(int *)(*(long *)(param_1 + 0xf8) + 4) != 0)) {
        pCVar11 = *(CVmHardDisk **)(param_1 + 0x100);
      }
      CVmHardDisk::CVmHardDisk(local_48,pCVar11);
      pQVar6 = operator_new(0x18);
      *(CVmHardDisk **)(pQVar6 + 0x10) = local_48;
      *(code **)(pQVar6 + 8) = FUN_10042dd40;
      *(undefined8 *)pQVar6 = 0x100000001;
      QtSharedPointer::ExternalRefCountData::setQObjectShared(pQVar6,SUB81(local_48,0));
      CVmHardDisk::setSize((ulong)local_48);
      pQVar7 = operator_new(0x60);
      uVar3 = 0;
      if ((*(long *)(param_1 + 0xe8) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0xe8) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0xf0);
      }
      if (pQVar6 != (QObject *)0x0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + 1;
        UNLOCK();
        LOCK();
        pQVar1 = pQVar6 + 4;
        *(int *)pQVar1 = *(int *)pQVar1 + 1;
        local_31 = *(int *)pQVar1 != 0;
        UNLOCK();
      }
      local_40 = pQVar6;
      bVar2 = QAbstractButton::isChecked();
      FUN_1002287f0(pQVar7,uVar3,&local_48,(ulong)bVar2 << 0xb,*(undefined8 *)(param_1 + 0x10));
      piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar7);
      piVar9 = *(int **)(param_1 + 0x108);
      if (piVar9 != piVar8) {
        if (piVar8 != (int *)0x0) {
          LOCK();
          *piVar8 = *piVar8 + 1;
          local_31 = *piVar8 != 0;
          UNLOCK();
          piVar9 = *(int **)(param_1 + 0x108);
        }
        if (piVar9 != (int *)0x0) {
          LOCK();
          *piVar9 = *piVar9 + -1;
          local_31 = *piVar9 != 0;
          UNLOCK();
          if ((!(bool)local_31) && (*(void **)(param_1 + 0x108) != (void *)0x0)) {
            operator_delete(*(void **)(param_1 + 0x108));
          }
        }
        *(int **)(param_1 + 0x108) = piVar8;
        *(QObject **)(param_1 + 0x110) = pQVar7;
      }
      if (piVar8 != (int *)0x0) {
        LOCK();
        *piVar8 = *piVar8 + -1;
        local_31 = *piVar8 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar8);
        }
      }
      pQVar7 = local_40;
      if (local_40 != (QObject *)0x0) {
        LOCK();
        pQVar1 = local_40 + 4;
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_31 = *(int *)pQVar1 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          (**(code **)(local_40 + 8))(local_40);
        }
        LOCK();
        *(int *)pQVar7 = *(int *)pQVar7 + -1;
        local_31 = *(int *)pQVar7 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(pQVar7);
        }
      }
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x108) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x108) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x110);
      }
      QObject::connect(local_50,uVar3,"2taskFinished(PRL_RESULT)",param_1,
                       "1onResizeCompleted(PRL_RESULT)",0);
      QMetaObject::Connection::~Connection(local_50);
      FUN_10042d570(param_1,3);
      CAbstractTask::execute();
      if (pQVar6 == (QObject *)0x0) {
        return 1;
      }
      LOCK();
      pQVar7 = pQVar6 + 4;
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        (**(code **)(pQVar6 + 8))(pQVar6);
      }
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return 1;
      }
      operator_delete(pQVar6);
      return 1;
    }
    if (DAT_10230ffd0 < 3) {
      return 0;
    }
    pcVar10 = "Resize options weren\'t changed.";
    uVar3 = 3;
  }
  FUN_100df99c0("","prl_client_app",uVar3,pcVar10);
  return 0;
}

