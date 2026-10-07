
undefined8
FUN_1007b59b0(long param_1,undefined4 param_2,long param_3,int param_4,undefined4 param_5,
             undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  QArrayData *pQVar9;
  bool bVar10;
  uint local_1c4;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  int local_17c;
  undefined8 local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  undefined4 local_140;
  undefined1 local_139;
  undefined1 local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar1 = param_1 + 0x37a;
  lVar2 = param_1 + 400;
LAB_1007b5a10:
  if ((*(int *)(param_1 + 0x374) == 0) && (*(char *)(param_1 + 0x378) == '\0')) {
    local_140 = 0;
    cVar3 = FUN_10079edb0(param_1,param_2,lVar1,5,&local_140,1,param_5,param_6,param_7);
    if (cVar3 == '\0') {
      uVar8 = 0;
      goto LAB_1007b6532;
    }
    *(uint *)(param_1 + 0x374) =
         (uint)(ushort)(*(ushort *)(param_1 + 0x37d) << 8 | *(ushort *)(param_1 + 0x37d) >> 8);
    bVar10 = *(char *)(param_1 + 0x37a) != -1;
    *(bool *)(param_1 + 0x37f) = bVar10;
    *(bool *)(param_1 + 0x379) = bVar10;
    cVar3 = FUN_1007b69a0(param_1,lVar1);
    if (cVar3 != '\0') goto LAB_1007b5ad0;
    local_150 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)local_150 + 1U) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + 1;
      local_139 = *(int *)local_150 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",0,"%sSSL header is wrong!",
                  local_148 + *(long *)(local_148 + 0x10));
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_139 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_139) goto LAB_1007b64a2;
      }
      QArrayData::deallocate(local_148,1,8);
    }
LAB_1007b64a2:
    if (*(int *)local_150 == -1) {
      uVar8 = 0;
      goto LAB_1007b6532;
    }
    pQVar9 = local_150;
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_139 = *(int *)local_150 != 0;
      UNLOCK();
      pQVar9 = local_150;
      if ((bool)local_139) {
        uVar8 = 0;
        goto LAB_1007b6532;
      }
    }
    goto LAB_1007b6521;
  }
