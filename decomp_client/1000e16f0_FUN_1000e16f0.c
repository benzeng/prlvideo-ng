
undefined1 FUN_1000e16f0(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  QArrayData *pQVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  undefined1 uVar8;
  QArrayData *local_190;
  undefined1 *local_188;
  long local_180;
  QArrayData *local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_164;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  undefined1 local_129;
  undefined1 local_128 [80];
  undefined1 local_d8 [80];
  undefined1 local_88 [80];
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar6;
  QString::toUtf8();
  iVar3 = _FSPathMakeRef(local_138 + *(long *)(local_138 + 0x10),local_d8,0);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_129 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_129) goto LAB_1000e1778;
    }
    QArrayData::deallocate(local_138,1,8);
  }
LAB_1000e1778:
  if (iVar3 == 0) {
    local_148 = (QArrayData *)PTR_shared_null_1021e1288;
    pQVar4 = (QArrayData *)PTR_shared_null_1021e1288;
    if (*(int *)(*(long *)(param_2 + 8) + 8) < *(int *)(*(long *)(param_2 + 8) + 0xc)) {
      lVar6 = 0;
      do {
        QString::toUtf8();
        iVar3 = _FSPathMakeRef(local_150 + *(long *)(local_150 + 0x10),local_128,0);
        if (*(int *)local_150 != -1) {
          if (*(int *)local_150 != 0) {
            LOCK();
            *(int *)local_150 = *(int *)local_150 + -1;
            local_129 = *(int *)local_150 != 0;
            UNLOCK();
            if ((bool)local_129) goto LAB_1000e189b;
          }
          QArrayData::deallocate(local_150,1,8);
        }
LAB_1000e189b:
        if (iVar3 == 0) {
          uVar1 = *(uint *)(pQVar4 + 4);
          uVar7 = uVar1 + 1;
          uVar5 = *(uint *)(pQVar4 + 8) & 0x7fffffff;
          if ((*(uint *)pQVar4 < 2) && (uVar7 <= uVar5)) {
            _memcpy(pQVar4 + (long)(int)uVar1 * 0x50 + *(long *)(pQVar4 + 0x10),local_128,0x50);
          }
          else {
            _memcpy(local_88,local_128,0x50);
            uVar2 = uVar5;
            if (uVar5 < uVar7) {
              uVar2 = uVar7;
            }
            FUN_1000e8290(&local_148,uVar1,uVar2,(ulong)(uVar5 < uVar7) << 3);
            pQVar4 = local_148;
            _memcpy(local_148 +
                    (long)(int)*(uint *)(local_148 + 4) * 0x50 + *(long *)(local_148 + 0x10),
                    local_88,0x50);
          }
          *(uint *)(pQVar4 + 4) = *(uint *)(pQVar4 + 4) + 1;
        }
        else {
          QString::toUtf8();
          FUN_100df99c0("SGAC","prl_client_app",0,
                        "Error: failed to get FSRef for document by its path=\"%s\"",
                        local_158 + *(long *)(local_158 + 0x10));
          if (*(int *)local_158 != -1) {
            if (*(int *)local_158 != 0) {
              LOCK();
              *(int *)local_158 = *(int *)local_158 + -1;
              local_129 = *(int *)local_158 != 0;
              UNLOCK();
              if ((bool)local_129) goto LAB_1000e19f7;
            }
            QArrayData::deallocate(local_158,1,8);
          }
        }
LAB_1000e19f7:
        lVar6 = lVar6 + 1;
      } while (lVar6 < (long)*(int *)(*(long *)(param_2 + 8) + 0xc) -
                       (long)*(int *)(*(long *)(param_2 + 8) + 8));
    }
    local_188 = local_d8;
    local_180 = (long)(int)*(uint *)(pQVar4 + 4);
    if (1 < *(uint *)pQVar4) {
      if ((*(uint *)(pQVar4 + 8) & 0x7fffffff) == 0) {
        pQVar4 = (QArrayData *)QArrayData::allocate(0x50,8,0,2);
        local_148 = pQVar4;
      }
      else {
        FUN_1000e8290(&local_148,*(uint *)(pQVar4 + 4),*(uint *)(pQVar4 + 8) & 0x7fffffff,0);
        pQVar4 = local_148;
      }
    }
    local_178 = pQVar4 + *(long *)(pQVar4 + 0x10);
    local_170 = 0;
    local_168 = 0x30840;
    local_164 = 0;
    iVar3 = _LSOpenFromRefSpec(&local_188,0);
    uVar8 = 1;
    if (iVar3 != 0) {
      QString::toUtf8();
      FUN_100df99c0("SGAC","prl_client_app",0,"Error: failed to launch application \"%s\"",
                    local_190 + *(long *)(local_190 + 0x10));
      if (*(int *)local_190 != -1) {
        if (*(int *)local_190 != 0) {
          LOCK();
          *(int *)local_190 = *(int *)local_190 + -1;
          local_129 = *(int *)local_190 != 0;
          UNLOCK();
          if ((bool)local_129) goto LAB_1000e1b32;
        }
        QArrayData::deallocate(local_190,1,8);
      }
LAB_1000e1b32:
      uVar8 = 0;
    }
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_129 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_129) goto LAB_1000e1b68;
      }
      QArrayData::deallocate(pQVar4,0x50,8);
    }
LAB_1000e1b68:
    lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
    goto LAB_1000e1b72;
  }
  QString::toUtf8();
  FUN_100df99c0("SGAC","prl_client_app",0,
                "Error: failed to get FSRef for application by its path=\"%s\"",
                local_140 + *(long *)(local_140 + 0x10));
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_129 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_129) goto LAB_1000e17f0;
    }
    QArrayData::deallocate(local_140,1,8);
  }
LAB_1000e17f0:
  uVar8 = 0;
LAB_1000e1b72:
  if (lVar6 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

