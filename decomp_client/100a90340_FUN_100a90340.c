
undefined8
FUN_100a90340(long param_1,undefined4 param_2,long param_3,int param_4,undefined4 param_5,
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
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  lVar1 = param_1 + 0x37a;
  lVar2 = param_1 + 400;
LAB_100a903a0:
  if ((*(int *)(param_1 + 0x374) == 0) && (*(char *)(param_1 + 0x378) == '\0')) {
    local_140 = 0;
    cVar3 = FUN_100a79740(param_1,param_2,lVar1,5,&local_140,1,param_5,param_6,param_7);
    if (cVar3 == '\0') {
      uVar8 = 0;
      goto LAB_100a90ec2;
    }
    *(uint *)(param_1 + 0x374) =
         (uint)(ushort)(*(ushort *)(param_1 + 0x37d) << 8 | *(ushort *)(param_1 + 0x37d) >> 8);
    bVar10 = *(char *)(param_1 + 0x37a) != -1;
    *(bool *)(param_1 + 0x37f) = bVar10;
    *(bool *)(param_1 + 0x379) = bVar10;
    cVar3 = FUN_100a91330(param_1,lVar1);
    if (cVar3 != '\0') goto LAB_100a90460;
    local_150 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)local_150 + 1U) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + 1;
      local_139 = *(int *)local_150 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","IOCommunication",0,"%sSSL header is wrong!",
                  local_148 + *(long *)(local_148 + 0x10));
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_139 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_139) goto LAB_100a90e32;
      }
      QArrayData::deallocate(local_148,1,8);
    }
LAB_100a90e32:
    if (*(int *)local_150 == -1) {
      uVar8 = 0;
      goto LAB_100a90ec2;
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
        goto LAB_100a90ec2;
      }
    }
    goto LAB_100a90eb1;
  }
