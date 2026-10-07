
undefined1 FUN_1007b3cf0(long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  QArrayData *pQVar5;
  char cVar6;
  undefined1 uVar7;
  QArrayData *local_e8;
  QArrayData *local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QReadWriteLock local_88 [24];
  _func_void_Node_ptr *local_70;
  _func_void_Node_ptr *local_68;
  char local_59;
  QString local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar3;
  if (*(int *)(param_1 + 0x68) != 1) {
    uVar7 = 0;
    goto LAB_1007b4489;
  }
  piVar4 = (int *)**(undefined8 **)(*(long *)(param_1 + 0x308) + 0x10);
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  iVar2 = piVar4[0x12];
  local_59 = '\0';
  FUN_1007944e0(local_88,piVar4 + 0x1c,piVar4[0x18],&local_59);
  if (*piVar4 == DAT_100b4b000) {
    if ((short)piVar4[1] == DAT_100b4b004) {
      if (*(short *)((long)piVar4 + 6) != DAT_100b4b006) {
        local_b8 = *(QArrayData **)(param_1 + 0x18);
        if (1 < *(int *)local_b8 + 1U) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + 1;
          local_49 = *(int *)local_b8 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_1008e3970("","IOCommunication",0,"%sIO protocol minor version number differs!",
                      local_b0 + *(long *)(local_b0 + 0x10));
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_49 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1007b3ec3;
          }
          QArrayData::deallocate(local_b0,1,8);
        }
LAB_1007b3ec3:
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_49 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1007b3ef9;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
      }
LAB_1007b3ef9:
      FUN_1007d6c60(local_48,piVar4 + 0x13);
      cVar6 = FUN_1007ea210(local_48);
      if (cVar6 == '\0') {
        FUN_1007d6a70(&local_d0,local_48);
        QString::operator=(&local_58,&local_d0);
        if (*(int *)local_d0.field0_0x0 != -1) {
          if (*(int *)local_d0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
            local_49 = *(int *)local_d0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1007b40f9;
          }
          QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
        }
LAB_1007b40f9:
        if ((iVar2 == 0) || (0xc < iVar2)) {
          pQVar5 = *(QArrayData **)(param_1 + 0x18);
          if (1 < *(int *)pQVar5 + 1U) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + 1;
            local_49 = *(int *)pQVar5 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_1008e3970("","IOCommunication",0,"%sHandshake error: sender type is wrong!",
                        local_d8 + *(long *)(local_d8 + 0x10));
          if (*(int *)local_d8 != -1) {
            if (*(int *)local_d8 != 0) {
              LOCK();
              *(int *)local_d8 = *(int *)local_d8 + -1;
              local_49 = *(int *)local_d8 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_1007b4296;
            }
            QArrayData::deallocate(local_d8,1,8);
          }
LAB_1007b4296:
          if (*(int *)pQVar5 == -1) {
            uVar7 = 0;
          }
          else {
            if (*(int *)pQVar5 != 0) {
              LOCK();
              *(int *)pQVar5 = *(int *)pQVar5 + -1;
              local_49 = *(int *)pQVar5 != 0;
              UNLOCK();
              if ((bool)local_49) {
                uVar7 = 0;
                goto LAB_1007b43f2;
              }
            }
            QArrayData::deallocate(pQVar5,2,8);
            uVar7 = 0;
          }
        }
        else if ((local_59 == '\0') || (cVar6 = FUN_100793250(local_88), cVar6 != '\0')) {
          pQVar5 = *(QArrayData **)(param_1 + 0x18);
          if (1 < *(int *)pQVar5 + 1U) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + 1;
            local_49 = *(int *)pQVar5 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_1008e3970("","IOCommunication",0,"%sHandshake error: can\'t accept client\'s table!",
                        local_e8 + *(long *)(local_e8 + 0x10));
          if (*(int *)local_e8 != -1) {
            if (*(int *)local_e8 != 0) {
              LOCK();
              *(int *)local_e8 = *(int *)local_e8 + -1;
              local_49 = *(int *)local_e8 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_1007b41b1;
            }
            QArrayData::deallocate(local_e8,1,8);
          }
LAB_1007b41b1:
          if (*(int *)pQVar5 == -1) {
            uVar7 = 0;
          }
          else {
            if (*(int *)pQVar5 != 0) {
              LOCK();
              *(int *)pQVar5 = *(int *)pQVar5 + -1;
              local_49 = *(int *)pQVar5 != 0;
              UNLOCK();
              if ((bool)local_49) {
                uVar7 = 0;
                goto LAB_1007b43f2;
              }
            }
            QArrayData::deallocate(pQVar5,2,8);
            uVar7 = 0;
          }
        }
        else {
          QMutex::lock();
          _memcpy((void *)(param_1 + 0xcc),piVar4,0x48);
          QString::operator=((QString *)(param_1 + 0xb8),&local_58);
          *(int *)(param_1 + 200) = iVar2;
          FUN_100792f60(param_1 + 0x168,local_88);
          uVar7 = 1;
          QMutex::unlock();
        }
      }
      else {
        local_c8 = *(QArrayData **)(param_1 + 0x18);
        if (1 < *(int *)local_c8 + 1U) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + 1;
          local_49 = *(int *)local_c8 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_1008e3970("","IOCommunication",0,"%sHandshake error: handshake header parse failed!",
                      local_c0 + *(long *)(local_c0 + 0x10));
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_49 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1007b3fa5;
          }
          QArrayData::deallocate(local_c0,1,8);
        }
