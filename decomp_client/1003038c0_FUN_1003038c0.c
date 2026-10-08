
bool FUN_1003038c0(bool *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  CTaskGenericId *pCVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  long local_c8;
  int local_bc;
  QArrayData *local_b8;
  CTaskGenericId local_b0 [24];
  QArrayData *local_98;
  CTaskGenericId local_90 [24];
  QArrayData *local_78;
  undefined8 local_70;
  QArrayData *local_68;
  undefined8 local_60;
  int *piStack_58;
  undefined8 local_50;
  QVariant local_48;
  undefined1 local_31;
  
  if (param_1[0x60] != false) {
    return false;
  }
  local_70 = *(undefined8 *)(param_1 + 0x18);
  local_68 = *(QArrayData **)(param_1 + 0x20);
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_31 = *(int *)local_68 != 0;
    UNLOCK();
  }
  local_60 = *(undefined8 *)(param_1 + 0x28);
  piStack_58 = *(int **)(param_1 + 0x30);
  local_50 = *(undefined8 *)(param_1 + 0x38);
  if (piStack_58 != (int *)0x0) {
    LOCK();
    *piStack_58 = *piStack_58 + 1;
    local_31 = *piStack_58 != 0;
    UNLOCK();
  }
  QVariant::QVariant(&local_48,(QVariant *)(param_1 + 0x40));
  uVar4 = FUN_100152280();
  local_78 = local_68;
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_31 = *(int *)local_68 != 0;
    UNLOCK();
  }
  lVar5 = FUN_1001548f0(uVar4,&local_78);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10030399e;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10030399e:
  if ((lVar5 != 0) && (cVar1 = FUN_10018ecf0(lVar5), cVar1 == '\0')) {
    bVar9 = false;
    goto LAB_100303ce7;
  }
  local_98 = local_68;
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_31 = *(int *)local_68 != 0;
    UNLOCK();
  }
  FUN_100200da0(local_90,&local_98);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100303a1b;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100303a1b:
  pCVar6 = (CTaskGenericId *)CTaskManager::instance();
  lVar7 = CTaskManager::getTaskById(pCVar6);
  bVar8 = false;
  bVar9 = false;
  if (lVar7 == 0) {
    bVar9 = bVar8;
    if (local_70._4_4_ < 0x7f0) {
      uVar2 = local_70._4_4_ - 0x3e9;
      if (uVar2 < 0x36) {
        if ((0x20000010800010U >> ((ulong)uVar2 & 0x3f) & 1) == 0) {
          if (((ulong)uVar2 != 0) ||
             (iVar3 = CSdkRequest::getResultCode(param_1), iVar3 != -0x7ffffbea))
          goto LAB_100303b7a;
          bVar9 = false;
        }
      }
      else {
LAB_100303b7a:
        iVar3 = CSdkRequest::getResultCode(param_1);
        bVar9 = true;
        if (iVar3 < -0x7ffffefb) {
          if (iVar3 < -0x7fffff6e) {
            if (iVar3 != -0x7ffffff8) {
              if (iVar3 != -0x7fffffeb) goto LAB_100303c8c;
              bVar9 = local_70._4_4_ != 0x3ea;
            }
          }
          else {
            if (iVar3 == -0x7fffff6e) goto LAB_100303c7b;
            if (iVar3 != -0x7fffff67) goto LAB_100303c8c;
LAB_100303bf8:
            FUN_100060bb0();
            lVar5 = FUN_100060e80("CVmConfigEditor",lVar5);
            bVar9 = lVar5 == 0;
          }
        }
        else if (iVar3 < -0x7fff7000) {
          if (iVar3 < -0x7ffffdb7) {
            if (iVar3 == -0x7ffffefb) {
              if (local_70._4_4_ != 0x3ec) goto LAB_100303bf8;
              goto LAB_100303c7b;
            }
            if (iVar3 != -0x7ffffdc7) goto LAB_100303c8c;
            bVar9 = local_70._4_4_ != 0x7ea;
          }
          else if (iVar3 == -0x7ffffdb7) {
LAB_100303c87:
            bVar9 = false;
          }
          else {
            if (iVar3 != -0x7ffffcd0) goto LAB_100303c8c;
            bVar9 = local_70._4_4_ != 0x851;
          }
        }
        else {
          if (iVar3 < -0x7ffcf000) {
            if (iVar3 == -0x7fff7000) goto LAB_100303c87;
          }
          else if (iVar3 < -0x7ffbbdfd) {
            if (iVar3 == -0x7ffcf000) {
LAB_100303c7b:
              bVar9 = false;
              goto LAB_100303cdb;
            }
            if (iVar3 == -0x7ffbeaf7) {
              bVar9 = false;
              goto LAB_100303cdb;
            }
          }
          else {
            if (iVar3 == -0x7ffbbdfd) goto LAB_100303c7b;
            if (iVar3 == -0x7ffb0000) goto LAB_100303c87;
          }
LAB_100303c8c:
          local_c8 = *(long *)(param_1 + 0x10);
          if (local_c8 != 0) {
            _PrlHandle_AddRef();
          }
          cVar1 = SdkUtils::GetResultCodeFromComplexEvent(&local_bc,&local_c8);
          if (local_c8 != 0) {
            _PrlHandle_Free();
          }
          if (cVar1 != '\0') {
            bVar9 = local_bc != -0x7fffdfff;
          }
        }
      }
    }
    else if (local_70._4_4_ < 0x854) {
      if (local_70._4_4_ < 0x808) {
        if (local_70._4_4_ == 0x7f0) {
          local_b8 = local_68;
          if (1 < *(int *)local_68 + 1U) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + 1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
          }
          FUN_1002095f0(local_b0,&local_b8);
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_31 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100303b1b;
            }
            QArrayData::deallocate(local_b8,2,8);
          }
LAB_100303b1b:
          pCVar6 = (CTaskGenericId *)CTaskManager::instance();
          lVar7 = CTaskManager::getTaskById(pCVar6);
          CTaskGenericId::~CTaskGenericId(local_b0);
          if (lVar7 == 0) goto LAB_100303b7a;
          bVar9 = false;
        }
        else if (local_70._4_4_ != 0x7f1) goto LAB_100303b7a;
      }
      else if ((local_70._4_4_ != 0x808) && (local_70._4_4_ != 0x842)) goto LAB_100303b7a;
    }
    else if (local_70._4_4_ != 0x854) goto LAB_100303b7a;
  }
LAB_100303cdb:
  CTaskGenericId::~CTaskGenericId(local_90);
LAB_100303ce7:
  QVariant::~QVariant(&local_48);
  if (piStack_58 != (int *)0x0) {
    LOCK();
    *piStack_58 = *piStack_58 + -1;
    local_31 = *piStack_58 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (piStack_58 != (int *)0x0)) {
      operator_delete(piStack_58);
    }
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return bVar9;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
  return bVar9;
}