LAB_100a90460:
  if ((*(char *)(param_1 + 0x37f) == '\0') && (*(char *)(param_1 + 0x378) == '\0')) {
    iVar4 = *(int *)(param_1 + 0x374);
    if (param_4 < *(int *)(param_1 + 0x374)) {
      iVar4 = param_4;
    }
    local_1c4 = 0;
    cVar3 = FUN_100a79740(param_1,param_2,param_3,iVar4,&local_1c4,1,param_5,param_6,param_7);
    if (cVar3 == '\0') {
      uVar8 = 0;
      goto LAB_100a90ec2;
    }
    *(int *)(param_1 + 0x374) = *(int *)(param_1 + 0x374) - local_1c4;
    param_3 = param_3 + (ulong)local_1c4;
    param_4 = param_4 - local_1c4;
  }
  else {
    iVar4 = FUN_100c58d60(*(undefined8 *)(param_1 + 0x340),10,0,0);
    if (iVar4 == 0) {
      if (*(char *)(param_1 + 0x379) != '\0') {
        iVar4 = FUN_100c58980(*(undefined8 *)(param_1 + 0x338),lVar1,5);
        if (iVar4 < 1) {
          uVar7 = FUN_100c63310();
          FUN_100c63950(uVar7,local_138,0x100);
          local_160 = *(QArrayData **)(param_1 + 0x18);
          if (1 < *(int *)local_160 + 1U) {
            LOCK();
            *(int *)local_160 = *(int *)local_160 + 1;
            local_139 = *(int *)local_160 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_100df99c0("","IOCommunication",0,"%sWrite to SSL failed (SSL error: %s",
                        local_158 + *(long *)(local_158 + 0x10),local_138);
          if (*(int *)local_158 != -1) {
            if (*(int *)local_158 != 0) {
              LOCK();
              *(int *)local_158 = *(int *)local_158 + -1;
              local_139 = *(int *)local_158 != 0;
              UNLOCK();
              if ((bool)local_139) goto LAB_100a90cb8;
            }
            QArrayData::deallocate(local_158,1,8);
          }
LAB_100a90cb8:
          if (*(int *)local_160 == -1) {
            uVar8 = 0;
            goto LAB_100a90ec2;
          }
          pQVar9 = local_160;
          if (*(int *)local_160 == 0) goto LAB_100a90eb1;
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_139 = *(int *)local_160 != 0;
          UNLOCK();
          pQVar9 = local_160;
          if ((bool)local_139) {
            uVar8 = 0;
            goto LAB_100a90ec2;
          }
LAB_100a90eb1:
          QArrayData::deallocate(pQVar9,2,8);
          uVar8 = 0;
          goto LAB_100a90ec2;
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
          FUN_100df99c0("","IOCommunication",0,
                        "%sWrite to SSL failed: must be written: %d, but was %d",
                        local_168 + *(long *)(local_168 + 0x10),5,iVar4);
          if (*(int *)local_168 != -1) {
            if (*(int *)local_168 != 0) {
              LOCK();
              *(int *)local_168 = *(int *)local_168 + -1;
              local_139 = *(int *)local_168 != 0;
              UNLOCK();
              if ((bool)local_139) goto LAB_100a90d74;
            }
            QArrayData::deallocate(local_168,1,8);
          }
LAB_100a90d74:
          if (*(int *)local_170 == -1) {
            uVar8 = 0;
            goto LAB_100a90ec2;
          }
          pQVar9 = local_170;
          if (*(int *)local_170 == 0) goto LAB_100a90eb1;
          LOCK();
          *(int *)local_170 = *(int *)local_170 + -1;
          local_139 = *(int *)local_170 != 0;
          UNLOCK();
          if ((bool)local_139) {
            uVar8 = 0;
            goto LAB_100a90ec2;
          }
          goto LAB_100a90eb1;
        }
        *(undefined1 *)(param_1 + 0x379) = 0;
      }
      local_178 = 0;
      iVar5 = FUN_100c5f2b0(*(undefined8 *)(param_1 + 0x338),&local_178);
      iVar4 = *(int *)(param_1 + 0x374);
      if (iVar5 < *(int *)(param_1 + 0x374)) {
        iVar4 = iVar5;
      }
      local_17c = 0;
      uVar8 = 0;
      cVar3 = FUN_100a79740(param_1,param_2,local_178,iVar4,&local_17c,0,param_5,param_6,param_7);
      if (cVar3 == '\0') goto LAB_100a90ec2;
      *(int *)(param_1 + 0x374) = *(int *)(param_1 + 0x374) - local_17c;
      FUN_100c5f310(*(undefined8 *)(param_1 + 0x338),&local_178);
      lVar6 = FUN_100aa8700(lVar2);
      bVar10 = lVar6 != 0;
      if (bVar10) {
        QMutex::lock();
      }
      iVar4 = FUN_100c588a0(*(undefined8 *)(param_1 + 0x340),param_3,param_4);
      if (iVar4 < 0) {
        uVar7 = FUN_100c63310();
        iVar4 = FUN_100c58820(*(undefined8 *)(param_1 + 0x340),8);
        if (iVar4 == 0) {
          FUN_100c63950(uVar7,local_138,0x100);
          local_190 = *(QArrayData **)(param_1 + 0x18);
          if (1 < *(int *)local_190 + 1U) {
            LOCK();
            *(int *)local_190 = *(int *)local_190 + 1;
            local_139 = *(int *)local_190 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_100df99c0("","IOCommunication",0,"%sError in SSL (SSL error: %s)",
                        local_188 + *(long *)(local_188 + 0x10));
          if (*(int *)local_188 != -1) {
            if (*(int *)local_188 != 0) {
              LOCK();
              *(int *)local_188 = *(int *)local_188 + -1;
              local_139 = *(int *)local_188 != 0;
              UNLOCK();
              if ((bool)local_139) goto LAB_100a90b6f;
            }
            QArrayData::deallocate(local_188,1,8);
          }
LAB_100a90b6f:
          iVar4 = 1;
          if (*(int *)local_190 != -1) {
            if (*(int *)local_190 != 0) {
              LOCK();
              *(int *)local_190 = *(int *)local_190 + -1;
              local_139 = *(int *)local_190 != 0;
              UNLOCK();
              if ((bool)local_139) goto LAB_100a90bb0;
            }
            QArrayData::deallocate(local_190,2,8);
          }
        }
        else {
          FUN_100be45f0(*(undefined8 *)(param_1 + 0x328));
          iVar5 = FUN_100c58d60(*(undefined8 *)(param_1 + 0x338),10,0,0);
          iVar4 = 7;
          if (0 < iVar5) {
            FUN_100aa8710(lVar2);
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
        FUN_100df99c0("","IOCommunication",0,"%sSSL startup failed",
                      local_198 + *(long *)(local_198 + 0x10));
        if (*(int *)local_198 != -1) {
          if (*(int *)local_198 != 0) {
            LOCK();
            *(int *)local_198 = *(int *)local_198 + -1;
            local_139 = *(int *)local_198 != 0;
            UNLOCK();
            if ((bool)local_139) goto LAB_100a90a6c;
          }
          QArrayData::deallocate(local_198,1,8);
        }
LAB_100a90a6c:
        iVar4 = 1;
        if (*(int *)local_1a0 != -1) {
          if (*(int *)local_1a0 != 0) {
            LOCK();
            *(int *)local_1a0 = *(int *)local_1a0 + -1;
            local_139 = *(int *)local_1a0 != 0;
            UNLOCK();
            if ((bool)local_139) goto LAB_100a90bb0;
          }
          QArrayData::deallocate(local_1a0,2,8);
        }
      }
      else {
        if (bVar10) {
          QMutex::unlock();
        }
        bVar10 = false;
        iVar5 = FUN_100c58d60(*(undefined8 *)(param_1 + 0x340),10,0,0);
        param_4 = param_4 - iVar4;
        param_3 = param_3 + iVar4;
        *(bool *)(param_1 + 0x378) = 0 < iVar5;
        iVar4 = 0;
      }
LAB_100a90bb0:
      if (bVar10) {
        QMutex::unlock();
      }
      if ((iVar4 != 0) && (iVar4 != 7)) {
        uVar8 = 0;
        goto LAB_100a90ec2;
      }
    }
    else {
      lVar6 = FUN_100aa8700(lVar2);
      bVar10 = lVar6 != 0;
      if (bVar10) {
        QMutex::lock();
      }
      iVar4 = FUN_100c588a0(*(undefined8 *)(param_1 + 0x340),param_3,param_4);
      if (iVar4 < 0) {
        uVar7 = FUN_100c63310();
        iVar4 = FUN_100c58820(*(undefined8 *)(param_1 + 0x340),8);
        if (iVar4 == 0) {
          FUN_100c63950(uVar7,local_138,0x100);
          local_1b0 = *(QArrayData **)(param_1 + 0x18);
          if (1 < *(int *)local_1b0 + 1U) {
            LOCK();
            *(int *)local_1b0 = *(int *)local_1b0 + 1;
            local_139 = *(int *)local_1b0 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_100df99c0("","IOCommunication",0,"%sError in SSL (SSL error: %s)",
                        local_1a8 + *(long *)(local_1a8 + 0x10));
          if (*(int *)local_1a8 != -1) {
            if (*(int *)local_1a8 != 0) {
              LOCK();
              *(int *)local_1a8 = *(int *)local_1a8 + -1;
              local_139 = *(int *)local_1a8 != 0;
              UNLOCK();
              if ((bool)local_139) goto LAB_100a90945;
            }
            QArrayData::deallocate(local_1a8,1,8);
          }
LAB_100a90945:
          iVar4 = 1;
          if (*(int *)local_1b0 != -1) {
            if (*(int *)local_1b0 != 0) {
              LOCK();
              *(int *)local_1b0 = *(int *)local_1b0 + -1;
              local_139 = *(int *)local_1b0 != 0;
              UNLOCK();
              if ((bool)local_139) goto LAB_100a90990;
            }
            QArrayData::deallocate(local_1b0,2,8);
          }
        }
        else {
          FUN_100be45f0(*(undefined8 *)(param_1 + 0x328));
          iVar5 = FUN_100c58d60(*(undefined8 *)(param_1 + 0x338),10,0,0);
          iVar4 = 7;
          if (0 < iVar5) {
            FUN_100aa8710(lVar2);
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
        FUN_100df99c0("","IOCommunication",0,"%sSSL startup failed",
                      local_1b8 + *(long *)(local_1b8 + 0x10));
        if (*(int *)local_1b8 != -1) {
          if (*(int *)local_1b8 != 0) {
            LOCK();
            *(int *)local_1b8 = *(int *)local_1b8 + -1;
            local_139 = *(int *)local_1b8 != 0;
            UNLOCK();
            if ((bool)local_139) goto LAB_100a907e2;
          }
          QArrayData::deallocate(local_1b8,1,8);
        }
LAB_100a907e2:
        iVar4 = 1;
        if (*(int *)local_1c0 != -1) {
          if (*(int *)local_1c0 != 0) {
            LOCK();
            *(int *)local_1c0 = *(int *)local_1c0 + -1;
            local_139 = *(int *)local_1c0 != 0;
            UNLOCK();
            if ((bool)local_139) goto LAB_100a90990;
          }
          QArrayData::deallocate(local_1c0,2,8);
        }
      }
      else {
        if (bVar10) {
          QMutex::unlock();
        }
        bVar10 = false;
        iVar5 = FUN_100c58d60(*(undefined8 *)(param_1 + 0x340),10,0,0);
        param_4 = param_4 - iVar4;
        param_3 = param_3 + iVar4;
        *(bool *)(param_1 + 0x378) = 0 < iVar5;
        iVar4 = 0;
      }
LAB_100a90990:
      if (bVar10) {
        QMutex::unlock();
      }
      if ((iVar4 != 0) && (iVar4 != 7)) {
        uVar8 = 0;
        goto LAB_100a90ec2;
      }
    }
  }
  uVar8 = 1;
  if (param_4 == 0) {
LAB_100a90ec2:
    if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_1021e1840 >> 8),uVar8);
  }
  goto LAB_100a903a0;
}