LAB_1007b3fa5:
        if (*(int *)local_c8 == -1) {
          uVar7 = 0;
        }
        else {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_49 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_49) {
              uVar7 = 0;
              goto LAB_1007b43f2;
            }
          }
          QArrayData::deallocate(local_c8,2,8);
          uVar7 = 0;
        }
      }
    }
    else {
      local_a8 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)local_a8 + 1U) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + 1;
        local_49 = *(int *)local_a8 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sIO protocol major version number differs!",
                    local_a0 + *(long *)(local_a0 + 0x10));
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_49 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1007b406d;
        }
        QArrayData::deallocate(local_a0,1,8);
      }
LAB_1007b406d:
      if (*(int *)local_a8 == -1) {
        uVar7 = 0;
      }
      else {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_49 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_49) {
            uVar7 = 0;
            goto LAB_1007b43f2;
          }
        }
        QArrayData::deallocate(local_a8,2,8);
        uVar7 = 0;
      }
    }
  }
  else {
    local_98 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)local_98 + 1U) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + 1;
      local_49 = *(int *)local_98 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",0,"%sIO protocol magic bytes differs!",
                  local_90 + *(long *)(local_90 + 0x10));
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_49 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1007b3df5;
      }
      QArrayData::deallocate(local_90,1,8);
    }
LAB_1007b3df5:
    if (*(int *)local_98 == -1) {
      uVar7 = 0;
    }
    else {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_49 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_49) {
          uVar7 = 0;
          goto LAB_1007b43f2;
        }
      }
      QArrayData::deallocate(local_98,2,8);
      uVar7 = 0;
    }
  }
LAB_1007b43f2:
  if (*(int *)(local_68 + 0x10) != -1) {
    if (*(int *)(local_68 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_68 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_49 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1007b4421;
    }
    QHashData::free_helper(local_68);
  }
LAB_1007b4421:
  if (*(int *)(local_70 + 0x10) != -1) {
    if (*(int *)(local_70 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_70 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_49 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1007b4450;
    }
    QHashData::free_helper(local_70);
  }
LAB_1007b4450:
  QReadWriteLock::~QReadWriteLock(local_88);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_88[0] = (QReadWriteLock)(*(int *)local_58.field0_0x0 != 0);
      UNLOCK();
      if ((bool)local_88[0]) goto LAB_1007b4489;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1007b4489:
  if (lVar3 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