LAB_1007b5ad0:
  if ((*(char *)(param_1 + 0x37f) == '\0') && (*(char *)(param_1 + 0x378) == '\0')) {
    iVar4 = *(int *)(param_1 + 0x374);
    if (param_4 < *(int *)(param_1 + 0x374)) {
      iVar4 = param_4;
    }
    local_1c4 = 0;
    cVar3 = FUN_10079edb0(param_1,param_2,param_3,iVar4,&local_1c4,1,param_5,param_6,param_7);
    if (cVar3 == '\0') {
      uVar8 = 0;
      goto LAB_1007b6532;
    }
    *(int *)(param_1 + 0x374) = *(int *)(param_1 + 0x374) - local_1c4;
    param_3 = param_3 + (ulong)local_1c4;
    param_4 = param_4 - local_1c4;
  }
  else {
    iVar4 = FUN_10087db60(*(undefined8 *)(param_1 + 0x340),10,0,0);
    if (iVar4 == 0) {
      if (*(char *)(param_1 + 0x379) != '\0') {
        iVar4 = FUN_10087d780(*(undefined8 *)(param_1 + 0x338),lVar1,5);
        if (iVar4 < 1) {
          uVar7 = FUN_100888110();
          FUN_100888750(uVar7,local_138,0x100);
          local_160 = *(QArrayData **)(param_1 + 0x18);
          if (1 < *(int *)local_160 + 1U) {
            LOCK();
            *(int *)local_160 = *(int *)local_160 + 1;
            local_139 = *(int *)local_160 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_1008e3970("","IOCommunication",0,"%sWrite to SSL failed (SSL error: %s",
                        local_158 + *(long *)(local_158 + 0x10),local_138);
          if (*(int *)local_158 != -1) {
            if (*(int *)local_158 != 0) {
              LOCK();
              *(int *)local_158 = *(int *)local_158 + -1;
              local_139 = *(int *)local_158 != 0;
              UNLOCK();
              if ((bool)local_139) goto LAB_1007b6328;
            }
            QArrayData::deallocate(local_158,1,8);
          }
LAB_1007b6328:
          if (*(int *)local_160 == -1) {
            uVar8 = 0;
            goto LAB_1007b6532;
          }
          pQVar9 = local_160;
          if (*(int *)local_160 == 0) goto LAB_1007b6521;
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_139 = *(int *)local_160 != 0;
          UNLOCK();
          pQVar9 = local_160;
          if ((bool)local_139) {
            uVar8 = 0;
            goto LAB_1007b6532;
          }
LAB_1007b6521:
          QArrayData::deallocate(pQVar9,2,8);
          uVar8 = 0;
          goto LAB_1007b6532;
        }
        if (iVar4 != 5) {
          local_170 = *(QArrayData **)(param_1 + 0x18);
          if (1 < *(int *)local_170 + 1U) {
            LOCK();
            *(int *)local_170 = *(int *)local_170 + 1;
            local_139 = *(int *)local_170 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_1008e3970("","IOCommunication",0,
                        "%sWrite to SSL failed: must be written: %d, but was %d",
                        local_168 + *(long *)(local_168 + 0x10),5,iVar4);
          if (*(int *)local_168 != -1) {
            if (*(int *)local_168 != 0) {
              LOCK();
              *(int *)local_168 = *(int *)local_168 + -1;
              local_139 = *(int *)local_168 != 0;
              UNLOCK();
              if ((bool)local_139) goto LAB_1007b63e4;
            }
            QArrayData::deallocate(local_168,1,8);
          }
LAB_1007b63e4:
          if (*(int *)local_170 == -1) {
            uVar8 = 0;
            goto LAB_1007b6532;
          }
          pQVar9 = local_170;
          if (*(int *)local_170 == 0) goto LAB_1007b6521;
          LOCK();
          *(int *)local_170 = *(int *)local_170 + -1;
          local_139 = *(int *)local_170 != 0;
          UNLOCK();
          if ((bool)local_139) {
            uVar8 = 0;
            goto LAB_1007b6532;
          }
          goto LAB_1007b6521;
        }
        *(undefined1 *)(param_1 + 0x379) = 0;
      }
      local_178 = 0;
      iVar5 = FUN_1008840b0(*(undefined8 *)(param_1 + 0x338),&local_178);
      iVar4 = *(int *)(param_1 + 0x374);
      if (iVar5 < *(int *)(param_1 + 0x374)) {
        iVar4 = iVar5;
      }
      local_17c = 0;
      uVar8 = 0;
      cVar3 = FUN_10079edb0(param_1,param_2,local_178,iVar4,&local_17c,0,param_5,param_6,param_7);
      if (cVar3 == '\0') goto LAB_1007b6532;
      *(int *)(param_1 + 0x374) = *(int *)(param_1 + 0x374) - local_17c;
      FUN_100884110(*(undefined8 *)(param_1 + 0x338),&local_178);
      lVar6 = FUN_1007cdf20(lVar2);
      bVar10 = lVar6 != 0;
      if (bVar10) {
        QMutex::lock();
      }
      iVar4 = FUN_10087d6a0(*(undefined8 *)(param_1 + 0x340),param_3,param_4);
      if (iVar4 < 0) {
        uVar7 = FUN_100888110();
        iVar4 = FUN_10087d620(*(undefined8 *)(param_1 + 0x340),8);
        if (iVar4 == 0) {
          FUN_100888750(uVar7,local_138,0x100);
          local_190 = *(QArrayData **)(param_1 + 0x18);
          if (1 < *(int *)local_190 + 1U) {
            LOCK();
            *(int *)local_190 = *(int *)local_190 + 1;
            local_139 = *(int *)local_190 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_1008e3970("","IOCommunication",0,"%sError in SSL (SSL error: %s)",
                        local_188 + *(long *)(local_188 + 0x10));
          if (*(int *)local_188 != -1) {
            if (*(int *)local_188 != 0) {
              LOCK();
              *(int *)local_188 = *(int *)local_188 + -1;
              local_139 = *(int *)local_188 != 0;
              UNLOCK();
              if ((bool)local_139) goto LAB_1007b61df;
            }
            QArrayData::deallocate(local_188,1,8);
          }
LAB_1007b61df:
          iVar4 = 1;
          if (*(int *)local_190 != -1) {
            if (*(int *)local_190 != 0) {
              LOCK();
              *(int *)local_190 = *(int *)local_190 + -1;
              local_139 = *(int *)local_190 != 0;
              UNLOCK();
              if ((bool)local_139) goto LAB_1007b6220;
            }
            QArrayData::deallocate(local_190,2,8);
          }
        }
        else {
          FUN_10080ee80(*(undefined8 *)(param_1 + 0x328));
          iVar5 = FUN_10087db60(*(undefined8 *)(param_1 + 0x338),10,0,0);
          iVar4 = 7;
          if (0 < iVar5) {
            FUN_1007cdf30(lVar2);
          }
        }
      }
      else if (iVar4 == 0) {
        local_1a0 = *(QArrayData **)(param_1 + 0x18);
        if (1 < *(int *)local_1a0 + 1U) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + 1;
          local_139 = *(int *)local_1a0 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_1008e3970("","IOCommunication",0,"%sSSL startup failed",
                      local_198 + *(long *)(local_198 + 0x10));
        if (*(int *)local_198 != -1) {
          if (*(int *)local_198 != 0) {
            LOCK();
            *(int *)local_198 = *(int *)local_198 + -1;
            local_139 = *(int *)local_198 != 0;
            UNLOCK();
            if ((bool)local_139) goto LAB_1007b60dc;
          }
          QArrayData::deallocate(local_198,1,8);
        }
LAB_1007b60dc:
        iVar4 = 1;
        if (*(int *)local_1a0 != -1) {
          if (*(int *)local_1a0 != 0) {
            LOCK();
            *(int *)local_1a0 = *(int *)local_1a0 + -1;
            local_139 = *(int *)local_1a0 != 0;
            UNLOCK();
            if ((bool)local_139) goto LAB_1007b6220;
          }
          QArrayData::deallocate(local_1a0,2,8);
        }
      }
      else {
        if (bVar10) {
          QMutex::unlock();
        }
        bVar10 = false;
        iVar5 = FUN_10087db60(*(undefined8 *)(param_1 + 0x340),10,0,0);
        param_4 = param_4 - iVar4;
        param_3 = param_3 + iVar4;
        *(bool *)(param_1 + 0x378) = 0 < iVar5;
        iVar4 = 0;
      }
LAB_1007b6220:
      if (bVar10) {
        QMutex::unlock();
      }
      if ((iVar4 != 0) && (iVar4 != 7)) {
        uVar8 = 0;
        goto LAB_1007b6532;
      }
    }
    else {
      lVar6 = FUN_1007cdf20(lVar2);
      bVar10 = lVar6 != 0;
      if (bVar10) {
        QMutex::lock();
      }
      iVar4 = FUN_10087d6a0(*(undefined8 *)(param_1 + 0x340),param_3,param_4);
      if (iVar4 < 0) {
        uVar7 = FUN_100888110();
        iVar4 = FUN_10087d620(*(undefined8 *)(param_1 + 0x340),8);
        if (iVar4 == 0) {
          FUN_100888750(uVar7,local_138,0x100);
          local_1b0 = *(QArrayData **)(param_1 + 0x18);
          if (1 < *(int *)local_1b0 + 1U) {
            LOCK();
            *(int *)local_1b0 = *(int *)local_1b0 + 1;
            local_139 = *(int *)local_1b0 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_1008e3970("","IOCommunication",0,"%sError in SSL (SSL error: %s)",
                        local_1a8 + *(long *)(local_1a8 + 0x10));
          if (*(int *)local_1a8 != -1) {
            if (*(int *)local_1a8 != 0) {
              LOCK();
              *(int *)local_1a8 = *(int *)local_1a8 + -1;
              local_139 = *(int *)local_1a8 != 0;
              UNLOCK();
              if ((bool)local_139) goto LAB_1007b5fb5;
            }
            QArrayData::deallocate(local_1a8,1,8);
          }
LAB_1007b5fb5:
          iVar4 = 1;
          if (*(int *)local_1b0 != -1) {
            if (*(int *)local_1b0 != 0) {
              LOCK();
              *(int *)local_1b0 = *(int *)local_1b0 + -1;
              local_139 = *(int *)local_1b0 != 0;
              UNLOCK();
              if ((bool)local_139) goto LAB_1007b6000;
            }
            QArrayData::deallocate(local_1b0,2,8);
          }
        }
        else {
          FUN_10080ee80(*(undefined8 *)(param_1 + 0x328));
          iVar5 = FUN_10087db60(*(undefined8 *)(param_1 + 0x338),10,0,0);
          iVar4 = 7;
          if (0 < iVar5) {
            FUN_1007cdf30(lVar2);
          }
        }
      }
      else if (iVar4 == 0) {
        local_1c0 = *(QArrayData **)(param_1 + 0x18);
        if (1 < *(int *)local_1c0 + 1U) {
          LOCK();
          *(int *)local_1c0 = *(int *)local_1c0 + 1;
          local_139 = *(int *)local_1c0 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_1008e3970("","IOCommunication",0,"%sSSL startup failed",
                      local_1b8 + *(long *)(local_1b8 + 0x10));
        if (*(int *)local_1b8 != -1) {
          if (*(int *)local_1b8 != 0) {
            LOCK();
            *(int *)local_1b8 = *(int *)local_1b8 + -1;
            local_139 = *(int *)local_1b8 != 0;
            UNLOCK();
            if ((bool)local_139) goto LAB_1007b5e52;
          }
          QArrayData::deallocate(local_1b8,1,8);
        }
LAB_1007b5e52:
        iVar4 = 1;
        if (*(int *)local_1c0 != -1) {
          if (*(int *)local_1c0 != 0) {
            LOCK();
            *(int *)local_1c0 = *(int *)local_1c0 + -1;
            local_139 = *(int *)local_1c0 != 0;
            UNLOCK();
            if ((bool)local_139) goto LAB_1007b6000;
          }
          QArrayData::deallocate(local_1c0,2,8);
        }
      }
      else {
        if (bVar10) {
          QMutex::unlock();
        }
        bVar10 = false;
        iVar5 = FUN_10087db60(*(undefined8 *)(param_1 + 0x340),10,0,0);
        param_4 = param_4 - iVar4;
        param_3 = param_3 + iVar4;
        *(bool *)(param_1 + 0x378) = 0 < iVar5;
        iVar4 = 0;
      }
LAB_1007b6000:
      if (bVar10) {
        QMutex::unlock();
      }
      if ((iVar4 != 0) && (iVar4 != 7)) {
        uVar8 = 0;
        goto LAB_1007b6532;
      }
    }
  }
  uVar8 = 1;
  if (param_4 == 0) {
LAB_1007b6532:
    if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_100ba2320 >> 8),uVar8);
  }
  goto LAB_1007b5a10;
}

