
void FUN_10046cf90(long param_1,long *param_2,ulong param_3)

{
  char cVar1;
  int iVar2;
  QString this;
  long lVar3;
  size_t sVar4;
  char *pcVar5;
  QArrayData *pQVar6;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QTypedArrayData<unsigned_short> *local_38;
  undefined1 local_29;
  
  *(undefined1 *)(param_1 + 0x40) = 1;
  this.field0_0x0 = (QTypedArrayData<unsigned_short> *)FUN_100470440(param_1,*param_2 + 8);
  local_38 = this.field0_0x0;
  if (this.field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
    this.field0_0x0 = operator_new(0xe0);
    CGuestToolInfo::CGuestToolInfo((CGuestToolInfo *)this.field0_0x0);
    local_40 = *(QArrayData **)(*param_2 + 8);
    if (1 < *(int *)local_40 + 1U) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
    }
    local_38 = this.field0_0x0;
    CGuestToolInfo::setToolId(this);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10046d03e;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10046d03e:
    lVar3 = CVmGuestOsInformation::getGuestToolsList();
    FUN_100470820(lVar3 + 0x98,&local_38);
  }
  if ((param_3 & 2) != 0) {
    local_48 = *(QArrayData **)(*param_2 + 0x10);
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
    }
    CGuestToolInfo::setToolName(this);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10046d0c1;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10046d0c1:
  if ((param_3 & 4) != 0) {
    if (*(int *)(*param_2 + 0x24) < 0) {
      local_70 = (QArrayData *)QString::fromAscii_helper("%1.%2.%3-%4",0xb);
      QString::arg(&local_68,&local_70,*(undefined4 *)(*param_2 + 0x18),0,10,0x20);
      QString::arg(&local_60,&local_68,*(undefined4 *)(*param_2 + 0x1c),0,10,0x20);
      QString::arg(&local_58,&local_60,*(uint *)(*param_2 + 0x24) & 0x7fffffff,0,10,0x20);
      QString::arg(&local_50,&local_58,*(undefined4 *)(*param_2 + 0x20),0,10,0x20);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_29 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10046d32e;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_10046d32e:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_29 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10046d35e;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_10046d35e:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_29 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10046d38e;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_10046d38e:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_29 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10046d3be;
        }
        QArrayData::deallocate(local_70,2,8);
      }
    }
    else {
      local_90 = (QArrayData *)QString::fromAscii_helper("%1.%2.%3.%4",0xb);
      QString::arg(&local_88,&local_90,*(undefined4 *)(*param_2 + 0x18),0,10,0x20);
      QString::arg(&local_80,&local_88,*(undefined4 *)(*param_2 + 0x1c),0,10,0x20);
      QString::arg(&local_78,&local_80,*(undefined4 *)(*param_2 + 0x20),0,10,0x20);
      QString::arg(&local_50,&local_78,*(undefined4 *)(*param_2 + 0x24),0,10,0x20);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_29 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10046d1ac;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_10046d1ac:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_29 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10046d1dc;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_10046d1dc:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_29 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10046d20c;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_10046d20c:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_29 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10046d3be;
        }
        QArrayData::deallocate(local_90,2,8);
      }
    }
LAB_10046d3be:
    local_98 = local_50;
    if (1 < *(int *)local_50 + 1U) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
    }
    CGuestToolInfo::setToolVersion(this);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_29 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10046d41f;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_10046d41f:
    local_b0 = (QArrayData *)QString::fromAscii_helper("%1.%2",5);
    QString::arg(&local_a8,&local_b0,*(undefined4 *)(*param_2 + 0x28),0,10,0x20);
    QString::arg(&local_a0,&local_a8,*(undefined4 *)(*param_2 + 0x2c),0,10,0x20);
    CGuestToolInfo::setToolInternalVersion(this);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_29 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10046d4cc;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_10046d4cc:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_29 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10046d502;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_10046d502:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_29 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10046d538;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_10046d538:
    iVar2 = *(int *)(*param_2 + 0x30);
    if (iVar2 == 0) {
      pcVar5 = "N/A";
    }
    else {
      cVar1 = *(char *)(*param_2 + 0x34);
      lVar3 = 0;
      if (((cVar1 == '\b') || (lVar3 = 1, cVar1 == '\t')) || (lVar3 = 2, cVar1 == '\a')) {
        if (iVar2 == (&DAT_100b43394)[lVar3 * 2]) {
          pcVar5 = "UpToDate";
        }
        else {
          pcVar5 = "Mismatched";
        }
      }
      else {
        pcVar5 = "Unknown platform";
      }
    }
    sVar4 = _strlen(pcVar5);
    local_b8 = (QArrayData *)QString::fromAscii_helper(pcVar5,(int)sVar4);
    CGuestToolInfo::setToolUpdateStatus(this);
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_29 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10046d5f2;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_10046d5f2:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10046d622;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_10046d622:
  if ((param_3 & 8) != 0) {
    local_c0 = *(QArrayData **)(*param_2 + 0x40);
    if (1 < *(int *)local_c0 + 1U) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + 1;
      local_29 = *(int *)local_c0 != 0;
      UNLOCK();
    }
    CGuestToolInfo::setToolStringData(this);
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_29 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10046d68d;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
  }
LAB_10046d68d:
  if ((param_3 & 0x10) != 0) {
    QByteArray::toHex();
    lVar3 = 0;
    pQVar6 = local_d0 + *(long *)(local_d0 + 0x10);
    if ((pQVar6 != (QArrayData *)0x0) && (*(uint *)(local_d0 + 4) != 0)) {
      lVar3 = 0;
      do {
        if (pQVar6[lVar3] == (QArrayData)0x0) break;
        lVar3 = lVar3 + 1;
      } while ((uint)lVar3 < *(uint *)(local_d0 + 4));
    }
    local_c8 = (QArrayData *)QString::fromAscii_helper((char *)pQVar6,(int)lVar3);
    CGuestToolInfo::setToolData(this);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_29 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10046d72e;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_10046d72e:
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_29 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10046d764;
      }
      QArrayData::deallocate(local_d0,1,8);
    }
  }
LAB_10046d764:
  if ((param_3 & 0x40) != 0) {
    QDateTime::toString(&local_d8,*param_2 + 0x50,1);
    CGuestToolInfo::setToolDate(this);
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_29 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10046d7c7;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
  }
LAB_10046d7c7:
  if ((param_3 & 0x20) != 0) {
    CGuestToolInfo::setToolState((int)this.field0_0x0);
  }
  return;
}

