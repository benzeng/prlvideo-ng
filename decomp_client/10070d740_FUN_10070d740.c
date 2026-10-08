
undefined1 FUN_10070d740(undefined8 param_1,QString *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  Data *pDVar5;
  char cVar6;
  int iVar7;
  QKeySequence *pQVar8;
  long lVar9;
  ulong uVar10;
  undefined1 uVar11;
  QKeySequence local_b0 [8];
  QKeySequence local_a8 [16];
  QArrayData *local_98;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  int local_78;
  int local_74;
  QDataStream local_70 [24];
  undefined4 local_58;
  QArrayData *local_50;
  long local_48 [2];
  undefined1 local_31;
  
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    return 0;
  }
  FUN_100714cc0(param_3);
  QFile::QFile((QFile *)local_48,param_2);
  cVar6 = QFile::open((QFile *)local_48,1);
  if (cVar6 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"Can\'t open \'%s\' remap profile for read.",
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 == -1) {
      uVar11 = 0;
    }
    else {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) {
          uVar11 = 0;
          goto LAB_10070db01;
        }
      }
      QArrayData::deallocate(local_50,1,8);
      uVar11 = 0;
    }
    goto LAB_10070db01;
  }
  QDataStream::QDataStream(local_70,(QIODevice *)local_48);
  local_58 = 0xc;
  QDataStream::operator>>(local_70,&local_74);
  if (local_74 == 0x30231) {
    local_78 = 0;
    QDataStream::operator>>(local_70,&local_78);
    operator>>(local_70,(QString *)(param_3 + 8));
    puVar4 = PTR_shared_null_1021e15e8;
    local_80 = (Data *)PTR_shared_null_1021e15e8;
    FUN_1007063b0(local_70,&local_80);
    local_88 = (Data *)puVar4;
    FUN_1007063b0(local_70,&local_88);
    local_90 = (Data *)puVar4;
    FUN_100713da0(local_70,&local_90);
    (**(code **)(local_48[0] + 0x70))(local_48);
    uVar1 = *(uint *)(local_80 + 8);
    uVar10 = (ulong)uVar1;
    iVar7 = *(int *)(local_80 + 0xc) - uVar1;
    iVar2 = *(int *)(local_88 + 8);
    if ((iVar7 == *(int *)(local_88 + 0xc) - iVar2) &&
       (iVar3 = *(int *)(local_90 + 8), iVar7 == *(int *)(local_90 + 0xc) - iVar3)) {
      uVar11 = 1;
      if ((int)uVar1 < *(int *)(local_80 + 0xc)) {
        lVar9 = 0;
        while( true ) {
          FUN_100714b00(local_b0,local_80 + ((int)uVar10 + lVar9) * 8 + 0x10,
                        local_88 + (iVar2 + lVar9) * 8 + 0x10,
                        *(undefined4 *)(local_90 + (iVar3 + lVar9) * 8 + 0x10));
          FUN_100559c70(param_3 + 0x10,local_b0);
          QKeySequence::~QKeySequence(local_a8);
          QKeySequence::~QKeySequence(local_b0);
          lVar9 = lVar9 + 1;
          uVar10 = (ulong)*(int *)(local_80 + 8);
          if ((long)((long)*(int *)(local_80 + 0xc) - uVar10) <= lVar9) break;
          iVar2 = *(int *)(local_88 + 8);
          iVar3 = *(int *)(local_90 + 8);
        }
      }
    }
    else {
      QString::toUtf8();
      FUN_100df99c0("","prl_client_app",0,"Invalid \'%s\' remap profile content.",
                    local_98 + *(long *)(local_98 + 0x10));
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10070d977;
        }
        QArrayData::deallocate(local_98,1,8);
      }
LAB_10070d977:
      uVar11 = 0;
    }
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10070d9a6;
      }
      QListData::dispose(local_90);
    }
LAB_10070d9a6:
    pDVar5 = local_88;
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10070da0a;
      }
      iVar2 = *(int *)(local_88 + 0xc);
      if (iVar2 != *(int *)(local_88 + 8)) {
        lVar9 = (long)*(int *)(local_88 + 8) * 8 + (long)iVar2 * -8;
        pQVar8 = (QKeySequence *)(local_88 + (long)iVar2 * 8 + 8);
        do {
          QKeySequence::~QKeySequence(pQVar8);
          pQVar8 = pQVar8 + -8;
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0);
      }
      QListData::dispose(pDVar5);
    }
LAB_10070da0a:
    pDVar5 = local_80;
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10070da6a;
      }
      iVar2 = *(int *)(local_80 + 0xc);
      if (iVar2 != *(int *)(local_80 + 8)) {
        lVar9 = (long)*(int *)(local_80 + 8) * 8 + (long)iVar2 * -8;
        pQVar8 = (QKeySequence *)(local_80 + (long)iVar2 * 8 + 8);
        do {
          QKeySequence::~QKeySequence(pQVar8);
          pQVar8 = pQVar8 + -8;
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0);
      }
      QListData::dispose(pDVar5);
    }
  }
  else {
    uVar11 = 0;
  }
LAB_10070da6a:
  QDataStream::~QDataStream(local_70);
LAB_10070db01:
  QFile::~QFile((QFile *)local_48);
  return uVar11;
}

