
void FUN_100704190(long param_1)

{
  long lVar1;
  code *pcVar2;
  int *piVar3;
  Data *pDVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  int *piVar13;
  QKeySequence *pQVar14;
  QArrayData *local_c8;
  QArrayData *local_c0;
  Data *local_b8;
  QDataStream local_b0 [24];
  undefined4 local_98;
  Data *local_90;
  int *local_88;
  int *local_80;
  int *local_78;
  undefined4 local_70;
  int *local_68;
  _func_void_Node_ptr *local_60;
  _func_void_Node_ptr *local_58;
  QString local_50;
  long local_48 [2];
  undefined1 local_31;
  
  FUN_100703f30(&local_50);
  QFile::QFile((QFile *)local_48,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007041ef;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1007041ef:
  cVar5 = QFile::open(local_48,2);
  if (cVar5 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"Can\'t open application shortcuts file for write.");
    goto LAB_100704695;
  }
  local_58 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  local_60 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  lVar1 = param_1 + 0x30;
  FUN_100706d20(&local_68,lVar1);
  local_88 = local_68;
  if (*local_68 != -1) {
    if (*local_68 == 0) {
      QListData::detach((int)&local_88);
      iVar7 = local_88[2];
      if (iVar7 != local_88[3]) {
        local_68 = local_68 + (long)local_68[2] * 2 + 4;
        piVar13 = local_88 + (long)iVar7 * 2 + 4;
        lVar8 = (long)local_88[3] * 8 + (long)iVar7 * -8;
        do {
          piVar3 = *(int **)local_68;
          *(int **)piVar13 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_31 = *piVar3 != 0;
            UNLOCK();
          }
          piVar13 = piVar13 + 2;
          local_68 = local_68 + 2;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
    }
    else {
      LOCK();
      *local_68 = *local_68 + 1;
      local_31 = *local_68 != 0;
      UNLOCK();
    }
  }
  piVar13 = local_88 + (long)local_88[2] * 2 + 4;
  local_78 = local_88 + (long)local_88[3] * 2 + 4;
  local_80 = piVar13;
  if (local_88[2] != local_88[3]) {
    do {
      local_70 = 1;
      local_80 = piVar13;
      uVar9 = FUN_100706de0(&local_58,piVar13);
      uVar10 = FUN_100706960(lVar1,piVar13);
      FUN_100708240(&local_90,uVar10);
      FUN_100707070(uVar9,&local_90);
      pDVar4 = local_90;
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007043c1;
        }
        iVar7 = *(int *)(local_90 + 0xc);
        if (iVar7 != *(int *)(local_90 + 8)) {
          lVar8 = (long)*(int *)(local_90 + 8) * 8 + (long)iVar7 * -8;
          pQVar14 = (QKeySequence *)(local_90 + (long)iVar7 * 8 + 8);
          do {
            QKeySequence::~QKeySequence(pQVar14);
            pQVar14 = pQVar14 + -8;
            lVar8 = lVar8 + 8;
          } while (lVar8 != 0);
        }
        QListData::dispose(pDVar4);
      }
LAB_1007043c1:
      uVar9 = FUN_100706960(lVar1,piVar13);
      uVar6 = FUN_100708300(uVar9);
      puVar11 = (undefined4 *)FUN_100707120(&local_60,piVar13);
      *puVar11 = uVar6;
      piVar13 = local_80 + 2;
      local_80 = piVar13;
    } while (piVar13 != local_78);
  }
  local_70 = 1;
  FUN_100036370(&local_88);
  QDataStream::QDataStream(local_b0,(QIODevice *)local_48);
  local_98 = 0xc;
  QDataStream::operator<<(local_b0,0x30230);
  QDataStream::operator<<(local_b0,1);
  QDataStream::operator<<(local_b0,*(int *)(param_1 + 0x18));
  FUN_1007072f0(local_b0,&local_58);
  FUN_1007073e0(local_b0,&local_60);
  FUN_100708240(&local_b8,param_1 + 0x20);
  QDataStream::operator<<(local_b0,*(int *)(local_b8 + 0xc) - *(int *)(local_b8 + 8));
  uVar12 = (ulong)*(uint *)(local_b8 + 8);
  lVar8 = 0;
  if ((int)*(uint *)(local_b8 + 8) < *(int *)(local_b8 + 0xc)) {
    do {
      operator<<(local_b0,(QKeySequence *)(local_b8 + ((int)uVar12 + lVar8) * 8 + 0x10));
      lVar8 = lVar8 + 1;
      uVar12 = (ulong)*(int *)(local_b8 + 8);
    } while (lVar8 < (long)((long)*(int *)(local_b8 + 0xc) - uVar12));
  }
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070456a;
    }
    iVar7 = *(int *)(local_b8 + 0xc);
    if (iVar7 != *(int *)(local_b8 + 8)) {
      lVar8 = (long)*(int *)(local_b8 + 8) * 8 + (long)iVar7 * -8;
      pQVar14 = (QKeySequence *)(local_b8 + (long)iVar7 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar14);
        pQVar14 = pQVar14 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(local_b8);
  }
LAB_10070456a:
  iVar7 = FUN_100708300(param_1 + 0x20);
  QDataStream::operator<<(local_b0,iVar7);
  (**(code **)(local_48[0] + 0x70))(local_48);
  local_c8 = (QArrayData *)QString::fromAscii_helper("SAVED SHORTCUTS",0xf);
  FUN_1007026b0(&local_c0,lVar1,&local_c8,0);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007045f4;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1007045f4:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070462a;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10070462a:
  QDataStream::~QDataStream(local_b0);
  FUN_100036370(&local_68);
  if (*(int *)(local_60 + 0x10) != -1) {
    if (*(int *)(local_60 + 0x10) != 0) {
      LOCK();
      pcVar2 = local_60 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      local_31 = *(int *)pcVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070466a;
    }
    QHashData::free_helper(local_60);
  }
LAB_10070466a:
  if (*(int *)(local_58 + 0x10) != -1) {
    if (*(int *)(local_58 + 0x10) != 0) {
      LOCK();
      pcVar2 = local_58 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      local_31 = *(int *)pcVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100704695;
    }
    QHashData::free_helper(local_58);
  }
LAB_100704695:
  QFile::~QFile((QFile *)local_48);
  return;
}

