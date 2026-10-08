
undefined8 * FUN_100aabc20(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  uint uVar4;
  long lVar5;
  char *pcVar6;
  size_t sVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  QArrayData *local_188;
  Data *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  Data *local_148;
  undefined1 local_139;
  undefined1 local_138 [256];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar2;
  lVar5 = FUN_100be6b60(param_2);
  if ((lVar5 == 0) || (pcVar6 = (char *)FUN_100bec350(lVar5,local_138,0x100), pcVar6 == (char *)0x0)
     ) {
    *param_1 = PTR_shared_null_1021e1288;
    goto LAB_100aac171;
  }
  sVar7 = _strlen(pcVar6);
  local_158 = (QArrayData *)QString::fromAscii_helper(pcVar6,(int)sVar7);
  QString::simplified();
  local_160 = (QArrayData *)QString::fromAscii_helper(" ",1);
  QString::split(&local_148,&local_150,&local_160,0,1);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_139 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_139) goto LAB_100aabd18;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_100aabd18:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_139 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_139) goto LAB_100aabd54;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100aabd54:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_139 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_139) goto LAB_100aabd90;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100aabd90:
  uVar4 = *(uint *)(local_148 + 8);
  if ((int)(*(uint *)(local_148 + 0xc) - uVar4) < 5) {
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    if (1 < *(uint *)local_148) {
      FUN_100036c40(&local_148,*(uint *)(local_148 + 4));
      uVar4 = *(uint *)(local_148 + 8);
    }
    local_168 = *(QArrayData **)(local_148 + (long)(int)uVar4 * 8 + 0x20);
    if (1 < *(int *)local_168 + 1U) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + 1;
      local_139 = *(int *)local_168 != 0;
      UNLOCK();
    }
    if (2 < DAT_10230ffd0) {
      if (1 < *(int *)local_168 + 1U) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + 1;
        local_139 = *(int *)local_168 != 0;
        UNLOCK();
      }
      local_178 = local_168;
      QString::toLocal8Bit();
      FUN_100df99c0("","IOCommunication",3,"Key exchange :%s",
                    local_170 + *(long *)(local_170 + 0x10));
      if (*(int *)local_170 != -1) {
        if (*(int *)local_170 != 0) {
          LOCK();
          *(int *)local_170 = *(int *)local_170 + -1;
          local_139 = *(int *)local_170 != 0;
          UNLOCK();
          if ((bool)local_139) goto LAB_100aabeb0;
        }
        QArrayData::deallocate(local_170,1,8);
      }
LAB_100aabeb0:
      if (*(int *)local_178 != -1) {
        if (*(int *)local_178 != 0) {
          LOCK();
          *(int *)local_178 = *(int *)local_178 + -1;
          local_139 = *(int *)local_178 != 0;
          UNLOCK();
          if ((bool)local_139) goto LAB_100aabeec;
        }
        QArrayData::deallocate(local_178,2,8);
      }
    }
LAB_100aabeec:
    local_188 = (QArrayData *)QString::fromAscii_helper("=",1);
    QString::split(&local_180,&local_168,&local_188,0,1);
    if (*(int *)local_188 != -1) {
      if (*(int *)local_188 != 0) {
        LOCK();
        *(int *)local_188 = *(int *)local_188 + -1;
        local_139 = *(int *)local_188 != 0;
        UNLOCK();
        if ((bool)local_139) goto LAB_100aabf62;
      }
      QArrayData::deallocate(local_188,2,8);
    }
LAB_100aabf62:
    uVar4 = *(uint *)(local_180 + 8);
    if ((int)(*(uint *)(local_180 + 0xc) - uVar4) < 2) {
      *param_1 = PTR_shared_null_1021e1288;
    }
    else {
      if (1 < *(uint *)local_180) {
        FUN_100036c40(&local_180,*(uint *)(local_180 + 4));
        uVar4 = *(uint *)(local_180 + 8);
      }
      piVar3 = *(int **)(local_180 + (long)(int)uVar4 * 8 + 0x18);
      *param_1 = piVar3;
      if (1 < *piVar3 + 1U) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        local_139 = *piVar3 != 0;
        UNLOCK();
      }
    }
    if (*(int *)local_180 != -1) {
      if (*(int *)local_180 != 0) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + -1;
        local_139 = *(int *)local_180 != 0;
        UNLOCK();
        if ((bool)local_139) goto LAB_100aac081;
      }
      iVar1 = *(int *)(local_180 + 0xc);
      if (iVar1 != *(int *)(local_180 + 8)) {
        lVar5 = (long)*(int *)(local_180 + 8) * 8 + (long)iVar1 * -8;
        pDVar8 = local_180 + (long)iVar1 * 8 + 8;
        do {
          pQVar9 = *(QArrayData **)pDVar8;
          if (*(int *)pQVar9 == 0) {
LAB_100aac060:
            QArrayData::deallocate(pQVar9,2,8);
          }
          else if (*(int *)pQVar9 != -1) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + -1;
            local_139 = *(int *)pQVar9 != 0;
            UNLOCK();
            if (!(bool)local_139) {
              pQVar9 = *(QArrayData **)pDVar8;
              goto LAB_100aac060;
            }
          }
          pDVar8 = pDVar8 + -8;
          lVar5 = lVar5 + 8;
        } while (lVar5 != 0);
      }
      QListData::dispose(local_180);
    }
LAB_100aac081:
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_139 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_139) goto LAB_100aac0bd;
      }
      QArrayData::deallocate(local_168,2,8);
    }
  }
LAB_100aac0bd:
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_139 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_139) goto LAB_100aac171;
    }
    iVar1 = *(int *)(local_148 + 0xc);
    if (iVar1 != *(int *)(local_148 + 8)) {
      lVar5 = (long)*(int *)(local_148 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = local_148 + (long)iVar1 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100aac150:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_139 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_139) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100aac150;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_148);
  }
LAB_100aac171:
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

